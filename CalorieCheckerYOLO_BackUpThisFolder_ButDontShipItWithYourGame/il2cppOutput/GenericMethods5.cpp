#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3*, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, &p2, p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerFuncInvoker9;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerFuncInvoker9<R, T1*, T2*, T3, T4*, T5*, T6*, T7, T8, T9*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5, T6* p6, T7 p7, T8 p8, T9* p9)
	{
		R ret;
		void* params[9] = { p1, p2, &p3, p4, p5, p6, &p7, &p8, p9 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
// System.Action`1<UnityEngine.InputSystem.LowLevel.InputStateHistory/Record>
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
// System.Action`2<Unity.ListViewFramework.INestedListViewItemData`2<Unity.AR.Companion.Core.ProxyListViewData,System.Int32>,System.Collections.Generic.List`1<Unity.AR.Companion.Core.ProxyListViewData>>
struct Action_2_t7215F76E2CBE420CCF7CA297E95364CA016CCBAC;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr>
struct Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3;
// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty>
struct Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
// System.Func`4<UnityEngine.InputSystem.InputControl,System.Double,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Unity.Properties.IProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IProperty_1_tEF85CE7D777E5770DFF97D85E8F6085A57D408DF;
// UnityEngine.InputSystem.InputProcessor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Properties.IProperty>
struct KeyCollection_t1831F3DDB1CC991585DE07ED999DBC00335B48B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>
struct List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A;
// System.Collections.Generic.List`1<Unity.AR.Companion.Core.ProxyListViewData>
struct List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B;
// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeAddedComponent>
struct List_1_t507A07F04175E89C753B8E80C69C68CE48EFD4A7;
// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeAddedGameObject>
struct List_1_t4BB1BE43CD8A09878CD47F8449A093896FCA9F9B;
// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride>
struct List_1_t8A00BAC2D64FE902D5F8BD6A8C170198E75ACC83;
// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeRemovedComponent>
struct List_1_t3801661EA3480000446F6AB9E9D3071F0011BAE3;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
// Unity.ListViewFramework.NestedListViewItemData`2<Unity.AR.Companion.Core.ProxyListViewData,System.Int32>
struct NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619;
// Unity.ListViewFramework.NestedListViewItemData`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB;
// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/ExistsAtPathVisitor>
struct ObjectPool_1_t933C70478ADF15D9B0955F7B781261C8249EEFAD;
// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/GetPropertyVisitor>
struct ObjectPool_1_t73AFC553B7DC633714ABDF1C0A6EFDF7C6DA7A0F;
// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/ValueAtPathVisitor>
struct ObjectPool_1_t6709629F9F3532318838ABBB228CFDE57E3A3552;
// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278;
// Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Properties.IProperty>
struct ValueCollection_t51519DA152A7AB6B6BC5FDB82F70B857D94660EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// Unity.Properties.VisitContext`1/VisitDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisitDelegate_t08A83A46909095C824D66EC3E8F568F99592D1DE;
// Unity.Properties.VisitContext`1/VisitWithoutAdaptersDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisitWithoutAdaptersDelegate_t0C9CF3C17C4D3B7C1383ACC7CE9266AB0BBF9E8D;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Properties.IProperty>[]
struct EntryU5BU5D_tB9396F8C75E84182931046366368D04028F4D6EB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// UnityEngine.InputSystem.InputProcessor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>[]
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
// Unity.Properties.IPropertyVisitorAdapter[]
struct IPropertyVisitorAdapterU5BU5D_tDD7A8555CE71A78BAF37001C09906381F2BA770A;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Properties.PropertyPathPart[]
struct PropertyPathPartU5BU5D_t5675508F6D47339B278BCF57F950076295F5C9A9;
// Unity.AR.Companion.Core.ProxyListViewData[]
struct ProxyListViewDataU5BU5D_tDA145E75ED75BAB9E2A07D3C033494068D9C3956;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.InputSystem.LowLevel.ActionEvent
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Unity.Serialization.Json.BinaryToken
struct BinaryToken_t040D42F1326051BD104F491D8B080B61030A3794;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Properties.IProperty
struct IProperty_t88BDB9BB07BFAD063DAE34D0914745E46D230375;
// Unity.Properties.IPropertyVisitor
struct IPropertyVisitor_t3BE9152B1F92B978BB387831E991D6861BE1CF66;
// Unity.Properties.IPropertyVisitorAdapter
struct IPropertyVisitorAdapter_t549CD418877D19618B7B0519D9ADA2A927CFFD62;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata
struct PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78;
// Unity.Properties.PropertyVisitor
struct PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D;
// Unity.AR.Companion.Core.ProxyListViewData
struct ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.Serialization.Json.Token
struct Token_t3E0B771BA2042584FC03DAA6591F85703A86F203;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
// OpenCvSharp.LineIterator/Pixel
struct Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69;
// Unity.Properties.PropertyContainer/ExistsAtPathVisitor
struct ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F;
// Unity.Properties.PropertyContainer/GetPropertyVisitor
struct GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B;
// Unity.Properties.PropertyContainer/ValueAtPathVisitor
struct ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE;
// Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor
struct OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199;
// Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyPathGetterVisitor
struct OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3;
// Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor
struct PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7;
// Unity.RuntimeSceneSerialization.SceneSerialization/CollectionInitializationVisitor
struct CollectionInitializationVisitor_t5B17D4E5490DBCD62120567C259146100C7E9106;
// Unity.Properties.TypeUtility/ITypeConstructor
struct ITypeConstructor_t84561AD73FC1265927A8F47CF1EC7B3F2AA05550;
// Unity.Properties.TypeUtility/TypeConstructorVisitor
struct TypeConstructorVisitor_t08E52DE544DBA309CDF3825CD9802C7670FDC3D1;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AndroidJNIModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_AR_Companion_Core[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Mathematics[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Properties[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RuntimeSceneSerialization[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Serialization[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_ARCore[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_ARSubsystems[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_tD4BA2582552F7A98C29ADFDBA3204F1FE67BB35E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCAADFA3C2CD3570870C194F7FF092B7F17DF196B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5F72849AAA5FBF6C7FE8545E131868225252A138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m054BACEEE80BA5CD2B4D790F1C53FCC922771BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC04CF0EA727066342EAC0BC8EC5A5BAB9B6289FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedListViewItemData_2_get_children_mD1D0505A3D22B1249087234D4CA4E4473C2980EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedListViewItemData_2_set_children_mCCBB24AB8F8B8D1AB714A0E2FF414440CDB46371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CollectionInitializationVisitor_t5B17D4E5490DBCD62120567C259146100C7E9106_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IProperty_t88BDB9BB07BFAD063DAE34D0914745E46D230375_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypeConstructorVisitor_t08E52DE544DBA309CDF3825CD9802C7670FDC3D1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* __Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com;
struct PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke;
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty>
struct Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB9396F8C75E84182931046366368D04028F4D6EB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1831F3DDB1CC991585DE07ED999DBC00335B48B1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t51519DA152A7AB6B6BC5FDB82F70B857D94660EB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>
struct List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPropertyVisitorAdapterU5BU5D_tDD7A8555CE71A78BAF37001C09906381F2BA770A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPropertyVisitorAdapterU5BU5D_tDD7A8555CE71A78BAF37001C09906381F2BA770A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.AR.Companion.Core.ProxyListViewData>
struct List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ProxyListViewDataU5BU5D_tDA145E75ED75BAB9E2A07D3C033494068D9C3956* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ProxyListViewDataU5BU5D_tDA145E75ED75BAB9E2A07D3C033494068D9C3956* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// Unity.ListViewFramework.NestedListViewItemData`2<Unity.AR.Companion.Core.ProxyListViewData,System.Int32>
struct NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TChild> Unity.ListViewFramework.NestedListViewItemData`2::m_Children
	List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* ___m_Children_0;
	// System.Boolean Unity.ListViewFramework.NestedListViewItemData`2::<selected>k__BackingField
	bool ___U3CselectedU3Ek__BackingField_1;
	// System.Action`2<Unity.ListViewFramework.INestedListViewItemData`2<TChild,TIndex>,System.Collections.Generic.List`1<TChild>> Unity.ListViewFramework.NestedListViewItemData`2::childrenChanging
	Action_2_t7215F76E2CBE420CCF7CA297E95364CA016CCBAC* ___childrenChanging_2;
};

// Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Property_2_tA7CE13E097C3A7D9E5963B60CC5B986CC9D0CFE6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes_0;
};

// Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes_0;
};
struct Il2CppArrayBounds;

// Unity.Properties.ConcreteTypeVisitor
struct ConcreteTypeVisitor_t9B344C55693C5BD2D1ACA5D627E4D97F0B99DC5B  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Properties.PropertyVisitor
struct PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter> Unity.Properties.PropertyVisitor::m_Adapters
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Unity.Collections.xxHash3
struct xxHash3_t1B0090718977D51798C540A03964F9CB74D52462  : public RuntimeObject
{
};

// Unity.Properties.ConcreteTypeVisitor/AOT
struct AOT_t19F283EE8E02994FB32CFC8C6B4F740132152740  : public RuntimeObject
{
};

// Unity.Properties.PathVisitor/AOT
struct AOT_t39714DA0475019743D513E095127AD6576032BF7  : public RuntimeObject
{
};

// Unity.Properties.PropertyVisitor/AOT
struct AOT_tBA430523983EB50E9E49E5164DCF910E211DB9C0  : public RuntimeObject
{
};

// Unity.Properties.TypeUtility/TypeConstructorVisitor
struct TypeConstructorVisitor_t08E52DE544DBA309CDF3825CD9802C7670FDC3D1  : public RuntimeObject
{
	// Unity.Properties.TypeUtility/ITypeConstructor Unity.Properties.TypeUtility/TypeConstructorVisitor::TypeConstructor
	RuntimeObject* ___TypeConstructor_0;
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};

// Unity.Properties.ExcludeContext`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472 
{
	// Unity.Properties.PropertyVisitor Unity.Properties.ExcludeContext`1::m_Visitor
	PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D* ___m_Visitor_0;
	// Unity.Properties.IProperty`1<TContainer> Unity.Properties.ExcludeContext`1::<Property>k__BackingField
	RuntimeObject* ___U3CPropertyU3Ek__BackingField_1;
};

// Unity.Properties.ExcludeContext`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973 
{
	// Unity.Properties.PropertyVisitor Unity.Properties.ExcludeContext`2::m_Visitor
	PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D* ___m_Visitor_0;
	// Unity.Properties.Property`2<TContainer,TValue> Unity.Properties.ExcludeContext`2::<Property>k__BackingField
	Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___U3CPropertyU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>>
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues_2;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.LowLevel.InputUpdateType>
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};

// OpenCvSharp.Point
struct Point_t040A0F435BFD5430C0BB89C5D23569A96E71F4FC 
{
	// System.Int32 OpenCvSharp.Point::X
	int32_t ___X_0;
	// System.Int32 OpenCvSharp.Point::Y
	int32_t ___Y_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// Unity.Properties.PropertyPathPart
struct PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A 
{
	// Unity.Properties.PropertyPathPartKind Unity.Properties.PropertyPathPart::m_Kind
	int32_t ___m_Kind_0;
	// System.String Unity.Properties.PropertyPathPart::m_Name
	String_t* ___m_Name_1;
	// System.Int32 Unity.Properties.PropertyPathPart::m_Index
	int32_t ___m_Index_2;
	// System.Object Unity.Properties.PropertyPathPart::m_Key
	RuntimeObject* ___m_Key_3;
};
// Native definition for P/Invoke marshalling of Unity.Properties.PropertyPathPart
struct PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke
{
	int32_t ___m_Kind_0;
	char* ___m_Name_1;
	int32_t ___m_Index_2;
	Il2CppIUnknown* ___m_Key_3;
};
// Native definition for COM marshalling of Unity.Properties.PropertyPathPart
struct PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com
{
	int32_t ___m_Kind_0;
	Il2CppChar* ___m_Name_1;
	int32_t ___m_Index_2;
	Il2CppIUnknown* ___m_Key_3;
};

// Unity.AR.Companion.Core.ProxyListViewData
struct ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99  : public NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619
{
	// System.String Unity.AR.Companion.Core.ProxyListViewData::m_Template
	String_t* ___m_Template_19;
	// System.Int32 Unity.AR.Companion.Core.ProxyListViewData::m_Index
	int32_t ___m_Index_20;
	// System.Int32 Unity.AR.Companion.Core.ProxyListViewData::m_Depth
	int32_t ___m_Depth_21;
	// Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata Unity.AR.Companion.Core.ProxyListViewData::m_PrefabMetadata
	PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78* ___m_PrefabMetadata_22;
	// System.String Unity.AR.Companion.Core.ProxyListViewData::m_TransformPath
	String_t* ___m_TransformPath_23;
	// System.Int32 Unity.AR.Companion.Core.ProxyListViewData::m_ComponentIndex
	int32_t ___m_ComponentIndex_24;
	// System.Object Unity.AR.Companion.Core.ProxyListViewData::<Container>k__BackingField
	RuntimeObject* ___U3CContainerU3Ek__BackingField_25;
};

struct ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_StaticFields
{
	// System.String[] Unity.AR.Companion.Core.ProxyListViewData::k_IgnoredProperties
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___k_IgnoredProperties_3;
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.AR.Companion.Core.ProxyListViewData::k_Components
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___k_Components_26;
};

// Unity.Properties.Internal.ReadOnlyAdapterCollection
struct ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 
{
	// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter> Unity.Properties.Internal.ReadOnlyAdapterCollection::m_Adapters
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
};
// Native definition for P/Invoke marshalling of Unity.Properties.Internal.ReadOnlyAdapterCollection
struct ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35_marshaled_pinvoke
{
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
};
// Native definition for COM marshalling of Unity.Properties.Internal.ReadOnlyAdapterCollection
struct ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35_marshaled_com
{
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// Unity.Properties.VisitParameters
struct VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF 
{
	// Unity.Properties.VisitExceptionKind Unity.Properties.VisitParameters::<IgnoreExceptions>k__BackingField
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Mathematics.uint2
struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F 
{
	// System.UInt32 Unity.Mathematics.uint2::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint2::y
	uint32_t ___y_1;
};

struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_StaticFields
{
	// Unity.Mathematics.uint2 Unity.Mathematics.uint2::zero
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___zero_2;
};

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// UnityEngine.InputSystem.LowLevel.ActionEvent/<m_ValueData>e__FixedBuffer
struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.ActionEvent/<m_ValueData>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_16;
};

// UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::m_Ptr
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};

// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::<control>k__BackingField
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/Record
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::m_Owner
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::m_IndexPlusOne
	int32_t ___m_IndexPlusOne_1;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::m_Version
	uint32_t ___m_Version_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Record
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Record
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};

// Unity.Collections.Memory/Array
struct Array_t1E323B687FA2B776FFD4500566C5078C058371A7 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t1E323B687FA2B776FFD4500566C5078C058371A7__padding[1];
	};
};

// Unity.Collections.Memory/Unmanaged
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};

// Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob
struct WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269 
{
	// System.UInt16* Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::InputBuffer
	uint16_t* ___InputBuffer_0;
	// System.Int32 Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::InputBufferLength
	int32_t ___InputBufferLength_1;
	// Unity.Serialization.Json.Token* Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::InputTokens
	Token_t3E0B771BA2042584FC03DAA6591F85703A86F203* ___InputTokens_2;
	// System.Int32 Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::InputTokenStart
	int32_t ___InputTokenStart_3;
	// Unity.Serialization.Json.BinaryToken* Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::BinaryTokens
	BinaryToken_t040D42F1326051BD104F491D8B080B61030A3794* ___BinaryTokens_4;
	// System.Int32 Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::BinaryTokenStart
	int32_t ___BinaryTokenStart_5;
	// System.Byte* Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::BinaryBuffer
	uint8_t* ___BinaryBuffer_6;
};

// Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor
struct OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199  : public PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor::OptionalConstraintProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___OptionalConstraintProperties_1;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty> Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor::OptionalConstraintBoolProperties
	Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* ___OptionalConstraintBoolProperties_2;
	// System.String Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
};

// Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyPathGetterVisitor
struct OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3  : public PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyPathGetterVisitor::OptionalConstraintProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___OptionalConstraintProperties_1;
	// System.String Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyPathGetterVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_2;
};

// Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor
struct PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7  : public PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D
{
	// Unity.AR.Companion.Core.ProxyListViewData Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::ParentData
	ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* ___ParentData_1;
	// System.Int32 Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::AutoIncrement
	int32_t ___AutoIncrement_2;
	// Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::PrefabMetadata
	PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78* ___PrefabMetadata_3;
	// System.String Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::TransformPath
	String_t* ___TransformPath_4;
	// System.Int32 Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::ComponentIndex
	int32_t ___ComponentIndex_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::OptionalConstraintProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___OptionalConstraintProperties_6;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty> Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::OptionalConstraintBoolProperties
	Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* ___OptionalConstraintBoolProperties_7;
	// System.String Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_8;
};

// Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator
struct Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 
{
	// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter> Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator::m_Adapters
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
	// System.Int32 Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator::m_Index
	int32_t ___m_Index_1;
	// Unity.Properties.IPropertyVisitorAdapter Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator
struct Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8_marshaled_pinvoke
{
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
	int32_t ___m_Index_1;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator
struct Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8_marshaled_com
{
	List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___m_Adapters_0;
	int32_t ___m_Index_1;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_2;
};

// Unity.RuntimeSceneSerialization.SceneSerialization/CollectionInitializationVisitor
struct CollectionInitializationVisitor_t5B17D4E5490DBCD62120567C259146100C7E9106  : public PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Ptr
	uint8_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Size
	int32_t ___Size_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Offset
	int32_t ___Offset_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader
struct ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Ptr
	void* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Length
	int32_t ___Length_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter
struct ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::Ptr
	void* ___Ptr_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::ListData
	UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___ListData_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_BlockStream
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_RemainingItemCount
	int32_t ___m_RemainingItemCount_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_LastBlockSize
	int32_t ___m_LastBlockSize_5;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_marshaled_pinvoke
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_RemainingItemCount_4;
	int32_t ___m_LastBlockSize_5;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_marshaled_com
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_RemainingItemCount_4;
	int32_t ___m_LastBlockSize_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_BlockStream
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ForeachIndex
	int32_t ___m_ForeachIndex_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ElementCount
	int32_t ___m_ElementCount_5;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock_6;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstOffset
	int32_t ___m_FirstOffset_7;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_NumberOfBlocks
	int32_t ___m_NumberOfBlocks_8;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ThreadIndex
	int32_t ___m_ThreadIndex_9;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_marshaled_pinvoke
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_ForeachIndex_4;
	int32_t ___m_ElementCount_5;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock_6;
	int32_t ___m_FirstOffset_7;
	int32_t ___m_NumberOfBlocks_8;
	int32_t ___m_ThreadIndex_9;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_marshaled_com
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_ForeachIndex_4;
	int32_t ___m_ElementCount_5;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock_6;
	int32_t ___m_FirstOffset_7;
	int32_t ___m_NumberOfBlocks_8;
	int32_t ___m_ThreadIndex_9;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};

// Unity.Mathematics.math/LongDoubleUnion
struct LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Mathematics.math/LongDoubleUnion::longValue
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Mathematics.math/LongDoubleUnion::doubleValue
			double ___doubleValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_1_forAlignmentOnly;
		};
	};
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer
struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer
struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};

