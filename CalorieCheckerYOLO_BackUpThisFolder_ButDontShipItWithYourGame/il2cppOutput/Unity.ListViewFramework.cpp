#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.ListViewFramework.IListViewItem
struct IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043;
// Unity.ListViewFramework.ListViewCanvasScroller
struct ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18;
// Unity.ListViewFramework.ListViewControllerBase
struct ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D;
// Unity.ListViewFramework.ListViewScroller
struct ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UI[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_ListViewFramework[];
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral484D04065C9D1025E07A3F3A680F59F05D46AEBF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewCanvasScroller_Awake_m71D8C82DC75CD10442ED2D3A53F856DA403AEFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewCanvasScroller_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m19CCA0C31B0CB9C3D853D34212BE3FC651AFC8B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewCanvasScroller_UnityEngine_EventSystems_IDragHandler_OnDrag_m338C41C4EC8AF911184B734E428DFC5E132BC8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewCanvasScroller_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mC3418C6C95461763407DE5673EA47C3D13585A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewCanvasScroller__ctor_m997432EFFF2EADCE59D5F5A5012AE2FD31041B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_Awake_mA614CCDCD636F75C53DE01D713A22F60E930CAB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_ComputeConditions_m2393CCA2E1EC72783C510C3946ED95E758E039A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_EndSettling_mFA8650E2DFED10ACFE8ADBB802F83FB3D09809D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_GetObjectSize_mC784F1EEC353EF182E9F70409A58FC6E2A5C93EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_OnScrollEnded_mFF79FDEB9BC326FC106774EF27C7EB06CF2DC81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_OnScrollStarted_mA526D45CC5A87847302E6A6EBE5F8372E17A2230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_OnScroll_m945381CC0C85E82E729862B195A57FA41BA05F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_ScrollNext_m8612AF9AAFAD5E9B0AED4925BF53C9E3B28EF3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_ScrollPrevious_mA2BD04933E6DF32754BA30033842E0F86974A620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_ScrollTo_m59024358E12FAFD55A1DDE872EDFC108D0A99B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_StartSettling_mD0ECE5476609AF20823343363712C65D4C201413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_UpdateItemTransform_mB47E644116E7431DF75E5BAD9FA515DB1A9952EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_UpdateItem_m2BC7AC3030D7144799A3AAD74F3CB8A72348106A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_UpdateView_mF99A1393C540433C83EC5A1A0F8C432E4746DA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_Update_m975AE376E12C710ED4239CFC07F498C2C4AD50E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase__ctor_m71FAC47AAB0C4FC5624E007F19BEF37F7F3CE969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_get_itemSize_m63C0F414461C623BBAA72B5C89D0B4DBF0388397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_get_scrollSpeed_m4E7241970468F0C43495C9547BF0933D15066129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_remove_settlingCompleted_mC3071D91A68F0D9EB13C1B1CC99C143F85B581E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_set_scrollSpeed_m4B4AE3EC88A9377C22E6C71AA2A061E1AD453B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewControllerBase_set_size_m4ED8927DB166378A3F5CF6353D2D93D1C4129B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewScroller_OnScrollEnded_m9190156946DF0B9CC1B352A415D2A301FA08969F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewScroller_OnScrollStarted_mDE5ED460CA44429BA1BDF9C707B727C22DB9FF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewScroller_OnScroll_m9B764F90E5564AF38525D30CBBC4D170DCC99C8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewScroller_UnityEngine_EventSystems_IScrollHandler_OnScroll_mEB3A23748D61018BF4A74BFFD153182A565E20B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E998FB70F8858AE9F42CA4DC29B58B7DEBD39A0 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Unity.ListViewFramework.ListViewControllerBase
struct ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_ScrollOffset
	float ___m_ScrollOffset_4;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_Padding
	float ___m_Padding_5;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_ScrollDamping
	float ___m_ScrollDamping_6;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_OverScrollDamping
	float ___m_OverScrollDamping_7;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_MaxMomentum
	float ___m_MaxMomentum_8;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_SettleSpeed
	float ___m_SettleSpeed_9;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_ScrollSpeed
	float ___m_ScrollSpeed_10;
	// UnityEngine.GameObject[] Unity.ListViewFramework.ListViewControllerBase::m_Templates
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_Templates_11;
	// System.Boolean Unity.ListViewFramework.ListViewControllerBase::m_EnableSettling
	bool ___m_EnableSettling_12;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_LastScrollOffset
	float ___m_LastScrollOffset_13;
	// System.Action Unity.ListViewFramework.ListViewControllerBase::settlingCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___settlingCompleted_14;
	// System.Boolean Unity.ListViewFramework.ListViewControllerBase::m_Settling
	bool ___m_Settling_15;
	// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::m_ItemSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ItemSize_16;
	// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::m_StartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPosition_17;
	// System.Boolean Unity.ListViewFramework.ListViewControllerBase::m_Scrolling
	bool ___m_Scrolling_18;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_ScrollReturn
	float ___m_ScrollReturn_19;
	// System.Single Unity.ListViewFramework.ListViewControllerBase::m_ScrollDelta
	float ___m_ScrollDelta_20;
	// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_21;
	// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_22;
};

// Unity.ListViewFramework.ListViewScroller
struct ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.ListViewFramework.ListViewControllerBase Unity.ListViewFramework.ListViewScroller::m_ListView
	ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* ___m_ListView_4;
	// System.Boolean Unity.ListViewFramework.ListViewScroller::m_Scrolling
	bool ___m_Scrolling_5;
	// UnityEngine.Vector3 Unity.ListViewFramework.ListViewScroller::m_StartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPosition_6;
	// System.Single Unity.ListViewFramework.ListViewScroller::m_StartOffset
	float ___m_StartOffset_7;
};

