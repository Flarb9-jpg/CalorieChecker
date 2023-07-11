#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Unity.XRTools.ModuleLoader.IFunctionalityProvider[]
struct IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection
struct IUsesFunctionalityInjection_tD20885CBA68BFD9F9EA5B7F5FD479BB4E7F91F32;
// Unity.XRTools.ModuleLoader.ImmortalModuleAttribute
struct ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A;
// Unity.XRTools.ModuleLoader.ModuleAssetCallbackOrderAttribute
struct ModuleAssetCallbackOrderAttribute_tCA50D198540F09C693EE998C4EE2D267FF4AB978;
// Unity.XRTools.ModuleLoader.ModuleBehaviorCallbackOrderAttribute
struct ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24;
// Unity.XRTools.ModuleLoader.ModuleBuildCallbackOrderAttribute
struct ModuleBuildCallbackOrderAttribute_tB0FA944D005ECEAE9C4836DC4EB818408F377875;
// Unity.XRTools.ModuleLoader.ModuleOrderAttribute
struct ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C;
// Unity.XRTools.ModuleLoader.ModuleSceneCallbackOrderAttribute
struct ModuleSceneCallbackOrderAttribute_tCD9FA5DC6A96D98E5C417DC896DE23261CA0B04D;
// Unity.XRTools.ModuleLoader.ModuleUnloadOrderAttribute
struct ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523;
// Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute
struct ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var;

struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE3EA2DD06D7970D48A4E3FB4488E07B4CEBEABA6 
{
};

// System.Collections.Generic.List`1<Unity.XRTools.ModuleLoader.IFunctionalityProvider>
struct List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.XRTools.ModuleLoader.FunctionalityProviderMethods
struct FunctionalityProviderMethods_t1C39C8F9453717AAF5861F66638A4D46D3301928  : public RuntimeObject
{
};

// Unity.XRTools.ModuleLoader.FunctionalitySubscriberMethods
struct FunctionalitySubscriberMethods_t0882B29B103146B47E50B4A26DCD9C82940113D4  : public RuntimeObject
{
};

// Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods
struct IUsesFunctionalityInjectionMethods_t77522EC2385F73531507929895D3FF08FD788B02  : public RuntimeObject
{
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Unity.XRTools.ModuleLoader.ImmortalModuleAttribute
struct ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// Unity.XRTools.ModuleLoader.ModuleOrderAttribute
struct ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Unity.XRTools.ModuleLoader.ModuleOrderAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;
};

// Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute
struct ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_0;
	// UnityEngine.RuntimePlatform[] Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::<ExcludedPlatforms>k__BackingField
	RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___U3CExcludedPlatformsU3Ek__BackingField_1;
	// System.Boolean Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::<DisallowAutoCreation>k__BackingField
	bool ___U3CDisallowAutoCreationU3Ek__BackingField_2;
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

// Unity.XRTools.ModuleLoader.ModuleAssetCallbackOrderAttribute
struct ModuleAssetCallbackOrderAttribute_tCA50D198540F09C693EE998C4EE2D267FF4AB978  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};

// Unity.XRTools.ModuleLoader.ModuleBehaviorCallbackOrderAttribute
struct ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};

// Unity.XRTools.ModuleLoader.ModuleBuildCallbackOrderAttribute
struct ModuleBuildCallbackOrderAttribute_tB0FA944D005ECEAE9C4836DC4EB818408F377875  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};

// Unity.XRTools.ModuleLoader.ModuleSceneCallbackOrderAttribute
struct ModuleSceneCallbackOrderAttribute_tCD9FA5DC6A96D98E5C417DC896DE23261CA0B04D  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};

