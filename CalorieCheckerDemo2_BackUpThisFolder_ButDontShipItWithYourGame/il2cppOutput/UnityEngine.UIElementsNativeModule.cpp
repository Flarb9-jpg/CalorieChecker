﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t74AEE2605F4B877C807DBE6BC93485F22AD46925;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Yoga.Logger
struct Logger_t092B1218ED93DD47180692D5761559B2054234A0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsNativeModule[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E;
IL2CPP_EXTERN_C String_t* _stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureOutput_Make_m164C17D1EEB5DCFB522C4A5D1CD43F56B7F9F15C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m7C3D9701BB9D5B63570CD59CEDB98E72945D8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeBaselineInvoke_m68F86D69C1E31AAB5A6EF330B5656AD5F29C72FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeMeasureInvoke_mAE8E00280ED5522C07C630B135A9ECD9A0AC9441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_ComputeTextHeight_mD1C7FF36C467891987154FD9A1643964B481F6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_ComputeTextScaling_mFACFE42E518E28F8F5F0A8F9C5E55874492846AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_ComputeTextWidth_mDA393E1AFE8CAC48EF710CD2EAE73FF7508B2999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_GetCursorPosition_m9A8419CDFCAB340843812AF3E257C910A7F7B098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_GetOffset_mEB1BDADC4C9C6FE281B942A6A8E542EFFA73067C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextNative_GetVertices_m4741D7ABAE348124849C8CF071EB17654C933065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m9F9B960B858876372942CEADDB1527DF98503A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mADFB4DA9D98A7A7A5D9DA06C4870560FA96910F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_CreateStencilState_m41C69707D8046FB8BE53B7866A7370AA9A1BB871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_GetActiveViewport_m6219330120AEDFC96C9AA0EE75023E9431EB189D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_GetUnityProjectionMatrix_mA019D5445D1641B0CD89A79DDDE8B1B7E5FE0EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseEngineUpdate_mDEB8F6DCB0D42B6FDBF178D51F3AAAE5E7726CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseFlushPendingResources_m7F4B9153DB09CE954D0625F04C2682CDC65A58C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseGraphicsResourcesRecreate_m0501A6352C072455A5524B718A859768DD71B373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseRegisterIntermediateRenderers_mCF9B113F6CBF24039CD28343E6FDE82ABB78D18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseRenderNodeAdd_mBEFE7A4093DD6669BE5FDF15C6A3808881D6D0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseRenderNodeCleanup_mEF4A55AD5C19506566901C4CD5CFC29C1FD3EBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseRenderNodeExecute_m8A18D92E0CB6FA1CD0AA1E439164142F56705798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RegisterIntermediateRenderer_m46C340A1198D0D39E65E65550B9D697BAAB1F617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_SetScissorRect_m088F8070879B9480C4A6E12EB3229E9EEB718245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility__cctor_mCB0529D224E4D67079BC12BA37789C20EE0D5980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_add_EngineUpdate_mFD3568341033913331E4CAA041B0A0F5E78D58B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_add_FlushPendingResources_m0603289F1CA8051CA6248A8A3769EF185113A768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_add_GraphicsResourcesRecreate_m11A4A0B4368B22DE41056758D2A4208AB871DF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_add_RegisterIntermediateRenderers_m7B68C3555B2795D696838A82FB7F7F3F1BDD0A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_add_RenderNodeExecute_mC630B888D39B3CE6D6B254491C9992451FAECD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_remove_EngineUpdate_mFCD631B1906D9C0B0162B359F5D27D4B569C3971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_remove_FlushPendingResources_m1547E32B87BD90E968B2E8B51B2AD206C1A3A311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_remove_GraphicsResourcesRecreate_m7EFCE9A98AA841D4CAC8F1781359500A32559105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_remove_RegisterIntermediateRenderers_m33218BE02318488C8196C0C4B314809B5BA15B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_remove_RenderNodeExecute_m3C6D90276B125884F2B00A025ABC14AA76049C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig_Finalize_m395FFF204239D6A9DC076105B4D935706B29D631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__cctor_m399106957D1C93E2B758F91F5640515D57D03E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_m81D3E486916576BD67674EA5F26C8F2B45CCB6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig_get_UseWebDefaults_mB64415ACFDF7FB34F6F5BB42059BFD8E3705AD9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig_set_PointScaleFactor_mF61D0EFB38778BC4B6DE323F53348485B8AC643D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig_set_UseWebDefaults_m96AB3442B80FDA12436C4452D8605AA8DA1C8B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_CalculateLayout_mF1185A522FA0E60BA47039893A3EE3419B6F1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_Clear_mCB7D5DF9967646CFD9A156DEAC56E13A0BA60826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_CopyStyle_mB3AFC6604AA23297A7DA93E5DE9A36CC3CD4B65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_Finalize_mD0E1733478B7861392542C1A2F8161B462CD6327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_GetEnumerator_m93CA3A3DC1ED5F958FB6E7D3CFB534F9A374B394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_Insert_m9182FC436BFB915BDAB6492465B6E7832B1921CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MarkDirty_mCCCABC1717DCAF3E313846069AD503959B184930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MarkLayoutSeen_m899C39B9392134C5B7835217D18FCC8D5E7A1E5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_SetMeasureFunction_mD658FA9C0543C022DB09D54B49BA38354B558D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_System_Collections_IEnumerable_GetEnumerator_mF3D17F0F0C2E0C5FA4ECE8EDE724F0E332E900FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_Count_mBBD0D15ACBBA109563C7D22EAB1F58094C4562AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_HasNewLayout_m801E00B631071A29A968ACA0489B1BDC2CE3CE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_IsDirty_m24743ABB33BC9F32F946B3FD9C5DB85F77285781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_IsMeasureDefined_m14B27C81AD102F307669F55E3FDFEE7E7E61B7EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutBorderBottom_m06786864F2149A50CBD5F551977E46737A614D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutBorderLeft_mC799A7EC6C1ED244DDD852634ACC768CEADFD366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutBorderRight_mC22B436C97ABEF06221F3BF9F1506E527E9CEF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutBorderTop_m5FEAEE25D61F72B530BCC9B8B11A374BAD94D637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutBottom_m2F6857AB410F79908EA7098DA19F09BE07245269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutHeight_m0A56155F1B067D0127E5A38204C2F0A9BAB605BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutMarginBottom_m46D9999CE1CF2957DE68BA4024B36F9A50F08151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutMarginLeft_mBBDC00F49301F60C09C5B3BF8782EAB5C814DFB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutMarginRight_mE6BDC383CDA9AFD8C827B928A86EF13A8D50A566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutMarginTop_m010905C6DDD8C42E540AAB4DDCD2AFA6FFE13BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutPaddingBottom_m08100BDABCA07492B6BBF8FD57BCB06AD460049C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutPaddingLeft_m315AB18C71CFF8207E9DBC8D7538BFE0A0569421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutPaddingRight_m3AB9145B687CB1ADE6B6EFBDBBF2928301B0FEB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutPaddingTop_m76AB547D25D8C51B5CA987BD7D8D586AF284E8D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutRight_mEBCE0188575C7FE3D72255011803E1EC56685F24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutWidth_mF68064634C5682A2C0C70DAAF6CB45C39D3F216A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutX_mEEE47120D6DB656AC643A1294AFE3CC79E93C492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutY_m79DCF02D705920434DCE9B534FFAAC936A268173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_AlignContent_m9AC19A64AAAACEB85DA4FCF94D9372A4556F0845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_AlignItems_m8443F468878AF728A2F82505F4B53D2065DA89BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_AlignSelf_mD678D097FA3DB20EF1568A9B17C7423CC8B0BCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_BorderBottomWidth_m10BD7CB272CE0342EEA05F413A78BB6CE34FD8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_BorderLeftWidth_m6F0ADE17EA294DC33E0EBBB17E4DF867B5E73CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_BorderRightWidth_m047EE6ECCF13C9E44885BCE8FA20D2FD0DA498C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_BorderTopWidth_m39A26DC4E61833C0F8F58EA28A71AA35C4553005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Bottom_m03A39B84DE5056608BCFE43E98956BF58035347F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Config_mFEE688C9B0B7EFFE581F278746A7C4CD76449DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Display_mCD8A7B298E87852734559A41DC01EF96827032C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_FlexBasis_m24CCC6C38C4612359E942EEF5EA5FDF4D24E7671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_FlexDirection_mFF74AB011A465EFD90BAFDE41F00207619429306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_FlexGrow_m884FDA11A3F7FAF051CB840829442FE14CC3CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_FlexShrink_m30FC430AB92EB6FF05B394D25D728DC4DB2B4FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Flex_mCFCB82869C82DD5CB40151681576F4A40F381D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Height_m4AFF9C286F42919CA1C5C7A152A4ED477C56969E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_JustifyContent_m008464E5DA37AEDD2DDA37E89CEB2E3A1C25C286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Left_m45FA7CF627DF74C1F795DA1488EF943DA77067A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MarginBottom_m0CCF6AF5FC2C6ACA8E2E084AABC83322A215AEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MarginLeft_m6DD0D35E142EB59ED9280D1C4EA2F038C132FC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MarginRight_m4D2DF290FF89E2A9CF33DA815985B79DFA864A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MarginTop_mA43AB8E85422F7980BECF2DEF66F736C27E8E972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MaxHeight_m25F7366BA8516D5C4B3EBDA5A797B33704A4CAB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MaxWidth_m18194AF8ECC926D70493BAC8C8041349DCF0DE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MinHeight_mB3301DB6766234FE7D594DE46DF59C31F0F29643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_MinWidth_mC876A8736AA69BC6100AA5E361A0E9190D02DB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Overflow_m5DD8FEB426E1376D210ED0057C4A12DD8E18417F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_PaddingBottom_mD4BE8EAD7054982975BB95088DC507B355B57D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_PaddingLeft_mDC797F410F72554FAD67A14DC5002656C985D06D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_PaddingRight_mA277C8926B03AE1FE89F46A6A24882D61155E7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_PaddingTop_mE59506FA241E2BFD3AC4CEB219000993CC950F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_PositionType_m958F7BB665C87711439BED68CCB9E7C63798FEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Right_m35D7139ECEB7CC1B82A5DCFBFDC96EA9AFC686E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Top_m2F3AE8DA9025B7A1EB370C67C8B4560BA23CE5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Width_mA267DDF44981884C4C630FCBC602595F58AB05E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_set_Wrap_m01F365128F74AC617966A2B3EEF340150AB59EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_Auto_m73BFEAE3C23C6B9BD11BFD462B007BF7A6A58C96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_Percent_m9AE97691AE76135B4BAD62C862884D5240D7C8C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaValue_op_Implicit_mEDC38BD42737237B50A97DB49530A6DDE4E10DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_t74AEE2605F4B877C807DBE6BC93485F22AD46925_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YogaUnit_t9E457A480EDCB8231680D11068A4DF6F0C8D84FF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFDAF3CE34E8117DEABC58BB3EBDB7B80EA66F5A 
{
};

// System.Linq.EmptyEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyEnumerable_1_t36102943B460DED9F019D124B41D2A00656CC354  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t36102943B460DED9F019D124B41D2A00656CC354_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Instance_0;
};

// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// UnityEngine.Yoga.MeasureOutput
struct MeasureOutput_t6C4FCF151309F81DF23561CF3FF1777445FBD84E  : public RuntimeObject
{
};

