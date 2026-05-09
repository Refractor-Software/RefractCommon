// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"

REFRACTCOMMON_API DECLARE_LOG_CATEGORY_EXTERN(LogRefract, All, All);

//////////////////////////////////////////////////////////////////////
// Context string macros
//
// Produce an FString of the form "Namespace::FunctionName".
// Use these directly when you need the context string as a value
// (e.g. FScopeLogTime, FMessageLog, raw string formatting).
//
// REFRACT_LOG_CONTEXT          - explicit namespace token (works anywhere)
// REFRACT_LOG_CONTEXT_UCLASS   - uses StaticClass()->GetName() (UObject subclasses)
// REFRACT_LOG_CONTEXT_USTRUCT  - uses StaticStruct()->GetName() (UStruct subclasses)

/**
 * Produces an FString context identifier of the form "Namespace::FunctionName".
 * @param Namespace     The enclosing type or namespace as a token (e.g. FMyClass).
 */
#define REFRACT_LOG_CONTEXT(Namespace) \
	(FString(UE_STRINGIZE(Namespace)) + TEXT("::") + TEXT(__FUNCTION__))

/**
 * Produces an FString context identifier of the form "ClassName::FunctionName".
 * Intended for use inside UCLASS (UObject subclass) member functions.
 */
#define REFRACT_LOG_CONTEXT_UCLASS() \
	(StaticClass()->GetName() + TEXT("::") + TEXT(__FUNCTION__))

/**
 * Produces an FString context identifier of the form "StructName::FunctionName".
 * Intended for use inside USTRUCT member functions.
 */
#define REFRACT_LOG_CONTEXT_USTRUCT() \
	(StaticStruct()->GetName() + TEXT("::") + TEXT(__FUNCTION__))

//////////////////////////////////////////////////////////////////////
// Log string macros
//
// Produce a formatted FString of the form "Namespace::FunctionName: Message".
// Use these when you need the full formatted string as a value rather than
// calling UE_LOG directly (e.g. building a string for a UI message log).

/**
 * Produces a formatted log FString of the form "Namespace::FunctionName: Message".
 * @param Namespace     The enclosing type or namespace as a token (e.g. FMyClass).
 * @param Message       Message string literal.
 */
#define REFRACT_LOG_STR(Namespace, Message) \
	(REFRACT_LOG_CONTEXT(Namespace) + TEXT(": ") + TEXT(Message))

/**
 * Produces a formatted log FString of the form "ClassName::FunctionName: Message".
 * Intended for use inside UCLASS (UObject subclass) member functions.
 * @param Message       Message string literal.
 */
#define REFRACT_LOG_STR_UCLASS(Message) \
	(REFRACT_LOG_CONTEXT_UCLASS() + TEXT(": ") + TEXT(Message))

/**
 * Produces a formatted log FString of the form "StructName::FunctionName: Message".
 * Intended for use inside USTRUCT member functions.
 * @param Message       Message string literal.
 */
#define REFRACT_LOG_STR_USTRUCT(Message) \
	(REFRACT_LOG_CONTEXT_USTRUCT() + TEXT(": ") + TEXT(Message))

/**
 * Produces a formatted log FString of the form "Namespace::FunctionName: Message".
 * @param Namespace     The enclosing type or namespace as a token (e.g. FMyClass).
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_STR_ARGS(Namespace, Format, ...) \
	(REFRACT_LOG_CONTEXT(Namespace) + TEXT(": ") + *FString::Printf(TEXT(Format), ##__VA_ARGS__))

/**
 * Produces a formatted log FString of the form "ClassName::FunctionName: Message".
 * Intended for use inside UCLASS (UObject subclass) member functions.
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_STR_UCLASS_ARGS(Format, ...) \
	(REFRACT_LOG_CONTEXT_UCLASS() + TEXT(": ") + *FString::Printf(TEXT(Format), ##__VA_ARGS__))

/**
 * Produces a formatted log FString of the form "StructName::FunctionName: Message".
 * Intended for use inside USTRUCT member functions.
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_STR_USTRUCT_ARGS(Format, ...) \
	(REFRACT_LOG_CONTEXT_USTRUCT() + TEXT(": ") + *FString::Printf(TEXT(Format), ##__VA_ARGS__))

//////////////////////////////////////////////////////////////////////
// Log macros
//
// Wrap UE_LOG with automatic context prefixing.
//
// REFRACT_LOG / REFRACT_LOG_ARGS                 - explicit namespace (works anywhere; use "" for global functions)
// REFRACT_LOG_UCLASS / REFRACT_LOG_UCLASS_ARGS   - UCLASS (UObject subclass) members
// REFRACT_LOG_USTRUCT / REFRACT_LOG_USTRUCT_ARGS - USTRUCT members

/**
 * Logs a message prefixed with "Namespace::FunctionName".
 * @param Namespace     The enclosing type or namespace as a token.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Message       Message string literal.
 */