// Unity.ListViewFramework.ListViewCanvasScroller
struct ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18  : public ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8
{
	// System.Boolean Unity.ListViewFramework.ListViewCanvasScroller::m_Horizontal
	bool ___m_Horizontal_8;
	// UnityEngine.RectTransform Unity.ListViewFramework.ListViewCanvasScroller::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_9;
	// UnityEngine.Camera Unity.ListViewFramework.ListViewCanvasScroller::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m89667B72A0E16263EB3DA90AC6A9DF856367EA8C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void Unity.ListViewFramework.ListViewControllerBase::set_scrollOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Unity.ListViewFramework.ListViewScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50 (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m89667B72A0E16263EB3DA90AC6A9DF856367EA8C_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void Unity.ListViewFramework.ListViewControllerBase::add_settlingCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single Unity.ListViewFramework.ListViewControllerBase::get_scrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
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
// System.Void Unity.ListViewFramework.ListViewCanvasScroller::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewCanvasScroller_Awake_m71D8C82DC75CD10442ED2D3A53F856DA403AEFF3 (ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_Awake_m71D8C82DC75CD10442ED2D3A53F856DA403AEFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewCanvasScroller_Awake_m71D8C82DC75CD10442ED2D3A53F856DA403AEFF3_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 2));
		// m_RectTransform = GetComponent<RectTransform>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 4));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 4));
		__this->___m_RectTransform_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RectTransform_9), (void*)L_0);
		// var canvas = GetComponentInParent<Canvas>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 6));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 6));
		V_0 = L_1;
		// m_Camera = canvas.worldCamera;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 7));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 8));
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 8));
		__this->___m_Camera_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_10), (void*)L_3);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 9));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewCanvasScroller::UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewCanvasScroller_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m19CCA0C31B0CB9C3D853D34212BE3FC651AFC8B2 (ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m19CCA0C31B0CB9C3D853D34212BE3FC651AFC8B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewCanvasScroller_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m19CCA0C31B0CB9C3D853D34212BE3FC651AFC8B2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 10));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 11));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 12));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(m_RectTransform, eventData.position, m_Camera, out localPoint);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 13));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_RectTransform_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 14));
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 14));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___m_Camera_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 15));
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_3, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 15));
		// OnScrollStarted(localPoint);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 16));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 17));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 18));
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void Unity.ListViewFramework.ListViewScroller::OnScrollStarted(UnityEngine.Vector3) */, __this, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 18));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 19));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewCanvasScroller::UnityEngine.EventSystems.IDragHandler.OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewCanvasScroller_UnityEngine_EventSystems_IDragHandler_OnDrag_m338C41C4EC8AF911184B734E428DFC5E132BC8B6 (ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_UnityEngine_EventSystems_IDragHandler_OnDrag_m338C41C4EC8AF911184B734E428DFC5E132BC8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewCanvasScroller_UnityEngine_EventSystems_IDragHandler_OnDrag_m338C41C4EC8AF911184B734E428DFC5E132BC8B6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 20));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 21));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 22));
		// if (m_Scrolling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 23));
		bool L_0 = ((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_Scrolling_5;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 24));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 25));
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(m_RectTransform, eventData.position, m_Camera, out localPoint);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 26));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___m_RectTransform_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 27));
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 27));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___m_Camera_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 28));
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_2, L_4, L_5, (&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 28));
		// if (m_Horizontal)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 29));
		bool L_7 = __this->___m_Horizontal_8;
		V_2 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 30));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// m_ListView.scrollOffset = m_StartOffset - (m_StartPosition.x - localPoint.x);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 31));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_9 = ((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_ListView_4;
		float L_10 = ((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_StartOffset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_StartPosition_6);
		float L_12 = L_11->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___x_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 32));
		NullCheck(L_9);
		ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2(L_9, ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_subtract(L_12, L_14)))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 33));
		goto IL_007c;
	}

IL_0057:
	{
		// m_ListView.scrollOffset = m_StartOffset - (localPoint.y - m_StartPosition.y);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 34));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_15 = ((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_ListView_4;
		float L_16 = ((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_StartOffset_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = L_17.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&((ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8*)__this)->___m_StartPosition_6);
		float L_20 = L_19->___y_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 35));
		NullCheck(L_15);
		ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2(L_15, ((float)il2cpp_codegen_subtract(L_16, ((float)il2cpp_codegen_subtract(L_18, L_20)))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 35));
	}

IL_007c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 36));
	}

