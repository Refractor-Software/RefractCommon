// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

//////////////////////////////////////////////////////////////////////
// Utility

#define REFRACT_UNUSED(Value) \
	((void)Value)

#define REFRACT_SUBOBJECT_NAME_DECLARE(Name) \
	static const FName Name

#define REFRACT_SUBOBJECT_NAME(ClassName, Name, Value) \
	const FName ClassName::Name = Value

/**
 * Forcefully creates a null reference through undefined behavior doohickery.
 *
 * This is <b>EXTREMELY</b> fucking dangerous, and should only be used when the code path can't be reached, and you just
 * need something to shut the compiler up. If by the wrath of God 0x3 is not null, you're going to blow up your program.
 * So, hopefully, you're already blowing up your program before control flow reaches this.
 *
 * @param ReturnType The return type for the reference.
 */
#define REFRACT_NULL_REFERENCE(ReturnType) \
	*reinterpret_cast<ReturnType*>(0x3)

//////////////////////////////////////////////////////////////////////
// BlueprintNativeEvent helpers

/**
 * Declare a BlueprintNativeEvent implementation as empty.
 *
 * Used for base classes that expose BlueprintNativeEvents whose C++ fallback should be a no-op.
 * Intended for inline declarations.
 *
 * @param MethodName    Name of the method.
 * @param ReturnType    Return type of the method.
 * @param ...           Parameter types (names are not required).
 */
#define REFRACT_NATIVE_EVENT_EMPTY(MethodName, ReturnType, ...) \
	virtual ReturnType MethodName##_Implementation(__VA_ARGS__) {}

/**
 * Declare a const BlueprintNativeEvent implementation as empty.
 *
 * Used for base classes that expose BlueprintNativeEvents whose C++ fallback should be a no-op.
 * Intended for inline declarations.
 *
 * @param MethodName    Name of the method.
 * @param ReturnType    Return type of the method.
 * @param ...           Parameter types (names are not required).
 */
#define REFRACT_NATIVE_EVENT_EMPTY_CONST(MethodName, ReturnType, ...) \
	virtual ReturnType MethodName##_Implementation(__VA_ARGS__) const {}