// Unity.Collections.Memory/Unmanaged/Array
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};

// Unity.Collections.xxHash3/StreamingState/StreamingStateData
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Acc
			uint64_t ___Acc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_1_OffsetPadding[64];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::Buffer
			uint8_t ___Buffer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_1_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_2_OffsetPadding[320];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::IsHash64
			int32_t ___IsHash64_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_2_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_3_OffsetPadding[324];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::BufferedSize
			int32_t ___BufferedSize_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_3_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding[328];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::NbStripesSoFar
			int32_t ___NbStripesSoFar_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_5_OffsetPadding[336];
			// System.Int64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::TotalLength
			int64_t ___TotalLength_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_5_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_6_OffsetPadding[344];
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Seed
			uint64_t ___Seed_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_6_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_7_OffsetPadding[352];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::SecretKey
			uint8_t ___SecretKey_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_7_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_8_OffsetPadding[540];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::_PadEnd
			uint8_t ____PadEnd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_8_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_8_forAlignmentOnly;
		};
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

// UnityEngine.XR.ARCore.ARCorePromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Promise_1_t84779850E1895A40CC6BD94468F1EF05CA84D0D5 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

// Unity.AR.Companion.Core.ProxyListViewPropertyData`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791 : public ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99 {};

// Unity.Properties.VisitContext`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B 
{
	// Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator Unity.Properties.VisitContext`1::m_Enumerator
	Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 ___m_Enumerator_0;
	// Unity.Properties.PropertyVisitor Unity.Properties.VisitContext`1::m_Visitor
	PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D* ___m_Visitor_1;
	// Unity.Properties.VisitContext`1/VisitDelegate<TContainer> Unity.Properties.VisitContext`1::m_Continue
	VisitDelegate_t08A83A46909095C824D66EC3E8F568F99592D1DE* ___m_Continue_2;
	// Unity.Properties.VisitContext`1/VisitWithoutAdaptersDelegate<TContainer> Unity.Properties.VisitContext`1::m_ContinueWithoutAdapters
	VisitWithoutAdaptersDelegate_t0C9CF3C17C4D3B7C1383ACC7CE9266AB0BBF9E8D* ___m_ContinueWithoutAdapters_3;
	// Unity.Properties.IProperty`1<TContainer> Unity.Properties.VisitContext`1::<Property>k__BackingField
	RuntimeObject* ___U3CPropertyU3Ek__BackingField_4;
};

// Unity.Properties.VisitContext`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4 
{
	// Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator Unity.Properties.VisitContext`2::m_Enumerator
	Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 ___m_Enumerator_0;
	// Unity.Properties.PropertyVisitor Unity.Properties.VisitContext`2::m_Visitor
	PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D* ___m_Visitor_1;
	// Unity.Properties.Property`2<TContainer,TValue> Unity.Properties.VisitContext`2::<Property>k__BackingField
	Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___U3CPropertyU3Ek__BackingField_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEvent UnityEngine.InputSystem.LowLevel.InputEvent::m_Event
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};

// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};

struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputStateHistory/Record> UnityEngine.InputSystem.LowLevel.InputStateHistory::<onRecordAdded>k__BackingField
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField_1;
	// System.Func`4<UnityEngine.InputSystem.InputControl,System.Double,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.LowLevel.InputStateHistory::<onShouldRecordStateChange>k__BackingField
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.LowLevel.InputStateHistory::m_Controls
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls_3;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_ControlCount
	int32_t ___m_ControlCount_4;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.InputSystem.LowLevel.InputStateHistory::m_RecordBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer_5;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_RecordCount
	int32_t ___m_RecordCount_7;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_HistoryDepth
	int32_t ___m_HistoryDepth_8;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_ExtraMemoryPerRecord
	int32_t ___m_ExtraMemoryPerRecord_9;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_HeadIndex
	int32_t ___m_HeadIndex_10;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateHistory::m_CurrentVersion
	uint32_t ___m_CurrentVersion_11;
	// System.Nullable`1<UnityEngine.InputSystem.LowLevel.InputUpdateType> UnityEngine.InputSystem.LowLevel.InputStateHistory::m_UpdateMask
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask_12;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputStateHistory::m_AddNewControls
	bool ___m_AddNewControls_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Properties.PropertyPath
struct PropertyPath_tACE611291920C6A8A4CC7370326A861D683A2556 
{
	// Unity.Properties.PropertyPathPart Unity.Properties.PropertyPath::m_Part0
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A ___m_Part0_1;
	// Unity.Properties.PropertyPathPart Unity.Properties.PropertyPath::m_Part1
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A ___m_Part1_2;
	// Unity.Properties.PropertyPathPart Unity.Properties.PropertyPath::m_Part2
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A ___m_Part2_3;
	// Unity.Properties.PropertyPathPart Unity.Properties.PropertyPath::m_Part3
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A ___m_Part3_4;
	// System.Int32 Unity.Properties.PropertyPath::m_InlinePartsCount
	int32_t ___m_InlinePartsCount_5;
	// Unity.Properties.PropertyPathPart[] Unity.Properties.PropertyPath::m_AdditionalParts
	PropertyPathPartU5BU5D_t5675508F6D47339B278BCF57F950076295F5C9A9* ___m_AdditionalParts_6;
	// System.Int32 Unity.Properties.PropertyPath::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Unity.Properties.PropertyPath
struct PropertyPath_tACE611291920C6A8A4CC7370326A861D683A2556_marshaled_pinvoke
{
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke ___m_Part0_1;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke ___m_Part1_2;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke ___m_Part2_3;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke ___m_Part3_4;
	int32_t ___m_InlinePartsCount_5;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_pinvoke* ___m_AdditionalParts_6;
	int32_t ___U3CLengthU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Unity.Properties.PropertyPath
struct PropertyPath_tACE611291920C6A8A4CC7370326A861D683A2556_marshaled_com
{
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com ___m_Part0_1;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com ___m_Part1_2;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com ___m_Part2_3;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com ___m_Part3_4;
	int32_t ___m_InlinePartsCount_5;
	PropertyPathPart_t6766B824402F90BD564DAF0F5BAC4299B0ECAB6A_marshaled_com* ___m_AdditionalParts_6;
	int32_t ___U3CLengthU3Ek__BackingField_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList::Ptr
	void* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Length
	int32_t ___Length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::unused
	int32_t ___unused_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Capacity
	int32_t ___Capacity_3;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_4;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Next
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Data
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_marshaled_pinvoke
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_marshaled_com
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// Unity.Collections.AllocatorManager/Range
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	// System.IntPtr Unity.Collections.AllocatorManager/Range::Pointer
	intptr_t ___Pointer_0;
	// System.Int32 Unity.Collections.AllocatorManager/Range::Items
	int32_t ___Items_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/Range::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_2;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t* ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_8;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader
struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader::time
			double ___time_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[8];
			// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader::version
			uint32_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_2_OffsetPadding[12];
			// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader::controlIndex
			int32_t ___controlIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_2_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding[12];
			// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader::m_StateWithoutControlIndex
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding[16];
			// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader::m_StateWithControlIndex
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4_forAlignmentOnly;
		};
	};
};

// OpenCvSharp.LineIterator/Pixel
struct Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69  : public RuntimeObject
{
	// System.Byte* OpenCvSharp.LineIterator/Pixel::<ValuePointer>k__BackingField
	uint8_t* ___U3CValuePointerU3Ek__BackingField_0;
	// OpenCvSharp.Point OpenCvSharp.LineIterator/Pixel::<Pos>k__BackingField
	Point_t040A0F435BFD5430C0BB89C5D23569A96E71F4FC ___U3CPosU3Ek__BackingField_1;
};

// Unity.Collections.NativeStream/Reader
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader Unity.Collections.NativeStream/Reader::m_Reader
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 ___m_Reader_0;
};
// Native definition for P/Invoke marshalling of Unity.Collections.NativeStream/Reader
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_marshaled_pinvoke
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_marshaled_pinvoke ___m_Reader_0;
};
// Native definition for COM marshalling of Unity.Collections.NativeStream/Reader
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_marshaled_com
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_marshaled_com ___m_Reader_0;
};

// Unity.Collections.NativeStream/Writer
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer Unity.Collections.NativeStream/Writer::m_Writer
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F ___m_Writer_0;
};
// Native definition for P/Invoke marshalling of Unity.Collections.NativeStream/Writer
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_marshaled_pinvoke
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_marshaled_pinvoke ___m_Writer_0;
};
// Native definition for COM marshalling of Unity.Collections.NativeStream/Writer
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_marshaled_com
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_marshaled_com ___m_Writer_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// Unity.Collections.xxHash3/StreamingState
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	// Unity.Collections.xxHash3/StreamingState/StreamingStateData Unity.Collections.xxHash3/StreamingState::State
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State_4;
};

struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	// System.Int32 Unity.Collections.xxHash3/StreamingState::SECRET_LIMIT
	int32_t ___SECRET_LIMIT_0;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::NB_STRIPES_PER_BLOCK
	int32_t ___NB_STRIPES_PER_BLOCK_1;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_SIZE
	int32_t ___INTERNAL_BUFFER_SIZE_2;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_STRIPES
	int32_t ___INTERNAL_BUFFER_STRIPES_3;
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
};

// UnityEngine.XR.ARCore.ARCorePromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues_2;
};

// UnityEngine.InputSystem.InputProcessor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};

// UnityEngine.InputSystem.LowLevel.ActionEvent
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputEvent UnityEngine.InputSystem.LowLevel.ActionEvent::baseEvent
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_1_OffsetPadding[20];
					// System.UInt16 UnityEngine.InputSystem.LowLevel.ActionEvent::m_ControlIndex
					uint16_t ___m_ControlIndex_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_1_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_2_OffsetPadding[22];
					// System.UInt16 UnityEngine.InputSystem.LowLevel.ActionEvent::m_BindingIndex
					uint16_t ___m_BindingIndex_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_2_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_3_OffsetPadding[24];
					// System.UInt16 UnityEngine.InputSystem.LowLevel.ActionEvent::m_InteractionIndex
					uint16_t ___m_InteractionIndex_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_3_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_4_OffsetPadding[26];
					// System.Byte UnityEngine.InputSystem.LowLevel.ActionEvent::m_StateIndex
					uint8_t ___m_StateIndex_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_4_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_5_OffsetPadding[27];
					// System.Byte UnityEngine.InputSystem.LowLevel.ActionEvent::m_Phase
					uint8_t ___m_Phase_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_5_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_6_OffsetPadding[28];
					// System.Double UnityEngine.InputSystem.LowLevel.ActionEvent::m_StartTime
					double ___m_StartTime_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_6_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_7_OffsetPadding[36];
					// UnityEngine.InputSystem.LowLevel.ActionEvent/<m_ValueData>e__FixedBuffer UnityEngine.InputSystem.LowLevel.ActionEvent::m_ValueData
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_7_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_7_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t* ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;
};

struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Properties.PathVisitor
struct PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939  : public RuntimeObject
{
	// System.Int32 Unity.Properties.PathVisitor::m_PathIndex
	int32_t ___m_PathIndex_0;
	// Unity.Properties.PropertyPath Unity.Properties.PathVisitor::<Path>k__BackingField
	PropertyPath_tACE611291920C6A8A4CC7370326A861D683A2556 ___U3CPathU3Ek__BackingField_1;
	// Unity.Properties.IProperty Unity.Properties.PathVisitor::<Property>k__BackingField
	RuntimeObject* ___U3CPropertyU3Ek__BackingField_2;
	// System.Boolean Unity.Properties.PathVisitor::<ReadonlyVisit>k__BackingField
	bool ___U3CReadonlyVisitU3Ek__BackingField_3;
	// Unity.Properties.VisitReturnCode Unity.Properties.PathVisitor::<ReturnCode>k__BackingField
	int32_t ___U3CReturnCodeU3Ek__BackingField_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider
struct ARCoreProvider_tD2E93A65CCD3E86D401DF128FD49F8B050F21492  : public Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5
{
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_ProviderHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ProviderHandle_1;
	// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_SetConfigurationCallback
	Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3* ___m_SetConfigurationCallback_2;
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::beforeSetConfiguration
	Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892* ___beforeSetConfiguration_3;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_RenderEventFunc
	intptr_t ___m_RenderEventFunc_5;
};

// Unity.Collections.AllocatorManager/Block
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	// Unity.Collections.AllocatorManager/Range Unity.Collections.AllocatorManager/Block::Range
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range_0;
	// System.Int32 Unity.Collections.AllocatorManager/Block::BytesPerItem
	int32_t ___BytesPerItem_1;
	// System.Int32 Unity.Collections.AllocatorManager/Block::AllocatedItems
	int32_t ___AllocatedItems_2;
	// System.Byte Unity.Collections.AllocatorManager/Block::Log2Alignment
	uint8_t ___Log2Alignment_3;
	// System.Byte Unity.Collections.AllocatorManager/Block::Padding0
	uint8_t ___Padding0_4;
	// System.UInt16 Unity.Collections.AllocatorManager/Block::Padding1
	uint16_t ___Padding1_5;
	// System.UInt32 Unity.Collections.AllocatorManager/Block::Padding2
	uint32_t ___Padding2_6;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t* ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t* ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations_31;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 ___m_ProcessorStack_21;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};

// Unity.Properties.PropertyContainer/ExistsAtPathVisitor
struct ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F  : public PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939
{
	// System.Boolean Unity.Properties.PropertyContainer/ExistsAtPathVisitor::Exists
	bool ___Exists_6;
};

struct ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F_StaticFields
{
	// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/ExistsAtPathVisitor> Unity.Properties.PropertyContainer/ExistsAtPathVisitor::Pool
	ObjectPool_1_t933C70478ADF15D9B0955F7B781261C8249EEFAD* ___Pool_5;
};

// Unity.Properties.PropertyContainer/GetPropertyVisitor
struct GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B  : public PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939
{
	// Unity.Properties.IProperty Unity.Properties.PropertyContainer/GetPropertyVisitor::Property
	RuntimeObject* ___Property_6;
};

struct GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B_StaticFields
{
	// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/GetPropertyVisitor> Unity.Properties.PropertyContainer/GetPropertyVisitor::Pool
	ObjectPool_1_t73AFC553B7DC633714ABDF1C0A6EFDF7C6DA7A0F* ___Pool_5;
};

// Unity.Properties.PropertyContainer/ValueAtPathVisitor
struct ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE  : public PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939
{
	// Unity.Properties.IPropertyVisitor Unity.Properties.PropertyContainer/ValueAtPathVisitor::Visitor
	RuntimeObject* ___Visitor_6;
};

struct ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE_StaticFields
{
	// UnityEngine.Pool.ObjectPool`1<Unity.Properties.PropertyContainer/ValueAtPathVisitor> Unity.Properties.PropertyContainer/ValueAtPathVisitor::Pool
	ObjectPool_1_t6709629F9F3532318838ABBB228CFDE57E3A3552* ___Pool_5;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_12;
};

struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState_13;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata
struct PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata::m_Guid
	String_t* ___m_Guid_4;
	// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeRemovedComponent> Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata::m_RemovedComponents
	List_1_t3801661EA3480000446F6AB9E9D3071F0011BAE3* ___m_RemovedComponents_5;
	// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeAddedGameObject> Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata::m_AddedGameObjects
	List_1_t4BB1BE43CD8A09878CD47F8449A093896FCA9F9B* ___m_AddedGameObjects_6;
	// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimeAddedComponent> Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata::m_AddedComponents
	List_1_t507A07F04175E89C753B8E80C69C68CE48EFD4A7* ___m_AddedComponents_7;
	// System.Collections.Generic.List`1<Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride> Unity.RuntimeSceneSerialization.Prefabs.PrefabMetadata::<PropertyOverrides>k__BackingField
	List_1_t8A00BAC2D64FE902D5F8BD6A8C170198E75ACC83* ___U3CPropertyOverridesU3Ek__BackingField_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/AllocatorHandle::AllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::TryAllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.AllocatorManager/Block&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(TProcessor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&,T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA_gshared (WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269* IL2CPP_PARAMETER_RESTRICT __this, int32_t* ___position0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisIl2CppFullySharedGenericAny_mF752D27DF0C805341069D4EE1CEA53CA3DD6A53F_gshared (RuntimeObject* ___source0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TChild> Unity.ListViewFramework.NestedListViewItemData`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* NestedListViewItemData_2_get_children_mDF4FD5863E87C6C10AC9DECEA157928DD4E8F44D_gshared (NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB* __this, const RuntimeMethod* method) ;
// System.Void Unity.ListViewFramework.NestedListViewItemData`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_children(System.Collections.Generic.List`1<TChild>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedListViewItemData_2_set_children_m96D8954E345A28AD6A9F93B7F25F4506B9D70AA0_gshared (NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_m4BC293794766503DC71C1F66EDD9853F172BAABA (void* ___input0, int64_t ___length1, const RuntimeMethod* method) ;
// Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_m66AACC8267F1880F297AAD575573EEF03460673F (void* ___input0, int64_t ___length1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___obj0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/AllocatorHandle::AllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32)
inline Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method)
{
	return ((  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t, const RuntimeMethod*))AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared)((AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this, ___items0, method);
}
// System.Int32 Unity.Mathematics.math::tzcnt(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_inline (int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::TryAllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.AllocatorManager/Block&,System.Int32)
inline int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t, const RuntimeMethod*))AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared)((AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this, ___block0, ___items1, method);
}
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F (int32_t ___phase0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared)((CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*)__this, il2cppRetVal, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___str0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___interaction0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)((BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*)__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___processor0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)((BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*)__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___layoutType0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
// System.Int32 UnityEngine.InputSystem.LowLevel.ActionEvent::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Byte* UnityEngine.InputSystem.LowLevel.ActionEvent::get_valueData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(TProcessor)
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, RuntimeObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline)((ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this, ___processor0, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::CheckValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader* UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::get_header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
// System.IntPtr OpenCvSharp.LineIterator/Pixel::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Pixel_get_Value_mCF7FAB1D69D39EB96BD01FDE33E1A073D02092E0 (Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared)((Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*)__this, method);
}
// System.Byte* Unity.Collections.NativeStream/Reader::ReadUnsafePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, int32_t ___size0, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared)((Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*)__this, method);
}
// System.Byte* Unity.Collections.NativeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, int32_t ___size0, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, method);
}
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, ___value0, method);
}
// System.Void Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&,T)
inline void WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA (WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269* IL2CPP_PARAMETER_RESTRICT __this, int32_t* ___position0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value1, const RuntimeMethod* method)
{
	((  void (*) (WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269* IL2CPP_PARAMETER_RESTRICT, int32_t*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA_gshared)((WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269*)__this, ___position0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>::.ctor()
inline void List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5 (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Unity.Properties.Internal.ReadOnlyAdapterCollection::.ctor(System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009 (ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35* __this, List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* ___adapters0, const RuntimeMethod* method) ;
// Unity.Properties.Internal.ReadOnlyAdapterCollection/Enumerator Unity.Properties.Internal.ReadOnlyAdapterCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64 (ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Enumerable_Contains_TisIl2CppFullySharedGenericAny_mF752D27DF0C805341069D4EE1CEA53CA3DD6A53F_gshared)((RuntimeObject*)___source0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5F72849AAA5FBF6C7FE8545E131868225252A138 (Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.Properties.IProperty>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mCAADFA3C2CD3570870C194F7FF092B7F17DF196B (Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Collections.Generic.List`1<TChild> Unity.ListViewFramework.NestedListViewItemData`2<Unity.AR.Companion.Core.ProxyListViewData,System.Int32>::get_children()
inline List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* NestedListViewItemData_2_get_children_mD1D0505A3D22B1249087234D4CA4E4473C2980EA (NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619* __this, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB*, const RuntimeMethod*))NestedListViewItemData_2_get_children_mDF4FD5863E87C6C10AC9DECEA157928DD4E8F44D_gshared)((NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB*)__this, method);
	return (List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<Unity.AR.Companion.Core.ProxyListViewData>::.ctor()
inline void List_1__ctor_mC04CF0EA727066342EAC0BC8EC5A5BAB9B6289FB (List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Unity.ListViewFramework.NestedListViewItemData`2<Unity.AR.Companion.Core.ProxyListViewData,System.Int32>::set_children(System.Collections.Generic.List`1<TChild>)
inline void NestedListViewItemData_2_set_children_mCCBB24AB8F8B8D1AB714A0E2FF414440CDB46371 (NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619* __this, List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* ___value0, const RuntimeMethod* method)
{
	((  void (*) (NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))NestedListViewItemData_2_set_children_m96D8954E345A28AD6A9F93B7F25F4506B9D70AA0_gshared)((NestedListViewItemData_2_tB2728140FB752431BEE99351B21904631DE004AB*)__this, (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)___value0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.AR.Companion.Core.ProxyListViewData>::Add(T)
inline void List_1_Add_m054BACEEE80BA5CD2B4D790F1C53FCC922771BE9_inline (List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* __this, ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___value0, method);
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>()
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___structSize0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___value0, ___allocator1, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___length0, method);
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___value0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___value0, method);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize(System.Int32,System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, int32_t ___sizeOf0, int32_t ___alignOf1, void* ___ptr2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___list0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, void*, int32_t, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___ptr0, ___length1, method);
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)((Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)__this, method);
}
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::ReadUnsafePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___size0, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)((Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)__this, method);
}
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___size0, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___value0, method);
}
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)((AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*)__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.xxHash3/StreamingState::Update(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___input0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)((StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*)__this, ___input0, method);
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::tzcnt(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_inline (uint32_t ___x0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m62713F90A297B2D7E15FFCFC03A6D3E9B1437CE1_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___jclass0), (&___fieldName1), (&___isStatic2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2338));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2339));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2340));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2341));
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2342));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2343));
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2343));
		bool L_5 = ___isStatic2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2344));
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2344));
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2345));
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_m610860C26BAF5ACB7F62BA3621F9C22C47453951_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___jclass0), (&___methodName1), (&___args2), (&___isStatic3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2332));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2333));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2334));
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2335));
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2335));
		bool L_4 = ___isStatic3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2336));
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2336));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2337));
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_mDBF81B16A0FEEB1BA244976285B52E8770108EDF_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___args0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2610));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2611));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2615));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2617));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2618));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2619));
		goto IL_002e;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2620));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2622));
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2626));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2627));
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2628));
		StringBuilder_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2630));
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2634));
		StringBuilder_t* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2636));
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_TisIl2CppFullySharedGenericStruct_m01D792F10414039EC2AFF50AF92BA38449E18B99_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___input0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23827));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23828));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23829));
		// return Hash128(UnsafeUtilityExtensions.AddressOf(input), UnsafeUtility.SizeOf<T>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23830));
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23831));
		void* L_1;
		L_1 = InvokerFuncInvoker1< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23831));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23832));
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23832));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23833));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_3;
		L_3 = xxHash3_Hash128_m4BC293794766503DC71C1F66EDD9853F172BAABA(L_1, ((int64_t)L_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23833));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23834));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_4 = V_0;
		return L_4;
	}
}
// Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_TisIl2CppFullySharedGenericStruct_m05A3C11BA5611AE155E3381B006B0B1CC1B78778_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___input0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23801));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23802));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23803));
		// return Hash64(UnsafeUtilityExtensions.AddressOf(input), UnsafeUtility.SizeOf<T>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23804));
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23805));
		void* L_1;
		L_1 = InvokerFuncInvoker1< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23805));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23806));
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23806));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23807));
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_3;
		L_3 = xxHash3_Hash64_m66AACC8267F1880F297AAD575573EEF03460673F(L_1, ((int64_t)L_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23807));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23808));
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ExecuteAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* ARCoreProvider_ExecuteAsync_TisIl2CppFullySharedGenericAny_m474BD7CD8364D56C803D368253468EC7F8860F8F_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___apiMethod0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2507));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2508));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2509));
		// var promise = new ARCorePromise<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2510));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2511));
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_0 = (ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2511));
		V_0 = L_0;
		// GCHandle gch = GCHandle.Alloc(promise);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2512));
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2513));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6((RuntimeObject*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2513));
		V_1 = L_2;
		// apiMethod(GCHandle.ToIntPtr(gch));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2514));
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2515));
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2516));
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2516));
		// return promise;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2517));
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_6 = V_0;
		V_2 = (Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278*)L_6;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2518));
		Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ResolvePromise<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.IntPtr,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_ResolvePromise_TisIl2CppFullySharedGenericStruct_mD2EFD0AD9E313B21638FBF4F62DCA3FD01A5FA38_gshared (intptr_t ___context0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___arg1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t14F895360E456193F8C6DFBC546BE45A87DACB14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t14F895360E456193F8C6DFBC546BE45A87DACB14);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___context0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___arg1 : &___arg1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2564));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2565));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2566));
		// GCHandle gch = GCHandle.FromIntPtr(context);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2567));
		intptr_t L_0 = ___context0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2568));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2568));
		V_0 = L_1;
		// var promise = (ARCorePromise<T>)gch.Target;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2569));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2570));
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2570));
		V_1 = ((ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (promise != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2571));
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2572));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// promise.Resolve(arg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2573));
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_5 = V_1;
		il2cpp_codegen_memcpy(L_6, ___arg1, SizeOf_T_t14F895360E456193F8C6DFBC546BE45A87DACB14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2574));
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2574));
	}

IL_0025:
	{
		// gch.Free();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2576));
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2576));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARCore + 2577));
		return;
	}
}
// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/AllocatorHandle::AllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___items0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 447));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 448));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 449));
		// var error = TryAllocateBlock<T>(out Block block, items);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 450));
		int32_t L_0 = ___items0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 451));
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, (&V_1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 451));
		V_0 = L_1;
		// return block;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 452));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_2 = V_1;
		V_2 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 453));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_3 = V_2;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_AdjustorThunk (RuntimeObject* __this, int32_t ___items0, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 _returnValue;
	_returnValue = AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21(_thisAdjusted, ___items0, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::TryAllocateBlock<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.AllocatorManager/Block&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___block0), (&___items1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 434));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 435));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 436));
		// block = new Block
		// {
		//     Range = new Range { Items = items, Allocator = this },
		//     BytesPerItem = UnsafeUtility.SizeOf<T>(),
		//     Alignment = 1 << math.min(3, math.tzcnt(UnsafeUtility.SizeOf<T>()))
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 437));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		il2cpp_codegen_initobj((&V_1), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		il2cpp_codegen_initobj((&V_2), sizeof(Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC));
		int32_t L_1 = ___items1;
		(&V_2)->___Items_1 = L_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = (*(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this);
		(&V_2)->___Allocator_2 = L_2;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_3 = V_2;
		(&V_1)->___Range_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 438));
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 438));
		(&V_1)->___BytesPerItem_1 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 439));
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 439));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 440));
		int32_t L_6;
		L_6 = math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 440));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 441));
		int32_t L_7;
		L_7 = math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_inline(3, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 441));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 442));
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_1), ((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 442));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_8 = V_1;
		*(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*)L_0 = L_8;
		// var returnCode = Try(ref block);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 443));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 444));
		int32_t L_10;
		L_10 = AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9(__this, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 444));
		V_0 = L_10;
		// return returnCode;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 445));
		int32_t L_11 = V_0;
		V_3 = L_11;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 446));
		int32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24(_thisAdjusted, ___block0, ___items1, method);
	return _returnValue;
}
// System.Void Unity.Properties.ConcreteTypeVisitor/AOT::RegisterType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterType_TisIl2CppFullySharedGenericAny_mD6C8AB70609836AB6DE6E3A503C2A292D4CDE1C9_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___container0 : &___container0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3155));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3156));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3157));
		// ((ConcreteTypeVisitor) default).VisitContainer(ref container);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3158));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3159));
		NullCheck((ConcreteTypeVisitor_t9B344C55693C5BD2D1ACA5D627E4D97F0B99DC5B*)NULL);
		GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), (ConcreteTypeVisitor_t9B344C55693C5BD2D1ACA5D627E4D97F0B99DC5B*)NULL, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___container0 : &___container0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3159));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3160));
		return;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TValue
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	const Il2CppFullySharedGenericStruct L_8 = L_7;
	const Il2CppFullySharedGenericStruct L_9 = L_7;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_2, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2021));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2022));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2023));
		// var value = default(TValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2024));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		// if (m_State != null && phase.IsInProgress())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2025));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2026));
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2026));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2027));
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2027));
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2028));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2029));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2030));
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2030));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2031));
		int32_t L_6;
		L_6 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2031));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2032));
		NullCheck(L_4);
		InvokerActionInvoker4< int32_t, int32_t, bool, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4, L_5, L_6, (bool)0, (Il2CppFullySharedGenericStruct*)L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2032));
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_003c:
	{
		// return value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2033));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0040;
	}

IL_0040:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 2034));
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043(_thisAdjusted, il2cppRetVal, method);
	return;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisRuntimeObject_mD0F2FB39194CC7EAC8E22DFFCD9C9116BAFC7B5E_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5147));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5148));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5149));
		// ThrowIfRebindInProgress();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5150));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5151));
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5151));
		// return WithExpectedControlType(typeof(TControl));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5152));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5153));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5154));
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5154));
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 5155));
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7140));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7141));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7142));
		// if (!valid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7143));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7144));
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7144));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7145));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7146));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7147));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7147));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var)));
	}

IL_0019:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7148));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7149));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7149));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7150));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7150));
		V_0 = L_5;
		// if (interactionName.IsEmpty())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7151));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7152));
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7152));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7153));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7154));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7155));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7155));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7156));
		String_t* L_10;
		L_10 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7157));
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7157));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var)));
	}

IL_0053:
	{
		// return WithInteraction(interactionName);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7158));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7159));
		String_t* L_13;
		L_13 = InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7159));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7160));
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7160));
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7161));
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7211));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7212));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7213));
		// if (!valid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7214));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7215));
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7215));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7216));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7217));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7218));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7218));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var)));
	}

IL_0019:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7219));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7220));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7220));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7221));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7221));
		V_0 = L_5;
		// if (processorName.IsEmpty())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7223));
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7223));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7224));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7225));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7226));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7226));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7227));
		String_t* L_10;
		L_10 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7228));
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7228));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var)));
	}

IL_0053:
	{
		// return WithProcessor(processorName);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7229));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7230));
		String_t* L_13;
		L_13 = InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7230));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7231));
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7231));
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7232));
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7617));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7618));
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7619));
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7620));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7620));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7621));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts_15), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7621));
		V_1 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7622));
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7622));
		V_0 = L_3;
		// if (string.IsNullOrEmpty(layoutName))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7623));
		String_t* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7624));
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7624));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7625));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7626));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7627));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7627));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7628));
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7628));
		V_0 = L_9;
	}

IL_003e:
	{
		// return $"<{layoutName}>";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7629));
		String_t* L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7630));
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_10, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7630));
		V_3 = L_11;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7631));
		String_t* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7581));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7582));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7583));
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7584));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7585));
		String_t* L_0;
		L_0 = InvokerFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7585));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7586));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7586));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7587));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7574));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7575));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7576));
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7577));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7578));
		String_t* L_0;
		L_0 = InvokerFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7578));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7579));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7579));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7580));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7567));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7568));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7569));
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7571));
		String_t* L_0;
		L_0 = InvokerFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7571));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7572));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7572));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7573));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7560));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7561));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7562));
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7563));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7564));
		String_t* L_0;
		L_0 = InvokerFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7564));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7565));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7565));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 7566));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// TValue
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	const Il2CppFullySharedGenericStruct L_29 = L_22;
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_4, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66912));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66913));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66914));
		// var valueSizeInBytes = m_Ptr->valueSizeInBytes;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66915));
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)__this->___m_Ptr_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66916));
		int32_t L_1;
		L_1 = ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66916));
		V_0 = L_1;
		// if (UnsafeUtility.SizeOf<TValue>() != valueSizeInBytes)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66917));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66918));
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66918));
		int32_t L_3 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66919));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		// throw new InvalidOperationException(
		//     $"Cannot read a value of type '{typeof(TValue).Name}' with size {UnsafeUtility.SizeOf<TValue>()} from event on action '{action}' with value size {valueSizeInBytes}");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66920));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66921));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66921));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66922));
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66922));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66923));
		int32_t L_11;
		L_11 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66923));
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66924));
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66924));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66925));
		String_t* L_20;
		L_20 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66925));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66926));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66926));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_RuntimeMethod_var)));
	}

IL_0063:
	{
		// var result = new TValue();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66927));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66928));
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66928));
		il2cpp_codegen_memcpy(V_1, L_22, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		// var resultPtr = UnsafeUtility.AddressOf(ref result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66929));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66930));
		void* L_23;
		L_23 = InvokerFuncInvoker1< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericStruct*)V_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66930));
		V_2 = L_23;
		// UnsafeUtility.MemCpy(resultPtr, m_Ptr->valueData, valueSizeInBytes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66931));
		void* L_24 = V_2;
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_25 = (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)__this->___m_Ptr_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66932));
		uint8_t* L_26;
		L_26 = ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66932));
		int32_t L_27 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66933));
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_24, (void*)L_26, ((int64_t)L_27), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66933));
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66934));
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(V_4, L_28, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		goto IL_008a;
	}

IL_008a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 66935));
		il2cpp_codegen_memcpy(L_29, V_4, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_29, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		return;
	}
}
IL2CPP_EXTERN_C  void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*>(__this + _offset);
	ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391(_thisAdjusted, il2cppRetVal, method);
	return;
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(TProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___processor0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17726));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17727));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17728));
		// if (processor == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17729));
		RuntimeObject* L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17730));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17732));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17732));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17733));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17734));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17734));
		NullCheck(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))));
		InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986* L_4 = (InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)(&((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)))->___m_ProcessorStack_21);
		RuntimeObject* L_5 = ___processor0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17735));
		int32_t L_6;
		L_6 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17735));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17736));
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17737));
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___processor0, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*>(__this + _offset);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61958));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61959));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61960));
		// type = typeof(T);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61961));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61962));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61962));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61963));
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61963));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61964));
		V_0 = __this;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61965));
		Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* L_2 = V_0;
		return L_2;
	}
}
// TValue UnityEngine.InputSystem.LowLevel.InputStateHistory/Record::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TValue
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	const Il2CppFullySharedGenericStruct L_3 = L_2;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	memset(V_0, 0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59303));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59304));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59305));
		// CheckValid();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59307));
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59307));
		// return m_Owner.ReadValue<TValue>(header);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59308));
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)__this->___m_Owner_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59309));
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59309));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59310));
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59310));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		goto IL_001c;
	}

IL_001c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 59311));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*>(__this + _offset);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// T OpenCvSharp.LineIterator/Pixel::GetValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel_GetValue_TisIl2CppFullySharedGenericStruct_m5B18061066B43B3C03C58B08085CA2844F7489F3_gshared (Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
	memset(V_0, 0, SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41524));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41525));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41526));
		// return (T)Marshal.PtrToStructure(Value, typeof (T));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41527));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41528));
		intptr_t L_0;
		L_0 = Pixel_get_Value_mCF7FAB1D69D39EB96BD01FDE33E1A073D02092E0(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41528));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41529));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41529));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41530));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41530));
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_3, il2cpp_rgctx_data(method->rgctx_data, 1))))), SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
		goto IL_001e;
	}

IL_001e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41531));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t862CD5730DA8580137AC607A6B595701CBE5A873);
		return;
	}
}
// System.Void OpenCvSharp.LineIterator/Pixel::SetValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel_SetValue_TisIl2CppFullySharedGenericStruct_m6F37831E207E24DB6D0EBE6E5E0CCA33517B8E82_gshared (Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pixel_t63A525414409CAD53021FB641237CF00E2AD7D69_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t63A548CFF60D10DD8F752AEEBCB5B328D6CF9265 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t63A548CFF60D10DD8F752AEEBCB5B328D6CF9265);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41532));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41533));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41534));
		// Marshal.StructureToPtr(value, Value, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41535));
		il2cpp_codegen_memcpy(L_0, ___value0, SizeOf_T_t63A548CFF60D10DD8F752AEEBCB5B328D6CF9265);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41536));
		intptr_t L_1;
		L_1 = Pixel_get_Value_mCF7FAB1D69D39EB96BD01FDE33E1A073D02092E0(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41536));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41537));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, intptr_t, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41537));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41538));
		return;
	}
}
// System.Void Unity.Collections.Memory/Array::Clear<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_TisIl2CppFullySharedGenericStruct_mB5740A5AFE4470F318F91D939C44B6668DF4ABAE_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pointer0), (&___count1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17786));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17787));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17788));
		// long bytesToClear = count * UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17789));
		int64_t L_0 = ___count1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17790));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17790));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		// UnsafeUtility.MemClear(pointer, bytesToClear);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17791));
		Il2CppFullySharedGenericStruct* L_2 = ___pointer0;
		int64_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17792));
		UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460((void*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17792));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17793));
		return;
	}
}
// System.Void Unity.Collections.Memory/Array::Copy<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_TisIl2CppFullySharedGenericStruct_mCEB66EC67F8EC3091676F84D1B8AD3E6F7F4484F_gshared (Il2CppFullySharedGenericStruct* ___dest0, Il2CppFullySharedGenericStruct* ___src1, int64_t ___count2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___dest0), (&___src1), (&___count2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17794));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17795));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17796));
		// long bytesToCopy = count * UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17797));
		int64_t L_0 = ___count2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17798));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17798));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		// UnsafeUtility.MemCpy(dest, src, bytesToCopy);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17799));
		Il2CppFullySharedGenericStruct* L_2 = ___dest0;
		Il2CppFullySharedGenericStruct* L_3 = ___src1;
		int64_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17800));
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)L_2, (void*)L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17800));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17801));
		return;
	}
}
// System.Void Unity.Collections.Memory/Array::Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Set_TisIl2CppFullySharedGenericStruct_mC09DDB5A0E2737D2A8CF33FE0322329C98F86AAE_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___t2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t34840C7C9A12D6097FC75177F6593D00F45AEB86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t34840C7C9A12D6097FC75177F6593D00F45AEB86);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pointer0), (&___count1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___t2 : &___t2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17774));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17775));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17776));
		// long bytesToSet = count * UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17777));
		int64_t L_0 = ___count1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17778));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17778));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		// for (var i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17779));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17780));
		goto IL_0023;
	}

IL_000e:
	{
		// pointer[i] = t;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17781));
		Il2CppFullySharedGenericStruct* L_2 = ___pointer0;
		int32_t L_3 = V_1;
		uint32_t L_4 = SizeOf_T_t34840C7C9A12D6097FC75177F6593D00F45AEB86;
		il2cpp_codegen_memcpy(L_5, ___t2, SizeOf_T_t34840C7C9A12D6097FC75177F6593D00F45AEB86);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), L_5, SizeOf_T_t34840C7C9A12D6097FC75177F6593D00F45AEB86);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), (void*)L_5);
		// for (var i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17782));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (var i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17783));
		int32_t L_7 = V_1;
		int64_t L_8 = ___count1;
		V_2 = (bool)((((int64_t)((int64_t)L_7)) < ((int64_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17784));
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_000e;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17785));
		return;
	}
}
// T* Unity.Collections.Memory/Unmanaged::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Unmanaged_Allocate_TisIl2CppFullySharedGenericStruct_m72EBDB7410FBC4B807A4A00F8430ECEA86C5A0EC_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___allocator0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17679));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17680));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17681));
		// return Array.Resize<T>(null, 0, 1, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17682));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___allocator0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17683));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17683));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17684));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Collections.Memory/Unmanaged::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_m775E551D5C208DC6790BF9AA80E6B4D9C42B2E3A_gshared (Il2CppFullySharedGenericStruct* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pointer0), (&___allocator1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17685));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17686));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17687));
		// if (pointer == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17688));
		Il2CppFullySharedGenericStruct* L_0 = ___pointer0;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17689));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17690));
		goto IL_0018;
	}

IL_000c:
	{
		// Array.Resize(pointer, 1, 0, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17691));
		Il2CppFullySharedGenericStruct* L_2 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17692));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, ((int64_t)1), ((int64_t)0), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17692));
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17693));
		return;
	}
}
// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21708));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21709));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21710));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21711));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21712));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21712));
		V_0 = L_0;
		// return ref m_Reader.Peek<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21713));
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* L_1 = (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)(&__this->___m_Reader_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21714));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21714));
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21715));
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21699));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21700));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21701));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21702));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21703));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21703));
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(ReadUnsafePtr(size));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21704));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21705));
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21705));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21706));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21706));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21707));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21626));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21627));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21628));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21630));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21630));
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(Allocate(size));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21631));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21632));
		uint8_t* L_2;
		L_2 = Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21633));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21633));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21634));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value0 : &___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21619));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21620));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21621));
		// ref T dst = ref Allocate<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21622));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21623));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21623));
		V_0 = L_0;
		// dst = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21624));
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___value0, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21625));
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Serialization.Json.PackedBinaryWriter/WriteCharactersJob::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&,T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA_gshared (WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269* IL2CPP_PARAMETER_RESTRICT __this, int32_t* ___position0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t108809CBF54DAEA4DF142B859E97E9042FE8CD29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t108809CBF54DAEA4DF142B859E97E9042FE8CD29);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Serialization + 4659));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Serialization + 4660));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Serialization + 4661));
		// *(T*) (BinaryBuffer + position) = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Serialization + 4662));
		uint8_t* L_0 = (uint8_t*)__this->___BinaryBuffer_6;
		int32_t* L_1 = ___position0;
		int32_t L_2 = *((int32_t*)L_1);
		il2cpp_codegen_memcpy(L_3, ___value1, SizeOf_T_t108809CBF54DAEA4DF142B859E97E9042FE8CD29);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_2)), L_3, SizeOf_T_t108809CBF54DAEA4DF142B859E97E9042FE8CD29);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_2)), (void*)L_3);
		// position += sizeof(T);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Serialization + 4663));
		int32_t* L_4 = ___position0;
		int32_t* L_5 = ___position0;
		int32_t L_6 = *((int32_t*)L_5);
		uint32_t L_7 = SizeOf_T_t108809CBF54DAEA4DF142B859E97E9042FE8CD29;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, (int32_t)L_7));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Serialization + 4664));
		return;
	}
}
IL2CPP_EXTERN_C  void WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t* ___position0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value1, const RuntimeMethod* method)
{
	WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WriteCharactersJob_t5F077C8974B2CC80E026AC5F8FF5D75F64E8B269*>(__this + _offset);
	WriteCharactersJob_Write_TisIl2CppFullySharedGenericStruct_m669237D98141F14BD218B66CD5ECED3A391FCCCA(_thisAdjusted, ___position0, ___value1, method);
}
// System.Void Unity.Properties.PathVisitor/AOT::RegisterType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterType_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m20CBD0F5CBACF201B78E008AE614C8AA588AAE76_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3367));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3368));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3369));
		// default(PathVisitor).VisitPath(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3370));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3371));
		NullCheck((PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PathVisitor_t0496CE773C8F27014E7DFA79E6C6A0BA9BE5F939*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3371));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3372));
		return;
	}
}
// System.Void Unity.Properties.PropertyContainer/ExistsAtPathVisitor::VisitPath<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExistsAtPathVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9BD55CB78AE5E10E9AC625A2B34C56D2164310E5_gshared (ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExistsAtPathVisitor_t85260994FC6A71774ACFA4F24A1EC979B798EE1F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 608));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 609));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 610));
		// Exists = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 611));
		__this->___Exists_6 = (bool)1;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 612));
		return;
	}
}
// System.Void Unity.Properties.PropertyContainer/GetPropertyVisitor::VisitPath<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m36A3A2C59EBC73D312431553ABFC8033E909B2BE_gshared (GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPropertyVisitor_t37F5F84DFA9A1210CF19FD85E5E5F12EB6BA4C4B_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 518));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 519));
		// Property = property;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 520));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		__this->___Property_6 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property_6), (void*)(RuntimeObject*)L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 521));
		return;
	}
}
// System.Void Unity.Properties.PropertyContainer/ValueAtPathVisitor::VisitPath<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAtPathVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0095C9B4AA58365037EC266CE47E0FD67DA9F40F_gshared (ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueAtPathVisitor_t53D19384CE86139340736567915B56BCD7C61EEE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 579));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 580));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 581));
		// ((IPropertyAccept<TContainer>) property).Accept(Visitor, ref container);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 582));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		RuntimeObject* L_1 = (RuntimeObject*)__this->___Visitor_6;
		Il2CppFullySharedGenericAny* L_2 = ___container1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 583));
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2Invoker< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0 /* System.Void Unity.Properties.IPropertyAccept`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Accept(Unity.Properties.IPropertyVisitor,TContainer&) */, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 583));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 584));
		return;
	}
}
// System.Void Unity.Properties.PropertyVisitor/AOT::RegisterCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TCollection>,TContainer,TCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterCollection_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F8F78EDFD40DFE03405AB80DB3E979A742F4635_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3727));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3728));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3729));
		// ((PropertyVisitor) default).VisitCollection<TContainer, TCollection, TElement>(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3730));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3731));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3731));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3732));
		return;
	}
}
// System.Void Unity.Properties.PropertyVisitor/AOT::RegisterDictionary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TDictionary>,TContainer,TDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0C9B2626510CB8EF7BE68AA2DC2E04BE24004E15_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// TKey
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0);
	// TValue
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154);
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_3 = alloca(SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0);
	memset(V_1, 0, SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154);
	memset(V_2, 0, SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3745));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3746));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3747));
		// ((PropertyVisitor) default).VisitDictionary<TContainer, TDictionary, TKey, TValue>(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3748));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3749));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3749));
		// RegisterType<KeyValuePair<TKey, TValue>, TKey>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3750));
		il2cpp_codegen_initobj((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0);
		il2cpp_codegen_memcpy(L_2, V_1, SizeOf_TKey_tBF94711B5292BA49C85113D712A60AC988B635A0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3751));
		InvokerActionInvoker3< Property_2_tA7CE13E097C3A7D9E5963B60CC5B986CC9D0CFE6*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, (Property_2_tA7CE13E097C3A7D9E5963B60CC5B986CC9D0CFE6*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 7)) ? L_2: *(void**)L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3751));
		// RegisterType<KeyValuePair<TKey, TValue>, TValue>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3752));
		il2cpp_codegen_initobj((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_KeyValuePair_2_t3F565D5BF1E73B703991D168BFBB548B435C0291);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154);
		il2cpp_codegen_memcpy(L_4, V_2, SizeOf_TValue_t32093793BB2F9970D9899A713BFC02D06B550154);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3753));
		InvokerActionInvoker3< Property_2_tA7CE13E097C3A7D9E5963B60CC5B986CC9D0CFE6*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), NULL, (Property_2_tA7CE13E097C3A7D9E5963B60CC5B986CC9D0CFE6*)NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 10)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3753));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3754));
		return;
	}
}
// System.Void Unity.Properties.PropertyVisitor/AOT::RegisterList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TList>,TContainer,TList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA87F756132BB1670E9D3A24983463A41DBA8E7C8_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3733));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3734));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3735));
		// ((PropertyVisitor) default).VisitList<TContainer, TList, TElement>(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3736));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3737));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3737));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3738));
		return;
	}
}
// System.Void Unity.Properties.PropertyVisitor/AOT::RegisterSet<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TSet>,TContainer,TSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterSet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m79F51CF1288207CBE05B53371C9C8575AF9B6DFA_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3739));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3740));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3741));
		// ((PropertyVisitor) default).VisitSet<TContainer, TSet, TValue>(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3742));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3743));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3743));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3744));
		return;
	}
}
// System.Void Unity.Properties.PropertyVisitor/AOT::RegisterType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOT_RegisterType_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m245DF6B7DF6BCFE821C29CA751002329803E4080_gshared (Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
	ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3670));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 3671));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3672));
		// ((PropertyVisitor) default).IsExcluded(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3673));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_0 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3674));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		bool L_1;
		L_1 = GenericVirtualFuncInvoker3Invoker< bool, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3674));
		// ((IExcludePropertyAdapter) default).IsExcluded(ExcludeContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3675));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_2 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3676));
		ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973 L_3;
		L_3 = InvokerFuncInvoker2< ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3676));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3677));
		NullCheck((RuntimeObject*)NULL);
		bool L_4;
		L_4 = GenericInterfaceFuncInvoker3Invoker< bool, ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 9), (RuntimeObject*)NULL, (&V_0), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3677));
		// ((IExcludePropertyAdapter<TValue>) default).IsExcluded(ExcludeContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3678));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_5 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3679));
		ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973 L_6;
		L_6 = InvokerFuncInvoker2< ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3679));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3680));
		NullCheck((RuntimeObject*)NULL);
		bool L_7;
		L_7 = GenericInterfaceFuncInvoker3Invoker< bool, ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), (RuntimeObject*)NULL, (&V_0), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3680));
		// ((IExcludePropertyAdapter<TContainer, TValue>) default).IsExcluded(ExcludeContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3681));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_8 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3682));
		ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973 L_9;
		L_9 = InvokerFuncInvoker2< ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3682));
		V_0 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3683));
		NullCheck((RuntimeObject*)NULL);
		bool L_10;
		L_10 = InterfaceFuncInvoker3Invoker< bool, ExcludeContext_2_t018FF40F65F7D11FBAB3FBBCDAA9872EEB1F8973*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(0 /* System.Boolean Unity.Properties.IExcludePropertyAdapter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IsExcluded(Unity.Properties.ExcludeContext`2<TContainer,TValue>& modreq(System.Runtime.InteropServices.InAttribute),TContainer&,TValue&) */, il2cpp_rgctx_data(method->rgctx_data, 13), (RuntimeObject*)NULL, (&V_0), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3683));
		// ((IExcludeContravariantPropertyAdapter<TValue>) default).IsExcluded(ExcludeContext<TContainer>.FromProperty(default(PropertyVisitor), property), ref container, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3684));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_11 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3685));
		ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472 L_12;
		L_12 = InvokerFuncInvoker2< ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3685));
		V_1 = L_12;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2), SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3686));
		NullCheck((RuntimeObject*)NULL);
		bool L_14;
		L_14 = GenericInterfaceFuncInvoker3Invoker< bool, ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 19), (RuntimeObject*)NULL, (&V_1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_13: *(void**)L_13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3686));
		// ((IExcludeContravariantPropertyAdapter<TContainer, TValue>) default).IsExcluded(ExcludeContext<TContainer>.FromProperty(default(PropertyVisitor), property), ref container, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3687));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_15 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3688));
		ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472 L_16;
		L_16 = InvokerFuncInvoker2< ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3688));
		V_1 = L_16;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2), SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3689));
		NullCheck((RuntimeObject*)NULL);
		bool L_18;
		L_18 = InterfaceFuncInvoker3Invoker< bool, ExcludeContext_1_tBE1E7964EE853631A8C2B69CEF6990015E5A3472*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Boolean Unity.Properties.IExcludeContravariantPropertyAdapter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IsExcluded(Unity.Properties.ExcludeContext`1<TContainer>& modreq(System.Runtime.InteropServices.InAttribute),TContainer&,TValue) */, il2cpp_rgctx_data(method->rgctx_data, 21), (RuntimeObject*)NULL, (&V_1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_17: *(void**)L_17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3689));
		// ((PropertyVisitor) default).VisitProperty(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3690));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_19 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3691));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL);
		GenericVirtualActionInvoker3Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 23), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_19, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3691));
		// ((IVisitPropertyAdapter) default).Visit(VisitContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), new ReadOnlyAdapterCollection(new List<IPropertyVisitorAdapter>()).GetEnumerator(), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3692));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3693));
		List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* L_20 = (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A*)il2cpp_codegen_object_new(List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5(L_20, List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3693));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3694));
		ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 L_21;
		memset((&L_21), 0, sizeof(L_21));
		ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009((&L_21), L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3694));
		V_2 = L_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3695));
		Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 L_22;
		L_22 = ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3695));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_23 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3696));
		VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4 L_24;
		L_24 = InvokerFuncInvoker3< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 24)), il2cpp_rgctx_method(method->rgctx_data, 24), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_22, L_23);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3696));
		V_3 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3697));
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker3Invoker< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 27), (RuntimeObject*)NULL, (&V_3), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3697));
		// ((IVisitPropertyAdapter<TValue>) default).Visit(VisitContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), new ReadOnlyAdapterCollection(new List<IPropertyVisitorAdapter>()).GetEnumerator(), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3698));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3699));
		List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* L_25 = (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A*)il2cpp_codegen_object_new(List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5(L_25, List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3699));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3700));
		ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009((&L_26), L_25, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3700));
		V_2 = L_26;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3701));
		Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 L_27;
		L_27 = ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3701));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_28 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3702));
		VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4 L_29;
		L_29 = InvokerFuncInvoker3< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 24)), il2cpp_rgctx_method(method->rgctx_data, 24), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_27, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3702));
		V_3 = L_29;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3703));
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker3Invoker< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 30), (RuntimeObject*)NULL, (&V_3), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3703));
		// ((IVisitPropertyAdapter<TContainer, TValue>) default).Visit(VisitContext<TContainer, TValue>.FromProperty(default(PropertyVisitor), new ReadOnlyAdapterCollection(new List<IPropertyVisitorAdapter>()).GetEnumerator(), property), ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3704));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3705));
		List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* L_30 = (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A*)il2cpp_codegen_object_new(List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5(L_30, List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3705));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3706));
		ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 L_31;
		memset((&L_31), 0, sizeof(L_31));
		ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009((&L_31), L_30, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3706));
		V_2 = L_31;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3707));
		Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 L_32;
		L_32 = ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3707));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_33 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3708));
		VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4 L_34;
		L_34 = InvokerFuncInvoker3< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 24)), il2cpp_rgctx_method(method->rgctx_data, 24), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_32, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3708));
		V_3 = L_34;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3709));
		NullCheck((RuntimeObject*)NULL);
		InterfaceActionInvoker3Invoker< VisitContext_2_t1777ECDA8EB0F94E8BFD2C6CFE819E978C52B2A4*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(0 /* System.Void Unity.Properties.IVisitPropertyAdapter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Visit(Unity.Properties.VisitContext`2<TContainer,TValue>& modreq(System.Runtime.InteropServices.InAttribute),TContainer&,TValue&) */, il2cpp_rgctx_data(method->rgctx_data, 31), (RuntimeObject*)NULL, (&V_3), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3709));
		// ((IVisitContravariantPropertyAdapter<TValue>) default).Visit(VisitContext<TContainer>.FromProperty(default(PropertyVisitor), new ReadOnlyAdapterCollection(new List<IPropertyVisitorAdapter>()).GetEnumerator(), property), ref container, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3710));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3711));
		List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* L_35 = (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A*)il2cpp_codegen_object_new(List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5(L_35, List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3711));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3712));
		ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 L_36;
		memset((&L_36), 0, sizeof(L_36));
		ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009((&L_36), L_35, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3712));
		V_2 = L_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3713));
		Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 L_37;
		L_37 = ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3713));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_38 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3714));
		VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B L_39;
		L_39 = InvokerFuncInvoker3< VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 33)), il2cpp_rgctx_method(method->rgctx_data, 33), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_37, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3714));
		V_4 = L_39;
		il2cpp_codegen_memcpy(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2), SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3715));
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker3Invoker< VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 37), (RuntimeObject*)NULL, (&V_4), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_40: *(void**)L_40));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3715));
		// ((IVisitContravariantPropertyAdapter<TContainer, TValue>) default).Visit(VisitContext<TContainer>.FromProperty(default(PropertyVisitor), new ReadOnlyAdapterCollection(new List<IPropertyVisitorAdapter>()).GetEnumerator(), property), ref container, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3716));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3717));
		List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A* L_41 = (List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A*)il2cpp_codegen_object_new(List_1_tF3C54CC3B2B752786DD8C8945C6D9CBE85692F3A_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5(L_41, List_1__ctor_mD09C571D76CC9949CE195672647BB2F1927F7CE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3718));
		ReadOnlyAdapterCollection_t5816C2955339603967A0B2C5B24EF4ED14BDBA35 L_42;
		memset((&L_42), 0, sizeof(L_42));
		ReadOnlyAdapterCollection__ctor_m508D97A5BFFA6CB0BEB2608EE30CB982280CD009((&L_42), L_41, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3718));
		V_2 = L_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3719));
		Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8 L_43;
		L_43 = ReadOnlyAdapterCollection_GetEnumerator_m29A9D637942FAC77101E6939B5B39B9CF3CBDB64((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3719));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_44 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3720));
		VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B L_45;
		L_45 = InvokerFuncInvoker3< VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B, PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*, Enumerator_tCFF6F8D60D75BC6B56C7BB3B4C9E7CB5409C25A8, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 33)), il2cpp_rgctx_method(method->rgctx_data, 33), NULL, (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)NULL, L_43, L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3720));
		V_4 = L_45;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value2 : &___value2), SizeOf_TValue_t4A7F496BFB04342E9DB4F3287B5AABD605D9CDD3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3721));
		NullCheck((RuntimeObject*)NULL);
		InterfaceActionInvoker3Invoker< VisitContext_1_t6EF6ACD6947FA3DBDE7740425BFF346ED241473B*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void Unity.Properties.IVisitContravariantPropertyAdapter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Visit(Unity.Properties.VisitContext`1<TContainer>& modreq(System.Runtime.InteropServices.InAttribute),TContainer&,TValue) */, il2cpp_rgctx_data(method->rgctx_data, 39), (RuntimeObject*)NULL, (&V_4), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_46: *(void**)L_46));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3721));
		// ((IPropertyVisitor) default).Visit(property, ref container);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3722));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_47 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3723));
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker2Invoker< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 41), (RuntimeObject*)NULL, L_47, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3723));
		// ((IPropertyBagVisitor) default).Visit(null, ref container);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3724));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3725));
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker2Invoker< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 42), (RuntimeObject*)NULL, (RuntimeObject*)NULL, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___container1 : &___container1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3725));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 3726));
		return;
	}
}
// System.Void Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyGetterVisitor::VisitProperty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalConstraintPropertyGetterVisitor_VisitProperty_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9240101BDB7CB1A806349DEA18E74924F713ADCD_gshared (OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5F72849AAA5FBF6C7FE8545E131868225252A138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2998));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2999));
	OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199* G_B2_0 = NULL;
	OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	OptionalConstraintPropertyGetterVisitor_t52CB5D22EC07D07506ADE31D4151189928213199* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3000));
		// var previousPropertyPath = m_PropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3001));
		String_t* L_0 = (String_t*)__this->___m_PropertyPath_3;
		V_0 = L_0;
		// m_PropertyPath = string.IsNullOrEmpty(m_PropertyPath) ? property.Name : $"{m_PropertyPath}.{property.Name}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3002));
		String_t* L_1 = (String_t*)__this->___m_PropertyPath_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3003));
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3003));
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->___m_PropertyPath_3;
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_4 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3004));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3004));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3005));
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3005));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002e:
	{
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_7 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3006));
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3006));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_PropertyPath_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_PropertyPath_3), (void*)G_B3_0);
		// var name = property.Name;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3007));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_9 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3008));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3008));
		V_1 = L_10;
		// if (property.HasAttribute<HideInInspector>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3009));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_11 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3010));
		NullCheck(L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3010));
		V_3 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3011));
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3012));
		goto IL_008d;
	}

IL_004c:
	{
		// if (k_IgnoredProperties.Contains(name))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3013));
		il2cpp_codegen_runtime_class_init_inline(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_StaticFields*)il2cpp_codegen_static_fields_for(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var))->___k_IgnoredProperties_3;
		String_t* L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3014));
		bool L_16;
		L_16 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_14, L_15, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3014));
		V_4 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3015));
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_005f;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3016));
		goto IL_008d;
	}

IL_005f:
	{
		// if (OptionalConstraintProperties.TryGetValue(m_PropertyPath, out var propertyPath))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3017));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)__this->___OptionalConstraintProperties_1;
		String_t* L_19 = (String_t*)__this->___m_PropertyPath_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3018));
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_18, L_19, (&V_2), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3018));
		V_5 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3019));
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0086;
		}
	}
	{
		// OptionalConstraintBoolProperties[propertyPath] = property;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3020));
		Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* L_22 = (Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737*)__this->___OptionalConstraintBoolProperties_2;
		String_t* L_23 = V_2;
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_24 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3021));
		NullCheck(L_22);
		Dictionary_2_set_Item_m5F72849AAA5FBF6C7FE8545E131868225252A138(L_22, L_23, (RuntimeObject*)L_24, Dictionary_2_set_Item_m5F72849AAA5FBF6C7FE8545E131868225252A138_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3021));
	}

IL_0086:
	{
		// m_PropertyPath = previousPropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3022));
		String_t* L_25 = V_0;
		__this->___m_PropertyPath_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertyPath_3), (void*)L_25);
	}

IL_008d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3023));
		return;
	}
}
// System.Void Unity.AR.Companion.Core.ProxyListViewData/OptionalConstraintPropertyPathGetterVisitor::VisitProperty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalConstraintPropertyPathGetterVisitor_VisitProperty_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEF7D1E60A4B6376561FF8A07FE36052F58975CD5_gshared (OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2972));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2973));
	OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3* G_B2_0 = NULL;
	OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	OptionalConstraintPropertyPathGetterVisitor_tFD07A1A4D8B57DF48D31FB5EA5D2839A340607E3* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2974));
		// var previousPropertyPath = m_PropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2975));
		String_t* L_0 = (String_t*)__this->___m_PropertyPath_2;
		V_0 = L_0;
		// m_PropertyPath = string.IsNullOrEmpty(m_PropertyPath) ? property.Name : $"{m_PropertyPath}.{property.Name}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2976));
		String_t* L_1 = (String_t*)__this->___m_PropertyPath_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2977));
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2977));
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->___m_PropertyPath_2;
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_4 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2978));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2978));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2979));
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2979));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002e:
	{
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_7 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2980));
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2980));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_PropertyPath_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_PropertyPath_2), (void*)G_B3_0);
		// var name = property.Name;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2981));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_9 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2982));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2982));
		V_1 = L_10;
		// if (property.HasAttribute<HideInInspector>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2983));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_11 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2984));
		NullCheck(L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2984));
		V_2 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2985));
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2986));
		goto IL_0064;
	}

IL_004c:
	{
		// if (k_IgnoredProperties.Contains(name))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2987));
		il2cpp_codegen_runtime_class_init_inline(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_StaticFields*)il2cpp_codegen_static_fields_for(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var))->___k_IgnoredProperties_3;
		String_t* L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2988));
		bool L_16;
		L_16 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_14, L_15, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2988));
		V_3 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2989));
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2990));
		goto IL_0064;
	}

IL_005d:
	{
		// m_PropertyPath = previousPropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2991));
		String_t* L_18 = V_0;
		__this->___m_PropertyPath_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertyPath_2), (void*)L_18);
	}

IL_0064:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 2992));
		return;
	}
}
// System.Boolean Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::IsCollapsedProperty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyGetterVisitor_IsCollapsedProperty_TisIl2CppFullySharedGenericAny_m74B29C504E232747371AAF51DD08C7D8245DBA55_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3079));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3080));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3081));
		// var propertyType = typeof(TValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3082));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3083));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3083));
		V_0 = L_1;
		// if (propertyType == typeof(Vector2) || propertyType == typeof(Vector3) || propertyType == typeof(Vector4) || propertyType == typeof(Quaternion))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3084));
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3085));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3085));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3086));
		bool L_5;
		L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_2, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3086));
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3087));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3087));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3088));
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3088));
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		Type_t* L_10 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3089));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3089));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3090));
		bool L_13;
		L_13 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_10, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3090));
		if (L_13)
		{
			goto IL_0054;
		}
	}
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3091));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3091));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3092));
		bool L_17;
		L_17 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_14, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3092));
		G_B5_0 = ((int32_t)(L_17));
		goto IL_0055;
	}

IL_0054:
	{
		G_B5_0 = 1;
	}

IL_0055:
	{
		V_1 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3093));
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_005d;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3094));
		V_2 = (bool)1;
		goto IL_00dc;
	}

IL_005d:
	{
		// if (propertyType == typeof(Bounds))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3095));
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3096));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3096));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3097));
		bool L_22;
		L_22 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_19, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3097));
		V_3 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3098));
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0075;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3099));
		V_2 = (bool)1;
		goto IL_00dc;
	}

IL_0075:
	{
		// if (propertyType == typeof(Color) || propertyType == typeof(Color32))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3100));
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3101));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3101));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3102));
		bool L_27;
		L_27 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_24, L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3102));
		if (L_27)
		{
			goto IL_0099;
		}
	}
	{
		Type_t* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3103));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3103));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3104));
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3104));
		G_B12_0 = ((int32_t)(L_31));
		goto IL_009a;
	}

IL_0099:
	{
		G_B12_0 = 1;
	}

IL_009a:
	{
		V_4 = (bool)G_B12_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3105));
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00a4;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3106));
		V_2 = (bool)1;
		goto IL_00dc;
	}

IL_00a4:
	{
		// if (propertyType == typeof(LayerMask))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3107));
		Type_t* L_33 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3108));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3108));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3109));
		bool L_36;
		L_36 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_33, L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3109));
		V_5 = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3110));
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_00be;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3111));
		V_2 = (bool)1;
		goto IL_00dc;
	}

IL_00be:
	{
		// if (typeof(UnityObject).IsAssignableFrom(propertyType))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3112));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3113));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3113));
		Type_t* L_40 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3114));
		NullCheck(L_39);
		bool L_41;
		L_41 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3114));
		V_6 = L_41;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3115));
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3116));
		V_2 = (bool)1;
		goto IL_00dc;
	}

IL_00d8:
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3117));
		V_2 = (bool)0;
		goto IL_00dc;
	}

IL_00dc:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3118));
		bool L_43 = V_2;
		return L_43;
	}
}
// System.Void Unity.AR.Companion.Core.ProxyListViewData/PropertyGetterVisitor::VisitProperty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGetterVisitor_VisitProperty_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1FCB634B7AAA7FE812346EE0C883D1033A0215F6_gshared (PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCAADFA3C2CD3570870C194F7FF092B7F17DF196B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t88BDB9BB07BFAD063DAE34D0914745E46D230375_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m054BACEEE80BA5CD2B4D790F1C53FCC922771BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC04CF0EA727066342EAC0BC8EC5A5BAB9B6289FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedListViewItemData_2_get_children_mD1D0505A3D22B1249087234D4CA4E4473C2980EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedListViewItemData_2_set_children_mCCBB24AB8F8B8D1AB714A0E2FF414440CDB46371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791* V_4 = NULL;
	List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* V_5 = NULL;
	ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3029));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3030));
	PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7* G_B2_0 = NULL;
	PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	PropertyGetterVisitor_t14FBC05F734158B92729AB828D6833737711BCA7* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3031));
		// var previousPropertyPath = m_PropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3032));
		String_t* L_0 = (String_t*)__this->___m_PropertyPath_8;
		V_0 = L_0;
		// m_PropertyPath = string.IsNullOrEmpty(m_PropertyPath) ? property.Name : $"{m_PropertyPath}.{property.Name}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3033));
		String_t* L_1 = (String_t*)__this->___m_PropertyPath_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3034));
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3034));
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->___m_PropertyPath_8;
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_4 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3035));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3035));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3036));
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3036));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002e:
	{
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_7 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3037));
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3037));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_PropertyPath_8 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_PropertyPath_8), (void*)G_B3_0);
		// var name = property.Name;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3038));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_9 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3039));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0Invoker< String_t* >::Invoke(19 /* System.String Unity.Properties.Property`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Name() */, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3039));
		V_1 = L_10;
		// if (property.HasAttribute<HideInInspector>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3040));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_11 = ___property0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3041));
		NullCheck(L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3041));
		V_7 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3042));
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3043));
		goto IL_014c;
	}