IL_007d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 37));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewCanvasScroller::UnityEngine.EventSystems.IEndDragHandler.OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewCanvasScroller_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mC3418C6C95461763407DE5673EA47C3D13585A23 (ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mC3418C6C95461763407DE5673EA47C3D13585A23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewCanvasScroller_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mC3418C6C95461763407DE5673EA47C3D13585A23_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 38));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 39));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 40));
		// OnScrollEnded();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 41));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 42));
		VirtualActionInvoker0::Invoke(7 /* System.Void Unity.ListViewFramework.ListViewScroller::OnScrollEnded() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 42));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 43));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewCanvasScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewCanvasScroller__ctor_m997432EFFF2EADCE59D5F5A5012AE2FD31041B24 (ListViewCanvasScroller_t186A559AA0206870FF0AABB7B16EF3B63C756B18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewCanvasScroller__ctor_m997432EFFF2EADCE59D5F5A5012AE2FD31041B24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewCanvasScroller__ctor_m997432EFFF2EADCE59D5F5A5012AE2FD31041B24_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50(__this, NULL);
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
// System.Void Unity.ListViewFramework.ListViewControllerBase::add_settlingCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___settlingCompleted_14;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___settlingCompleted_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::remove_settlingCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_remove_settlingCompleted_mC3071D91A68F0D9EB13C1B1CC99C143F85B581E7 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_remove_settlingCompleted_mC3071D91A68F0D9EB13C1B1CC99C143F85B581E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_remove_settlingCompleted_mC3071D91A68F0D9EB13C1B1CC99C143F85B581E7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___settlingCompleted_14;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___settlingCompleted_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Single Unity.ListViewFramework.ListViewControllerBase::get_scrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 347));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 348));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 349));
		// get { return m_ScrollOffset; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 350));
		float L_0 = __this->___m_ScrollOffset_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ScrollOffset; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 351));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::set_scrollOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 352));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 353));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 354));
		// set { m_ScrollOffset = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 355));
		float L_0 = ___value0;
		__this->___m_ScrollOffset_4 = L_0;
		// set { m_ScrollOffset = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 356));
		return;
	}
}
// System.Single Unity.ListViewFramework.ListViewControllerBase::get_scrollSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ListViewControllerBase_get_scrollSpeed_m4E7241970468F0C43495C9547BF0933D15066129 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_get_scrollSpeed_m4E7241970468F0C43495C9547BF0933D15066129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_get_scrollSpeed_m4E7241970468F0C43495C9547BF0933D15066129_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 357));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 358));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 359));
		// get { return m_ScrollSpeed; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 360));
		float L_0 = __this->___m_ScrollSpeed_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ScrollSpeed; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 361));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::set_scrollSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_set_scrollSpeed_m4B4AE3EC88A9377C22E6C71AA2A061E1AD453B40 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_set_scrollSpeed_m4B4AE3EC88A9377C22E6C71AA2A061E1AD453B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_set_scrollSpeed_m4B4AE3EC88A9377C22E6C71AA2A061E1AD453B40_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 362));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 363));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 364));
		// set { m_ScrollSpeed = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 365));
		float L_0 = ___value0;
		__this->___m_ScrollSpeed_10 = L_0;
		// set { m_ScrollSpeed = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 366));
		return;
	}
}
// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::get_itemSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ListViewControllerBase_get_itemSize_m63C0F414461C623BBAA72B5C89D0B4DBF0388397 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_get_itemSize_m63C0F414461C623BBAA72B5C89D0B4DBF0388397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_get_itemSize_m63C0F414461C623BBAA72B5C89D0B4DBF0388397_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 367));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 368));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 369));
		// get { return m_ItemSize; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 370));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_ItemSize_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ItemSize; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 371));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_set_size_m4ED8927DB166378A3F5CF6353D2D93D1C4129B30 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_set_size_m4ED8927DB166378A3F5CF6353D2D93D1C4129B30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_set_size_m4ED8927DB166378A3F5CF6353D2D93D1C4129B30_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 374));
		// m_Size = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 375));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Size_21 = L_0;
		// m_Extents = m_Size * 0.5f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 376));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Size_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 377));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (0.5f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 377));
		__this->___m_Extents_22 = L_2;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 378));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_Awake_mA614CCDCD636F75C53DE01D713A22F60E930CAB3 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_Awake_mA614CCDCD636F75C53DE01D713A22F60E930CAB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral484D04065C9D1025E07A3F3A680F59F05D46AEBF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_Awake_mA614CCDCD636F75C53DE01D713A22F60E930CAB3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 379));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 380));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 381));
		// if (m_Templates.Length > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 382));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_Templates_11;
		NullCheck(L_0);
		V_0 = (bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 383));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_ItemSize = GetObjectSize(m_Templates[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 384));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___m_Templates_11;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 385));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(17 /* UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::GetObjectSize(UnityEngine.GameObject) */, __this, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 385));
		__this->___m_ItemSize_16 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 386));
		goto IL_0031;
	}

IL_0025:
	{
		// Debug.LogWarning("List View Error: At least one template is required", this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 387));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 388));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(_stringLiteral484D04065C9D1025E07A3F3A680F59F05D46AEBF, __this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 388));
	}