// UnityEngine.Yoga.Native
struct Native_t97ADC11284398663A27E9214C13A84F868A25614  : public RuntimeObject
{
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

// UnityEngine.UIElements.TextNative
struct TextNative_t463AA48470CE96DB270F55A6F73EF2D90401C00C  : public RuntimeObject
{
};

// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938  : public RuntimeObject
{
};

struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields
{
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RepaintOverlayPanelsCallback_0;
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRuntimePanelsCallback_1;
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

// UnityEngine.Yoga.YogaConstants
struct YogaConstants_tE52AB48288567AEF285EDE0C8884AFD803AD9D3C  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>
struct NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.UIR.DrawBufferRange
struct DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 
{
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::firstIndex
	int32_t ___firstIndex_0;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::indexCount
	int32_t ___indexCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::minIndexVal
	int32_t ___minIndexVal_2;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::vertsReferenced
	int32_t ___vertsReferenced_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Rendering.VertexAttributeDescriptor
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::<attribute>k__BackingField
	int32_t ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_3;
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

// UnityEngine.Yoga.YogaSize
struct YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA 
{
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;
};

// UnityEngine.Yoga.YogaValue
struct YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C 
{
	// System.Single UnityEngine.Yoga.YogaValue::value
	float ___value_0;
	// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::unit
	int32_t ___unit_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 
{
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 
{
	// System.String UnityEngine.UIElements.TextNativeSettings::text
	String_t* ___text_0;
	// UnityEngine.Font UnityEngine.UIElements.TextNativeSettings::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	// System.Int32 UnityEngine.UIElements.TextNativeSettings::size
	int32_t ___size_2;
	// System.Single UnityEngine.UIElements.TextNativeSettings::scaling
	float ___scaling_3;
	// UnityEngine.FontStyle UnityEngine.UIElements.TextNativeSettings::style
	int32_t ___style_4;
	// UnityEngine.Color UnityEngine.UIElements.TextNativeSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	// UnityEngine.TextAnchor UnityEngine.UIElements.TextNativeSettings::anchor
	int32_t ___anchor_6;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::wordWrap
	bool ___wordWrap_7;
	// System.Single UnityEngine.UIElements.TextNativeSettings::wordWrapWidth
	float ___wordWrapWidth_8;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::richText
	bool ___richText_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke
{
	char* ___text_0;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com
{
	Il2CppChar* ___text_0;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};

// UnityEngine.UIElements.TextVertex
struct TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.TextVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color32 UnityEngine.UIElements.TextVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_1;
	// UnityEngine.Vector2 UnityEngine.UIElements.TextVertex::uv0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0_2;
};

// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaConfig::_ygConfig
	intptr_t ____ygConfig_1;
	// UnityEngine.Yoga.Logger UnityEngine.Yoga.YogaConfig::_logger
	Logger_t092B1218ED93DD47180692D5761559B2054234A0* ____logger_2;
};

struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields
{
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaConfig::Default
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___Default_0;
};

// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaNode::_config
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ____config_1;
	// System.WeakReference UnityEngine.Yoga.YogaNode::_parent
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____parent_2;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* ____children_3;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ____measureFunction_4;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* ____baselineFunction_5;
	// System.Object UnityEngine.Yoga.YogaNode::_data
	RuntimeObject* ____data_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA  : public MulticastDelegate_t
{
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Yoga.Logger
struct Logger_t092B1218ED93DD47180692D5761559B2054234A0  : public MulticastDelegate_t
{
};

// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
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


// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisIl2CppFullySharedGenericAny_mAED9A6979B2FA505D66E7C1EB65B82AFF790F978_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_m24A1FF4760612C0510B423C4A4E13BBE4801BAC5_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mED11A152656EE4F5B856909D6E2C3EE74FB21597_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___nativeArray0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, intptr_t ___ygConfig0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448 (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977 (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229 (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E (const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F (intptr_t ___ygNode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4 (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE (intptr_t ___ygNode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4 (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C (intptr_t ___node0, float ___flex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635 (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB (intptr_t ___node0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972 (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Count()
inline int32_t List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::.ctor(System.Int32)
inline void List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::Insert(System.Int32,T)
inline void List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)___item1, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Item(System.Int32)
inline YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, const RuntimeMethod* method)
{
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71 (intptr_t ___ygNode0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643 (intptr_t ___node0, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89 (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_inline (const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisIl2CppFullySharedGenericAny_mAED9A6979B2FA505D66E7C1EB65B82AFF790F978_gshared_inline)(method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
inline int32_t UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_m24A1FF4760612C0510B423C4A4E13BBE4801BAC5_gshared)(method);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.TextVertex>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m7C3D9701BB9D5B63570CD59CEDB98E72945D8F7E (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mED11A152656EE4F5B856909D6E2C3EE74FB21597_gshared)(il2cpp_codegen_cast_struct<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656>(&___nativeArray0), method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, int32_t ___cursorPosition2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret2, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___obj0, method);
}
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(T)
inline void Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___obj0, method);
}
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___obj0, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___scissorRect0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* ___stencilState0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
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
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* currentDelegate = reinterpret_cast<BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___height2, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___height2, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return VirtualFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericVirtualFuncInvoker2< float, float, float >::Invoke(method, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericInterfaceFuncInvoker2< float, float, float >::Invoke(method, ___node0, ___width1, ___height2);
}
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m525AED7069E4DFB2C8770618315000F96E7FD500 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast;
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_Multicast(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Logger_t092B1218ED93DD47180692D5761559B2054234A0* currentDelegate = reinterpret_cast<Logger_t092B1218ED93DD47180692D5761559B2054234A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___config0, ___node1, ___level2, ___message3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInst(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	typedef void (*FunctionPointerType) (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___config0, ___node1, ___level2, ___message3, method);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStatic(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___config0, ___node1, ___level2, ___message3, method);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStaticInvoker(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_ClosedStaticInvoker(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenVirtual(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	VirtualActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInterface(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	InterfaceActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericVirtual(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	GenericVirtualActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(method, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericInterface(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	GenericInterfaceActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(method, ___config0, ___node1, ___level2, ___message3);
}
// System.Void UnityEngine.Yoga.Logger::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m411B63478FF6F8FEDFB36E338920ECF6D44FCE89 (Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_Multicast;
}
// System.Void UnityEngine.Yoga.Logger::Invoke(UnityEngine.Yoga.YogaConfig,UnityEngine.Yoga.YogaNode,UnityEngine.Yoga.YogaLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF (Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___config0, ___node1, ___level2, ___message3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* currentDelegate = reinterpret_cast<MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*>(delegatesToInvoke[i]);
		typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return VirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return InterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericVirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericInterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE08DFEFBD622065D2E123492910EA66C4A80A0BA (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast;
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureOutput::Make(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureOutput_Make_m164C17D1EEB5DCFB522C4A5D1CD43F56B7F9F15C (float ___width0, float ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasureOutput_Make_m164C17D1EEB5DCFB522C4A5D1CD43F56B7F9F15C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___width0), (&___height1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeasureOutput_Make_m164C17D1EEB5DCFB522C4A5D1CD43F56B7F9F15C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 3));
		il2cpp_codegen_initobj((&V_0), sizeof(YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA));
		float L_0 = ___width0;
		(&V_0)->___width_0 = L_0;
		float L_1 = ___height1;
		(&V_0)->___height_1 = L_1;
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_2 = V_0;
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 4));
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, intptr_t ___ygConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___ygConfig0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 5));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 6));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 7));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 8));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 10));
		intptr_t L_0 = ___ygConfig0;
		__this->____ygConfig_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 11));
		intptr_t L_1 = __this->____ygConfig_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 12));
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 12));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 13));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 15));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 16));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 16));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var)));
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 17));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_m81D3E486916576BD67674EA5F26C8F2B45CCB6DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig__ctor_m81D3E486916576BD67674EA5F26C8F2B45CCB6DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig__ctor_m81D3E486916576BD67674EA5F26C8F2B45CCB6DD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 19));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 20));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 21));
		intptr_t L_0;
		L_0 = Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 21));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 22));
		YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 24));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_Finalize_m395FFF204239D6A9DC076105B4D935706B29D631 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_Finalize_m395FFF204239D6A9DC076105B4D935706B29D631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig_Finalize_m395FFF204239D6A9DC076105B4D935706B29D631_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 25));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 26));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 27));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 40));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 41));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 41));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 28));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 29));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 30));
				intptr_t L_0;
				L_0 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 30));
				il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
				YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 31));
				NullCheck(L_1);
				intptr_t L_2;
				L_2 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_1, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 31));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 32));
				bool L_3;
				L_3 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, L_2, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 32));
				V_0 = L_3;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 33));
				bool L_4 = V_0;
				if (!L_4)
				{
					goto IL_0029_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 34));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 35));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 36));
				intptr_t L_5;
				L_5 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 36));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 37));
				Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448(L_5, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 37));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 38));
			}