IL_0051:
	{
		// if (k_IgnoredProperties.Contains(name))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3044));
		il2cpp_codegen_runtime_class_init_inline(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_StaticFields*)il2cpp_codegen_static_fields_for(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var))->___k_IgnoredProperties_3;
		String_t* L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3045));
		bool L_16;
		L_16 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_14, L_15, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3045));
		V_8 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3046));
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3047));
		goto IL_014c;
	}

IL_0067:
	{
		// if (OptionalConstraintProperties.ContainsKey(m_PropertyPath))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3048));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)__this->___OptionalConstraintProperties_6;
		String_t* L_19 = (String_t*)__this->___m_PropertyPath_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3049));
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_18, L_19, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3049));
		V_9 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3050));
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3051));
		goto IL_014c;
	}

IL_0083:
	{
		// var depth = ParentData.m_Depth;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3052));
		ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* L_22 = (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)__this->___ParentData_1;
		NullCheck(L_22);
		int32_t L_23 = (int32_t)L_22->___m_Depth_21;
		V_2 = L_23;
		// OptionalConstraintBoolProperties.TryGetValue(m_PropertyPath, out var optionalConstraintProperty);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3053));
		Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737* L_24 = (Dictionary_2_t5D7ADC436BF1D50A92DD91CE829B1F4E6FD30737*)__this->___OptionalConstraintBoolProperties_7;
		String_t* L_25 = (String_t*)__this->___m_PropertyPath_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3054));
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_TryGetValue_mCAADFA3C2CD3570870C194F7FF092B7F17DF196B(L_24, L_25, (&V_3), Dictionary_2_TryGetValue_mCAADFA3C2CD3570870C194F7FF092B7F17DF196B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3054));
		// var propertyData = PropertyToPropertyData(property, ref container, AutoIncrement++,
		//     m_PropertyPath, PrefabMetadata, TransformPath, depth + 1, ComponentIndex, optionalConstraintProperty);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3055));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_27 = ___property0;
		Il2CppFullySharedGenericAny* L_28 = ___container1;
		int32_t L_29 = (int32_t)__this->___AutoIncrement_2;
		V_10 = L_29;
		int32_t L_30 = V_10;
		__this->___AutoIncrement_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_10;
		String_t* L_32 = (String_t*)__this->___m_PropertyPath_8;
		PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78* L_33 = (PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78*)__this->___PrefabMetadata_3;
		String_t* L_34 = (String_t*)__this->___TransformPath_4;
		int32_t L_35 = V_2;
		int32_t L_36 = (int32_t)__this->___ComponentIndex_5;
		RuntimeObject* L_37 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3056));
		il2cpp_codegen_runtime_class_init_inline(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99_il2cpp_TypeInfo_var);
		ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791* L_38;
		L_38 = InvokerFuncInvoker9< ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791*, RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t, String_t*, PrefabMetadata_tD328A361A464003F887B6CFCC1F764314FD82B78*, String_t*, int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (RuntimeObject*)L_27, L_28, L_31, L_32, L_33, L_34, ((int32_t)il2cpp_codegen_add(L_35, 1)), L_36, L_37);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3056));
		V_4 = L_38;
		// var children = ParentData.children;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3057));
		ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* L_39 = (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)__this->___ParentData_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3058));
		NullCheck((NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619*)L_39);
		List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* L_40;
		L_40 = NestedListViewItemData_2_get_children_mD1D0505A3D22B1249087234D4CA4E4473C2980EA((NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619*)L_39, NestedListViewItemData_2_get_children_mD1D0505A3D22B1249087234D4CA4E4473C2980EA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3058));
		V_5 = L_40;
		// if (children == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3059));
		List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* L_41 = V_5;
		V_11 = (bool)((((RuntimeObject*)(List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B*)L_41) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3060));
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_010b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3061));
		// children = new List<ProxyListViewData>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3062));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3063));
		List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* L_43 = (List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B*)il2cpp_codegen_object_new(List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		List_1__ctor_mC04CF0EA727066342EAC0BC8EC5A5BAB9B6289FB(L_43, List_1__ctor_mC04CF0EA727066342EAC0BC8EC5A5BAB9B6289FB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3063));
		V_5 = L_43;
		// ParentData.children = children;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3064));
		ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* L_44 = (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)__this->___ParentData_1;
		List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* L_45 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3065));
		NullCheck((NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619*)L_44);
		NestedListViewItemData_2_set_children_mCCBB24AB8F8B8D1AB714A0E2FF414440CDB46371((NestedListViewItemData_2_tF60F15DDCE465E8445525746068DE2E941DB6619*)L_44, L_45, NestedListViewItemData_2_set_children_mCCBB24AB8F8B8D1AB714A0E2FF414440CDB46371_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3065));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3066));
	}