IL_0031:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 389));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_Update_m975AE376E12C710ED4239CFC07F498C2C4AD50E7 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_Update_m975AE376E12C710ED4239CFC07F498C2C4AD50E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_Update_m975AE376E12C710ED4239CFC07F498C2C4AD50E7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 390));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 391));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 392));
		// UpdateView();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 394));
		VirtualActionInvoker0::Invoke(9 /* System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateView() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 394));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 395));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_UpdateView_mF99A1393C540433C83EC5A1A0F8C432E4746DA5C (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_UpdateView_mF99A1393C540433C83EC5A1A0F8C432E4746DA5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_UpdateView_mF99A1393C540433C83EC5A1A0F8C432E4746DA5C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 396));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 397));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 398));
		// if (!HasData())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 400));
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(23 /* System.Boolean Unity.ListViewFramework.ListViewControllerBase::HasData() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 400));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 401));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 402));
		goto IL_001e;
	}

IL_0010:
	{
		// ComputeConditions();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 403));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 404));
		VirtualActionInvoker0::Invoke(10 /* System.Void Unity.ListViewFramework.ListViewControllerBase::ComputeConditions() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 404));
		// UpdateItems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 405));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 406));
		VirtualActionInvoker0::Invoke(11 /* System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateItems() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 406));
	}

IL_001e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 407));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::ComputeConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_ComputeConditions_m2393CCA2E1EC72783C510C3946ED95E758E039A9 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_ComputeConditions_m2393CCA2E1EC72783C510C3946ED95E758E039A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	float V_13 = 0.0f;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_13), (&V_17));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_ComputeConditions_m2393CCA2E1EC72783C510C3946ED95E758E039A9_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 408));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 409));
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 410));
		// var itemHeight = m_ItemSize.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 411));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___m_ItemSize_16);
		float L_1 = L_0->___z_4;
		V_0 = L_1;
		// m_StartPosition = (m_Extents.z - itemHeight * 0.5f) * Vector3.forward;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 412));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___m_Extents_22);
		float L_3 = L_2->___z_4;
		float L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 413));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 413));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 414));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(L_4, (0.5f))))), L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 414));
		__this->___m_StartPosition_17 = L_6;
		// if (m_Scrolling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 415));
		bool L_7 = __this->___m_Scrolling_18;
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 416));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 417));
		// m_ScrollDelta = Mathf.Clamp((m_ScrollOffset - m_LastScrollOffset) / Time.deltaTime, -m_MaxMomentum, m_MaxMomentum);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 418));
		float L_9 = __this->___m_ScrollOffset_4;
		float L_10 = __this->___m_LastScrollOffset_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 419));
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 419));
		float L_12 = __this->___m_MaxMomentum_8;
		float L_13 = __this->___m_MaxMomentum_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 420));
		float L_14;
		L_14 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(((float)il2cpp_codegen_subtract(L_9, L_10))/L_11)), ((-L_12)), L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 420));
		__this->___m_ScrollDelta_20 = L_14;
		// m_LastScrollOffset = m_ScrollOffset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 421));
		float L_15 = __this->___m_ScrollOffset_4;
		__this->___m_LastScrollOffset_13 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 422));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 423));
		goto IL_025d;
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 424));
		// m_ScrollOffset += m_ScrollDelta * Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 425));
		float L_16 = __this->___m_ScrollOffset_4;
		float L_17 = __this->___m_ScrollDelta_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 426));
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 426));
		__this->___m_ScrollOffset_4 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_17, L_18))));
		// var pastExtents = m_ScrollReturn < float.MaxValue || m_ScrollOffset > 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 427));
		float L_19 = __this->___m_ScrollReturn_19;
		if ((((float)L_19) < ((float)((std::numeric_limits<float>::max)()))))
		{
			goto IL_00ae;
		}
	}
	{
		float L_20 = __this->___m_ScrollOffset_4;
		G_B5_0 = ((((float)L_20) > ((float)(0.0f)))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B5_0 = 1;
	}

IL_00af:
	{
		V_2 = (bool)G_B5_0;
		// var damping = pastExtents ? m_OverScrollDamping : m_ScrollDamping;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 428));
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_00bb;
		}
	}
	{
		float L_22 = __this->___m_ScrollDamping_6;
		G_B8_0 = L_22;
		goto IL_00c1;
	}

IL_00bb:
	{
		float L_23 = __this->___m_OverScrollDamping_7;
		G_B8_0 = L_23;
	}

IL_00c1:
	{
		V_3 = G_B8_0;
		// if (m_ScrollDelta > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 429));
		float L_24 = __this->___m_ScrollDelta_20;
		V_4 = (bool)((((float)L_24) > ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 430));
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_010e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 431));
		// m_ScrollDelta -= damping * Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 432));
		float L_26 = __this->___m_ScrollDelta_20;
		float L_27 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 433));
		float L_28;
		L_28 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 433));
		__this->___m_ScrollDelta_20 = ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28))));
		// if (m_ScrollDelta < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 434));
		float L_29 = __this->___m_ScrollDelta_20;
		V_5 = (bool)((((float)L_29) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 435));
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_0108;
		}
	}
	{
		// m_ScrollDelta = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 436));
		__this->___m_ScrollDelta_20 = (0.0f);
	}

IL_0108:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 437));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 438));
		goto IL_025c;
	}

IL_010e:
	{
		// else if (m_ScrollDelta < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 439));
		float L_31 = __this->___m_ScrollDelta_20;
		V_6 = (bool)((((float)L_31) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 440));
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_015a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 441));
		// m_ScrollDelta += damping * Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 442));
		float L_33 = __this->___m_ScrollDelta_20;
		float L_34 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 443));
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 443));
		__this->___m_ScrollDelta_20 = ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(L_34, L_35))));
		// if (m_ScrollDelta > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 444));
		float L_36 = __this->___m_ScrollDelta_20;
		V_7 = (bool)((((float)L_36) > ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 445));
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_0154;
		}
	}
	{
		// m_ScrollDelta = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 446));
		__this->___m_ScrollDelta_20 = (0.0f);
	}

IL_0154:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 447));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 448));
		goto IL_025c;
	}

IL_015a:
	{
		// else if (pastExtents)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 449));
		bool L_38 = V_2;
		V_8 = L_38;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 450));
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_025c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 451));
		// if (m_ScrollOffset > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 452));
		float L_40 = __this->___m_ScrollOffset_4;
		V_9 = (bool)((((float)L_40) > ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 453));
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_01d4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 454));
		// if (m_EnableSettling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 455));
		bool L_42 = __this->___m_EnableSettling_12;
		V_10 = L_42;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 456));
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_01c6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 457));
		// m_ScrollOffset = Mathf.Lerp(m_ScrollOffset, 0, m_SettleSpeed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 458));
		float L_44 = __this->___m_ScrollOffset_4;
		float L_45 = __this->___m_SettleSpeed_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 459));
		float L_46;
		L_46 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_44, (0.0f), L_45, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 459));
		__this->___m_ScrollOffset_4 = L_46;
		// if (Mathf.Approximately(m_ScrollOffset, 0))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 460));
		float L_47 = __this->___m_ScrollOffset_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 461));
		bool L_48;
		L_48 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_47, (0.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 461));
		V_11 = L_48;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 462));
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_01c3;
		}
	}
	{
		// m_ScrollDelta = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 463));
		__this->___m_ScrollDelta_20 = (0.0f);
	}

IL_01c3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 464));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 465));
		goto IL_01d3;
	}

IL_01c6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 466));
		// m_ScrollOffset = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 467));
		__this->___m_ScrollOffset_4 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 468));
	}

IL_01d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 469));
	}

IL_01d4:
	{
		// if (m_ScrollReturn < float.MaxValue)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 470));
		float L_50 = __this->___m_ScrollReturn_19;
		V_12 = (bool)((((float)L_50) < ((float)((std::numeric_limits<float>::max)())))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 471));
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_025b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 472));
		// var target = m_ScrollReturn + m_ItemSize.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 473));
		float L_52 = __this->___m_ScrollReturn_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___m_ItemSize_16);
		float L_54 = L_53->___z_4;
		V_13 = ((float)il2cpp_codegen_add(L_52, L_54));
		// if (m_EnableSettling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 474));
		bool L_55 = __this->___m_EnableSettling_12;
		V_14 = L_55;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 475));
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0250;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 476));
		// m_ScrollOffset = Mathf.Lerp(m_ScrollOffset, target, m_SettleSpeed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 477));
		float L_57 = __this->___m_ScrollOffset_4;
		float L_58 = V_13;
		float L_59 = __this->___m_SettleSpeed_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 478));
		float L_60;
		L_60 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_57, L_58, L_59, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 478));
		__this->___m_ScrollOffset_4 = L_60;
		// if (Mathf.Approximately(m_ScrollOffset, target))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 479));
		float L_61 = __this->___m_ScrollOffset_4;
		float L_62 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 480));
		bool L_63;
		L_63 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_61, L_62, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 480));
		V_15 = L_63;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 481));
		bool L_64 = V_15;
		if (!L_64)
		{
			goto IL_024d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 482));
		// m_ScrollReturn = float.MaxValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 483));
		__this->___m_ScrollReturn_19 = ((std::numeric_limits<float>::max)());
		// m_ScrollDelta = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 484));
		__this->___m_ScrollDelta_20 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 485));
	}

IL_024d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 486));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 487));
		goto IL_025a;
	}

IL_0250:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 488));
		// m_ScrollOffset = target;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 489));
		float L_65 = V_13;
		__this->___m_ScrollOffset_4 = L_65;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 490));
	}

IL_025a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 491));
	}

IL_025b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 492));
	}

IL_025c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 493));
	}

IL_025d:
	{
		// m_ScrollReturn = float.MaxValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 494));
		__this->___m_ScrollReturn_19 = ((std::numeric_limits<float>::max)());
		// if (listHeight > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 495));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 496));
		float L_66;
		L_66 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single Unity.ListViewFramework.ListViewControllerBase::get_listHeight() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 496));
		V_16 = (bool)((((float)L_66) > ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 497));
		bool L_67 = V_16;
		if (!L_67)
		{
			goto IL_02e9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 498));
		// var visibleSize = m_Size.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 499));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = (&__this->___m_Size_21);
		float L_69 = L_68->___z_4;
		V_17 = L_69;
		// if (listHeight < visibleSize)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 501));
		float L_70;
		L_70 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single Unity.ListViewFramework.ListViewControllerBase::get_listHeight() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 501));
		float L_71 = V_17;
		V_18 = (bool)((((float)L_70) < ((float)L_71))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 502));
		bool L_72 = V_18;
		if (!L_72)
		{
			goto IL_02bb;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 503));
		// if (m_ScrollOffset < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 504));
		float L_73 = __this->___m_ScrollOffset_4;
		V_19 = (bool)((((float)L_73) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 505));
		bool L_74 = V_19;
		if (!L_74)
		{
			goto IL_02b8;
		}
	}
	{
		// m_ScrollReturn = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 506));
		__this->___m_ScrollReturn_19 = (0.0f);
	}

IL_02b8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 507));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 508));
		goto IL_02e8;
	}

IL_02bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 509));
		// if (-m_ScrollOffset >= listHeight - visibleSize)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 510));
		float L_75 = __this->___m_ScrollOffset_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 511));
		float L_76;
		L_76 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single Unity.ListViewFramework.ListViewControllerBase::get_listHeight() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 511));
		float L_77 = V_17;
		V_20 = (bool)((((int32_t)((!(((float)((-L_75))) >= ((float)((float)il2cpp_codegen_subtract(L_76, L_77)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 512));
		bool L_78 = V_20;
		if (!L_78)
		{
			goto IL_02e7;
		}
	}
	{
		// m_ScrollReturn = -(listHeight - visibleSize);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 514));
		float L_79;
		L_79 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single Unity.ListViewFramework.ListViewControllerBase::get_listHeight() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 514));
		float L_80 = V_17;
		__this->___m_ScrollReturn_19 = ((-((float)il2cpp_codegen_subtract(L_79, L_80))));
	}

IL_02e7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 515));
	}

IL_02e8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 516));
	}

IL_02e9:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 517));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::ScrollNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_ScrollNext_m8612AF9AAFAD5E9B0AED4925BF53C9E3B28EF3F4 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_ScrollNext_m8612AF9AAFAD5E9B0AED4925BF53C9E3B28EF3F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_ScrollNext_m8612AF9AAFAD5E9B0AED4925BF53C9E3B28EF3F4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 518));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 519));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 520));
		// m_ScrollOffset -= m_ItemSize.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 521));
		float L_0 = __this->___m_ScrollOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___m_ItemSize_16);
		float L_2 = L_1->___z_4;
		__this->___m_ScrollOffset_4 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 522));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::ScrollPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_ScrollPrevious_mA2BD04933E6DF32754BA30033842E0F86974A620 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_ScrollPrevious_mA2BD04933E6DF32754BA30033842E0F86974A620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_ScrollPrevious_mA2BD04933E6DF32754BA30033842E0F86974A620_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 523));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 524));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 525));
		// m_ScrollOffset += m_ItemSize.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 526));
		float L_0 = __this->___m_ScrollOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___m_ItemSize_16);
		float L_2 = L_1->___z_4;
		__this->___m_ScrollOffset_4 = ((float)il2cpp_codegen_add(L_0, L_2));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 527));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::ScrollTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_ScrollTo_m59024358E12FAFD55A1DDE872EDFC108D0A99B51 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_ScrollTo_m59024358E12FAFD55A1DDE872EDFC108D0A99B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_ScrollTo_m59024358E12FAFD55A1DDE872EDFC108D0A99B51_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 528));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 529));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 530));
		// m_ScrollOffset = index * m_ItemSize.z;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 531));
		int32_t L_0 = ___index0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___m_ItemSize_16);
		float L_2 = L_1->___z_4;
		__this->___m_ScrollOffset_4 = ((float)il2cpp_codegen_multiply(((float)L_0), L_2));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 532));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateItem(Unity.ListViewFramework.IListViewItem,System.Int32,System.Single,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_UpdateItem_m2BC7AC3030D7144799A3AAD74F3CB8A72348106A (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, RuntimeObject* ___item0, int32_t ___order1, float ___offset2, bool ___dontSettle3, bool* ___doneSettling4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_UpdateItem_m2BC7AC3030D7144799A3AAD74F3CB8A72348106A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___item0), (&___order1), (&___offset2), (&___dontSettle3), (&___doneSettling4));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_UpdateItem_m2BC7AC3030D7144799A3AAD74F3CB8A72348106A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 533));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 534));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 535));
		// var targetPosition = m_StartPosition + offset * Vector3.back;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 536));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_StartPosition_17;
		float L_1 = ___offset2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 537));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 537));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 538));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 538));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 539));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 539));
		V_0 = L_4;
		// var targetRotation = Quaternion.identity;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 540));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 541));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 541));
		V_1 = L_5;
		// UpdateItemTransform(item, order, targetPosition, targetRotation, dontSettle, ref doneSettling);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 542));
		RuntimeObject* L_6 = ___item0;
		int32_t L_7 = ___order1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		bool L_10 = ___dontSettle3;
		bool* L_11 = ___doneSettling4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 543));
		VirtualActionInvoker6< RuntimeObject*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool* >::Invoke(16 /* System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateItemTransform(Unity.ListViewFramework.IListViewItem,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean,System.Boolean&) */, __this, L_6, L_7, L_8, L_9, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 543));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 544));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::UpdateItemTransform(Unity.ListViewFramework.IListViewItem,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_UpdateItemTransform_mB47E644116E7431DF75E5BAD9FA515DB1A9952EE (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, RuntimeObject* ___item0, int32_t ___order1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation3, bool ___dontSettle4, bool* ___doneSettling5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_UpdateItemTransform_mB47E644116E7431DF75E5BAD9FA515DB1A9952EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___item0), (&___order1), (&___targetPosition2), (&___targetRotation3), (&___dontSettle4), (&___doneSettling5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_UpdateItemTransform_mB47E644116E7431DF75E5BAD9FA515DB1A9952EE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 545));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 546));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 547));
		// if (m_Settling && !dontSettle && m_EnableSettling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 548));
		bool L_0 = __this->___m_Settling_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = ___dontSettle4;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->___m_EnableSettling_12;
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B4_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 549));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 550));
		// var localPosition = Vector3.Lerp(item.localPosition, targetPosition, m_SettleSpeed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 551));
		RuntimeObject* L_4 = ___item0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 552));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 Unity.ListViewFramework.IListViewItem::get_localPosition() */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 552));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___targetPosition2;
		float L_7 = __this->___m_SettleSpeed_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 553));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 553));
		V_1 = L_8;
		// item.localPosition = localPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 554));
		RuntimeObject* L_9 = ___item0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 555));
		NullCheck(L_9);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void Unity.ListViewFramework.IListViewItem::set_localPosition(UnityEngine.Vector3) */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_9, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 555));
		// if (localPosition != targetPosition)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 556));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___targetPosition2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 557));
		bool L_13;
		L_13 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 557));
		V_3 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 558));
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		// doneSettling = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 559));
		bool* L_15 = ___doneSettling5;
		*((int8_t*)L_15) = (int8_t)0;
	}