#define REFRACT_LOG(Namespace, Category, Verbosity, Message) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT(Namespace), TEXT(Message))

/**
 * Logs a formatted message prefixed with "Namespace::FunctionName".
 * @param Namespace     The enclosing type or namespace as a token.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_ARGS(Namespace, Category, Verbosity, Format, ...) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT(Namespace), *FString::Printf(TEXT(Format), ##__VA_ARGS__))

/**
 * Logs a message prefixed with "ClassName::FunctionName".
 * Intended for use inside UObject subclass member functions.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Message       Message string literal.
 */
#define REFRACT_LOG_UCLASS(Category, Verbosity, Message) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT_UCLASS(), TEXT(Message))

/**
 * Logs a formatted message prefixed with "ClassName::FunctionName".
 * Intended for use inside UObject subclass member functions.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_UCLASS_ARGS(Category, Verbosity, Format, ...) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT_UCLASS(), *FString::Printf(TEXT(Format), ##__VA_ARGS__))

/**
 * Logs a message prefixed with "StructName::FunctionName".
 * Intended for use inside UScriptStruct subclass member functions.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Message       Message string literal.
 */
#define REFRACT_LOG_USTRUCT(Category, Verbosity, Message) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT_USTRUCT(), TEXT(Message))

/**
 * Logs a formatted message prefixed with "StructName::FunctionName".
 * Intended for use inside UScriptStruct subclass member functions.
 * @param Category      Log category.
 * @param Verbosity     Log verbosity level (see ELogVerbosity).
 * @param Format        Format string literal.
 * @param ...           Format arguments.
 */
