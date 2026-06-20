// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "Blueprint/UserWidget.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Subsystems/WorldSubsystem.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "RefractCommonWidgetCommandContext.generated.h"

#define UE_API REFRACTCOMMONUI_API

/**
 * Ambient context handed to a command when a widget trigger fires.
 *
 * The context eagerly resolves a small set of universal handles (the source widget and the
 * gameplay objects reachable from it) at construction time, then exposes typed convenience
 * accessors so a command can pull exactly the dependency it wants without re-deriving the
 * widget -> player -> pawn chain.
 *
 * Widget-specific interaction data (e.g. a rotator's direction/index) does NOT live here; it
 * rides in TriggerPayload as a type-erased struct so a single command signature serves every
 * widget type. A command that cares about the specific trigger reads the payload; one that does
 * not can simply ignore it.
 *
 * CONTRACT: any handle may legitimately be null. Menu and settings commands frequently run with
 * no pawn (and sometimes no owning player). Every accessor is null-safe and returns nullptr/false
 * rather than asserting; command authors MUST null-check what they resolve.
 */
USTRUCT(BlueprintType, DisplayName = "Common Widget Command Context")
struct FRefractCommonWidgetCommandContext
{
	GENERATED_BODY()

	UE_API FRefractCommonWidgetCommandContext();

	// ----------------------------------------------------------------------------------------
	// Factory
	// ----------------------------------------------------------------------------------------

	/**
	 * Builds a context from a source widget and an (optional) trigger payload.
	 *
	 * This is the single authoritative place where the eager handles are derived, so every
	 * widget type's trigger code is a one-liner. The widget is the only entity that
	 * authoritatively knows its own owning player, so the widget must be the one to call this.
	 *
	 * @param InWidget   The widget whose interaction triggered the command.
	 * @param InPayload  Widget-specific interaction data, type-erased. Moved into the context.
	 * @return           A fully-populated context (handles filled as far as each link resolves).
	 */
	static UE_API FRefractCommonWidgetCommandContext Create(UUserWidget* InWidget, FInstancedStruct InPayload = FInstancedStruct());

	// ----------------------------------------------------------------------------------------
	// Trigger payload
	// ----------------------------------------------------------------------------------------

	/** Typed view of the trigger payload, or nullptr if absent / a different type. */
	template <typename PayloadType>
	const PayloadType* GetPayload() const
	{
		return TriggerPayload.GetPtr<PayloadType>();
	}

	/** True if a trigger payload of the given type is present. */
	template <typename PayloadType>
	bool HasPayload() const
	{
		return TriggerPayload.GetPtr<PayloadType>() != nullptr;
	}

	// ----------------------------------------------------------------------------------------
	// Cast accessors (work for UObject classes and native C++ interfaces alike)
	// ----------------------------------------------------------------------------------------

	/** Source widget cast to a specific type, or nullptr. */
	template <typename T = UUserWidget>
	T* GetWidget() const
	{
		static_assert(TIsDerivedFrom<T, UUserWidget>::Value || TIsIInterface<T>::Value,
			"GetPlayer<T> expects a UUserWidget-derived type or a native interface.");
		return Cast<T>(SourceWidget);
	}

	/** Local player cast to a specific controller type, or nullptr. */
	template <typename T = ULocalPlayer>
	T* GetLocalPlayer() const
	{
		static_assert(TIsDerivedFrom<T, ULocalPlayer>::Value || TIsIInterface<T>::Value,
			"GetLocalPlayer<T> expects a ULocalPlayer-derived type or a native interface.");
		return Cast<T>(LocalPlayer);
	}

	/** Owning player cast to a specific controller type, or nullptr. */
	template <typename T = APlayerController>
	T* GetPlayer() const
	{
		static_assert(TIsDerivedFrom<T, APlayerController>::Value || TIsIInterface<T>::Value,
			"GetPlayer<T> expects an APlayerController-derived type or a native interface.");
		return Cast<T>(OwningPlayer);
	}

	/** Possessed pawn cast to a specific pawn type, or nullptr. */
	template <typename T = APawn>
	T* GetPlayerPawn() const
	{
		static_assert(TIsDerivedFrom<T, APawn>::Value || TIsIInterface<T>::Value,
			"GetPlayerPawn<T> expects an APawn-derived type or a native interface.");
		return Cast<T>(PlayerPawn);
	}

	/** Game instance cast to a specific type, or nullptr. */
	template <typename T = UGameInstance>
	T* GetGameInstance() const
	{
		static_assert(TIsDerivedFrom<T, UGameInstance>::Value || TIsIInterface<T>::Value,
			"GetGameInstance<T> expects a UGameInstance-derived type or a native interface.");
		return Cast<T>(GameInstance);
	}

	// ----------------------------------------------------------------------------------------
	// Subsystem accessors
	// ----------------------------------------------------------------------------------------

	/** Resolves a game instance subsystem, or nullptr. */
	template <typename T>
	T* GetGameInstanceSubsystem() const
	{
		static_assert(TIsDerivedFrom<T, UGameInstanceSubsystem>::Value,
			"GetGameInstanceSubsystem<T> expects a UGameInstanceSubsystem-derived type.");
		return GameInstance ? GameInstance->GetSubsystem<T>() : nullptr;
	}

	/** Resolves a world subsystem, or nullptr. */
	template <typename T>
	T* GetWorldSubsystem() const
	{
		static_assert(TIsDerivedFrom<T, UWorldSubsystem>::Value,
			"GetWorldSubsystem<T> expects a UWorldSubsystem-derived type.");
		return World ? World->GetSubsystem<T>() : nullptr;
	}

