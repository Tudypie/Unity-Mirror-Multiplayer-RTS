#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Mirror.MiddlewareTransport
struct MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E;
// Mirror.Transport
struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Int32>
struct Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B;
// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_tC299510424CD206373E7F2273FA3E955667F68FF;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C;
// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF5C5406072C8F25936F00886B9342B189AF6E441 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Mirror.TransportError
struct  TransportError_t49A7B183CEC851BED202D12592FB41CF17E78777 
{
public:
	// System.Byte Mirror.TransportError::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransportError_t49A7B183CEC851BED202D12592FB41CF17E78777, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct  Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.TransportError,System.String>
struct  Action_2_tC299510424CD206373E7F2273FA3E955667F68FF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct  Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct  Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct  Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Mirror.Transport
struct  Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action Mirror.Transport::OnClientConnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnClientConnected_5;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataReceived
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * ___OnClientDataReceived_6;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataSent
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * ___OnClientDataSent_7;
	// System.Action`2<Mirror.TransportError,System.String> Mirror.Transport::OnClientError
	Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * ___OnClientError_8;
	// System.Action Mirror.Transport::OnClientDisconnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnClientDisconnected_9;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerConnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnServerConnected_10;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataReceived
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * ___OnServerDataReceived_11;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataSent
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * ___OnServerDataSent_12;
	// System.Action`3<System.Int32,Mirror.TransportError,System.String> Mirror.Transport::OnServerError
	Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * ___OnServerError_13;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerDisconnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnServerDisconnected_14;

public:
	inline static int32_t get_offset_of_OnClientConnected_5() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientConnected_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnClientConnected_5() const { return ___OnClientConnected_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnClientConnected_5() { return &___OnClientConnected_5; }
	inline void set_OnClientConnected_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnClientConnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataReceived_6() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDataReceived_6)); }
	inline Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * get_OnClientDataReceived_6() const { return ___OnClientDataReceived_6; }
	inline Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C ** get_address_of_OnClientDataReceived_6() { return &___OnClientDataReceived_6; }
	inline void set_OnClientDataReceived_6(Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * value)
	{
		___OnClientDataReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataSent_7() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDataSent_7)); }
	inline Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * get_OnClientDataSent_7() const { return ___OnClientDataSent_7; }
	inline Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C ** get_address_of_OnClientDataSent_7() { return &___OnClientDataSent_7; }
	inline void set_OnClientDataSent_7(Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * value)
	{
		___OnClientDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientError_8() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientError_8)); }
	inline Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * get_OnClientError_8() const { return ___OnClientError_8; }
	inline Action_2_tC299510424CD206373E7F2273FA3E955667F68FF ** get_address_of_OnClientError_8() { return &___OnClientError_8; }
	inline void set_OnClientError_8(Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * value)
	{
		___OnClientError_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientError_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnected_9() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDisconnected_9)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnClientDisconnected_9() const { return ___OnClientDisconnected_9; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnClientDisconnected_9() { return &___OnClientDisconnected_9; }
	inline void set_OnClientDisconnected_9(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnClientDisconnected_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnected_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerConnected_10() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerConnected_10)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnServerConnected_10() const { return ___OnServerConnected_10; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnServerConnected_10() { return &___OnServerConnected_10; }
	inline void set_OnServerConnected_10(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnServerConnected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerConnected_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataReceived_11() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDataReceived_11)); }
	inline Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * get_OnServerDataReceived_11() const { return ___OnServerDataReceived_11; }
	inline Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 ** get_address_of_OnServerDataReceived_11() { return &___OnServerDataReceived_11; }
	inline void set_OnServerDataReceived_11(Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * value)
	{
		___OnServerDataReceived_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataReceived_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataSent_12() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDataSent_12)); }
	inline Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * get_OnServerDataSent_12() const { return ___OnServerDataSent_12; }
	inline Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 ** get_address_of_OnServerDataSent_12() { return &___OnServerDataSent_12; }
	inline void set_OnServerDataSent_12(Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * value)
	{
		___OnServerDataSent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataSent_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerError_13() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerError_13)); }
	inline Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * get_OnServerError_13() const { return ___OnServerError_13; }
	inline Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B ** get_address_of_OnServerError_13() { return &___OnServerError_13; }
	inline void set_OnServerError_13(Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * value)
	{
		___OnServerError_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerError_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDisconnected_14() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDisconnected_14)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnServerDisconnected_14() const { return ___OnServerDisconnected_14; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnServerDisconnected_14() { return &___OnServerDisconnected_14; }
	inline void set_OnServerDisconnected_14(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnServerDisconnected_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDisconnected_14), (void*)value);
	}
};

struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields
{
public:
	// Mirror.Transport Mirror.Transport::active
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___active_4;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields, ___active_4)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_active_4() const { return ___active_4; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___active_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___active_4), (void*)value);
	}
};