IL_0045:
	{
		// var localRotation = Quaternion.Lerp(item.localRotation, targetRotation, m_SettleSpeed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 560));
		RuntimeObject* L_16 = ___item0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 561));
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(2 /* UnityEngine.Quaternion Unity.ListViewFramework.IListViewItem::get_localRotation() */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 561));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___targetRotation3;
		float L_19 = __this->___m_SettleSpeed_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 562));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_17, L_18, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 562));
		V_2 = L_20;
		// item.localRotation = localRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 563));
		RuntimeObject* L_21 = ___item0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 564));
		NullCheck(L_21);
		InterfaceActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(3 /* System.Void Unity.ListViewFramework.IListViewItem::set_localRotation(UnityEngine.Quaternion) */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_21, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 564));
		// if (localRotation != targetRotation)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 565));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___targetRotation3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 566));
		bool L_25;
		L_25 = Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline(L_23, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 566));
		V_4 = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 567));
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		// doneSettling = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 568));
		bool* L_27 = ___doneSettling5;
		*((int8_t*)L_27) = (int8_t)0;
	}

IL_0073:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 569));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 570));
		goto IL_0089;
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 571));
		// item.localPosition = targetPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 572));
		RuntimeObject* L_28 = ___item0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___targetPosition2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 573));
		NullCheck(L_28);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void Unity.ListViewFramework.IListViewItem::set_localPosition(UnityEngine.Vector3) */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_28, L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 573));
		// item.localRotation = targetRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 574));
		RuntimeObject* L_30 = ___item0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = ___targetRotation3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 575));
		NullCheck(L_30);
		InterfaceActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(3 /* System.Void Unity.ListViewFramework.IListViewItem::set_localRotation(UnityEngine.Quaternion) */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_30, L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 575));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 576));
	}