// Unity.XRTools.ModuleLoader.ModuleUnloadOrderAttribute
struct ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___order0, const RuntimeMethod* method) ;
// System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::set_order(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_ExcludedPlatforms(UnityEngine.RuntimePlatform[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___value0, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XRTools.ModuleLoader.ImmortalModuleAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474 (ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.XRTools.ModuleLoader.ModuleAssetCallbackOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleAssetCallbackOrderAttribute__ctor_m5D3326145A1BB8EDB40A832149DB2DA0BE080628 (ModuleAssetCallbackOrderAttribute_tCA50D198540F09C693EE998C4EE2D267FF4AB978* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleAssetCallbackOrderAttribute(int order) : base(order) { }
		int32_t L_0 = ___order0;
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		// public ModuleAssetCallbackOrderAttribute(int order) : base(order) { }
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
// System.Void Unity.XRTools.ModuleLoader.ModuleBehaviorCallbackOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6 (ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleBehaviorCallbackOrderAttribute(int order) : base(order) { }
		int32_t L_0 = ___order0;
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		// public ModuleBehaviorCallbackOrderAttribute(int order) : base(order) { }
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
// System.Void Unity.XRTools.ModuleLoader.ModuleBuildCallbackOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBuildCallbackOrderAttribute__ctor_mAB6F96BE051D137786C1C16FC980AC77B40CAAB0 (ModuleBuildCallbackOrderAttribute_tB0FA944D005ECEAE9C4836DC4EB818408F377875* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleBuildCallbackOrderAttribute(int order) : base (order) { }
		int32_t L_0 = ___order0;
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		// public ModuleBuildCallbackOrderAttribute(int order) : base (order) { }
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
// System.Int32 Unity.XRTools.ModuleLoader.ModuleOrderAttribute::get_order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, const RuntimeMethod* method) 
{
	{
		// public int order { get; private set; }
		int32_t L_0 = __this->___U3CorderU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::set_order(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int order { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CorderU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleOrderAttribute(int order)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.order = order;
		int32_t L_0 = ___order0;
		ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline(__this, L_0, NULL);
		// }
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
// System.Void Unity.XRTools.ModuleLoader.ModuleSceneCallbackOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleSceneCallbackOrderAttribute__ctor_m63C5A6113DA2B9CBF8216930796105624AD108AD (ModuleSceneCallbackOrderAttribute_tCD9FA5DC6A96D98E5C417DC896DE23261CA0B04D* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleSceneCallbackOrderAttribute(int order) : base(order) { }
		int32_t L_0 = ___order0;
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		// public ModuleSceneCallbackOrderAttribute(int order) : base(order) { }
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
// System.Void Unity.XRTools.ModuleLoader.ModuleUnloadOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93 (ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ModuleUnloadOrderAttribute(int order) : base (order) { }
		int32_t L_0 = ___order0;
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		// public ModuleUnloadOrderAttribute(int order) : base (order) { }
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
// System.Int32 Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.RuntimePlatform[] Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_ExcludedPlatforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	{
		// public RuntimePlatform[] ExcludedPlatforms { get; private set; }
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = __this->___U3CExcludedPlatformsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_ExcludedPlatforms(UnityEngine.RuntimePlatform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___value0, const RuntimeMethod* method) 
{
	{
		// public RuntimePlatform[] ExcludedPlatforms { get; private set; }
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = ___value0;
		__this->___U3CExcludedPlatformsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExcludedPlatformsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_DisallowAutoCreation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	{
		// public bool DisallowAutoCreation { get; }
		bool L_0 = __this->___U3CDisallowAutoCreationU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::.ctor(System.Int32,UnityEngine.RuntimePlatform[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___priority0, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___excludedPlatforms1, bool ___disallowAutoCreation2, const RuntimeMethod* method) 
{
	{
		// public ProviderSelectionOptionsAttribute(int priority = 0, RuntimePlatform[] excludedPlatforms = null, bool disallowAutoCreation = false)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Priority = priority;
		int32_t L_0 = ___priority0;
		ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline(__this, L_0, NULL);
		// ExcludedPlatforms = excludedPlatforms;
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_1 = ___excludedPlatforms1;
		ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline(__this, L_1, NULL);
		// DisallowAutoCreation = disallowAutoCreation;
		bool L_2 = ___disallowAutoCreation2;
		__this->___U3CDisallowAutoCreationU3Ek__BackingField_2 = L_2;
		// }
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
// System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFunctionalityInjectionMethods_InjectFunctionality_m1364964B8050A80EAC927D5D977BB0E0DDD0B0A6 (RuntimeObject* ___user0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___objects1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.InjectFunctionality(objects);
		RuntimeObject* L_0 = ___user0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection>::get_provider() */, IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var, L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___objects1;
		NullCheck(L_1);
		InterfaceActionInvoker2< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66* >::Invoke(0 /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionality(System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.XRTools.ModuleLoader.IFunctionalityProvider>) */, IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var, L_1, L_2, (List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66*)NULL);
		// }
		return;
	}
}
// System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionalitySingle(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mC992F000D3DE1FC517CCEF2B172EDBC9697FA33A (RuntimeObject* ___user0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.InjectFunctionalitySingle(obj);
		RuntimeObject* L_0 = ___user0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection>::get_provider() */, IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___obj1;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionalitySingle(System.Object) */, IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectPreparedFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFunctionalityInjectionMethods_InjectPreparedFunctionality_m3D0B10DB5798A17A10B19F6718E1E48D3DBED3E1 (RuntimeObject* ___user0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___objects1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user.provider.InjectPreparedFunctionality(objects);
		RuntimeObject* L_0 = ___user0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection>::get_provider() */, IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var, L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___objects1;
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(1 /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectPreparedFunctionality(System.Collections.Generic.List`1<System.Object>) */, IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int order { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CorderU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___value0, const RuntimeMethod* method) 
{
	{
		// public RuntimePlatform[] ExcludedPlatforms { get; private set; }
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = ___value0;
		__this->___U3CExcludedPlatformsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExcludedPlatformsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