IL_0029_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 39));
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 42));
		return;
	}
}
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 46));
		intptr_t L_0 = __this->____ygConfig_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 47));
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaConfig::get_UseWebDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConfig_get_UseWebDefaults_mB64415ACFDF7FB34F6F5BB42059BFD8E3705AD9D (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_get_UseWebDefaults_mB64415ACFDF7FB34F6F5BB42059BFD8E3705AD9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig_get_UseWebDefaults_mB64415ACFDF7FB34F6F5BB42059BFD8E3705AD9D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 50));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 51));
		intptr_t L_0 = __this->____ygConfig_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 52));
		bool L_1;
		L_1 = Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 52));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 53));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_UseWebDefaults(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_UseWebDefaults_m96AB3442B80FDA12436C4452D8605AA8DA1C8B81 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_set_UseWebDefaults_m96AB3442B80FDA12436C4452D8605AA8DA1C8B81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig_set_UseWebDefaults_m96AB3442B80FDA12436C4452D8605AA8DA1C8B81_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 54));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 55));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 57));
		intptr_t L_0 = __this->____ygConfig_1;
		bool L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 58));
		Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 59));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_PointScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_PointScaleFactor_mF61D0EFB38778BC4B6DE323F53348485B8AC643D (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_set_PointScaleFactor_mF61D0EFB38778BC4B6DE323F53348485B8AC643D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig_set_PointScaleFactor_mF61D0EFB38778BC4B6DE323F53348485B8AC643D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 60));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 61));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 63));
		intptr_t L_0 = __this->____ygConfig_1;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 64));
		Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 65));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__cctor_m399106957D1C93E2B758F91F5640515D57D03E25 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig__cctor_m399106957D1C93E2B758F91F5640515D57D03E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConfig__cctor_m399106957D1C93E2B758F91F5640515D57D03E25_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 66));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 67));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 69));
		intptr_t L_0;
		L_0 = Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 69));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 70));
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*)il2cpp_codegen_object_new(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4(L_1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 70));
		((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 71));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 72));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 74));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 75));
		bool L_1;
		L_1 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 75));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 76));
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4 (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4_ftn) (intptr_t);
	static Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE (intptr_t ___ygNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___ygNode0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 77));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 78));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 80));
		intptr_t L_0 = ___ygNode0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 81));
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 81));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 82));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 83));
		goto IL_0019;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 84));
		intptr_t L_3 = ___ygNode0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 85));
		Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 85));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 86));
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F (intptr_t ___ygNode0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_m60521071D72CE5C994D4C27179E01D36FCF72C1F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71 (intptr_t ___ygNode0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71_ftn) (intptr_t, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*);
	static Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)");
	_il2cpp_icall_func(___ygNode0, ___node1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966_ftn) (intptr_t, intptr_t);
	static Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___ygNode0, ___config1);
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E (const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E_ftn) ();
	static Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetDefault_m917168A4E8FA4CC2005973DB2C7CD87BC035C96E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetDefault()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E (const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E_ftn) ();
	static Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigNew_mF7FEFE8A2720C25879AF4FE4980871A8A79E965E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigNew()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448 (intptr_t ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___config0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Native_YGConfigFree_m198862BC2FB3B175A26C67839EAA617CA317D448_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 87));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 88));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 89));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 90));
		intptr_t L_0 = ___config0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 91));
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 91));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 92));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 93));
		goto IL_0019;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 94));
		intptr_t L_3 = ___config0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 95));
		Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 95));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 96));
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A_ftn) (intptr_t);
	static Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigFreeInternal_m358F0E85047319077713EEE97547C8B372930A2A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229 (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229_ftn) (intptr_t, bool);
	static Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetUseWebDefaults_m3FE3F425CF46BF1D635E9A46ADBB36A70C494229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___config0, ___useWebDefaults1);
}
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977 (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977_ftn) (intptr_t);
	static Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetUseWebDefaults_m59FA5C9CB4C476D492ECC25E5448AC9D2BDDA977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1_ftn) (intptr_t, float);
	static Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetPointScaleFactor_m15305FABF31635D5F42C30DE0781B60BB82F63B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___config0, ___pixelsInPoint1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9_ftn) (intptr_t, intptr_t, uint32_t);
	static Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)");
	_il2cpp_icall_func(___node0, ___child1, ___index2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C_ftn) (intptr_t, intptr_t);
	static Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___node0, ___child1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89 (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89_ftn) (intptr_t, float, float, int32_t);
	static Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)");
	_il2cpp_icall_func(___node0, ___availableWidth1, ___availableHeight2, ___parentDirection3);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89_ftn) (intptr_t);
	static Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1_ftn) (intptr_t);
	static Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B_ftn) (intptr_t, intptr_t);
	static Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___dstNode0, ___srcNode1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643_ftn) (intptr_t);
	static Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A_ftn) (intptr_t);
	static Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mAE8E00280ED5522C07C630B135A9ECD9A0AC9441 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_YGNodeMeasureInvoke_mAE8E00280ED5522C07C630B135A9ECD9A0AC9441_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___node0), (&___width1), (&___widthMode2), (&___height3), (&___heightMode4), (&___returnValueAddress5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Native_YGNodeMeasureInvoke_mAE8E00280ED5522C07C630B135A9ECD9A0AC9441_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 97));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 98));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 99));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 100));
		intptr_t L_0 = ___returnValueAddress5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 101));
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 101));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 102));
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_7;
		L_7 = YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912(L_2, L_3, L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 102));
		*(YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA*)L_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 103));
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m68F86D69C1E31AAB5A6EF330B5656AD5F29C72FC (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_YGNodeBaselineInvoke_m68F86D69C1E31AAB5A6EF330B5656AD5F29C72FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___node0), (&___width1), (&___height2), (&___returnValueAddress3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Native_YGNodeBaselineInvoke_m68F86D69C1E31AAB5A6EF330B5656AD5F29C72FC_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 104));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 105));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 107));
		intptr_t L_0 = ___returnValueAddress3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 108));
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 108));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 109));
		float L_5;
		L_5 = YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3(L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 109));
		*((float*)L_1) = (float)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 110));
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA_ftn) (intptr_t, bool);
	static Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___node0, ___hasNewLayout1);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5_ftn) (intptr_t);
	static Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef int32_t (*Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B_ftn) (intptr_t);
	static Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)");
	_il2cpp_icall_func(___node0, ___flexDirection1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)");
	_il2cpp_icall_func(___node0, ___justifyContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4 (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignItems1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignSelf1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)");
	_il2cpp_icall_func(___node0, ___positionType1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)");
	_il2cpp_icall_func(___node0, ___display1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C (intptr_t ___node0, float ___flex1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flex1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexGrow1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635 (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexShrink1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10_ftn) (intptr_t);
	static Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5_ftn) (intptr_t);
	static Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB (intptr_t ___node0, float ___height1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4_ftn) (intptr_t);
	static Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972 (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	_il2cpp_icall_func(___node0, ___edge1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___border2);
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10_ftn) (intptr_t);
	static Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457_ftn) (intptr_t);
	static Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaNode::.ctor(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___config0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 111));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 112));
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B2_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B1_0 = NULL;
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B3_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 113));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 114));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 115));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 116));
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_0 = ___config0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = ___config0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_2 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->____config_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____config_1), (void*)G_B3_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 117));
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_3 = __this->____config_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 118));
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 118));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 119));
		intptr_t L_5;
		L_5 = Native_YGNodeNewWithConfig_m4BADFC3F80863E78BDB5FA46F61C471BCF1E84D4(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 119));
		__this->____ygNode_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 120));
		intptr_t L_6 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 121));
		bool L_7;
		L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, (0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 121));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 122));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 123));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 125));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 125));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var)));
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 126));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Finalize_mD0E1733478B7861392542C1A2F8161B462CD6327 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_Finalize_mD0E1733478B7861392542C1A2F8161B462CD6327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_Finalize_mD0E1733478B7861392542C1A2F8161B462CD6327_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 127));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 128));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 129));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 133));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 134));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 134));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 130));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 131));
			intptr_t L_0 = __this->____ygNode_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 132));
			Native_YGNodeFree_m9E5FEC6827B8296A5B674569008027150E1980FE(L_0, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 132));
			goto IL_0018;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 135));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Config(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Config_mFEE688C9B0B7EFFE581F278746A7C4CD76449DE5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Config_mFEE688C9B0B7EFFE581F278746A7C4CD76449DE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Config_mFEE688C9B0B7EFFE581F278746A7C4CD76449DE5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 136));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 137));
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B2_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B2_1 = NULL;
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B1_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B1_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 138));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 139));
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_0 = ___value0;
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_2 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		NullCheck(G_B2_1);
		G_B2_1->____config_1 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____config_1), (void*)G_B2_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 140));
		intptr_t L_3 = __this->____ygNode_0;
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_4 = __this->____config_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 141));
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 141));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 142));
		Native_YGNodeSetConfig_mF882824F130DCE227D2B48A57D2BBC3C74B52966(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 142));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 143));
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsDirty_m24743ABB33BC9F32F946B3FD9C5DB85F77285781 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_IsDirty_m24743ABB33BC9F32F946B3FD9C5DB85F77285781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_IsDirty_m24743ABB33BC9F32F946B3FD9C5DB85F77285781_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 144));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 145));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 146));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 147));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 148));
		bool L_1;
		L_1 = Native_YGNodeIsDirty_mBD46D37EBADC5461AE91B0C95B8FD646D9780BD1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 148));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 149));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkDirty_mCCCABC1717DCAF3E313846069AD503959B184930 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_MarkDirty_mCCCABC1717DCAF3E313846069AD503959B184930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_MarkDirty_mCCCABC1717DCAF3E313846069AD503959B184930_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 152));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 153));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 154));
		Native_YGNodeMarkDirty_m8107F56D4BE2A266294A39F0430A56423DC78D89(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 154));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 155));
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_HasNewLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_HasNewLayout_m801E00B631071A29A968ACA0489B1BDC2CE3CE05 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_HasNewLayout_m801E00B631071A29A968ACA0489B1BDC2CE3CE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_HasNewLayout_m801E00B631071A29A968ACA0489B1BDC2CE3CE05_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 156));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 157));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 158));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 159));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 160));
		bool L_1;
		L_1 = Native_YGNodeGetHasNewLayout_m0A7DE10C4D95B992479353AAE7135C27A003A9C5(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 160));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 161));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsMeasureDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsMeasureDefined_m14B27C81AD102F307669F55E3FDFEE7E7E61B7EC (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_IsMeasureDefined_m14B27C81AD102F307669F55E3FDFEE7E7E61B7EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_IsMeasureDefined_m14B27C81AD102F307669F55E3FDFEE7E7E61B7EC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 162));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 163));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 164));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 165));
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_0 = __this->____measureFunction_4;
		V_0 = (bool)((!(((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 166));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 168));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 169));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 170));
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_0 = __this->____baselineFunction_5;
		V_0 = (bool)((!(((RuntimeObject*)(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 171));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CopyStyle(UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CopyStyle_mB3AFC6604AA23297A7DA93E5DE9A36CC3CD4B65C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___srcNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_CopyStyle_mB3AFC6604AA23297A7DA93E5DE9A36CC3CD4B65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___srcNode0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_CopyStyle_mB3AFC6604AA23297A7DA93E5DE9A36CC3CD4B65C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 172));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 173));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 174));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 175));
		intptr_t L_0 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___srcNode0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 176));
		Native_YGNodeCopyStyle_m9D5D2CBA0B40C0D5431F74947B8706729D42394B(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 176));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 177));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexDirection(UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexDirection_mFF74AB011A465EFD90BAFDE41F00207619429306 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_FlexDirection_mFF74AB011A465EFD90BAFDE41F00207619429306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_FlexDirection_mFF74AB011A465EFD90BAFDE41F00207619429306_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 179));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 180));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 181));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 182));
		Native_YGNodeStyleSetFlexDirection_m150F6EFCFD965963E9D206226396317AD48DF3BF(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 182));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 183));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_JustifyContent(UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_JustifyContent_m008464E5DA37AEDD2DDA37E89CEB2E3A1C25C286 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_JustifyContent_m008464E5DA37AEDD2DDA37E89CEB2E3A1C25C286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_JustifyContent_m008464E5DA37AEDD2DDA37E89CEB2E3A1C25C286_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 184));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 185));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 187));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 188));
		Native_YGNodeStyleSetJustifyContent_mA45440CBEA3DD733B9C5031DC7C94BBFF7B4541B(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 188));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 189));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Display(UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Display_mCD8A7B298E87852734559A41DC01EF96827032C2 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Display_mCD8A7B298E87852734559A41DC01EF96827032C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Display_mCD8A7B298E87852734559A41DC01EF96827032C2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 190));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 191));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 192));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 193));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 194));
		Native_YGNodeStyleSetDisplay_m76EE649F8BBBD773A069E95E51EBE3EFCD94EA97(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 194));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 195));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignItems(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignItems_m8443F468878AF728A2F82505F4B53D2065DA89BF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_AlignItems_m8443F468878AF728A2F82505F4B53D2065DA89BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_AlignItems_m8443F468878AF728A2F82505F4B53D2065DA89BF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 196));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 197));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 198));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 199));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 200));
		Native_YGNodeStyleSetAlignItems_m897DD75F642F60F5684E37E6CC30D2D62898AFE4(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 200));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 201));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignSelf(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignSelf_mD678D097FA3DB20EF1568A9B17C7423CC8B0BCBF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_AlignSelf_mD678D097FA3DB20EF1568A9B17C7423CC8B0BCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_AlignSelf_mD678D097FA3DB20EF1568A9B17C7423CC8B0BCBF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 202));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 203));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 205));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 206));
		Native_YGNodeStyleSetAlignSelf_m32AF1214C3B0A5E56E9706659A828143B92ABF12(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 206));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 207));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignContent(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignContent_m9AC19A64AAAACEB85DA4FCF94D9372A4556F0845 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_AlignContent_m9AC19A64AAAACEB85DA4FCF94D9372A4556F0845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_AlignContent_m9AC19A64AAAACEB85DA4FCF94D9372A4556F0845_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 208));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 209));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 210));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 211));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 212));
		Native_YGNodeStyleSetAlignContent_m436932D80EAA2FFF82EA5DD41AA220A47D9D3945(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 212));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 213));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PositionType(UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PositionType_m958F7BB665C87711439BED68CCB9E7C63798FEA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_PositionType_m958F7BB665C87711439BED68CCB9E7C63798FEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_PositionType_m958F7BB665C87711439BED68CCB9E7C63798FEA5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 214));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 215));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 216));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 217));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 218));
		Native_YGNodeStyleSetPositionType_m26C36EE82EE28CE1E1106D75A4A642FFC18D8FD0(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 218));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 219));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Wrap(UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Wrap_m01F365128F74AC617966A2B3EEF340150AB59EE6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Wrap_m01F365128F74AC617966A2B3EEF340150AB59EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Wrap_m01F365128F74AC617966A2B3EEF340150AB59EE6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 220));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 221));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 222));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 223));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 224));
		Native_YGNodeStyleSetFlexWrap_mC611BBFF56FC26E6A93CE874A8CD61435CE65E37(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 224));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 225));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Flex(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Flex_mCFCB82869C82DD5CB40151681576F4A40F381D6A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Flex_mCFCB82869C82DD5CB40151681576F4A40F381D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Flex_mCFCB82869C82DD5CB40151681576F4A40F381D6A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 226));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 227));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 228));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 229));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 230));
		Native_YGNodeStyleSetFlex_mFF7012530FCC88266A00BF7A69940DAC6EB1ED6C(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 230));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 231));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexGrow_m884FDA11A3F7FAF051CB840829442FE14CC3CC2B (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_FlexGrow_m884FDA11A3F7FAF051CB840829442FE14CC3CC2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_FlexGrow_m884FDA11A3F7FAF051CB840829442FE14CC3CC2B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 232));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 233));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 234));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 235));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 236));
		Native_YGNodeStyleSetFlexGrow_m56C8FB64F02228A7CDE449E0405C82BDBEDDBDFB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 236));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 237));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexShrink_m30FC430AB92EB6FF05B394D25D728DC4DB2B4FA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_FlexShrink_m30FC430AB92EB6FF05B394D25D728DC4DB2B4FA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_FlexShrink_m30FC430AB92EB6FF05B394D25D728DC4DB2B4FA5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 239));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 240));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 241));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 242));
		Native_YGNodeStyleSetFlexShrink_m7ACF9472AC51523670FE7640F7ACD4875ADA4635(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 242));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 243));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexBasis(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexBasis_m24CCC6C38C4612359E942EEF5EA5FDF4D24E7671 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_FlexBasis_m24CCC6C38C4612359E942EEF5EA5FDF4D24E7671_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_FlexBasis_m24CCC6C38C4612359E942EEF5EA5FDF4D24E7671_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 245));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 246));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 247));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 248));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 248));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 249));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 251));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 252));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 252));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 253));
		Native_YGNodeStyleSetFlexBasisPercent_m22672DC96B27B4C7E0A7D23A974E3449AE64FB0A(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 253));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 254));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 255));
		goto IL_0059;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 257));
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 257));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 258));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 259));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 260));
		intptr_t L_6 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 261));
		Native_YGNodeStyleSetFlexBasisAuto_mA6B5F8FCD81C4328EF6A32011889345B3C90EA10(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 261));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 262));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 263));
		goto IL_0059;
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 264));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 265));
		intptr_t L_7 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 266));
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 266));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 267));
		Native_YGNodeStyleSetFlexBasis_m7D3390C0993FFB845708254B32A52AE907581352(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 267));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 268));
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 269));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Width(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Width_mA267DDF44981884C4C630FCBC602595F58AB05E8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Width_mA267DDF44981884C4C630FCBC602595F58AB05E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Width_mA267DDF44981884C4C630FCBC602595F58AB05E8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 270));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 271));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 272));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 273));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 274));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 274));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 275));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 276));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 277));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 278));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 278));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 279));
		Native_YGNodeStyleSetWidthPercent_m7051570F172E071DE73F1D6FE3FC0C24D9AB0866(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 279));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 280));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 281));
		goto IL_0059;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 283));
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 283));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 284));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 285));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 286));
		intptr_t L_6 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 287));
		Native_YGNodeStyleSetWidthAuto_mF7E15C1BD54ED04A538A7E6374473FF32CA3EBF5(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 287));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 288));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 289));
		goto IL_0059;
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 290));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 291));
		intptr_t L_7 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 292));
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 292));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 293));
		Native_YGNodeStyleSetWidth_m8E500EE5BF635FEBD32F63D73C08CBB6D308D555(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 293));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 294));
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 295));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Height(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Height_m4AFF9C286F42919CA1C5C7A152A4ED477C56969E (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Height_m4AFF9C286F42919CA1C5C7A152A4ED477C56969E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Height_m4AFF9C286F42919CA1C5C7A152A4ED477C56969E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 296));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 297));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 298));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 299));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 300));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 300));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 301));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 302));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 303));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 304));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 305));
		Native_YGNodeStyleSetHeightPercent_mB14285FBEEBB58E99F5329AFDFA55345EB1503BB(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 305));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 306));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 307));
		goto IL_0059;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 309));
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 309));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 310));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 311));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 312));
		intptr_t L_6 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 313));
		Native_YGNodeStyleSetHeightAuto_m80090E2A427A05BF4B310680DD6137E300B5E9A4(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 313));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 314));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 315));
		goto IL_0059;
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 316));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 317));
		intptr_t L_7 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 318));
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 319));
		Native_YGNodeStyleSetHeight_mD587BA4AE75897D9E335F6D7DD084CB579CB2F71(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 319));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 320));
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 321));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxWidth_m18194AF8ECC926D70493BAC8C8041349DCF0DE43 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MaxWidth_m18194AF8ECC926D70493BAC8C8041349DCF0DE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MaxWidth_m18194AF8ECC926D70493BAC8C8041349DCF0DE43_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 323));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 324));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 325));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 326));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 326));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 327));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 328));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 329));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 330));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 330));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 331));
		Native_YGNodeStyleSetMaxWidthPercent_m8134B86C8E0BDD36B6910E6E69A496F4C1B60A0A(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 331));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 332));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 333));
		goto IL_003b;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 334));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 335));
		intptr_t L_4 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 336));
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 336));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 337));
		Native_YGNodeStyleSetMaxWidth_m9ACC3DD5528EA7831590E5FCF9A9674263048972(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 337));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 338));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 339));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxHeight_m25F7366BA8516D5C4B3EBDA5A797B33704A4CAB8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MaxHeight_m25F7366BA8516D5C4B3EBDA5A797B33704A4CAB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MaxHeight_m25F7366BA8516D5C4B3EBDA5A797B33704A4CAB8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 341));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 342));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 344));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 344));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 345));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 346));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 347));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 348));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 348));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 349));
		Native_YGNodeStyleSetMaxHeightPercent_mA145490CBEE28201E08E6132A32CF5CB6C9FEC34(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 349));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 350));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 351));
		goto IL_003b;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 352));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 353));
		intptr_t L_4 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 354));
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 354));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 355));
		Native_YGNodeStyleSetMaxHeight_m92DE27BA06CD74FB4B70D1173880EE9DEEA08268(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 355));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 356));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 357));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinWidth_mC876A8736AA69BC6100AA5E361A0E9190D02DB21 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MinWidth_mC876A8736AA69BC6100AA5E361A0E9190D02DB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MinWidth_mC876A8736AA69BC6100AA5E361A0E9190D02DB21_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 358));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 359));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 360));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 361));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 362));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 362));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 363));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 364));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 365));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 366));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 366));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 367));
		Native_YGNodeStyleSetMinWidthPercent_m24384D17BBA8CD168C0D5D452D116DE4876DB7A2(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 367));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 368));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 369));
		goto IL_003b;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 370));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 371));
		intptr_t L_4 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 372));
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 372));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 373));
		Native_YGNodeStyleSetMinWidth_mFD0182554D716A2CBF44278D8DEC7D48828A7618(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 373));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 374));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 375));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinHeight_mB3301DB6766234FE7D594DE46DF59C31F0F29643 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MinHeight_mB3301DB6766234FE7D594DE46DF59C31F0F29643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MinHeight_mB3301DB6766234FE7D594DE46DF59C31F0F29643_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 376));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 377));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 378));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 379));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 380));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 380));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 381));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 382));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 383));
		intptr_t L_2 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 384));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 384));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 385));
		Native_YGNodeStyleSetMinHeightPercent_m4945109EAD0F65DB30AFBF93751102462C2B03E9(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 385));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 386));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 387));
		goto IL_003b;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 388));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 389));
		intptr_t L_4 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 390));
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 391));
		Native_YGNodeStyleSetMinHeight_m85D89605026C54D1A71F01AC8948430EDC966EFE(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 391));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 392));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 393));
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_mEEE47120D6DB656AC643A1294AFE3CC79E93C492 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutX_mEEE47120D6DB656AC643A1294AFE3CC79E93C492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutX_mEEE47120D6DB656AC643A1294AFE3CC79E93C492_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 394));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 395));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 396));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 397));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 398));
		float L_1;
		L_1 = Native_YGNodeLayoutGetLeft_m6E5B560CDA74FFA7A3C762A90D791A59A0860976(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 398));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 399));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_m79DCF02D705920434DCE9B534FFAAC936A268173 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutY_m79DCF02D705920434DCE9B534FFAAC936A268173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutY_m79DCF02D705920434DCE9B534FFAAC936A268173_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 400));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 401));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 403));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 404));
		float L_1;
		L_1 = Native_YGNodeLayoutGetTop_m60CDD8A7A2D1623D0014FD3505F758F07D856ED2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 404));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 405));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutRight_mEBCE0188575C7FE3D72255011803E1EC56685F24 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutRight_mEBCE0188575C7FE3D72255011803E1EC56685F24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutRight_mEBCE0188575C7FE3D72255011803E1EC56685F24_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 406));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 407));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 408));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 409));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 410));
		float L_1;
		L_1 = Native_YGNodeLayoutGetRight_m83E1CADD797933807D34DD9073762C4990D2BF10(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 410));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 411));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBottom_m2F6857AB410F79908EA7098DA19F09BE07245269 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutBottom_m2F6857AB410F79908EA7098DA19F09BE07245269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutBottom_m2F6857AB410F79908EA7098DA19F09BE07245269_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 413));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 414));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 415));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 416));
		float L_1;
		L_1 = Native_YGNodeLayoutGetBottom_m8725DE50F08BAB04FD8254183DAAB6F75C641457(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 416));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 417));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_mF68064634C5682A2C0C70DAAF6CB45C39D3F216A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutWidth_mF68064634C5682A2C0C70DAAF6CB45C39D3F216A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutWidth_mF68064634C5682A2C0C70DAAF6CB45C39D3F216A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 418));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 419));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 420));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 421));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 422));
		float L_1;
		L_1 = Native_YGNodeLayoutGetWidth_mE2410FE497C00ABA40E053D0FD4A203ABB88CD9D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 422));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 423));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m0A56155F1B067D0127E5A38204C2F0A9BAB605BD (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutHeight_m0A56155F1B067D0127E5A38204C2F0A9BAB605BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutHeight_m0A56155F1B067D0127E5A38204C2F0A9BAB605BD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 425));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 426));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 427));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 428));
		float L_1;
		L_1 = Native_YGNodeLayoutGetHeight_mC423C0EB25D27AE7F74387F7C9A6C6898B87B254(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 428));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 429));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Overflow(UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Overflow_m5DD8FEB426E1376D210ED0057C4A12DD8E18417F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Overflow_m5DD8FEB426E1376D210ED0057C4A12DD8E18417F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Overflow_m5DD8FEB426E1376D210ED0057C4A12DD8E18417F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 430));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 431));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 432));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 433));
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 434));
		Native_YGNodeStyleSetOverflow_m14D9D8F8BC2E38729E18E22B28D9CB640A3E1755(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 434));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 435));
		return;
	}
}
// System.Int32 UnityEngine.Yoga.YogaNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaNode_get_Count_mBBD0D15ACBBA109563C7D22EAB1F58094C4562AD (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_Count_mBBD0D15ACBBA109563C7D22EAB1F58094C4562AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_Count_mBBD0D15ACBBA109563C7D22EAB1F58094C4562AD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 436));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 437));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 438));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 439));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_1 = __this->____children_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 440));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_1, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 440));
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 441));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkLayoutSeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkLayoutSeen_m899C39B9392134C5B7835217D18FCC8D5E7A1E5A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_MarkLayoutSeen_m899C39B9392134C5B7835217D18FCC8D5E7A1E5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_MarkLayoutSeen_m899C39B9392134C5B7835217D18FCC8D5E7A1E5A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 442));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 443));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 444));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 445));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 446));
		Native_YGNodeSetHasNewLayout_m22EA7B1DA4E2AA20DEDBE1AD1A776A1D303E30DA(L_0, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 446));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 447));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Insert(System.Int32,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Insert_m9182FC436BFB915BDAB6492465B6E7832B1921CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_Insert_m9182FC436BFB915BDAB6492465B6E7832B1921CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0), (&___node1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_Insert_m9182FC436BFB915BDAB6492465B6E7832B1921CF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 449));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 450));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 451));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		V_0 = (bool)((((RuntimeObject*)(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 452));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 453));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 454));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 455));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_2 = (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)il2cpp_codegen_object_new(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9(L_2, 4, List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 455));
		__this->____children_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_3), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 456));
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 457));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		int32_t L_4 = ___index0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 458));
		NullCheck(L_3);
		List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288(L_3, L_4, L_5, List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 458));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 459));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_6 = ___node1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 460));
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_7, __this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 460));
		NullCheck(L_6);
		L_6->____parent_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____parent_2), (void*)L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 461));
		intptr_t L_8 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_9 = ___node1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->____ygNode_0;
		int32_t L_11 = ___index0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 462));
		Native_YGNodeInsertChild_mA5D0DFFDFD846F112A7FDCE846CF9A5231280CB9(L_8, L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 462));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 463));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 464));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 465));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 466));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 467));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		int32_t L_1 = ___index0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 468));
		NullCheck(L_0);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2;
		L_2 = List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005(L_0, L_1, List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 468));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 469));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_3 = V_0;
		NullCheck(L_3);
		L_3->____parent_2 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____parent_2), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 470));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_4 = __this->____children_3;
		int32_t L_5 = ___index0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 471));
		NullCheck(L_4);
		List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8(L_4, L_5, List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 471));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 472));
		intptr_t L_6 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = L_7->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 473));
		Native_YGNodeRemoveChild_m98FE1F99F5233E763801CAEFE89272AB264A1F0C(L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 473));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 474));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Clear_mCB7D5DF9967646CFD9A156DEAC56E13A0BA60826 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_Clear_mCB7D5DF9967646CFD9A156DEAC56E13A0BA60826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_Clear_mCB7D5DF9967646CFD9A156DEAC56E13A0BA60826_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 475));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 476));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 477));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 478));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 479));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 480));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 481));
		goto IL_0027;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 482));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 483));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_2 = __this->____children_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 484));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_2, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 484));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 485));
		YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F(__this, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 485));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 486));
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 487));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_4 = __this->____children_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 488));
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_4, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 488));
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 489));
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 490));
	}