IL_0089:
	{
		// item.SetSiblingIndex(order);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 577));
		RuntimeObject* L_32 = ___item0;
		int32_t L_33 = ___order1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 578));
		NullCheck(L_32);
		InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void Unity.ListViewFramework.IListViewItem::SetSiblingIndex(System.Int32) */, IListViewItem_t0050FD2B3333E69EC928EA81CF7FCE741E6DA043_il2cpp_TypeInfo_var, L_32, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 578));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 579));
		return;
	}
}
// UnityEngine.Vector3 Unity.ListViewFramework.ListViewControllerBase::GetObjectSize(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ListViewControllerBase_GetObjectSize_mC784F1EEC353EF182E9F70409A58FC6E2A5C93EA (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_GetObjectSize_mC784F1EEC353EF182E9F70409A58FC6E2A5C93EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	bool V_2 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___g0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_GetObjectSize_mC784F1EEC353EF182E9F70409A58FC6E2A5C93EA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 580));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 581));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 582));
		// var objectSize = Vector3.one;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 583));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 584));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 584));
		V_0 = L_0;
		// var rend = g.GetComponentInChildren<Renderer>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 585));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___g0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 586));
		NullCheck(L_1);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB(L_1, GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 586));
		V_1 = L_2;
		// if (rend)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 587));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 588));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 588));
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 589));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// objectSize = Vector3.Scale(g.transform.lossyScale, rend.bounds.extents) * 2 + Vector3.one * m_Padding;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 590));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___g0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 591));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 591));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 592));
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 592));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 593));
		NullCheck(L_9);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10;
		L_10 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 593));
		V_3 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 594));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 594));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 595));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_8, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 596));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (2.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 596));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 597));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 597));
		float L_15 = __this->___m_Padding_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 598));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 598));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 599));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 599));
		V_0 = L_17;
	}

