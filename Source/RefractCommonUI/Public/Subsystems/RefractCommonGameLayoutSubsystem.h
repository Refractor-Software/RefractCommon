// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Engine/StreamableManager.h"
#include "RefractCommonGameLayoutSubsystem.generated.h"

#define UE_API REFRACTCOMMONUI_API

class URefractCommonGameLayoutSubsystem;
class APlayerController;
class UCommonActivatableWidget;
class UCommonActivatableWidgetContainerBase;
class URefractCommonGameLayout;

/** Result of a synchronous push. Total - every failure mode is named, no silent null. */
UENUM()
enum class ERefractLayerPushResult : uint8
{
	Pushed,        // Widget created and pushed onto the layer stack.
	NoLayout,      // No live layout right now (e.g. mid-transition). Caller should handle gracefully.
	NoSuchLayer,   // Layout exists but no container is registered for the given tag.
	InvalidClass   // Null or otherwise unusable widget class.
};

/** Lifecycle moments reported to async-push callers. */
enum class ERefractAsyncLayerState : uint8
{
	Canceled,    // Streaming load was canceled; widget is null.
	Initialize,  // Class loaded, instance constructed, about to be pushed - configure it here.
	AfterPush    // Instance is live on the stack.
};

/**
 * Why the controller binding is going away. Lets the subsystem decide whether to flush
 * input suspensions / tear down the layout, or preserve state across seamless travel.
 */
enum class ERefractLayoutTeardownReason : uint8
{
	Destroyed,        // Controller/HUD destroyed normally (non-seamless travel, logout, shutdown).
	SeamlessTravel    // Seamless travel - controller may persist; prefer preserving state.
};

/**
 * RAII handle for a single input suspension. Move-only: the token has exactly one owner,
 * so it is resumed exactly once - on scope exit, or never if moved-from. Holds a weak
 * reference to the subsystem so a stale handle destructing after teardown is harmless.
 *
 * Use this when suspend and resume happen in the same scope. For suspensions that span
 * two distinct events (e.g. a transition begin/end pair), use the token-based
 * SuspendInput/ResumeInput on the subsystem instead.
 */
struct REFRACTCOMMONUI_API FRefractScopedInputSuspension
{
	FRefractScopedInputSuspension() = default;
	FRefractScopedInputSuspension(URefractCommonGameLayoutSubsystem* InSubsystem, FName Reason);
	~FRefractScopedInputSuspension();

	FRefractScopedInputSuspension(FRefractScopedInputSuspension&& Other) noexcept;
	FRefractScopedInputSuspension& operator=(FRefractScopedInputSuspension&& Other) noexcept;

	FRefractScopedInputSuspension(const FRefractScopedInputSuspension&) = delete;
	FRefractScopedInputSuspension& operator=(const FRefractScopedInputSuspension&) = delete;

	/** True if this handle currently owns an active suspension token. */
	bool IsActive() const { return Token != NAME_None; }

private:
	void Release();

	TWeakObjectPtr<URefractCommonGameLayoutSubsystem> Subsystem;
	FName Token = NAME_None;
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnLayoutReady, URefractCommonGameLayout* /*Layout*/);

/**
 * Per-local-player owner of the root game layout and the single source of truth for
 * UI input suspension.
 *
 * Lifetime: created with the ULocalPlayer (before any world/controller exists) and lives
 * until the player is destroyed. Because it outlives any single PlayerController, it brokers
 * the mismatch between the layout (which needs a live controller) and the controller's
 * transient lifetime. The HUD reports controller availability via NotifyControllerReady /
 * NotifyControllerGone; the subsystem (re)builds and tears down the layout in response, and
 * flushes any outstanding input suspensions so none can leak across a transition.
 *
 * The layout widget is intentionally not exposed as a raw pointer. Access it through
 * WithLayout/TryGetLayout (validity is proven by construction) or, preferably, push and pop
 * through this subsystem's typed, presence-aware API.
 */
UCLASS(MinimalAPI)
class URefractCommonGameLayoutSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