IL_003a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 491));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetMeasureFunction(UnityEngine.Yoga.MeasureFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetMeasureFunction_mD658FA9C0543C022DB09D54B49BA38354B558D04 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ___measureFunction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_SetMeasureFunction_mD658FA9C0543C022DB09D54B49BA38354B558D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___measureFunction0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_SetMeasureFunction_mD658FA9C0543C022DB09D54B49BA38354B558D04_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 492));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 493));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 494));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 495));
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_0 = ___measureFunction0;
		__this->____measureFunction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____measureFunction_4), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 496));
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_1 = ___measureFunction0;
		V_0 = (bool)((((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 497));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 498));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 499));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 500));
		bool L_3;
		L_3 = YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 500));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 501));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 502));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 503));
		intptr_t L_5 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 504));
		Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71(L_5, (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 504));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 505));
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 506));
		intptr_t L_6 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 507));
		Native_YGNodeRemoveMeasureFunc_m69C7422D474A3E47CD52CF2742FE5F8A682F632A(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 507));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 508));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 509));
		goto IL_0057;
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 510));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 511));
		intptr_t L_7 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 512));
		Native_YGSetManagedObject_m2CCD688B498F6519A453E4FA30E6F81F31F68B71(L_7, __this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 512));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 513));
		intptr_t L_8 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 514));
		Native_YGNodeSetMeasureFunc_mBC3464D096E2B65400DAA28A6AC49BFE40569643(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 514));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 515));
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 516));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CalculateLayout(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CalculateLayout_mF1185A522FA0E60BA47039893A3EE3419B6F1D37 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___width0, float ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_CalculateLayout_mF1185A522FA0E60BA47039893A3EE3419B6F1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___width0), (&___height1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_CalculateLayout_mF1185A522FA0E60BA47039893A3EE3419B6F1D37_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 518));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 519));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 520));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___width0;
		float L_2 = ___height1;
		intptr_t L_3 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 521));
		int32_t L_4;
		L_4 = Native_YGNodeStyleGetDirection_mE3F698167ADF40E414DCF74E394EF6393395216B(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 521));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 522));
		Native_YGNodeCalculateLayout_m54489A4F0F5B1B991920DB4953E3CD7D23376B89(L_0, L_1, L_2, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 522));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 523));
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___node0), (&___width1), (&___widthMode2), (&___height3), (&___heightMode4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 524));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 525));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 526));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 527));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_2 = L_1->____measureFunction_4;
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 528));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 529));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 530));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 531));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 531));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_mBB82E0057A8C4E58268564EF52F13D2232303912_RuntimeMethod_var)));
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 532));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_6 = L_5->____measureFunction_4;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 533));
		NullCheck(L_6);
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_12;
		L_12 = MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 533));
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 534));
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___node0), (&___width1), (&___height2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 535));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 536));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 537));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 538));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_2 = L_1->____baselineFunction_5;
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 539));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 540));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 541));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 542));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 542));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_mEB097370DAFBC11A25FBAB6F7659B8A8937D88D3_RuntimeMethod_var)));
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 543));
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_6 = L_5->____baselineFunction_5;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 544));
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline(L_6, L_7, L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 544));
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 545));
		float L_11 = V_1;
		return L_11;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m93CA3A3DC1ED5F958FB6E7D3CFB534F9A374B394 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t74AEE2605F4B877C807DBE6BC93485F22AD46925_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_GetEnumerator_m93CA3A3DC1ED5F958FB6E7D3CFB534F9A374B394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_GetEnumerator_m93CA3A3DC1ED5F958FB6E7D3CFB534F9A374B394_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 546));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 547));
	RuntimeObject* G_B3_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 548));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 549));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 550));
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_inline(Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 550));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 551));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 551));
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 552));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 552));
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 553));
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_mF3D17F0F0C2E0C5FA4ECE8EDE724F0E332E900FA (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_System_Collections_IEnumerable_GetEnumerator_mF3D17F0F0C2E0C5FA4ECE8EDE724F0E332E900FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_System_Collections_IEnumerable_GetEnumerator_mF3D17F0F0C2E0C5FA4ECE8EDE724F0E332E900FA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 554));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 555));
	RuntimeObject* G_B3_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 556));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 557));
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 558));
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_inline(Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m5F185515F94E7B13787034072EAB772730FA75A8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 558));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 559));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 559));
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 560));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 560));
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 561));
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Left(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Left_m45FA7CF627DF74C1F795DA1488EF943DA77067A6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Left_m45FA7CF627DF74C1F795DA1488EF943DA77067A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Left_m45FA7CF627DF74C1F795DA1488EF943DA77067A6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 562));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 563));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 564));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 565));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 566));
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 0, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 566));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 567));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Top(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Top_m2F3AE8DA9025B7A1EB370C67C8B4560BA23CE5A4 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Top_m2F3AE8DA9025B7A1EB370C67C8B4560BA23CE5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Top_m2F3AE8DA9025B7A1EB370C67C8B4560BA23CE5A4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 568));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 569));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 570));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 571));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 572));
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 572));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 573));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Right(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Right_m35D7139ECEB7CC1B82A5DCFBFDC96EA9AFC686E5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Right_m35D7139ECEB7CC1B82A5DCFBFDC96EA9AFC686E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Right_m35D7139ECEB7CC1B82A5DCFBFDC96EA9AFC686E5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 574));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 575));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 576));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 577));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 578));
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 2, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 578));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 579));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Bottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Bottom_m03A39B84DE5056608BCFE43E98956BF58035347F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_Bottom_m03A39B84DE5056608BCFE43E98956BF58035347F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_Bottom_m03A39B84DE5056608BCFE43E98956BF58035347F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 580));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 581));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 582));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 583));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 584));
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 3, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 584));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 585));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___edge0), (&___value1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 586));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 587));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 588));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 589));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 590));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 590));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 591));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 592));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 593));
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 594));
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 594));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 595));
		Native_YGNodeStyleSetPositionPercent_m0B220FFEEAAC8D66B48BAFD10DFC91AD4FD1072B(L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 595));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 596));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 597));
		goto IL_003d;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 599));
		intptr_t L_5 = __this->____ygNode_0;
		int32_t L_6 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 600));
		float L_7;
		L_7 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 600));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 601));
		Native_YGNodeStyleSetPosition_m5F2C22B45049D8A1D038B8B25BB7ED4F1BCBD968(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 601));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 602));
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 603));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginLeft_m6DD0D35E142EB59ED9280D1C4EA2F038C132FC4B (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MarginLeft_m6DD0D35E142EB59ED9280D1C4EA2F038C132FC4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MarginLeft_m6DD0D35E142EB59ED9280D1C4EA2F038C132FC4B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 604));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 605));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 606));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 607));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 608));
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 0, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 608));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 609));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginTop_mA43AB8E85422F7980BECF2DEF66F736C27E8E972 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MarginTop_mA43AB8E85422F7980BECF2DEF66F736C27E8E972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MarginTop_mA43AB8E85422F7980BECF2DEF66F736C27E8E972_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 610));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 611));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 613));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 614));
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 614));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 615));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginRight_m4D2DF290FF89E2A9CF33DA815985B79DFA864A3C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MarginRight_m4D2DF290FF89E2A9CF33DA815985B79DFA864A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MarginRight_m4D2DF290FF89E2A9CF33DA815985B79DFA864A3C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 617));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 618));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 619));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 620));
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 2, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 620));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 621));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginBottom_m0CCF6AF5FC2C6ACA8E2E084AABC83322A215AEEC (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_MarginBottom_m0CCF6AF5FC2C6ACA8E2E084AABC83322A215AEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_MarginBottom_m0CCF6AF5FC2C6ACA8E2E084AABC83322A215AEEC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 625));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 626));
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 3, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 626));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 627));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___edge0), (&___value1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 628));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 629));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 630));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 632));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 632));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 633));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 635));
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 636));
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 636));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 637));
		Native_YGNodeStyleSetMarginPercent_mE967F7476BD0D973E61FCE5662DC1FD0874EDBDF(L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 638));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 639));
		goto IL_005c;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 640));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 641));
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 641));
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 642));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 643));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 644));
		intptr_t L_7 = __this->____ygNode_0;
		int32_t L_8 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 645));
		Native_YGNodeStyleSetMarginAuto_mE08483C5081E2AE8E6DBA5E782B72B072C1B8A17(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 645));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 646));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 647));
		goto IL_005c;
	}