	/** Resolves a local player subsystem, or nullptr. */
	template <typename T>
	T* GetLocalPlayerSubsystem() const
	{
		static_assert(TIsDerivedFrom<T, ULocalPlayerSubsystem>::Value,
			"GetLocalPlayerSubsystem<T> expects a ULocalPlayerSubsystem-derived type.");
		return LocalPlayer ? LocalPlayer->GetSubsystem<T>() : nullptr;
	}

	// ----------------------------------------------------------------------------------------
	// Component accessors
	// ----------------------------------------------------------------------------------------

	/** Finds a component of the given type on the owning player controller, or nullptr. */
	template <typename T>
	T* GetPlayerComponent() const
	{
		static_assert(TIsDerivedFrom<T, UActorComponent>::Value,
			"GetPlayerComponent<T> expects a UActorComponent-derived type.");
		return OwningPlayer ? OwningPlayer->FindComponentByClass<T>() : nullptr;
	}

	/** Finds a component of the given type on the possessed pawn, or nullptr. */
	template <typename T>
	T* GetPlayerPawnComponent() const
	{
		static_assert(TIsDerivedFrom<T, UActorComponent>::Value,
			"GetPlayerPawnComponent<T> expects a UActorComponent-derived type.");
		return PlayerPawn ? PlayerPawn->FindComponentByClass<T>() : nullptr;
	}

	// ----------------------------------------------------------------------------------------
	// Interface checks (for BlueprintNativeEvent-capable interfaces)
	// ----------------------------------------------------------------------------------------
	//
	// For a native C++ interface you can just use the cast accessors above and call directly.
	// For an interface whose methods are BlueprintNativeEvent, you must call through the
	// generated Execute_ thunk, which takes the UObject* and requires the object to actually
	// implement the interface. These helpers fold the null-check into the bool: a false return
	// covers both "handle is null" and "handle does not implement the interface", so often it is
	// the only guard you need before calling Execute_ with the matching object getter below.
	//
	// Pattern, using the object getter to enforce a UObject* parameter:
	//   if (Context.PlayerPawnImplements<UMyInterface>())
	//   {
	//       IMyInterface::Execute_DoThing(Context.GetPlayerPawnObject(), Args...);
	//   }
	//
	// Or this works too since the default T is typically UObject-derived,
	// just be careful to not pass the wrong T (i.e., don't pass an IInterface as T):
	//   if (Context.PlayerPawnImplements<UMyInterface>())
	//   {
	//       IMyInterface::Execute_DoThing(Context.GetPlayerPawn<>(), Args...);
	//   }

	/** True if the source widget implements the given (U-prefixed) interface. */
	template <typename U>
	bool WidgetImplements() const
	{
		return SourceWidget && SourceWidget->Implements<U>();
	}

	/** True if the owning local player implements the given (U-prefixed) interface. */
	template <typename U>
	bool LocalPlayerImplements() const
	{
		return LocalPlayer && LocalPlayer->Implements<U>();
	}

	/** True if the owning player controller implements the given (U-prefixed) interface. */
	template <typename U>
	bool PlayerImplements() const
	{
		return OwningPlayer && OwningPlayer->Implements<U>();
	}

	/** True if the possessed pawn implements the given (U-prefixed) interface. */
	template <typename U>
	bool PlayerPawnImplements() const
	{
		return PlayerPawn && PlayerPawn->Implements<U>();
	}

	/** True if the game instance implements the given (U-prefixed) interface. */
	template <typename U>
	bool GameInstanceImplements() const
	{
		return GameInstance && GameInstance->Implements<U>();
	}

	// Object getters — pass these to IMyInterface::Execute_Foo(...) after the matching check.
 
	/** Source widget as a plain UObject*, for Execute_ thunks. May be null. */
	UObject* GetWidgetObject() const { return SourceWidget; }
 
	/** Owning local player as a plain UObject*, for Execute_ thunks. May be null. */
	UObject* GetLocalPlayerObject() const { return LocalPlayer; }
 
	/** Owning player as a plain UObject*, for Execute_ thunks. May be null. */
	UObject* GetPlayerObject() const { return OwningPlayer; }
 
	/** Possessed pawn as a plain UObject*, for Execute_ thunks. May be null. */
	UObject* GetPlayerPawnObject() const { return PlayerPawn; }
 
	/** Game instance as a plain UObject*, for Execute_ thunks. May be null. */
	UObject* GetGameInstanceObject() const { return GameInstance; }

	// ----------------------------------------------------------------------------------------
	// Validity
	// ----------------------------------------------------------------------------------------

	/** Minimal validity: a context is usable if it at least has a source widget. */
	bool IsValid() const { return SourceWidget != nullptr; }

	// ----------------------------------------------------------------------------------------
	// Eager handles
	// ----------------------------------------------------------------------------------------

private:
	/** The widget whose interaction triggered the command. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UUserWidget> SourceWidget;

	/** Player controller that owns the source widget. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<APlayerController> OwningPlayer;

	/** Local player behind the owning controller. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<ULocalPlayer> LocalPlayer;

	/** Pawn currently possessed by the owning player. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<APawn> PlayerPawn;

	/** World the widget belongs to. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UWorld> World;

	/** Owning game instance. May be null. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UGameInstance> GameInstance;

	/** Widget-specific interaction data, type-erased. Empty for commands that need no payload. */
	UPROPERTY(Category = "Command Context", BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FInstancedStruct TriggerPayload;
};

#undef UE_API