IL_0056:
	{
		// return objectSize;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 600));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		V_4 = L_18;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 601));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_4;
		return L_19;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::OnScrollStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_OnScrollStarted_mA526D45CC5A87847302E6A6EBE5F8372E17A2230 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_OnScrollStarted_mA526D45CC5A87847302E6A6EBE5F8372E17A2230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_OnScrollStarted_mA526D45CC5A87847302E6A6EBE5F8372E17A2230_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 602));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 603));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 604));
		// m_Scrolling = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 605));
		__this->___m_Scrolling_18 = (bool)1;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 606));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::OnScrollEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_OnScrollEnded_mFF79FDEB9BC326FC106774EF27C7EB06CF2DC81E (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_OnScrollEnded_mFF79FDEB9BC326FC106774EF27C7EB06CF2DC81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_OnScrollEnded_mFF79FDEB9BC326FC106774EF27C7EB06CF2DC81E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 607));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 608));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 609));
		// m_Scrolling = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 610));
		__this->___m_Scrolling_18 = (bool)0;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 611));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::OnScroll(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_OnScroll_m945381CC0C85E82E729862B195A57FA41BA05F0D (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_OnScroll_m945381CC0C85E82E729862B195A57FA41BA05F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_OnScroll_m945381CC0C85E82E729862B195A57FA41BA05F0D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 612));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 613));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 614));
		// if (m_Settling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 615));
		bool L_0 = __this->___m_Settling_15;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 616));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 617));
		goto IL_0032;
	}

IL_000d:
	{
		// m_ScrollOffset += eventData.scrollDelta.y * m_ScrollSpeed * Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 618));
		float L_2 = __this->___m_ScrollOffset_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 619));
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 619));
		float L_5 = L_4.___y_1;
		float L_6 = __this->___m_ScrollSpeed_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 620));
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 620));
		__this->___m_ScrollOffset_4 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7))));
	}

IL_0032:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 621));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::StartSettling(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_StartSettling_mD0ECE5476609AF20823343363712C65D4C201413 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_StartSettling_mD0ECE5476609AF20823343363712C65D4C201413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___onComplete0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_StartSettling_mD0ECE5476609AF20823343363712C65D4C201413_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 624));
		// m_Settling = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 625));
		__this->___m_Settling_15 = (bool)1;
		// if (onComplete != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 626));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___onComplete0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 627));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// settlingCompleted += onComplete;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 628));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___onComplete0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 629));
		ListViewControllerBase_add_settlingCompleted_m67290C70DC9C521BA5272CAD0A0718BB035CF101(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 629));
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 630));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::EndSettling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase_EndSettling_mFA8650E2DFED10ACFE8ADBB802F83FB3D09809D1 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_EndSettling_mFA8650E2DFED10ACFE8ADBB802F83FB3D09809D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase_EndSettling_mFA8650E2DFED10ACFE8ADBB802F83FB3D09809D1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 631));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 632));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 633));
		// m_Settling = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 634));
		__this->___m_Settling_15 = (bool)0;
		// if (settlingCompleted != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 635));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___settlingCompleted_14;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 636));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 637));
		// settlingCompleted();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 638));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___settlingCompleted_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 639));
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 639));
		// settlingCompleted = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 640));
		__this->___settlingCompleted_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settlingCompleted_14), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 641));
	}

IL_002a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 642));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewControllerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewControllerBase__ctor_m71FAC47AAB0C4FC5624E007F19BEF37F7F3CE969 (ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase__ctor_m71FAC47AAB0C4FC5624E007F19BEF37F7F3CE969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewControllerBase__ctor_m71FAC47AAB0C4FC5624E007F19BEF37F7F3CE969_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 643));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 644));
	{
		// protected float m_Padding = 0.01f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 645));
		__this->___m_Padding_5 = (0.00999999978f);
		// float m_ScrollDamping = 5f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 646));
		__this->___m_ScrollDamping_6 = (5.0f);
		// float m_OverScrollDamping = 25f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 647));
		__this->___m_OverScrollDamping_7 = (25.0f);
		// float m_MaxMomentum = 2f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 648));
		__this->___m_MaxMomentum_8 = (2.0f);
		// protected float m_SettleSpeed = 0.4f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 649));
		__this->___m_SettleSpeed_9 = (0.400000006f);
		// float m_ScrollSpeed = 0.3f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 650));
		__this->___m_ScrollSpeed_10 = (0.300000012f);
		// protected bool m_EnableSettling = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 651));
		__this->___m_EnableSettling_12 = (bool)1;
		// protected float m_ScrollReturn = float.MaxValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 652));
		__this->___m_ScrollReturn_19 = ((std::numeric_limits<float>::max)());
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 653));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 653));
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
// System.Void Unity.ListViewFramework.ListViewScroller::OnScrollStarted(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller_OnScrollStarted_mDE5ED460CA44429BA1BDF9C707B727C22DB9FF8A (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_OnScrollStarted_mDE5ED460CA44429BA1BDF9C707B727C22DB9FF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___start0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewScroller_OnScrollStarted_mDE5ED460CA44429BA1BDF9C707B727C22DB9FF8A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 739));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 740));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 741));
		// if (m_Scrolling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 742));
		bool L_0 = __this->___m_Scrolling_5;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 743));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 744));
		goto IL_0038;
	}