// Mirror.MiddlewareTransport
struct  MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E  : public Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195
{
public:
	// Mirror.Transport Mirror.MiddlewareTransport::inner
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___inner_15;

public:
	inline static int32_t get_offset_of_inner_15() { return static_cast<int32_t>(offsetof(MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E, ___inner_15)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_inner_15() const { return ___inner_15; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_inner_15() { return &___inner_15; }
	inline void set_inner_15(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___inner_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inner_15), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.MiddlewareTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_Available_m7AA73F18AA62A6EB3AAAF1780EC6ECA895AC4F6E (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override bool Available() => inner.Available();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Mirror.Transport::Available() */, L_0);
		return L_1;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetMaxPacketSize_mA037624FEE41E3AB841E768FA8B3A8D6531931C5 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetMaxPacketSize(int channelId = 0) => inner.GetMaxPacketSize(channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetBatchThreshold_m958FC2DD38D85465A01629B1B07E07CE7DB1DFF8 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetBatchThreshold(int channelId = Channels.Reliable) => inner.GetBatchThreshold(channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(18 /* System.Int32 Mirror.Transport::GetBatchThreshold(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.MiddlewareTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_Shutdown_mD5F685E9304A6D6ED40DBD1A5CA335056A359D12 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void Shutdown() => inner.Shutdown();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientConnect_m9E14EE6231C1ED7105BA34771717B0668B7E20A3 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// inner.OnClientConnected = OnClientConnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		L_0->set_OnClientConnected_5(L_1);
		// inner.OnClientDataReceived = OnClientDataReceived;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_2 = __this->get_inner_15();
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		NullCheck(L_2);
		L_2->set_OnClientDataReceived_6(L_3);
		// inner.OnClientDisconnected = OnClientDisconnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_4 = __this->get_inner_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		NullCheck(L_4);
		L_4->set_OnClientDisconnected_9(L_5);
		// inner.OnClientError = OnClientError;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_inner_15();
		Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * L_7 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientError_8();
		NullCheck(L_6);
		L_6->set_OnClientError_8(L_7);
		// inner.ClientConnect(address);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_8 = __this->get_inner_15();
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ClientConnected_mA62E671BADE8039B4A7C0C3147442C41E510D112 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => inner.ClientConnected();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientDisconnect_mB7087041809B23FD67424CD92D38533215FAB44D (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientDisconnect() => inner.ClientDisconnect();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void Mirror.Transport::ClientDisconnect() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientSend_mA4793C5D5EFBC36C828E140C02CBAC9D7A569BCC (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, int32_t ___channelId1, const RuntimeMethod* method)
{
	{
		// public override void ClientSend(ArraySegment<byte> segment, int channelId) => inner.ClientSend(segment, channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_1 = ___segment0;
		int32_t L_2 = ___channelId1;
		NullCheck(L_0);
		VirtActionInvoker2< ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientEarlyUpdate_m57C7F0A33554579B77433E5E520B7E66FBF61826 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientEarlyUpdate() => inner.ClientEarlyUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(19 /* System.Void Mirror.Transport::ClientEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientLateUpdate_m20891B0EAC799800FE76D9F692CD6E9376A24FC9 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientLateUpdate() => inner.ClientLateUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void Mirror.Transport::ClientLateUpdate() */, L_0);
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ServerActive_mE3159665C903DB21CF832A8529B68AC73A728306 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => inner.ServerActive();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStart_m7E70F7225ACFFB61BA097D1B1294CFD36B00D2A5 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// inner.OnServerConnected = OnServerConnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_1 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerConnected_10();
		NullCheck(L_0);
		L_0->set_OnServerConnected_10(L_1);
		// inner.OnServerDataReceived = OnServerDataReceived;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_2 = __this->get_inner_15();
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataReceived_11();
		NullCheck(L_2);
		L_2->set_OnServerDataReceived_11(L_3);
		// inner.OnServerDisconnected = OnServerDisconnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_4 = __this->get_inner_15();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_14();
		NullCheck(L_4);
		L_4->set_OnServerDisconnected_14(L_5);
		// inner.OnServerError = OnServerError;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_inner_15();
		Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * L_7 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerError_13();
		NullCheck(L_6);
		L_6->set_OnServerError_13(L_7);
		// inner.ServerStart();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_8 = __this->get_inner_15();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void Mirror.Transport::ServerStart() */, L_8);
		// }
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStop_m49550E9B48A4019A037FFCAAB652D76599CDB3F8 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStop() => inner.ServerStop();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(16 /* System.Void Mirror.Transport::ServerStop() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerSend_m0B22FF6535E8410395EB6B8F6CA31C39CB835662 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// public override void ServerSend(int connectionId, ArraySegment<byte> segment, int channelId) => inner.ServerSend(connectionId, segment, channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___segment1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		VirtActionInvoker3< int32_t, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerDisconnect_mEB479BFF9B837D6FDE5104AE00B1C196EF8516E3 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override void ServerDisconnect(int connectionId) => inner.ServerDisconnect(connectionId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void Mirror.Transport::ServerDisconnect(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.String Mirror.MiddlewareTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiddlewareTransport_ServerGetClientAddress_m83EA589452AEF4BB1AEFD9A419023466679561BB (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override string ServerGetClientAddress(int connectionId) => inner.ServerGetClientAddress(connectionId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(15 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Uri Mirror.MiddlewareTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * MiddlewareTransport_ServerUri_m336D5A5160623811AF885FC97D08ECEFCAA60DCB (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override Uri ServerUri() => inner.ServerUri();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = VirtFuncInvoker0< Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerEarlyUpdate_m7D788F39EBD06419C3A12E5451693C73B6633637 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerEarlyUpdate() => inner.ServerEarlyUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void Mirror.Transport::ServerEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerLateUpdate_m292C5E57363BAB1ABD606D7452590B512FFFDA43 (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerLateUpdate() => inner.ServerLateUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_inner_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(22 /* System.Void Mirror.Transport::ServerLateUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport__ctor_m2A6AAAAD2F5985B4E63C4BB0F6DCBA1A20809F6A (MiddlewareTransport_t15D01583DD29AA6F24C0F86BC5FF260429897A7E * __this, const RuntimeMethod* method)
{
	{
		Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