IL_010b:
	{
		// children.Add(propertyData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3067));
		List_1_t4FA88FE7CA6A808426C8B78A9557EA2E41EEC02B* L_46 = V_5;
		ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791* L_47 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3068));
		NullCheck(L_46);
		List_1_Add_m054BACEEE80BA5CD2B4D790F1C53FCC922771BE9_inline(L_46, (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)L_47, List_1_Add_m054BACEEE80BA5CD2B4D790F1C53FCC922771BE9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3068));
		// var previousParent = ParentData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3069));
		ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* L_48 = (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)__this->___ParentData_1;
		V_6 = L_48;
		// ParentData = propertyData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3070));
		ProxyListViewPropertyData_1_t71197D05140B7958E7EA2CC7ACDE7FB4AD59F791* L_49 = V_4;
		__this->___ParentData_1 = (ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParentData_1), (void*)(ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99*)L_49);
		// if (!IsCollapsedProperty<TValue>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3071));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3072));
		bool L_50;
		L_50 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3072));
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3073));
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_013d;
		}
	}
	{
		// base.VisitProperty(property, ref container, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3074));
		Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* L_52 = ___property0;
		Il2CppFullySharedGenericAny* L_53 = ___container1;
		Il2CppFullySharedGenericAny* L_54 = ___value2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3075));
		NullCheck((PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)__this);
		InvokerActionInvoker3< Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), (PropertyVisitor_tE6D8DB5E95DA6B085A2945AA1A63C0297CD9919D*)__this, L_52, L_53, L_54);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3075));
	}