#define REFRACT_LOG_USTRUCT_ARGS(Category, Verbosity, Format, ...) \
	UE_LOG(Category, Verbosity, TEXT("%s: %s"), *REFRACT_LOG_CONTEXT_USTRUCT(), *FString::Printf(TEXT(Format), ##__VA_ARGS__))

//////////////////////////////////////////////////////////////////////
// Assertion macros
//
// All assertion macros embed "Namespace::FunctionName: condition failed: Condition (<message>)"
// into the assertion message, which is visible in crash reporters and the output log.
//
// REFRACT_ENSURE* — ensureMsgf: fires once in non-Shipping configurations, execution continues.
// REFRACT_VERIFY* — verifyf:    fires in all configurations, halts execution.
// REFRACT_CHECK*  — checkf:     fires in non-Shipping configurations, halts execution.
//
// Each family has three namespace variants:
//   REFRACT_*           — explicit Namespace token (works anywhere)
//   REFRACT_*_UCLASS    — uses StaticClass()->GetName()
//   REFRACT_*_USTRUCT   — uses StaticStruct()->GetName()
//
// Each variant has a plain (string literal message) and _ARGS (formatted message) form.

//------------------------------------------------------------------
// Internal helper — builds the full assertion message string.
// Not intended for direct use.
#define REFRACT__ASSERT_MSG(ContextExpr, Condition, Message) \
	TEXT("%s: condition failed: " #Condition " (%s)"), *(ContextExpr), TEXT(Message)

#define REFRACT__ASSERT_MSG_ARGS(ContextExpr, Condition, Format, ...) \
	TEXT("%s: condition failed: " #Condition " (%s)"), *(ContextExpr), *FString::Printf(TEXT(Format), ##__VA_ARGS__)

//------------------------------------------------------------------
// REFRACT_ENSURE family

/**
 * ensureMsgf wrapper. Fires once in non-Shipping builds; execution continues regardless.
 * @param Namespace     The enclosing type or namespace as a token.
 * @param Condition     The condition to test.
 * @param Message       Message string literal appended to the assertion output.
 */
#define REFRACT_ENSURE(Namespace, Condition, Message) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT(Namespace), Condition, Message))

#define REFRACT_ENSURE_ARGS(Namespace, Condition, Format, ...) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT(Namespace), Condition, Format, ##__VA_ARGS__))

#define REFRACT_ENSURE_UCLASS(Condition, Message) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Message))

#define REFRACT_ENSURE_UCLASS_ARGS(Condition, Format, ...) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Format, ##__VA_ARGS__))

#define REFRACT_ENSURE_USTRUCT(Condition, Message) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Message))

#define REFRACT_ENSURE_USTRUCT_ARGS(Condition, Format, ...) \
	ensureMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Format, ##__VA_ARGS__))

#define REFRACT_ENSURE_ALWAYS(Namespace, Condition, Message) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT(Namespace), Condition, Message))

#define REFRACT_ENSURE_ALWAYS_ARGS(Namespace, Condition, Format, ...) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT(Namespace), Condition, Format, ##__VA_ARGS__))

#define REFRACT_ENSURE_ALWAYS_UCLASS(Condition, Message) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Message))

#define REFRACT_ENSURE_ALWAYS_UCLASS_ARGS(Condition, Format, ...) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Format, ##__VA_ARGS__))

#define REFRACT_ENSURE_ALWAYS_USTRUCT(Condition, Message) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Message))

#define REFRACT_ENSURE_ALWAYS_USTRUCT_ARGS(Condition, Format, ...) \
	ensureAlwaysMsgf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Format, ##__VA_ARGS__))

//------------------------------------------------------------------
// REFRACT_VERIFY family

/**
 * verifyf wrapper. Fires in all build configurations; halts execution on failure. Side effects within the condition can be relied upon.
 * @param Namespace     The enclosing type or namespace as a token.
 * @param Condition     The condition to test.
 * @param Message       Message string literal appended to the assertion output.
 */
#define REFRACT_VERIFY(Namespace, Condition, Message) \
	verifyf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT(Namespace), Condition, Message))

#define REFRACT_VERIFY_ARGS(Namespace, Condition, Format, ...) \
	verifyf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT(Namespace), Condition, Format, ##__VA_ARGS__))

#define REFRACT_VERIFY_UCLASS(Condition, Message) \
	verifyf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Message))

#define REFRACT_VERIFY_UCLASS_ARGS(Condition, Format, ...) \
	verifyf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Format, ##__VA_ARGS__))

#define REFRACT_VERIFY_USTRUCT(Condition, Message) \
	verifyf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Message))

#define REFRACT_VERIFY_USTRUCT_ARGS(Condition, Format, ...) \
	verifyf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Format, ##__VA_ARGS__))

//------------------------------------------------------------------
// REFRACT_CHECK family

/**
 * checkf wrapper. Fires in non-Shipping build configurations; halts execution on failure. Side effects within the condition cannot be relied upon.
 * @param Namespace     The enclosing type or namespace as a token.
 * @param Condition     The condition to test.
 * @param Message       Message string literal appended to the assertion output.
 */
#define REFRACT_CHECK(Namespace, Condition, Message) \
	checkf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT(Namespace), Condition, Message))

#define REFRACT_CHECK_ARGS(Namespace, Condition, Format, ...) \
	checkf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT(Namespace), Condition, Format, ##__VA_ARGS__))

#define REFRACT_CHECK_UCLASS(Condition, Message) \
	checkf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Message))

#define REFRACT_CHECK_UCLASS_ARGS(Condition, Format, ...) \
	checkf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_UCLASS(), Condition, Format, ##__VA_ARGS__))

#define REFRACT_CHECK_USTRUCT(Condition, Message) \
	checkf(Condition, REFRACT__ASSERT_MSG(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Message))

#define REFRACT_CHECK_USTRUCT_ARGS(Condition, Format, ...) \
	checkf(Condition, REFRACT__ASSERT_MSG_ARGS(REFRACT_LOG_CONTEXT_USTRUCT(), Condition, Format, ##__VA_ARGS__))