// public:
	// //~ BEGIN USubsystem
	// UE_API virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	// UE_API virtual void Deinitialize() override;
	// //~ END USubsystem

	// // --- Controller lifetime (called by the HUD; the sole channel for layout lifecycle) ---

	// /** A PlayerController is now available for this player. Tears down any stale layout and builds a fresh one. */
	// UE_API void NotifyControllerReady(APlayerController* PlayerController);

	// /** The PlayerController is going away. Flushes input suspensions and removes the layout. */
	// UE_API void NotifyControllerGone(ERefractLayoutTeardownReason Reason = ERefractLayoutTeardownReason::Destroyed);

	// /** Fires whenever a fresh layout is created (initial bind and each rebind after travel). Re-cache layer references here. */
	// FOnLayoutReady OnLayoutReady;

	// // --- Layout access (validity proven by construction; never hands out a stale pointer) ---

	// /** Runs Fn only if a live layout exists. No-op otherwise. Preferred read accessor. */
	// UE_API void WithLayout(TFunctionRef<void(URefractCommonGameLayout&)> Fn) const;

	// /** Returns true and sets OutLayout iff a live layout exists. */
	// UE_API bool TryGetLayout(URefractCommonGameLayout*& OutLayout) const;

	// /** True if a layout is currently bound to a live controller. */
	// UE_API bool HasLayout() const;

	// // --- Pushing widgets (typed, total result; templates forward into the layout's primitives) ---

	// /** Push a widget of type T onto a layer. Returns a total EPushResult; OutWidget is set only on Pushed. */
	// template <typename T = UCommonActivatableWidget>
	// ERefractLayerPushResult PushWidget(FGameplayTag LayerTag, UClass* WidgetClass, T*& OutWidget)
	// {
		// static_assert(TIsDerivedFrom<T, UCommonActivatableWidget>::IsDerived,
			// "Only CommonActivatableWidgets can be used here");

		// OutWidget = nullptr;
		// URefractCommonGameLayout* Layout = nullptr;
		// if (!TryGetLayout(Layout)) return ERefractLayerPushResult::NoLayout;
		// if (!WidgetClass)          return ERefractLayerPushResult::InvalidClass;

		// OutWidget = Layout->PushWidgetToLayerStack<T>(LayerTag, WidgetClass);
		// return OutWidget ? ERefractLayerPushResult::Pushed : ERefractLayerPushResult::NoSuchLayer;
	// }

	// /** Convenience overload when the returned widget isn't needed. */
	// template <typename T = UCommonActivatableWidget>
	// ERefractLayerPushResult PushWidget(FGameplayTag LayerTag, UClass* WidgetClass)
	// {
		// T* Unused = nullptr;
		// return PushWidget<T>(LayerTag, WidgetClass, Unused);
	// }

	// /**
	 // * Async-load WidgetClass then push it. Optionally suspends input until the load completes
	 // * (resumed on completion or cancel). StateFunc is invoked at Initialize / AfterPush / Canceled.
	 // * Returns the streaming handle (may be invalid if there's no layout to push into).
	 // */
	// template <typename T = UCommonActivatableWidget>
	// TSharedPtr<FStreamableHandle> PushWidgetAsync(
		// FGameplayTag LayerTag,
		// bool bSuspendInputUntilComplete,
		// TSoftClassPtr<UCommonActivatableWidget> WidgetClass,
		// TFunction<void(ERefractAsyncLayerState, T*)> StateFunc = [](ERefractAsyncLayerState, T*){})
	// {
		// static_assert(TIsDerivedFrom<T, UCommonActivatableWidget>::IsDerived,
			// "Only CommonActivatableWidgets can be used here");

		// return PushWidgetAsyncImpl(LayerTag, bSuspendInputUntilComplete, MoveTemp(WidgetClass),
			// [StateFunc](ERefractAsyncLayerState State, UCommonActivatableWidget* W)
			// {
				// StateFunc(State, Cast<T>(W));
			// });
	// }

	// // --- Popping / removing widgets ---

	// /** Pop the top widget of the given layer's stack. No-op if no layout / no such layer / empty. */
	// UE_API void PopTopWidget(FGameplayTag LayerTag);

	// /** Remove a specific widget from whichever layer currently holds it. */
	// UE_API void RemoveWidget(UCommonActivatableWidget* Widget);

	// // --- Input suspension (single source of truth; per-player, flushed on teardown) ---

	// /**
	 // * Suspend all UI input, returning a unique token. The caller must hold the token and pass it
	 // * to ResumeInput. Prefer SuspendInputScoped unless suspend and resume occur on different events.
	 // */
	// UE_API FName SuspendInput(FName Reason);

	// /** Resume a previously suspended token. Safe to call with NAME_None or an already-cleared token. */
	// UE_API void ResumeInput(FName Token);

	// /** RAII form: suspends on construction, resumes when the returned handle is destroyed. */
	// UE_API FRefractScopedInputSuspension SuspendInputScoped(FName Reason);

	// /** Resume every outstanding suspension. Called automatically on controller teardown. */
	// UE_API void FlushAllInputSuspensions();

// protected:
	// /** Z-order used when adding the layout to the player screen. */
	// UPROPERTY(EditDefaultsOnly, Category = "Layout")
	// int32 LayoutZOrder = 1000;

	// /** The layout widget class to instantiate for this player. Set in project/subsystem defaults. */
	// UPROPERTY(EditDefaultsOnly, Category = "Layout")
	// TSoftClassPtr<URefractCommonGameLayout> LayoutClass;

// private:
	// /** Non-template core of the async push: all streaming/input/lifecycle plumbing, compiled once. */
	// UE_API TSharedPtr<FStreamableHandle> PushWidgetAsyncImpl(
		// FGameplayTag LayerTag,
		// bool bSuspendInputUntilComplete,
		// TSoftClassPtr<UCommonActivatableWidget> WidgetClass,
		// TFunction<void(ERefractAsyncLayerState, UCommonActivatableWidget*)> StateFunc);

	// /** Applies/clears a single input-type filter for every input type, for one token. */
	// void ApplyInputFilter(FName Token, bool bSuspend);

	// /** Subscribed to the layout's transition delegate so the layout stays ignorant of input. */
	// void HandleLayerTransitioning(UCommonActivatableWidgetContainerBase* Layer, bool bIsTransitioning);

	// UPROPERTY(Transient)
	// TObjectPtr<URefractCommonGameLayout> RootLayout;

	// /** All currently-active suspension tokens. Flushed on teardown so none leak across travel. */
	// UPROPERTY(Transient)
	// TSet<FName> ActiveSuspensions;

	// /** Per-player suspension counter - guarantees token uniqueness even for identical reasons. */
	// int32 SuspensionCounter = 0;

	// /** Tokens issued by the layout's transition handler (begin/end span two events; not RAII-able). */
	// UPROPERTY(Transient)
	// TArray<FName> TransitionSuspendTokens;
};

#undef UE_API