IL_013d:
	{
		// ParentData = previousParent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3076));
		ProxyListViewData_tB1EEF54E9BEB99C0F651054ACDC380C0950B8A99* L_55 = V_6;
		__this->___ParentData_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParentData_1), (void*)L_55);
		// m_PropertyPath = previousPropertyPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3077));
		String_t* L_56 = V_0;
		__this->___m_PropertyPath_8 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertyPath_8), (void*)L_56);
	}

IL_014c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AR_Companion_Core + 3078));
		return;
	}
}
// System.Void Unity.RuntimeSceneSerialization.SceneSerialization/CollectionInitializationVisitor::VisitProperty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionInitializationVisitor_VisitProperty_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m25ED7F43FBD68EBF1D2A8EACEC0880AEFC234DD0_gshared (CollectionInitializationVisitor_t5B17D4E5490DBCD62120567C259146100C7E9106* __this, Property_2_tBB37E63A428EF4E205659DA52AF4EECE276C3CC6* ___property0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___container1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionInitializationVisitor_t5B17D4E5490DBCD62120567C259146100C7E9106_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TValue
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7);
	const Il2CppFullySharedGenericAny L_26 = L_1;
	const Il2CppFullySharedGenericAny L_35 = L_1;
	const Il2CppFullySharedGenericAny L_43 = L_1;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Type_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___property0), (&___container1), (&___value2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 614));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 615));
		// if (value != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 616));
		Il2CppFullySharedGenericAny* L_0 = ___value2;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 617));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 618));
		// if (!typeof(UnityObject).IsAssignableFrom(typeof(TValue)) && TypeTraits<TValue>.IsContainer)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 619));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 620));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 620));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 621));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 621));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 622));
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 622));
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 623));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 4));
		bool L_9;
		L_9 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 623));
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 0;
	}

IL_0037:
	{
		V_2 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 624));
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// PropertyContainer.Accept(this, ref value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 625));
		Il2CppFullySharedGenericAny* L_11 = ___value2;
		il2cpp_codegen_initobj((&V_3), sizeof(VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF));
		VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF L_12 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 626));
		InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, VisitParameters_t550A7AB6B2E264781D4DB9258C44CD41F38C84DF >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (RuntimeObject*)__this, L_11, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 626));
	}

IL_004c:
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 627));
		goto IL_00e5;
	}

IL_0051:
	{
		// var valueType = typeof(TValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 628));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 629));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 629));
		V_0 = L_14;
		// if (valueType.IsArray)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 630));
		Type_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 631));
		NullCheck(L_15);
		bool L_16;
		L_16 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 631));
		V_4 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 632));
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0096;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 633));
		// var elementType = valueType.GetElementType();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 634));
		Type_t* L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 635));
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetElementType() */, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 635));
		V_5 = L_19;
		// if (elementType == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 636));
		Type_t* L_20 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 637));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_20, (Type_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 637));
		V_6 = L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 638));
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0081;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 639));
		goto IL_00e5;
	}

IL_0081:
	{
		// value = (TValue)(object)Array.CreateInstance(elementType, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 640));
		Il2CppFullySharedGenericAny* L_23 = ___value2;
		Type_t* L_24 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 641));
		RuntimeArray* L_25;
		L_25 = Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C(L_24, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 641));
		void* L_27 = UnBox_Any((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1), L_26);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_23, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_27))), SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_23, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_27))));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 642));
		goto IL_00e5;
	}

IL_0096:
	{
		// if (valueType == typeof(string))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 643));
		Type_t* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 644));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 644));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 645));
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 645));
		V_7 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 646));
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00bf;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 647));
		// value = (TValue) (object) string.Empty;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 648));
		Il2CppFullySharedGenericAny* L_33 = ___value2;
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		void* L_36 = UnBox_Any((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1), L_35);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_36))), SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_36))));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 649));
		goto IL_00e5;
	}

IL_00bf:
	{
		// if (!typeof(IList).IsAssignableFrom(valueType))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 650));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 651));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 651));
		Type_t* L_39 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 652));
		NullCheck(L_38);
		bool L_40;
		L_40 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_38, L_39);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 652));
		V_8 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 653));
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_00da;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 654));
		goto IL_00e5;
	}

IL_00da:
	{
		// value = Activator.CreateInstance<TValue>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 655));
		Il2CppFullySharedGenericAny* L_42 = ___value2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 656));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (Il2CppFullySharedGenericAny*)L_43);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 656));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_42, L_43, SizeOf_TValue_t5E9311DEE68E63B549963A58D9B9090DA4FB66B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_42, (void*)L_43);
	}

IL_00e5:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RuntimeSceneSerialization + 657));
		return;
	}
}
// System.Void Unity.Properties.TypeUtility/TypeConstructorVisitor::Visit<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m72D9C93FF62C0F52A52F1DFC9C3C0991D4919F4F_gshared (TypeConstructorVisitor_t08E52DE544DBA309CDF3825CD9802C7670FDC3D1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_t08E52DE544DBA309CDF3825CD9802C7670FDC3D1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_tD4BA2582552F7A98C29ADFDBA3204F1FE67BB35E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 6648));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Properties + 6649));
	{
		// => TypeConstructor = CreateTypeConstructor<TContainer>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 6650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 6651));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_tD4BA2582552F7A98C29ADFDBA3204F1FE67BB35E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Properties + 6651));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_7 = L_3;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_2, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26657));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26658));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26659));
		// var structSize = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26661));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26661));
		V_0 = L_0;
		// T value = UnsafeUtility.ReadArrayElement<T>(Ptr + Offset, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26662));
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26663));
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, (Il2CppFullySharedGenericStruct*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26663));
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		// Offset += structSize;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26664));
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// return value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26665));
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_002d;
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26666));
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26648));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26649));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26650));
		// var structSize = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26651));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26652));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26652));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26653));
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		Il2CppFullySharedGenericStruct* L_3 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26654));
		InvokerActionInvoker2< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26654));
		// Offset += structSize;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26655));
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26656));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	void* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0), (&___allocator1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26677));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26678));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26679));
		// var length = ReadNext<int>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26680));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26681));
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26681));
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26682));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26683));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26683));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26684));
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26685));
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26685));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26686));
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26687));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26688));
		// var ptr = ReadNext(size);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26689));
		int32_t L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26690));
		void* L_10;
		L_10 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26690));
		V_3 = L_10;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26691));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___value0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26692));
		void* L_13;
		L_13 = InvokerFuncInvoker1< void*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26692));
		void* L_14 = V_3;
		int32_t L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26693));
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_13, L_14, ((int64_t)L_15), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26693));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26694));
	}

IL_0044:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26695));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___length0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26696));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26697));
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26698));
		// length = ReadNext<int>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26699));
		int32_t* L_0 = ___length0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26700));
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26700));
		*((int32_t*)L_0) = (int32_t)L_1;
		// return (length == 0) ? null : ReadNext(length * UnsafeUtility.SizeOf<T>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26701));
		int32_t* L_2 = ___length0;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		int32_t* L_4 = ___length0;
		int32_t L_5 = *((int32_t*)L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26702));
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26702));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26703));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26703));
		G_B3_0 = ((uintptr_t)(intptr_t)(L_7));
		goto IL_001f;
	}

IL_001d:
	{
		G_B3_0 = ((uintptr_t)0);
	}

IL_001f:
	{
		V_0 = (void*)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26704));
		void* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___length0, method);
	return _returnValue;
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25533));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25534));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25535));
		// return IndexOf(value) != -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25536));
		il2cpp_codegen_memcpy(L_0, ___value0, SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25537));
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25537));
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25538));
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25527));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25528));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25529));
		// return NativeArrayExtensions.IndexOf<T, T>(Ptr, Length, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25530));
		void* L_0 = (void*)__this->___Ptr_0;
		int32_t L_1 = (int32_t)__this->___Length_1;
		il2cpp_codegen_memcpy(L_2, ___value0, SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25531));
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25531));
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25532));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25545));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25546));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25547));
		// var idx = Interlocked.Increment(ref ListData->Length) - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25548));
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = (UnsafeList_t821320446016467933FF194D701C7EDDC23E538B*)__this->___ListData_1;
		NullCheck(L_0);
		int32_t* L_1 = (int32_t*)(&L_0->___Length_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25549));
		int32_t L_2;
		L_2 = Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25549));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// UnsafeUtility.WriteArrayElement(Ptr, idx, value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25550));
		void* L_3 = (void*)__this->___Ptr_0;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, ___value0, SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25551));
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25551));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25552));
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___list0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25570));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25571));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25572));
		// AddRangeNoResize(UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>(), list.Ptr, list.Length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25573));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25574));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25574));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25575));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25575));
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_2 = ___list0;
		void* L_3 = (void*)L_2.___Ptr_0;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_4 = ___list0;
		int32_t L_5 = (int32_t)L_4.___Length_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25576));
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25576));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25577));
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_AdjustorThunk (RuntimeObject* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476(_thisAdjusted, ___list0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___ptr0), (&___length1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25562));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25563));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25564));
		// AddRangeNoResize(UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>(), ptr, length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25565));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25566));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25566));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25567));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25567));
		void* L_2 = ___ptr0;
		int32_t L_3 = ___length1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25568));
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25568));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25569));
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_AdjustorThunk (RuntimeObject* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727(_thisAdjusted, ___ptr0, ___length1, method);
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31396));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31397));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31398));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31400));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31400));
		V_0 = L_0;
		// byte* ptr = m_CurrentPtr;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31401));
		uint8_t* L_1 = (uint8_t*)__this->___m_CurrentPtr_2;
		V_1 = L_1;
		// if (ptr + size > m_CurrentBlockEnd)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31402));
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = (uint8_t*)__this->___m_CurrentBlockEnd_3;
		V_2 = (bool)((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) <= ((uintptr_t)L_4)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31403));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31404));
		// ptr = m_CurrentBlock->Next->Data;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31405));
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)__this->___m_CurrentBlock_1;
		NullCheck(L_6);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)L_6->___Next_0;
		NullCheck(L_7);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_8 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_7->___Data_1);
		uint8_t* L_9 = (uint8_t*)(&L_8->___FixedElementField_0);
		V_1 = (uint8_t*)((uintptr_t)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31406));
	}