IL_000d:
	{
		// m_Scrolling = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 745));
		__this->___m_Scrolling_5 = (bool)1;
		// m_StartPosition = start;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 746));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___start0;
		__this->___m_StartPosition_6 = L_2;
		// m_StartOffset = m_ListView.scrollOffset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 747));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_3 = __this->___m_ListView_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 748));
		NullCheck(L_3);
		float L_4;
		L_4 = ListViewControllerBase_get_scrollOffset_mC02A39879774E6494B84C9E0EC8EC9B496574F6B(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 748));
		__this->___m_StartOffset_7 = L_4;
		// m_ListView.OnScrollStarted();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 749));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_5 = __this->___m_ListView_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 750));
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(18 /* System.Void Unity.ListViewFramework.ListViewControllerBase::OnScrollStarted() */, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 750));
	}

IL_0038:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 751));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewScroller::OnScroll(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller_OnScroll_m9B764F90E5564AF38525D30CBBC4D170DCC99C8D (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_OnScroll_m9B764F90E5564AF38525D30CBBC4D170DCC99C8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewScroller_OnScroll_m9B764F90E5564AF38525D30CBBC4D170DCC99C8D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 752));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 753));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 754));
		// if (m_Scrolling)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 755));
		bool L_0 = __this->___m_Scrolling_5;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 756));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// m_ListView.scrollOffset = m_StartOffset + position.x - m_StartPosition.x;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 757));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_2 = __this->___m_ListView_4;
		float L_3 = __this->___m_StartOffset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___m_StartPosition_6);
		float L_7 = L_6->___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 758));
		NullCheck(L_2);
		ListViewControllerBase_set_scrollOffset_mE95B63FB3D57D09DF02A420EC17089B52A62F1A2(L_2, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_3, L_5)), L_7)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 758));
	}

IL_0030:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 759));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewScroller::OnScrollEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller_OnScrollEnded_m9190156946DF0B9CC1B352A415D2A301FA08969F (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_OnScrollEnded_m9190156946DF0B9CC1B352A415D2A301FA08969F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewScroller_OnScrollEnded_m9190156946DF0B9CC1B352A415D2A301FA08969F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 762));
		// m_Scrolling = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 763));
		__this->___m_Scrolling_5 = (bool)0;
		// m_ListView.OnScrollEnded();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 764));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_0 = __this->___m_ListView_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 765));
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void Unity.ListViewFramework.ListViewControllerBase::OnScrollEnded() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 765));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 766));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewScroller::UnityEngine.EventSystems.IScrollHandler.OnScroll(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller_UnityEngine_EventSystems_IScrollHandler_OnScroll_mEB3A23748D61018BF4A74BFFD153182A565E20B6 (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_UnityEngine_EventSystems_IScrollHandler_OnScroll_mEB3A23748D61018BF4A74BFFD153182A565E20B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewScroller_UnityEngine_EventSystems_IScrollHandler_OnScroll_mEB3A23748D61018BF4A74BFFD153182A565E20B6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 767));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 768));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 769));
		// m_ListView.OnScroll(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 770));
		ListViewControllerBase_tB23A3E9C1D0386365F3B19865C15441088A82C1D* L_0 = __this->___m_ListView_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 771));
		NullCheck(L_0);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(20 /* System.Void Unity.ListViewFramework.ListViewControllerBase::OnScroll(UnityEngine.EventSystems.PointerEventData) */, L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 771));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_ListViewFramework + 772));
		return;
	}
}
// System.Void Unity.ListViewFramework.ListViewScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50 (ListViewScroller_t034EF300D9B2714459A0E27CB23330D202ED64A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListViewScroller__ctor_m347C7C59EF60D2D979F8804C73379F47DF3EBF50_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21788));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21789));
	{
		// public Vector2 position { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21790));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___v0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7245));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7246));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7247));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7248));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7248));
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7249));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6470));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6471));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6472));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6473));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6474));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6474));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6475));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6422));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6423));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6424));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6425));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6426));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___d0), (&___a1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6476));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6477));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6478));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6479));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6480));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6480));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6481));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0), (&___min1), (&___max2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6907));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6908));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6909));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6910));
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6911));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6912));
		float L_3 = ___min1;
		___value0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6913));
		goto IL_0019;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6914));
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6915));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6916));
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6917));
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6918));
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1), (&___t2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6942));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6943));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6944));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6945));
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6946));
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6946));
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6947));
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6953));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6954));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6955));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6956));
		float L_0 = ___b1;
		float L_1 = ___a0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6957));
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6957));
		float L_3 = ___a0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6958));
		float L_4;
		L_4 = fabsf(L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6958));
		float L_5 = ___b1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6959));
		float L_6;
		L_6 = fabsf(L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6960));
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6960));
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6961));
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6961));
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6962));
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6427));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6428));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6429));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6430));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6431));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6454));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6455));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6456));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6456));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6457));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6570));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6571));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6572));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6573));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6574));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1), (&___t2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6175));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6176));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6177));
		float L_0 = ___t2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6178));
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6178));
		___t2 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6179));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6180));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6180));
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6181));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6497));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6498));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6499));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6500));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6501));
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6501));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6502));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6614));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6615));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6616));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6617));
		bool L_2;
		L_2 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6617));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6618));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6417));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6418));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6419));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6420));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6421));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6230));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6231));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6232));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6233));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6233));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6234));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21830));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21831));
	{
		// public Vector2 scrollDelta { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21832));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CscrollDeltaU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6931));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6932));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6933));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6934));
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6935));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6936));
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6937));
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6938));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6939));
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6940));
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6941));
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6827));
	float G_B3_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6828));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6829));
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6830));
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6488));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6489));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6490));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6491));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6492));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6493));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6494));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6495));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6496));
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6606));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6607));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6608));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6609));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6610));
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6610));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6611));
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6611));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6612));
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6619));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6620));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6622));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6623));
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___dot0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6601));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6602));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6603));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6604));
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6605));
		bool L_1 = V_0;
		return L_1;
	}
}