IL_0046:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 648));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 649));
		intptr_t L_9 = __this->____ygNode_0;
		int32_t L_10 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 650));
		float L_11;
		L_11 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 651));
		Native_YGNodeStyleSetMargin_m7785C8F0BFB107B19C71F301ADC044B7821DD8F6(L_9, L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 651));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 652));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 653));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingLeft_mDC797F410F72554FAD67A14DC5002656C985D06D (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_PaddingLeft_mDC797F410F72554FAD67A14DC5002656C985D06D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_PaddingLeft_mDC797F410F72554FAD67A14DC5002656C985D06D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 654));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 655));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 656));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 657));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 658));
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 0, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 658));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 659));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingTop_mE59506FA241E2BFD3AC4CEB219000993CC950F01 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_PaddingTop_mE59506FA241E2BFD3AC4CEB219000993CC950F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_PaddingTop_mE59506FA241E2BFD3AC4CEB219000993CC950F01_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 660));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 661));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 662));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 663));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 664));
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 664));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 665));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingRight_mA277C8926B03AE1FE89F46A6A24882D61155E7F8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_PaddingRight_mA277C8926B03AE1FE89F46A6A24882D61155E7F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_PaddingRight_mA277C8926B03AE1FE89F46A6A24882D61155E7F8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 666));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 667));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 668));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 669));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 670));
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 2, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 670));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 671));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingBottom_mD4BE8EAD7054982975BB95088DC507B355B57D32 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_PaddingBottom_mD4BE8EAD7054982975BB95088DC507B355B57D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_PaddingBottom_mD4BE8EAD7054982975BB95088DC507B355B57D32_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 672));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 673));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 674));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 675));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 676));
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 3, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 676));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 677));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___edge0), (&___value1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 678));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 679));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 680));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 681));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 682));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 682));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 683));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 684));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 685));
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 686));
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 687));
		Native_YGNodeStyleSetPaddingPercent_mD46DCE885F761260AD11E120D17C573AE4E1A463(L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 687));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 688));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 689));
		goto IL_003d;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 690));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 691));
		intptr_t L_5 = __this->____ygNode_0;
		int32_t L_6 = ___edge0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 692));
		float L_7;
		L_7 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 692));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 693));
		Native_YGNodeStyleSetPadding_mAFC55FBA93FFB5DC4B86DA5B6574E9C3DD727F53(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 693));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 694));
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 695));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderLeftWidth_m6F0ADE17EA294DC33E0EBBB17E4DF867B5E73CA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_BorderLeftWidth_m6F0ADE17EA294DC33E0EBBB17E4DF867B5E73CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_BorderLeftWidth_m6F0ADE17EA294DC33E0EBBB17E4DF867B5E73CA5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 696));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 697));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 698));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 699));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 700));
		Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A(L_0, 0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 700));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 701));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderTopWidth_m39A26DC4E61833C0F8F58EA28A71AA35C4553005 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_BorderTopWidth_m39A26DC4E61833C0F8F58EA28A71AA35C4553005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_BorderTopWidth_m39A26DC4E61833C0F8F58EA28A71AA35C4553005_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 702));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 703));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 704));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 705));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 706));
		Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A(L_0, 1, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 706));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 707));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderRightWidth_m047EE6ECCF13C9E44885BCE8FA20D2FD0DA498C6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_BorderRightWidth_m047EE6ECCF13C9E44885BCE8FA20D2FD0DA498C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_BorderRightWidth_m047EE6ECCF13C9E44885BCE8FA20D2FD0DA498C6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 708));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 709));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 710));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 711));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 712));
		Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A(L_0, 2, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 712));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 713));
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderBottomWidth_m10BD7CB272CE0342EEA05F413A78BB6CE34FD8F3 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_set_BorderBottomWidth_m10BD7CB272CE0342EEA05F413A78BB6CE34FD8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_set_BorderBottomWidth_m10BD7CB272CE0342EEA05F413A78BB6CE34FD8F3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 714));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 715));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 716));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 717));
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 718));
		Native_YGNodeStyleSetBorder_m8F54DC0939E0B80CA94377F2E70F377DAD37E45A(L_0, 3, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 718));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 719));
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginLeft_mBBDC00F49301F60C09C5B3BF8782EAB5C814DFB4 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutMarginLeft_mBBDC00F49301F60C09C5B3BF8782EAB5C814DFB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutMarginLeft_mBBDC00F49301F60C09C5B3BF8782EAB5C814DFB4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 721));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 722));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 723));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 724));
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 724));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 725));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginTop_m010905C6DDD8C42E540AAB4DDCD2AFA6FFE13BE6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutMarginTop_m010905C6DDD8C42E540AAB4DDCD2AFA6FFE13BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutMarginTop_m010905C6DDD8C42E540AAB4DDCD2AFA6FFE13BE6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 726));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 727));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 728));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 729));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 730));
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B(L_0, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 730));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 731));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginRight_mE6BDC383CDA9AFD8C827B928A86EF13A8D50A566 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutMarginRight_mE6BDC383CDA9AFD8C827B928A86EF13A8D50A566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutMarginRight_mE6BDC383CDA9AFD8C827B928A86EF13A8D50A566_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 732));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 733));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 734));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 735));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 736));
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B(L_0, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 736));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 737));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginBottom_m46D9999CE1CF2957DE68BA4024B36F9A50F08151 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutMarginBottom_m46D9999CE1CF2957DE68BA4024B36F9A50F08151_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutMarginBottom_m46D9999CE1CF2957DE68BA4024B36F9A50F08151_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 738));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 739));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 740));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 741));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 742));
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mF652440347917736559C418261B120953A70E42B(L_0, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 742));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 743));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingLeft_m315AB18C71CFF8207E9DBC8D7538BFE0A0569421 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutPaddingLeft_m315AB18C71CFF8207E9DBC8D7538BFE0A0569421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutPaddingLeft_m315AB18C71CFF8207E9DBC8D7538BFE0A0569421_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 746));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 747));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 748));
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 748));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 749));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingTop_m76AB547D25D8C51B5CA987BD7D8D586AF284E8D8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutPaddingTop_m76AB547D25D8C51B5CA987BD7D8D586AF284E8D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutPaddingTop_m76AB547D25D8C51B5CA987BD7D8D586AF284E8D8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 750));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 751));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 752));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 753));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 754));
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106(L_0, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 754));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 755));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingRight_m3AB9145B687CB1ADE6B6EFBDBBF2928301B0FEB1 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutPaddingRight_m3AB9145B687CB1ADE6B6EFBDBBF2928301B0FEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutPaddingRight_m3AB9145B687CB1ADE6B6EFBDBBF2928301B0FEB1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 756));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 757));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 758));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 759));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 760));
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106(L_0, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 760));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 761));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingBottom_m08100BDABCA07492B6BBF8FD57BCB06AD460049C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutPaddingBottom_m08100BDABCA07492B6BBF8FD57BCB06AD460049C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutPaddingBottom_m08100BDABCA07492B6BBF8FD57BCB06AD460049C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 762));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 763));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 764));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 765));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 766));
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m6732C0B3A36F53EE252248B834992E9E36966106(L_0, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 766));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 767));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderLeft_mC799A7EC6C1ED244DDD852634ACC768CEADFD366 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutBorderLeft_mC799A7EC6C1ED244DDD852634ACC768CEADFD366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutBorderLeft_mC799A7EC6C1ED244DDD852634ACC768CEADFD366_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 768));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 769));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 770));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 771));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 772));
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 772));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 773));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderTop_m5FEAEE25D61F72B530BCC9B8B11A374BAD94D637 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutBorderTop_m5FEAEE25D61F72B530BCC9B8B11A374BAD94D637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutBorderTop_m5FEAEE25D61F72B530BCC9B8B11A374BAD94D637_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 774));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 775));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 776));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 777));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 778));
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497(L_0, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 778));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 779));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderRight_mC22B436C97ABEF06221F3BF9F1506E527E9CEF99 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutBorderRight_mC22B436C97ABEF06221F3BF9F1506E527E9CEF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutBorderRight_mC22B436C97ABEF06221F3BF9F1506E527E9CEF99_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 780));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 781));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 782));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 783));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 784));
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497(L_0, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 784));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 785));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderBottom_m06786864F2149A50CBD5F551977E46737A614D91 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_get_LayoutBorderBottom_m06786864F2149A50CBD5F551977E46737A614D91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaNode_get_LayoutBorderBottom_m06786864F2149A50CBD5F551977E46737A614D91_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 786));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 787));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 788));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 789));
		intptr_t L_0 = __this->____ygNode_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 790));
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_mE2599ACF460B0212F479303CA784D6EC7AC06497(L_0, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 790));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 791));
		float L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaUnit_t9E457A480EDCB8231680D11068A4DF6F0C8D84FF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 792));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 793));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 794));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 795));
		int32_t L_0 = __this->___unit_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 796));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 797));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 798));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 799));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 800));
		float L_0 = __this->___value_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 801));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	float _returnValue;
	_returnValue = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 802));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 803));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B2_0 = NULL;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 804));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 805));
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		float L_0 = ___value0;
		(&V_0)->___value_0 = L_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 806));
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 806));
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->___unit_1 = G_B3_0;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 807));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 808));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 809));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 810));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 811));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 812));
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 812));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 813));
		int32_t L_1;
		L_1 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___other0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 813));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 814));
		float L_2;
		L_2 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 814));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 815));
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___other0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 815));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 816));
		bool L_4;
		L_4 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 816));
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 817));
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 817));
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B6_0;
		goto IL_0039;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 818));
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F_AdjustorThunk (RuntimeObject* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 819));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 820));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 821));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 822));
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 823));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 824));
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 825));
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 826));
		bool L_4;
		L_4 = YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F(__this, ((*(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)((YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)UnBox(L_3, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var)))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 826));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 827));
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 828));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 829));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 830));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 831));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 832));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 833));
		float L_0;
		L_0 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 833));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 834));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 834));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 835));
		int32_t L_2;
		L_2 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 835));
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^(int32_t)L_2));
		goto IL_0020;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 836));
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Auto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Auto_m73BFEAE3C23C6B9BD11BFD462B007BF7A6A58C96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_Auto_m73BFEAE3C23C6B9BD11BFD462B007BF7A6A58C96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_Auto_m73BFEAE3C23C6B9BD11BFD462B007BF7A6A58C96_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 837));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 838));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 839));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 840));
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		(&V_0)->___value_0 = (std::numeric_limits<float>::quiet_NaN());
		(&V_0)->___unit_1 = 3;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = V_0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 841));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Percent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Percent_m9AE97691AE76135B4BAD62C862884D5240D7C8C2 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_Percent_m9AE97691AE76135B4BAD62C862884D5240D7C8C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_Percent_m9AE97691AE76135B4BAD62C862884D5240D7C8C2_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 842));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 843));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B2_0 = NULL;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 844));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 845));
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		float L_0 = ___value0;
		(&V_0)->___value_0 = L_0;
		float L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 846));
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m315EAE3D71B71011D7AE90F2F5C0617AC55DEDD9(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 846));
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->___unit_1 = G_B3_0;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 847));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_op_Implicit_mEDC38BD42737237B50A97DB49530A6DDE4E10DA3 (float ___pointValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_op_Implicit_mEDC38BD42737237B50A97DB49530A6DDE4E10DA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pointValue0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, YogaValue_op_Implicit_mEDC38BD42737237B50A97DB49530A6DDE4E10DA3_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 848));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 849));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 850));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 851));
		float L_0 = ___pointValue0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 852));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_1;
		L_1 = YogaValue_Point_mA1955877796F9582C8F3B9ADDA817CD2B87E613E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 852));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 853));
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup(TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com_back(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com_cleanup(TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_GetCursorPosition_m9A8419CDFCAB340843812AF3E257C910A7F7B098 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_GetCursorPosition_m9A8419CDFCAB340843812AF3E257C910A7F7B098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___settings0), (&___rect1), (&___cursorIndex2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_GetCursorPosition_m9A8419CDFCAB340843812AF3E257C910A7F7B098_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 854));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 855));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 856));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 857));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 858));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 858));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 859));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 860));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 861));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 862));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 862));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 863));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 864));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 864));
		V_1 = L_4;
		goto IL_0030;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 865));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_5 = ___settings0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = ___rect1;
		int32_t L_7 = ___cursorIndex2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 866));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 866));
		V_1 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 867));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		return L_9;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextWidth_mDA393E1AFE8CAC48EF710CD2EAE73FF7508B2999 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_ComputeTextWidth_mDA393E1AFE8CAC48EF710CD2EAE73FF7508B2999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___settings0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_ComputeTextWidth_mDA393E1AFE8CAC48EF710CD2EAE73FF7508B2999_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 868));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 869));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 870));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 871));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 872));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 872));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 873));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 874));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 875));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 876));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 876));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 877));
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 878));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_4 = ___settings0;
		String_t* L_5 = L_4.___text_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 879));
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 879));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 880));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 881));
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 882));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 883));
		float L_9;
		L_9 = TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 883));
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 884));
		float L_10 = V_1;
		return L_10;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextHeight_mD1C7FF36C467891987154FD9A1643964B481F6C4 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_ComputeTextHeight_mD1C7FF36C467891987154FD9A1643964B481F6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___settings0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_ComputeTextHeight_mD1C7FF36C467891987154FD9A1643964B481F6C4_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 885));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 886));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 887));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 888));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 889));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 889));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 890));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 891));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 892));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 893));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 893));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 894));
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 895));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_4 = ___settings0;
		String_t* L_5 = L_4.___text_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 896));
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 896));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 897));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 898));
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 899));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 900));
		float L_9;
		L_9 = TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 900));
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 901));
		float L_10 = V_1;
		return L_10;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex> UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 TextNative_GetVertices_m4741D7ABAE348124849C8CF071EB17654C933065 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m7C3D9701BB9D5B63570CD59CEDB98E72945D8F7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_GetVertices_m4741D7ABAE348124849C8CF071EB17654C933065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___settings0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_GetVertices_m4741D7ABAE348124849C8CF071EB17654C933065_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 902));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 903));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 904));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 905));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 906));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 907));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F(UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 907));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 908));
		TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3(L_0, (0), L_1, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 908));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 909));
		int32_t L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 910));
		NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB((&V_1), L_2, 2, 0, NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 910));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 911));
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 912));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 913));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 914));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_5 = ___settings0;
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 915));
		void* L_7;
		L_7 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m7C3D9701BB9D5B63570CD59CEDB98E72945D8F7E(L_6, NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m7C3D9701BB9D5B63570CD59CEDB98E72945D8F7E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 915));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 916));
		intptr_t L_8;
		L_8 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 916));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 917));
		int32_t L_9;
		L_9 = UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F(UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 917));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 918));
		TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3(L_5, L_8, L_9, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 918));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 919));
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 920));
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 920));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 921));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 921));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 922));
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 923));
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_12 = V_1;
		V_3 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 924));
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_GetOffset_mEB1BDADC4C9C6FE281B942A6A8E542EFFA73067C (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_GetOffset_mEB1BDADC4C9C6FE281B942A6A8E542EFFA73067C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___settings0), (&___screenRect1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_GetOffset_mEB1BDADC4C9C6FE281B942A6A8E542EFFA73067C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 925));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 926));
	String_t* G_B4_0 = NULL;
	TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 927));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 928));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 929));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 929));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 930));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 931));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 932));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 933));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 933));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 934));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 935));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 935));
		V_1 = L_4;
		goto IL_004f;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 936));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_5 = ___settings0;
		String_t* L_6 = L_5.___text_0;
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = (&___settings0);
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = (&___settings0);
			goto IL_0040;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		G_B4_1->___text_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___text_0), (void*)G_B4_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 937));
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___screenRect1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 938));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27(L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 938));
		V_1 = L_10;
		goto IL_004f;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 939));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		return L_11;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextScaling(UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextScaling_mFACFE42E518E28F8F5F0A8F9C5E55874492846AF (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldMatrix0, float ___pixelsPerPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_ComputeTextScaling_mFACFE42E518E28F8F5F0A8F9C5E55874492846AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___worldMatrix0), (&___pixelsPerPoint1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_ComputeTextScaling_mFACFE42E518E28F8F5F0A8F9C5E55874492846AF_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 940));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 941));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 942));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 943));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___worldMatrix0;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___worldMatrix0;
		float L_3 = L_2.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___worldMatrix0;
		float L_5 = L_4.___m20_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 944));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 944));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 945));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___worldMatrix0;
		float L_7 = L_6.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___worldMatrix0;
		float L_9 = L_8.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___worldMatrix0;
		float L_11 = L_10.___m21_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 946));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_7, L_9, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 946));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 947));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 948));
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 948));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 949));
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 949));
		V_2 = ((float)(((float)il2cpp_codegen_add(L_12, L_13))/(2.0f)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 950));
		float L_14 = V_2;
		float L_15 = ___pixelsPerPoint1;
		V_3 = ((float)il2cpp_codegen_multiply(L_14, L_15));
		goto IL_004f;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 951));
		float L_16 = V_3;
		return L_16;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_DoComputeTextWidth_mF671B342B6C2A9F38853382C13D120BF7607521C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		float L_0;
		L_0 = TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6((&___settings0), NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_DoComputeTextHeight_m374A26A5446E96D6873007CD5C612116FCC8C411_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		float L_0;
		L_0 = TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F((&___settings0), NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_DoGetCursorPosition_mAEAD8A317ED0799C7E73E42B4C35E910A207ECB2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___cursorPosition2;
		TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A((&___settings0), (&___rect1), L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_GetVertices_m2E6319DEDC0E387F6A1E4EC21E4B627F564243D3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___buffer1;
		int32_t L_1 = ___vertexSize2;
		int32_t* L_2 = ___vertexCount3;
		TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB((&___settings0), L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextNative_DoGetOffset_m81701C0CC518A6EFCE0D31835A151A116C6E3D27_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3((&___settings0), (&___rect1), (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) 
{
	typedef float (*TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*);
	static TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextWidth_Injected_m832A23884A1921FC860D54A9DBCBADCF04CB9CA6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) 
{
	typedef float (*TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*);
	static TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextHeight_Injected_mD0EC2D63EDD10174D19CFC3857DE5B3044C5D34F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, int32_t ___cursorPosition2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) 
{
	typedef void (*TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetCursorPosition_Injected_mAD8D158E7386FA45FA016351E743768652385B3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___cursorPosition2, ___ret3);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) 
{
	typedef void (*TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, intptr_t, int32_t, int32_t*);
	static TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_GetVertices_Injected_m9B662FC79B3E164892A3BDEEA4067EF6CC41E3FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)");
	_il2cpp_icall_func(___settings0, ___buffer1, ___vertexSize2, ___vertexCount3);
}
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret2, const RuntimeMethod* method) 
{
	typedef void (*TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetOffset_Injected_m20970D3264C1D91549D7845DF00A1C5BAA494ED3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___ret2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m9F9B960B858876372942CEADDB1527DF98503A9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m9F9B960B858876372942CEADDB1527DF98503A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m9F9B960B858876372942CEADDB1527DF98503A9D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 952));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 953));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 954));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 955));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___RepaintOverlayPanelsCallback_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 956));
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 956));
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 957));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mADFB4DA9D98A7A7A5D9DA06C4870560FA96910F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mADFB4DA9D98A7A7A5D9DA06C4870560FA96910F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mADFB4DA9D98A7A7A5D9DA06C4870560FA96910F9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 958));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 959));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 960));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 961));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___UpdateRuntimePanelsCallback_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 962));
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 962));
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 963));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mF2DB7B25BFB9E0EC485CD6EDA1DABFEDA61C68F6 (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mF2DB7B25BFB9E0EC485CD6EDA1DABFEDA61C68F6_ftn) ();
	static UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mF2DB7B25BFB9E0EC485CD6EDA1DABFEDA61C68F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mF2DB7B25BFB9E0EC485CD6EDA1DABFEDA61C68F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_mBA667716C3B6341DF99E03EB4F760463A42BE9DA (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_mBA667716C3B6341DF99E03EB4F760463A42BE9DA_ftn) ();
	static UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_mBA667716C3B6341DF99E03EB4F760463A42BE9DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_mBA667716C3B6341DF99E03EB4F760463A42BE9DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::VisualElementCreation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_VisualElementCreation_mC2040C48791455FEF1ED2E80174A2D075CDA993D (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_VisualElementCreation_mC2040C48791455FEF1ED2E80174A2D075CDA993D_ftn) ();
	static UIElementsRuntimeUtilityNative_VisualElementCreation_mC2040C48791455FEF1ED2E80174A2D075CDA993D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_VisualElementCreation_mC2040C48791455FEF1ED2E80174A2D075CDA993D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::VisualElementCreation()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::add_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_GraphicsResourcesRecreate_m11A4A0B4368B22DE41056758D2A4208AB871DF54 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_add_GraphicsResourcesRecreate_m11A4A0B4368B22DE41056758D2A4208AB871DF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_add_GraphicsResourcesRecreate_m11A4A0B4368B22DE41056758D2A4208AB871DF54_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_GraphicsResourcesRecreate_m7EFCE9A98AA841D4CAC8F1781359500A32559105 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_remove_GraphicsResourcesRecreate_m7EFCE9A98AA841D4CAC8F1781359500A32559105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_remove_GraphicsResourcesRecreate_m7EFCE9A98AA841D4CAC8F1781359500A32559105_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_EngineUpdate_mFD3568341033913331E4CAA041B0A0F5E78D58B0 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_add_EngineUpdate_mFD3568341033913331E4CAA041B0A0F5E78D58B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_add_EngineUpdate_mFD3568341033913331E4CAA041B0A0F5E78D58B0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_EngineUpdate_mFCD631B1906D9C0B0162B359F5D27D4B569C3971 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_remove_EngineUpdate_mFCD631B1906D9C0B0162B359F5D27D4B569C3971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_remove_EngineUpdate_mFCD631B1906D9C0B0162B359F5D27D4B569C3971_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_FlushPendingResources_m0603289F1CA8051CA6248A8A3769EF185113A768 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_add_FlushPendingResources_m0603289F1CA8051CA6248A8A3769EF185113A768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_add_FlushPendingResources_m0603289F1CA8051CA6248A8A3769EF185113A768_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_FlushPendingResources_m1547E32B87BD90E968B2E8B51B2AD206C1A3A311 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_remove_FlushPendingResources_m1547E32B87BD90E968B2E8B51B2AD206C1A3A311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_remove_FlushPendingResources_m1547E32B87BD90E968B2E8B51B2AD206C1A3A311_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RegisterIntermediateRenderers_m7B68C3555B2795D696838A82FB7F7F3F1BDD0A0A (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_add_RegisterIntermediateRenderers_m7B68C3555B2795D696838A82FB7F7F3F1BDD0A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_1 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_add_RegisterIntermediateRenderers_m7B68C3555B2795D696838A82FB7F7F3F1BDD0A0A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = V_0;
		V_1 = L_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_2 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)Castclass((RuntimeObject*)L_4, Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_5 = V_2;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_6 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_8 = V_0;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_8) == ((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RegisterIntermediateRenderers_m33218BE02318488C8196C0C4B314809B5BA15B1B (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_remove_RegisterIntermediateRenderers_m33218BE02318488C8196C0C4B314809B5BA15B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_1 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_remove_RegisterIntermediateRenderers_m33218BE02318488C8196C0C4B314809B5BA15B1B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = V_0;
		V_1 = L_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_2 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)Castclass((RuntimeObject*)L_4, Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_5 = V_2;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_6 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_8 = V_0;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_8) == ((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RenderNodeExecute_mC630B888D39B3CE6D6B254491C9992451FAECD77 (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_add_RenderNodeExecute_mC630B888D39B3CE6D6B254491C9992451FAECD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_1 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_add_RenderNodeExecute_mC630B888D39B3CE6D6B254491C9992451FAECD77_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_2 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)Castclass((RuntimeObject*)L_4, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = V_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_6 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_8 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_8) == ((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RenderNodeExecute_m3C6D90276B125884F2B00A025ABC14AA76049C8A (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_remove_RenderNodeExecute_m3C6D90276B125884F2B00A025ABC14AA76049C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_1 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_remove_RenderNodeExecute_m3C6D90276B125884F2B00A025ABC14AA76049C8A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		V_0 = L_0;
	}

IL_0006:
	{
		CHECK_PAUSE_POINT;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_2 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)Castclass((RuntimeObject*)L_4, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = V_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_6 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_8 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_8) == ((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_m0501A6352C072455A5524B718A859768DD71B373 (bool ___recreate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseGraphicsResourcesRecreate_m0501A6352C072455A5524B718A859768DD71B373_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___recreate0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseGraphicsResourcesRecreate_m0501A6352C072455A5524B718A859768DD71B373_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 975));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 976));
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 977));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 978));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___recreate0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 979));
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 979));
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 980));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_mDEB8F6DCB0D42B6FDBF178D51F3AAAE5E7726CEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseEngineUpdate_mDEB8F6DCB0D42B6FDBF178D51F3AAAE5E7726CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseEngineUpdate_mDEB8F6DCB0D42B6FDBF178D51F3AAAE5E7726CEB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 981));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 982));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 983));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 984));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 985));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 986));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 987));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 988));
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 988));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 989));
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 990));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_m7F4B9153DB09CE954D0625F04C2682CDC65A58C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseFlushPendingResources_m7F4B9153DB09CE954D0625F04C2682CDC65A58C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseFlushPendingResources_m7F4B9153DB09CE954D0625F04C2682CDC65A58C2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 991));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 992));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 993));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 994));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 995));
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 995));
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 996));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRegisterIntermediateRenderers(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_mCF9B113F6CBF24039CD28343E6FDE82ABB78D18B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseRegisterIntermediateRenderers_mCF9B113F6CBF24039CD28343E6FDE82ABB78D18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___camera0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseRegisterIntermediateRenderers_mCF9B113F6CBF24039CD28343E6FDE82ABB78D18B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 997));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 998));
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B2_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 999));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1000));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1001));
		NullCheck(G_B2_0);
		Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1001));
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1002));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeAdd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_mBEFE7A4093DD6669BE5FDF15C6A3808881D6D0C5 (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseRenderNodeAdd_mBEFE7A4093DD6669BE5FDF15C6A3808881D6D0C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___userData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseRenderNodeAdd_mBEFE7A4093DD6669BE5FDF15C6A3808881D6D0C5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1003));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1004));
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1005));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1006));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeAdd_4;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1007));
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1007));
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1008));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeExecute(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_m8A18D92E0CB6FA1CD0AA1E439164142F56705798 (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseRenderNodeExecute_m8A18D92E0CB6FA1CD0AA1E439164142F56705798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___userData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseRenderNodeExecute_m8A18D92E0CB6FA1CD0AA1E439164142F56705798_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1009));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1010));
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1011));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1012));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1013));
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1013));
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1014));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_mEF4A55AD5C19506566901C4CD5CFC29C1FD3EBA7 (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RaiseRenderNodeCleanup_mEF4A55AD5C19506566901C4CD5CFC29C1FD3EBA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___userData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RaiseRenderNodeCleanup_mEF4A55AD5C19506566901C4CD5CFC29C1FD3EBA7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1015));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1016));
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1017));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1018));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeCleanup_6;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1019));
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1019));
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1020));
		return;
	}
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_AllocateBuffer_m79C0A0B1748A573ABF499E8589F206628F06005C (int32_t ___elementCount0, int32_t ___elementStride1, bool ___vertexBuffer2, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_AllocateBuffer_m79C0A0B1748A573ABF499E8589F206628F06005C_ftn) (int32_t, int32_t, bool);
	static Utility_AllocateBuffer_m79C0A0B1748A573ABF499E8589F206628F06005C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_AllocateBuffer_m79C0A0B1748A573ABF499E8589F206628F06005C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)");
	intptr_t icallRetVal = _il2cpp_icall_func(___elementCount0, ___elementStride1, ___vertexBuffer2);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_FreeBuffer_m710B8442D3809F3E10202F0FD5076A6C63B92F7C (intptr_t ___buffer0, const RuntimeMethod* method) 
{
	typedef void (*Utility_FreeBuffer_m710B8442D3809F3E10202F0FD5076A6C63B92F7C_ftn) (intptr_t);
	static Utility_FreeBuffer_m710B8442D3809F3E10202F0FD5076A6C63B92F7C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_FreeBuffer_m710B8442D3809F3E10202F0FD5076A6C63B92F7C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)");
	_il2cpp_icall_func(___buffer0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_UpdateBufferRanges_m7E4FAAD598CA0D57796007E65D2822A781F0B07A (intptr_t ___buffer0, intptr_t ___ranges1, int32_t ___rangeCount2, int32_t ___writeRangeStart3, int32_t ___writeRangeEnd4, const RuntimeMethod* method) 
{
	typedef void (*Utility_UpdateBufferRanges_m7E4FAAD598CA0D57796007E65D2822A781F0B07A_ftn) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	static Utility_UpdateBufferRanges_m7E4FAAD598CA0D57796007E65D2822A781F0B07A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_UpdateBufferRanges_m7E4FAAD598CA0D57796007E65D2822A781F0B07A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___buffer0, ___ranges1, ___rangeCount2, ___writeRangeStart3, ___writeRangeEnd4);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA_ftn) (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*, int32_t, intptr_t, int32_t);
	static Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___props0, ___name1, ___vector4s2, ___count3);
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_GetVertexDeclaration_mE471CC1D9A47B11E64E4DF232E0732FAF8B1AF33 (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___vertexAttributes0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_GetVertexDeclaration_mE471CC1D9A47B11E64E4DF232E0732FAF8B1AF33_ftn) (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*);
	static Utility_GetVertexDeclaration_mE471CC1D9A47B11E64E4DF232E0732FAF8B1AF33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetVertexDeclaration_mE471CC1D9A47B11E64E4DF232E0732FAF8B1AF33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___vertexAttributes0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4,UnityEngine.Bounds,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_m46C340A1198D0D39E65E65550B9D697BAAB1F617 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_RegisterIntermediateRenderer_m46C340A1198D0D39E65E65550B9D697BAAB1F617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_RegisterIntermediateRenderer_m46C340A1198D0D39E65E65550B9D697BAAB1F617_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = ___renderLayer4;
		int32_t L_3 = ___shadowCasting5;
		bool L_4 = ___receiveShadows6;
		int32_t L_5 = ___sameDistanceSortPriority7;
		uint64_t L_6 = ___sceneCullingMask8;
		int32_t L_7 = ___rendererCallbackFlags9;
		intptr_t L_8 = ___userData10;
		int32_t L_9 = ___userDataSize11;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2(L_0, L_1, (&___transform2), (&___aabb3), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6 (intptr_t ___ib0, intptr_t* ___vertexStreams1, int32_t ___streamCount2, intptr_t ___ranges3, int32_t ___rangeCount4, intptr_t ___vertexDecl5, const RuntimeMethod* method) 
{
	typedef void (*Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6_ftn) (intptr_t, intptr_t*, int32_t, intptr_t, int32_t, intptr_t);
	static Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___ib0, ___vertexStreams1, ___streamCount2, ___ranges3, ___rangeCount4, ___vertexDecl5);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetPropertyBlock_m186F7D4B9C21DB895748F5B7E01F5AB6DB286AA5 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetPropertyBlock_m186F7D4B9C21DB895748F5B7E01F5AB6DB286AA5_ftn) (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*);
	static Utility_SetPropertyBlock_m186F7D4B9C21DB895748F5B7E01F5AB6DB286AA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetPropertyBlock_m186F7D4B9C21DB895748F5B7E01F5AB6DB286AA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)");
	_il2cpp_icall_func(___props0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_m088F8070879B9480C4A6E12EB3229E9EEB718245 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___scissorRect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_SetScissorRect_m088F8070879B9480C4A6E12EB3229E9EEB718245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_SetScissorRect_m088F8070879B9480C4A6E12EB3229E9EEB718245_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993((&___scissorRect0), NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DisableScissor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DisableScissor_m2FD26952211AEA29D4AD48204857F4C096E8B6B6 (const RuntimeMethod* method) 
{
	typedef void (*Utility_DisableScissor_m2FD26952211AEA29D4AD48204857F4C096E8B6B6_ftn) ();
	static Utility_DisableScissor_m2FD26952211AEA29D4AD48204857F4C096E8B6B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DisableScissor_m2FD26952211AEA29D4AD48204857F4C096E8B6B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DisableScissor()");
	_il2cpp_icall_func();
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_m41C69707D8046FB8BE53B7866A7370AA9A1BB871 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___stencilState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_CreateStencilState_m41C69707D8046FB8BE53B7866A7370AA9A1BB871_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_CreateStencilState_m41C69707D8046FB8BE53B7866A7370AA9A1BB871_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B((&___stencilState0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetStencilState_m7F941AD337300C43989A9096E9396E3CC7D6979D (intptr_t ___stencilState0, int32_t ___stencilRef1, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetStencilState_m7F941AD337300C43989A9096E9396E3CC7D6979D_ftn) (intptr_t, int32_t);
	static Utility_SetStencilState_m7F941AD337300C43989A9096E9396E3CC7D6979D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetStencilState_m7F941AD337300C43989A9096E9396E3CC7D6979D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___stencilState0, ___stencilRef1);
}
// System.Boolean UnityEngine.UIElements.UIR.Utility::HasMappedBufferRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_HasMappedBufferRange_m43535D979D7B03DAE2140D2A4DDF29A9B77CB92B (const RuntimeMethod* method) 
{
	typedef bool (*Utility_HasMappedBufferRange_m43535D979D7B03DAE2140D2A4DDF29A9B77CB92B_ftn) ();
	static Utility_HasMappedBufferRange_m43535D979D7B03DAE2140D2A4DDF29A9B77CB92B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_HasMappedBufferRange_m43535D979D7B03DAE2140D2A4DDF29A9B77CB92B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::HasMappedBufferRange()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.UInt32 UnityEngine.UIElements.UIR.Utility::InsertCPUFence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utility_InsertCPUFence_m8200A4F7724581FDE487AF45E4D9B6B9FFEF883E (const RuntimeMethod* method) 
{
	typedef uint32_t (*Utility_InsertCPUFence_m8200A4F7724581FDE487AF45E4D9B6B9FFEF883E_ftn) ();
	static Utility_InsertCPUFence_m8200A4F7724581FDE487AF45E4D9B6B9FFEF883E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_InsertCPUFence_m8200A4F7724581FDE487AF45E4D9B6B9FFEF883E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::InsertCPUFence()");
	uint32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_CPUFencePassed_mF2311BE2687767B2BD1952FBFC46E6BBA7753969 (uint32_t ___fence0, const RuntimeMethod* method) 
{
	typedef bool (*Utility_CPUFencePassed_mF2311BE2687767B2BD1952FBFC46E6BBA7753969_ftn) (uint32_t);
	static Utility_CPUFencePassed_mF2311BE2687767B2BD1952FBFC46E6BBA7753969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_CPUFencePassed_mF2311BE2687767B2BD1952FBFC46E6BBA7753969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___fence0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_WaitForCPUFencePassed_mACEE12861CF9457367124C6137464CD2D8F3CB36 (uint32_t ___fence0, const RuntimeMethod* method) 
{
	typedef void (*Utility_WaitForCPUFencePassed_mACEE12861CF9457367124C6137464CD2D8F3CB36_ftn) (uint32_t);
	static Utility_WaitForCPUFencePassed_mACEE12861CF9457367124C6137464CD2D8F3CB36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_WaitForCPUFencePassed_mACEE12861CF9457367124C6137464CD2D8F3CB36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)");
	_il2cpp_icall_func(___fence0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SyncRenderThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SyncRenderThread_mBC093FC01ADBC4307BABCE385DC19B2C6C38F65F (const RuntimeMethod* method) 
{
	typedef void (*Utility_SyncRenderThread_mBC093FC01ADBC4307BABCE385DC19B2C6C38F65F_ftn) ();
	static Utility_SyncRenderThread_mBC093FC01ADBC4307BABCE385DC19B2C6C38F65F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SyncRenderThread_mBC093FC01ADBC4307BABCE385DC19B2C6C38F65F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SyncRenderThread()");
	_il2cpp_icall_func();
}
// UnityEngine.RectInt UnityEngine.UIElements.UIR.Utility::GetActiveViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 Utility_GetActiveViewport_m6219330120AEDFC96C9AA0EE75023E9431EB189D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_GetActiveViewport_m6219330120AEDFC96C9AA0EE75023E9431EB189D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_GetActiveViewport_m6219330120AEDFC96C9AA0EE75023E9431EB189D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainBegin_m1105D022C7484592F020401C02ABEDA4237BD6DF (const RuntimeMethod* method) 
{
	typedef void (*Utility_ProfileDrawChainBegin_m1105D022C7484592F020401C02ABEDA4237BD6DF_ftn) ();
	static Utility_ProfileDrawChainBegin_m1105D022C7484592F020401C02ABEDA4237BD6DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainBegin_m1105D022C7484592F020401C02ABEDA4237BD6DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainEnd_m6445051B594B0DDCD869D4751398DAD3AAA28A01 (const RuntimeMethod* method) 
{
	typedef void (*Utility_ProfileDrawChainEnd_m6445051B594B0DDCD869D4751398DAD3AAA28A01_ftn) ();
	static Utility_ProfileDrawChainEnd_m6445051B594B0DDCD869D4751398DAD3AAA28A01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainEnd_m6445051B594B0DDCD869D4751398DAD3AAA28A01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_NotifyOfUIREvents_mB355BB746BD3C095223AB96CC5C39669A61C922B (bool ___subscribe0, const RuntimeMethod* method) 
{
	typedef void (*Utility_NotifyOfUIREvents_mB355BB746BD3C095223AB96CC5C39669A61C922B_ftn) (bool);
	static Utility_NotifyOfUIREvents_mB355BB746BD3C095223AB96CC5C39669A61C922B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_NotifyOfUIREvents_mB355BB746BD3C095223AB96CC5C39669A61C922B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)");
	_il2cpp_icall_func(___subscribe0);
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Utility_GetUnityProjectionMatrix_mA019D5445D1641B0CD89A79DDDE8B1B7E5FE0EBB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_GetUnityProjectionMatrix_mA019D5445D1641B0CD89A79DDDE8B1B7E5FE0EBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility_GetUnityProjectionMatrix_mA019D5445D1641B0CD89A79DDDE8B1B7E5FE0EBB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D((&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_mCB0529D224E4D67079BC12BA37789C20EE0D5980 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility__cctor_mCB0529D224E4D67079BC12BA37789C20EE0D5980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Utility__cctor_mCB0529D224E4D67079BC12BA37789C20EE0D5980_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1021));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1022));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1023));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1024));
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 1024));
		((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___s_MarkerRaiseEngineUpdate_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) 
{
	typedef void (*Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2_ftn) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, int32_t, bool, int32_t, uint64_t, int32_t, intptr_t, int32_t);
	static Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_RegisterIntermediateRenderer_Injected_m95245CEE2B093C661065C6262AD1BD16CF171BE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___camera0, ___material1, ___transform2, ___aabb3, ___renderLayer4, ___shadowCasting5, ___receiveShadows6, ___sameDistanceSortPriority7, ___sceneCullingMask8, ___rendererCallbackFlags9, ___userData10, ___userDataSize11);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___scissorRect0, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993_ftn) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*);
	static Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetScissorRect_Injected_m713B7CE9313C2696047C98A6AFC339C8BAFA8993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___scissorRect0);
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* ___stencilState0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B_ftn) (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*);
	static Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_CreateStencilState_Injected_mF7304A13703CB8BBC4E5E2CE66EAF56AEC117C8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___stencilState0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0_ftn) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*);
	static Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetActiveViewport_Injected_m60650AF751F179D62E35B34CCC6E2068291F0CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___ret0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D_ftn) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetUnityProjectionMatrix_Injected_m8DE89F47F848B2071774E05D2F23DA10435E643D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7250));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7251));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7252));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7253));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7254));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7031));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7032));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7033));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7034));
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7035));
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7036));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1), (&___z2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6216));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6218));
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6219));
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6220));
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6221));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6378));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6379));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6380));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6381));
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6382));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6382));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6383));
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 32));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 33));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 34));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 35));
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC(L_0, (uint16_t)1, 0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 35));
		__this->___m_Ptr_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 36));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisIl2CppFullySharedGenericAny_mAED9A6979B2FA505D66E7C1EB65B82AFF790F978_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyEnumerable_1_t36102943B460DED9F019D124B41D2A00656CC354_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}