IL_0036:
	{
		// return ref UnsafeUtility.AsRef<T>(ptr);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31407));
		uint8_t* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31408));
		Il2CppFullySharedGenericStruct* L_11;
		L_11 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31408));
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31409));
		Il2CppFullySharedGenericStruct* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31387));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31388));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31389));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31391));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31391));
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(ReadUnsafePtr(size));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31392));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31393));
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31394));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31394));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31395));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31302));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31303));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31304));
		// int size = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31306));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31306));
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(Allocate(size));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31307));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31308));
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31309));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31309));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31310));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___value0 : &___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31296));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31297));
		// ref T dst = ref Allocate<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31298));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31299));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31299));
		V_0 = L_0;
		// dst = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31300));
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___value0, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31301));
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m15C4FDE6E1F4EDDCDCCC914EB0BD7856B68EB3C8_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(U)
	const uint32_t SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_t8E97BE6289E5053ACF769ADDDA488673EDFC0CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t8E97BE6289E5053ACF769ADDDA488673EDFC0CD7);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534);
	memset(V_0, 0, SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___dptr0), (&___base_addr1), (&___indexPtr2), (&___scale3), (&___n4), (&___mask5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20029));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20030));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20031));
		// U maskZero = default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20032));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534);
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20033));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20034));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20035));
		// long baseIndex = indexPtr[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20036));
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20037));
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20038));
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20039));
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tA8B02C53D2CC2BA60C05A2749015F4C2CD780534);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20040));
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20040));
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20041));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20042));
		// dptr[i] = *mem_addr;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20043));
		Il2CppFullySharedGenericStruct* L_15 = ___dptr0;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t8E97BE6289E5053ACF769ADDDA488673EDFC0CD7;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t8E97BE6289E5053ACF769ADDDA488673EDFC0CD7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t8E97BE6289E5053ACF769ADDDA488673EDFC0CD7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20044));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20045));
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20046));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20047));
		int32_t L_21 = V_1;
		int32_t L_22 = ___n4;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20048));
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20049));
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mBC9DCFC116D53374A715A89FD4872E5728CFB5EF_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(U)
	const uint32_t SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_tA328C766766977F5745FCE7C5F17A30C144F0646 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_tA328C766766977F5745FCE7C5F17A30C144F0646);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C);
	memset(V_0, 0, SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___dptr0), (&___base_addr1), (&___indexPtr2), (&___scale3), (&___n4), (&___mask5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20008));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20009));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20010));
		// U maskZero = default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20011));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C);
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20012));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20013));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20014));
		// long baseIndex = indexPtr[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20015));
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20016));
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20017));
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20018));
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tB8EFAA22899C508DC2C74CAB0ABCAF8EC7CCCE1C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20019));
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20019));
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20020));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20021));
		// dptr[i] = *mem_addr;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20022));
		Il2CppFullySharedGenericStruct* L_15 = ___dptr0;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_tA328C766766977F5745FCE7C5F17A30C144F0646;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_tA328C766766977F5745FCE7C5F17A30C144F0646);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_tA328C766766977F5745FCE7C5F17A30C144F0646);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20023));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20024));
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20025));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20026));
		int32_t L_21 = V_1;
		int32_t L_22 = ___n4;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20027));
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20028));
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m144397445D2584C500CBBB56EB88F7D4BC6012AA_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	memset(V_7, 0, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	memset(V_9, 0, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	memset(V_43, 0, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___alen1), (&___b2), (&___blen3), (&___len4), (&___imm85), (&___allOnes6));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), V_7, V_9, (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25131));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25132));
		// bool aInvalid = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25133));
		V_0 = (bool)0;
		// bool bInvalid = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25134));
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25135));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25136));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25137));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25138));
		// T aCh = a[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25139));
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		// if (i == alen)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25140));
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25141));
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25142));
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25143));
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25144));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25145));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25146));
		// T bCh = b[j];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25147));
		Il2CppFullySharedGenericStruct* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		// if (j == blen)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25148));
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25149));
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25150));
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25151));
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25152));
		int32_t L_15 = V_13;
		V_12 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25153));
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25154));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25155));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25155));
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25156));
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_17, L_18, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25156));
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25157));
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25158));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25159));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25160));
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25161));
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25162));
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25163));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25164));
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25165));
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25166));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25167));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25168));
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25169));
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25170));
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25171));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25172));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25172));
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25173));
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_32, L_33, L_34);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25173));
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25174));
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25175));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25176));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25176));
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25177));
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_36, L_37, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25177));
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25178));
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25179));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25180));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25181));
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25182));
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25183));
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25184));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25185));
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25186));
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25187));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25188));
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25189));
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25191));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25191));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25192));
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_49, L_50, L_51);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25192));
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25193));
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25194));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25195));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25196));
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25197));
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25198));
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25199));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25200));
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25201));
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25202));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25203));
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25204));
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25206));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25206));
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25207));
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_62, L_63, L_64);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25207));
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25208));
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25209));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25210));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25211));
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25212));
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25213));
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25214));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25215));
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25216));
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25217));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25218));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25219));
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25220));
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25221));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25221));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25222));
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25223));
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25224));
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25225));
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25226));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25227));
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25228));
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25229));
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25230));
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25231));
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25232));
		int32_t L_87 = V_30;
		V_29 = L_87;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25233));
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25234));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25235));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25236));
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25237));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25238));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25239));
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25240));
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25241));
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25241));
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25242));
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25243));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25244));
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25245));
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25246));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25247));
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25248));
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25249));
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25250));
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25251));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25252));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25253));
		// for (j = 0; j < len; j += 2)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25254));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25255));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25256));
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25257));
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25258));
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25258));
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25259));
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25259));
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25260));
		// for (j = 0; j < len; j += 2)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25261));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25262));
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25263));
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25264));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25265));
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25266));
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25267));
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25268));
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25269));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25270));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25271));
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25272));
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25273));
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25273));
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25274));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25275));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25276));
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25277));
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25278));
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25279));
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25280));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25281));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25282));
		// int k = i;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25283));
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25284));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25285));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25286));
		// if (!boolRes.GetBit(j, k))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25287));
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25288));
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25288));
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25289));
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25290));
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25291));
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25292));
		// for (j = 0; j < len - i; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25293));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25294));
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25295));
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25296));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25297));
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25298));
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25299));
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25300));
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25301));
		V_5 = 0;
		// bInvalid = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25302));
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25303));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25304));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25305));
		// if ((imm8 & (1 << 4)) != 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25306));
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25307));
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25308));
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25309));
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25310));
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25311));
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25312));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25313));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25313));
		Il2CppFullySharedGenericStruct* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t6BB39A169A52CCE3051912849D566BD46FC52885);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25314));
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_149, L_153, L_154);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25314));
		V_42 = L_155;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25315));
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25316));
		// bInvalid = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25317));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25318));
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25319));
		bool L_157 = V_1;
		V_44 = L_157;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25320));
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25321));
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25322));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m623D7D90CF5C4F49561F494A9C32081DD7F354A0_gshared (Il2CppFullySharedGenericStruct* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
	memset(V_2, 0, SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___ptr0), (&___max1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25112));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25113));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25114));
		// for (int i = 0; i < max; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25115));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25116));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25117));
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25118));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25119));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25119));
		Il2CppFullySharedGenericStruct* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t63E6B6BEFF51E37297E09A9AA8B478D7D20A2D9C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25120));
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_0, L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25120));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25121));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25122));
		// return i;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25123));
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25124));
		// for (int i = 0; i < max; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25125));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25126));
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25127));
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25128));
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25129));
		int32_t L_14 = V_3;
		return L_14;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_mC869A3CFD3D5CF5C9F469CE9B9D1AE51E3F72EF7_gshared (int32_t ___len0, int32_t ___imm81, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___len0), (&___imm81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___allOnesT2 : &___allOnesT2), (&___intRes23));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25031));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25032));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25033));
		// v128 result = default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25034));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25035));
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25036));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25037));
		// T* maskDst = (T*)&result.Byte0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25038));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25039));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25040));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25041));
		// if ((intRes2 & (1 << i)) != 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25042));
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25043));
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25044));
		// maskDst[i] = allOnesT;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25045));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5;
		il2cpp_codegen_memcpy(L_9, ___allOnesT2, SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25046));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25047));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25048));
		// maskDst[i] = default(T);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25049));
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t2AFE843271B906CDE54B3B0BF800479A52BCF5C5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25050));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25051));
		// for (int i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25052));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25053));
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25054));
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25055));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25056));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25057));
		// result.SInt0 = intRes2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25058));
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25059));
	}

IL_0078:
	{
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25060));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25061));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m59F6C547678A3A1D94AA2BBCB654F5FB11449926_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___alen1), (&___b2), (&___blen3), (&___len4), (&___imm85), (&___allOnes6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___allOnesT7 : &___allOnesT7));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25072));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25073));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25074));
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25075));
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25076));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25076));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25077));
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25078));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25078));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25079));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m4EA2B4492AFC330D2C79274C4997E02CCAC6DD36_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t5A67116D48D8F27477833BDD6E69035D636D8022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t5A67116D48D8F27477833BDD6E69035D636D8022);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___alen1), (&___b2), (&___blen3), (&___len4), (&___imm85), (&___allOnes6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___allOnesT7 : &___allOnesT7));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25023));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25024));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25025));
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25026));
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25027));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25027));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25028));
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		il2cpp_codegen_memcpy(L_10, ___allOnesT7, SizeOf_T_t5A67116D48D8F27477833BDD6E69035D636D8022);
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25029));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25029));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25030));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_mAD3B4797476A709E96EC682B31B348C0EE26C982_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1), (&___len2), (&___imm83), (&___allOnes4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___allOnesT5 : &___allOnesT5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25062));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25063));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25064));
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25065));
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25066));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25066));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25067));
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25067));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25068));
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25068));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25069));
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25070));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25070));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25071));
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m12A1B115D1B758A03B13F92CF08B48BD2C705D8D_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDCA48B2076F9BDABA81830AEFE6E80DAC6D6EABE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tDCA48B2076F9BDABA81830AEFE6E80DAC6D6EABE);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1), (&___len2), (&___imm83), (&___allOnes4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___allOnesT5 : &___allOnesT5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25013));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25014));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25015));
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25016));
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25017));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25017));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25018));
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25018));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25019));
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25019));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25020));
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		il2cpp_codegen_memcpy(L_14, ___allOnesT5, SizeOf_T_tDCA48B2076F9BDABA81830AEFE6E80DAC6D6EABE);
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25021));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25021));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25022));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2314));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2315));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2316));
		// if (status != AsyncConversionStatus.Ready)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2317));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2318));
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2318));
		V_2 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2319));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// throw new InvalidOperationException("Async request is not ready.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2321));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2321));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (m_Api.TryGetAsyncRequestData(m_RequestId, out dataPtr, out dataLength))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2322));
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_3 = (Api_tAE210A8378E537AFD1FA4B99562229CE842377FB*)__this->___m_Api_0;
		int32_t L_4 = (int32_t)__this->___m_RequestId_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2323));
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&) */, L_3, L_4, (&V_0), (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2323));
		V_3 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2324));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2325));
		// int stride = UnsafeUtility.SizeOf<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2326));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2327));
		int32_t L_7;
		L_7 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2327));
		V_4 = L_7;
		// var array = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>(
		//     (void*)dataPtr, dataLength / stride, Allocator.None);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2328));
		intptr_t L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2329));
		void* L_9;
		L_9 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2329));
		int32_t L_10 = V_1;
		int32_t L_11 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2330));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_9, ((int32_t)(L_10/L_11)), (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2330));
		V_5 = L_12;
		// return array;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2331));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = V_5;
		V_6 = L_13;
		goto IL_0060;
	}

IL_0055:
	{
		// throw new InvalidOperationException("The XRAsyncCameraImageConversion is not valid.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2332));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2333));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2333));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_0060:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 2334));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = V_6;
		return L_15;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mF1E549F75D2188FD2AAAEAC8C4640AB0E31D18C0_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___array2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___length0), (&___allocator1), (&___array2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6459));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6460));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6461));
		// if (array.IsCreated)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6462));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___array2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6463));
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6463));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6464));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6465));
		// if (array.Length != length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6466));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___array2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6467));
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6467));
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6468));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6469));
		// array.Dispose();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6470));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___array2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6471));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6471));
		// array = new NativeArray<T>(length, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6472));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6473));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_11), L_9, L_10, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6473));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_8 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6474));
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6475));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6476));
		goto IL_0046;
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6477));
		// array = new NativeArray<T>(length, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6478));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6479));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_15), L_13, L_14, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6479));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_12 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6480));
	}

IL_0046:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARSubsystems + 6481));
		return;
	}
}
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___input0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24710));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 24711));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24712));
		// Update(UnsafeUtilityExtensions.AddressOf(input), UnsafeUtility.SizeOf<T>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24713));
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24714));
		void* L_1;
		L_1 = InvokerFuncInvoker1< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24714));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24715));
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24715));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24716));
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24716));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 24717));
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___input0, method);
}
// T* Unity.Collections.Memory/Unmanaged/Array::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_mB121D4B73AA2DC58F65F9EEB9B80F787DEA5FED5_gshared (int64_t ___count0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___count0), (&___allocator1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17759));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17760));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17761));
		// return Resize<T>(null, 0, count, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17762));
		int64_t L_0 = ___count0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17763));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17763));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17764));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.Collections.Memory/Unmanaged/Array::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_mFD7923956DB5C1AC40F8BF2471DB2E90DC107053_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pointer0), (&___count1), (&___allocator2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17765));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17766));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17767));
		// if (pointer == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17768));
		Il2CppFullySharedGenericStruct* L_0 = ___pointer0;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17769));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17770));
		goto IL_0017;
	}

IL_000c:
	{
		// Resize(pointer, count, 0, allocator);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17771));
		Il2CppFullySharedGenericStruct* L_2 = ___pointer0;
		int64_t L_3 = ___count1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___allocator2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17772));
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, ((int64_t)0), L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17772));
	}

IL_0017:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17773));
		return;
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m9380916FA63D14458CD87DC3C7ABE7668B88533D_gshared (Il2CppFullySharedGenericStruct* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppFullySharedGenericStructTypeU2A_t07FFE31DDA6CF33CA8E5ED330605622B6C8E0323_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___oldPointer0), (&___oldCount1), (&___newCount2), (&___allocator3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 17752));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17753));
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17754));
		Il2CppFullySharedGenericStruct* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17755));
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17755));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17756));
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17756));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17757));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17757));
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 17758));
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_inline (int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_tzcnt_mE6A2684B8678016822409BD96AF11194B186FC58_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10863));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10864));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10865));
		// public static int tzcnt(int x) { return tzcnt((uint)x); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10866));
		int32_t L_0 = ___x0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10867));
		int32_t L_1;
		L_1 = math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10867));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static int tzcnt(int x) { return tzcnt((uint)x); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10868));
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_min_m4DB88CBDCF707489585FCC4B0B83733CEE56C068_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 6730));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Mathematics + 6731));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 6732));
		// public static int min(int x, int y) { return x < y ? x : y; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 6733));
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___y1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___x0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		// public static int min(int x, int y) { return x < y ? x : y; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 6734));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17545));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17546));
	{
		// public InputControl control { get; internal set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17547));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61888));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61889));
	{
		// public Type type { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 61890));
		Type_t* L_0 = ___value0;
		__this->___U3CtypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___processor0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17726));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17727));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17728));
		// if (processor == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17729));
		RuntimeObject* L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17730));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17732));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17732));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17733));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17734));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17734));
		NullCheck(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))));
		InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986* L_4 = (InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)(&((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)))->___m_ProcessorStack_21);
		RuntimeObject* L_5 = ___processor0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17735));
		int32_t L_6;
		L_6 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17735));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17736));
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 17737));
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_inline (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_tzcnt_m67C894A638AF4C189558A3FE3554189B185BD3D4_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10896));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10897));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10898));
		// if (x == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10899));
		uint32_t L_0 = ___x0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10900));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return 32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10901));
		V_2 = ((int32_t)32);
		goto IL_0060;
	}

IL_000e:
	{
		// x &= (uint)-x;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10902));
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		___x0 = ((int32_t)((int32_t)L_2&((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_3))))));
		// u.doubleValue = 0.0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10903));
		(&V_0)->___doubleValue_1 = (0.0);
		// u.longValue = 0x4330000000000000L + x;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10904));
		uint32_t L_4 = ___x0;
		(&V_0)->___longValue_0 = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), ((int64_t)(uint64_t)L_4)));
		// u.doubleValue -= 4503599627370496.0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10905));
		double* L_5 = (&(&V_0)->___doubleValue_1);
		double* L_6 = L_5;
		double L_7 = *((double*)L_6);
		*((double*)L_6) = (double)((double)il2cpp_codegen_subtract(L_7, (4503599627370496.0)));
		// return (int)(u.longValue >> 52) - 0x3FF;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10906));
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_8 = V_0;
		int64_t L_9 = L_8.___longValue_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((int64_t)(L_9>>((int32_t)52)))), ((int32_t)1023)));
		goto IL_0060;
	}

IL_0060:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Mathematics + 10907));
		int32_t L_10 = V_2;
		return L_10;
	}
}
