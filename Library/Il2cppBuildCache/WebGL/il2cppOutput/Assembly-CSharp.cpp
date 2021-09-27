#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Demo_GM
struct Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D;
// DranNshoot
struct DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Game_Manager
struct Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GroundSensor
struct GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Move
struct Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// Swordman
struct Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TrajectoryLine
struct TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// shooting
struct shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<GroundCapsulleColliderTimmerFuc>d__16
struct U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD81F1BE7555756DB3E11EDFA760848565ED4EE;
IL2CPP_EXTERN_C String_t* _stringLiteral247AAF59CC1D6CA441E00DBEE3EA64A910431A3B;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral74B97F02972640D38C177E241444DEA4FF9BE3B8;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3;
IL2CPP_EXTERN_C String_t* _stringLiteral996B8FDB9980593CDFB05573689D364ED0420081;
IL2CPP_EXTERN_C String_t* _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7;
IL2CPP_EXTERN_C String_t* _stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB90A88CA7FA5EDBC7D3FCA7AAC7F711CED3A1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF4178E1F27250B45B023B23FF0B1434B005537D5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E_m6C99DC4AD85F195C9C0419CE80F39B24C6C1A65A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_Collections_IEnumerator_Reset_mCFC628471427540433B8CF275A3EA5FB6A252976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_0_0_0_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// PlayerController/<GroundCapsulleColliderTimmerFuc>d__16
struct U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.ContactPoint2D
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Point_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Normal_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_RelativeVelocity_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraController::Target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target_5;
	// System.Int32 CameraController::Smoothvalue
	int32_t ___Smoothvalue_6;
	// System.Single CameraController::PosY
	float ___PosY_7;
	// UnityEngine.Coroutine CameraController::my_co
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___my_co_8;

public:
	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___Target_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Target_5() const { return ___Target_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_5), (void*)value);
	}

	inline static int32_t get_offset_of_Smoothvalue_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___Smoothvalue_6)); }
	inline int32_t get_Smoothvalue_6() const { return ___Smoothvalue_6; }
	inline int32_t* get_address_of_Smoothvalue_6() { return &___Smoothvalue_6; }
	inline void set_Smoothvalue_6(int32_t value)
	{
		___Smoothvalue_6 = value;
	}

	inline static int32_t get_offset_of_PosY_7() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___PosY_7)); }
	inline float get_PosY_7() const { return ___PosY_7; }
	inline float* get_address_of_PosY_7() { return &___PosY_7; }
	inline void set_PosY_7(float value)
	{
		___PosY_7 = value;
	}

	inline static int32_t get_offset_of_my_co_8() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___my_co_8)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_my_co_8() const { return ___my_co_8; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_my_co_8() { return &___my_co_8; }
	inline void set_my_co_8(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___my_co_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___my_co_8), (void*)value);
	}
};

struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields
{
public:
	// CameraController CameraController::Instance
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields, ___Instance_4)); }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * get_Instance_4() const { return ___Instance_4; }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Demo_GM
struct Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image[] Demo_GM::UIImage
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___UIImage_5;

public:
	inline static int32_t get_offset_of_UIImage_5() { return static_cast<int32_t>(offsetof(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D, ___UIImage_5)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_UIImage_5() const { return ___UIImage_5; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_UIImage_5() { return &___UIImage_5; }
	inline void set_UIImage_5(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___UIImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIImage_5), (void*)value);
	}
};

struct Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields
{
public:
	// Demo_GM Demo_GM::Gm
	Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * ___Gm_4;

public:
	inline static int32_t get_offset_of_Gm_4() { return static_cast<int32_t>(offsetof(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields, ___Gm_4)); }
	inline Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * get_Gm_4() const { return ___Gm_4; }
	inline Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D ** get_address_of_Gm_4() { return &___Gm_4; }
	inline void set_Gm_4(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * value)
	{
		___Gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gm_4), (void*)value);
	}
};


// DranNshoot
struct DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DranNshoot::power
	float ___power_4;
	// UnityEngine.Rigidbody2D DranNshoot::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.Vector2 DranNshoot::minPower
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minPower_6;
	// UnityEngine.Vector2 DranNshoot::maxPower
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxPower_7;
	// TrajectoryLine DranNshoot::tl
	TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * ___tl_8;
	// UnityEngine.Camera DranNshoot::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_9;
	// UnityEngine.Vector2 DranNshoot::force
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force_10;
	// UnityEngine.Vector3 DranNshoot::startPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint_11;
	// UnityEngine.Vector3 DranNshoot::endPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint_12;
	// UnityEngine.Vector3 DranNshoot::playerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___playerPosition_13;

public:
	inline static int32_t get_offset_of_power_4() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___power_4)); }
	inline float get_power_4() const { return ___power_4; }
	inline float* get_address_of_power_4() { return &___power_4; }
	inline void set_power_4(float value)
	{
		___power_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_minPower_6() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___minPower_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minPower_6() const { return ___minPower_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minPower_6() { return &___minPower_6; }
	inline void set_minPower_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minPower_6 = value;
	}

	inline static int32_t get_offset_of_maxPower_7() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___maxPower_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxPower_7() const { return ___maxPower_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxPower_7() { return &___maxPower_7; }
	inline void set_maxPower_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxPower_7 = value;
	}

	inline static int32_t get_offset_of_tl_8() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___tl_8)); }
	inline TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * get_tl_8() const { return ___tl_8; }
	inline TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E ** get_address_of_tl_8() { return &___tl_8; }
	inline void set_tl_8(TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * value)
	{
		___tl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tl_8), (void*)value);
	}

	inline static int32_t get_offset_of_cam_9() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___cam_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_9() const { return ___cam_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_9() { return &___cam_9; }
	inline void set_cam_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_9), (void*)value);
	}

	inline static int32_t get_offset_of_force_10() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___force_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_force_10() const { return ___force_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_force_10() { return &___force_10; }
	inline void set_force_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___force_10 = value;
	}

	inline static int32_t get_offset_of_startPoint_11() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___startPoint_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPoint_11() const { return ___startPoint_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPoint_11() { return &___startPoint_11; }
	inline void set_startPoint_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPoint_11 = value;
	}

	inline static int32_t get_offset_of_endPoint_12() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___endPoint_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endPoint_12() const { return ___endPoint_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endPoint_12() { return &___endPoint_12; }
	inline void set_endPoint_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endPoint_12 = value;
	}

	inline static int32_t get_offset_of_playerPosition_13() { return static_cast<int32_t>(offsetof(DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32, ___playerPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_playerPosition_13() const { return ___playerPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_playerPosition_13() { return &___playerPosition_13; }
	inline void set_playerPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___playerPosition_13 = value;
	}
};


// Game_Manager
struct Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Game_Manager::player1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player1_4;
	// UnityEngine.GameObject Game_Manager::player2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player2_5;

public:
	inline static int32_t get_offset_of_player1_4() { return static_cast<int32_t>(offsetof(Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439, ___player1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player1_4() const { return ___player1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player1_4() { return &___player1_4; }
	inline void set_player1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player1_4), (void*)value);
	}

	inline static int32_t get_offset_of_player2_5() { return static_cast<int32_t>(offsetof(Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439, ___player2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player2_5() const { return ___player2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player2_5() { return &___player2_5; }
	inline void set_player2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player2_5), (void*)value);
	}
};


// GroundSensor
struct GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerController GroundSensor::m_root
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___m_root_4;
	// UnityEngine.ContactPoint2D[] GroundSensor::contacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___contacts_5;

public:
	inline static int32_t get_offset_of_m_root_4() { return static_cast<int32_t>(offsetof(GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845, ___m_root_4)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_m_root_4() const { return ___m_root_4; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_m_root_4() { return &___m_root_4; }
	inline void set_m_root_4(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___m_root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_root_4), (void*)value);
	}

	inline static int32_t get_offset_of_contacts_5() { return static_cast<int32_t>(offsetof(GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845, ___contacts_5)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_contacts_5() const { return ___contacts_5; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_contacts_5() { return &___contacts_5; }
	inline void set_contacts_5(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___contacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contacts_5), (void*)value);
	}
};


// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider HealthBar::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}
};


// Move
struct Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Move::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector2 Move::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_5;
	// UnityEngine.Rigidbody2D Move::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_6;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_movement_5() { return static_cast<int32_t>(offsetof(Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3, ___movement_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_5() const { return ___movement_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_5() { return &___movement_5; }
	inline void set_movement_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_5 = value;
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3, ___rb_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayerController::IsSit
	bool ___IsSit_4;
	// System.Int32 PlayerController::currentJumpCount
	int32_t ___currentJumpCount_5;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_6;
	// System.Boolean PlayerController::OnceJumpRayCheck
	bool ___OnceJumpRayCheck_7;
	// System.Boolean PlayerController::Is_DownJump_GroundCheck
	bool ___Is_DownJump_GroundCheck_8;
	// System.Single PlayerController::m_MoveX
	float ___m_MoveX_9;
	// UnityEngine.Rigidbody2D PlayerController::m_rigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___m_rigidbody_10;
	// UnityEngine.CapsuleCollider2D PlayerController::m_CapsulleCollider
	CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * ___m_CapsulleCollider_11;
	// UnityEngine.Animator PlayerController::m_Anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_Anim_12;
	// System.Single PlayerController::MoveSpeed
	float ___MoveSpeed_13;
	// System.Int32 PlayerController::JumpCount
	int32_t ___JumpCount_14;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_15;
	// UnityEngine.Vector2 PlayerController::RayDir
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___RayDir_16;
	// System.Single PlayerController::PretmpY
	float ___PretmpY_17;
	// System.Single PlayerController::GroundCheckUpdateTic
	float ___GroundCheckUpdateTic_18;
	// System.Single PlayerController::GroundCheckUpdateTime
	float ___GroundCheckUpdateTime_19;

public:
	inline static int32_t get_offset_of_IsSit_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___IsSit_4)); }
	inline bool get_IsSit_4() const { return ___IsSit_4; }
	inline bool* get_address_of_IsSit_4() { return &___IsSit_4; }
	inline void set_IsSit_4(bool value)
	{
		___IsSit_4 = value;
	}

	inline static int32_t get_offset_of_currentJumpCount_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___currentJumpCount_5)); }
	inline int32_t get_currentJumpCount_5() const { return ___currentJumpCount_5; }
	inline int32_t* get_address_of_currentJumpCount_5() { return &___currentJumpCount_5; }
	inline void set_currentJumpCount_5(int32_t value)
	{
		___currentJumpCount_5 = value;
	}

	inline static int32_t get_offset_of_isGrounded_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isGrounded_6)); }
	inline bool get_isGrounded_6() const { return ___isGrounded_6; }
	inline bool* get_address_of_isGrounded_6() { return &___isGrounded_6; }
	inline void set_isGrounded_6(bool value)
	{
		___isGrounded_6 = value;
	}

	inline static int32_t get_offset_of_OnceJumpRayCheck_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___OnceJumpRayCheck_7)); }
	inline bool get_OnceJumpRayCheck_7() const { return ___OnceJumpRayCheck_7; }
	inline bool* get_address_of_OnceJumpRayCheck_7() { return &___OnceJumpRayCheck_7; }
	inline void set_OnceJumpRayCheck_7(bool value)
	{
		___OnceJumpRayCheck_7 = value;
	}

	inline static int32_t get_offset_of_Is_DownJump_GroundCheck_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Is_DownJump_GroundCheck_8)); }
	inline bool get_Is_DownJump_GroundCheck_8() const { return ___Is_DownJump_GroundCheck_8; }
	inline bool* get_address_of_Is_DownJump_GroundCheck_8() { return &___Is_DownJump_GroundCheck_8; }
	inline void set_Is_DownJump_GroundCheck_8(bool value)
	{
		___Is_DownJump_GroundCheck_8 = value;
	}

	inline static int32_t get_offset_of_m_MoveX_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_MoveX_9)); }
	inline float get_m_MoveX_9() const { return ___m_MoveX_9; }
	inline float* get_address_of_m_MoveX_9() { return &___m_MoveX_9; }
	inline void set_m_MoveX_9(float value)
	{
		___m_MoveX_9 = value;
	}

	inline static int32_t get_offset_of_m_rigidbody_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_rigidbody_10)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_m_rigidbody_10() const { return ___m_rigidbody_10; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_m_rigidbody_10() { return &___m_rigidbody_10; }
	inline void set_m_rigidbody_10(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___m_rigidbody_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rigidbody_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CapsulleCollider_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_CapsulleCollider_11)); }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * get_m_CapsulleCollider_11() const { return ___m_CapsulleCollider_11; }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 ** get_address_of_m_CapsulleCollider_11() { return &___m_CapsulleCollider_11; }
	inline void set_m_CapsulleCollider_11(CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * value)
	{
		___m_CapsulleCollider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CapsulleCollider_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Anim_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_Anim_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_Anim_12() const { return ___m_Anim_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_Anim_12() { return &___m_Anim_12; }
	inline void set_m_Anim_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_Anim_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Anim_12), (void*)value);
	}

	inline static int32_t get_offset_of_MoveSpeed_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___MoveSpeed_13)); }
	inline float get_MoveSpeed_13() const { return ___MoveSpeed_13; }
	inline float* get_address_of_MoveSpeed_13() { return &___MoveSpeed_13; }
	inline void set_MoveSpeed_13(float value)
	{
		___MoveSpeed_13 = value;
	}

	inline static int32_t get_offset_of_JumpCount_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___JumpCount_14)); }
	inline int32_t get_JumpCount_14() const { return ___JumpCount_14; }
	inline int32_t* get_address_of_JumpCount_14() { return &___JumpCount_14; }
	inline void set_JumpCount_14(int32_t value)
	{
		___JumpCount_14 = value;
	}

	inline static int32_t get_offset_of_jumpForce_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___jumpForce_15)); }
	inline float get_jumpForce_15() const { return ___jumpForce_15; }
	inline float* get_address_of_jumpForce_15() { return &___jumpForce_15; }
	inline void set_jumpForce_15(float value)
	{
		___jumpForce_15 = value;
	}

	inline static int32_t get_offset_of_RayDir_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___RayDir_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_RayDir_16() const { return ___RayDir_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_RayDir_16() { return &___RayDir_16; }
	inline void set_RayDir_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___RayDir_16 = value;
	}

	inline static int32_t get_offset_of_PretmpY_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___PretmpY_17)); }
	inline float get_PretmpY_17() const { return ___PretmpY_17; }
	inline float* get_address_of_PretmpY_17() { return &___PretmpY_17; }
	inline void set_PretmpY_17(float value)
	{
		___PretmpY_17 = value;
	}

	inline static int32_t get_offset_of_GroundCheckUpdateTic_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___GroundCheckUpdateTic_18)); }
	inline float get_GroundCheckUpdateTic_18() const { return ___GroundCheckUpdateTic_18; }
	inline float* get_address_of_GroundCheckUpdateTic_18() { return &___GroundCheckUpdateTic_18; }
	inline void set_GroundCheckUpdateTic_18(float value)
	{
		___GroundCheckUpdateTic_18 = value;
	}

	inline static int32_t get_offset_of_GroundCheckUpdateTime_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___GroundCheckUpdateTime_19)); }
	inline float get_GroundCheckUpdateTime_19() const { return ___GroundCheckUpdateTime_19; }
	inline float* get_address_of_GroundCheckUpdateTime_19() { return &___GroundCheckUpdateTime_19; }
	inline void set_GroundCheckUpdateTime_19(float value)
	{
		___GroundCheckUpdateTime_19 = value;
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerMovement::maxHealth
	int32_t ___maxHealth_4;
	// HealthBar PlayerMovement::healthBarOne
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___healthBarOne_5;
	// HealthBar PlayerMovement::healthBarTwo
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___healthBarTwo_6;
	// UnityEngine.Rigidbody2D PlayerMovement::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_7;
	// UnityEngine.Camera PlayerMovement::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_8;
	// UnityEngine.Vector3 PlayerMovement::playerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___playerPosition_9;
	// UnityEngine.Vector2 PlayerMovement::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_10;
	// UnityEngine.Vector2 PlayerMovement::mousePos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePos_11;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_healthBarOne_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___healthBarOne_5)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_healthBarOne_5() const { return ___healthBarOne_5; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_healthBarOne_5() { return &___healthBarOne_5; }
	inline void set_healthBarOne_5(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___healthBarOne_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBarOne_5), (void*)value);
	}

	inline static int32_t get_offset_of_healthBarTwo_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___healthBarTwo_6)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_healthBarTwo_6() const { return ___healthBarTwo_6; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_healthBarTwo_6() { return &___healthBarTwo_6; }
	inline void set_healthBarTwo_6(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___healthBarTwo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBarTwo_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rb_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___cam_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_8() const { return ___cam_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerPosition_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_playerPosition_9() const { return ___playerPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_playerPosition_9() { return &___playerPosition_9; }
	inline void set_playerPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___playerPosition_9 = value;
	}

	inline static int32_t get_offset_of_movement_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___movement_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_10() const { return ___movement_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_10() { return &___movement_10; }
	inline void set_movement_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_10 = value;
	}

	inline static int32_t get_offset_of_mousePos_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___mousePos_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mousePos_11() const { return ___mousePos_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mousePos_11() { return &___mousePos_11; }
	inline void set_mousePos_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mousePos_11 = value;
	}
};

struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields
{
public:
	// System.Int32 PlayerMovement::turn
	int32_t ___turn_12;

public:
	inline static int32_t get_offset_of_turn_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields, ___turn_12)); }
	inline int32_t get_turn_12() const { return ___turn_12; }
	inline int32_t* get_address_of_turn_12() { return &___turn_12; }
	inline void set_turn_12(int32_t value)
	{
		___turn_12 = value;
	}
};


// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// TrajectoryLine
struct TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LineRenderer TrajectoryLine::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_4;

public:
	inline static int32_t get_offset_of_lr_4() { return static_cast<int32_t>(offsetof(TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E, ___lr_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_4() const { return ___lr_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_4() { return &___lr_4; }
	inline void set_lr_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// shooting
struct shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform shooting::firePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePoint_4;
	// UnityEngine.GameObject shooting::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_5;
	// System.Single shooting::bulletForce
	float ___bulletForce_6;
	// UnityEngine.Vector2 shooting::minPower
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minPower_7;
	// UnityEngine.Vector2 shooting::maxPower
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxPower_8;
	// System.Single shooting::Lifetime
	float ___Lifetime_9;
	// UnityEngine.Camera shooting::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_10;
	// UnityEngine.Vector2 shooting::bulletDir
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___bulletDir_11;
	// UnityEngine.Vector3 shooting::endPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint_12;
	// UnityEngine.Vector3 shooting::playerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___playerPosition_13;

public:
	inline static int32_t get_offset_of_firePoint_4() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___firePoint_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePoint_4() const { return ___firePoint_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePoint_4() { return &___firePoint_4; }
	inline void set_firePoint_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_5() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___bulletPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_5() const { return ___bulletPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_5() { return &___bulletPrefab_5; }
	inline void set_bulletPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_bulletForce_6() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___bulletForce_6)); }
	inline float get_bulletForce_6() const { return ___bulletForce_6; }
	inline float* get_address_of_bulletForce_6() { return &___bulletForce_6; }
	inline void set_bulletForce_6(float value)
	{
		___bulletForce_6 = value;
	}

	inline static int32_t get_offset_of_minPower_7() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___minPower_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minPower_7() const { return ___minPower_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minPower_7() { return &___minPower_7; }
	inline void set_minPower_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minPower_7 = value;
	}

	inline static int32_t get_offset_of_maxPower_8() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___maxPower_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxPower_8() const { return ___maxPower_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxPower_8() { return &___maxPower_8; }
	inline void set_maxPower_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxPower_8 = value;
	}

	inline static int32_t get_offset_of_Lifetime_9() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___Lifetime_9)); }
	inline float get_Lifetime_9() const { return ___Lifetime_9; }
	inline float* get_address_of_Lifetime_9() { return &___Lifetime_9; }
	inline void set_Lifetime_9(float value)
	{
		___Lifetime_9 = value;
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___cam_10)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_10() const { return ___cam_10; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_10), (void*)value);
	}

	inline static int32_t get_offset_of_bulletDir_11() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___bulletDir_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_bulletDir_11() const { return ___bulletDir_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_bulletDir_11() { return &___bulletDir_11; }
	inline void set_bulletDir_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___bulletDir_11 = value;
	}

	inline static int32_t get_offset_of_endPoint_12() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___endPoint_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endPoint_12() const { return ___endPoint_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endPoint_12() { return &___endPoint_12; }
	inline void set_endPoint_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endPoint_12 = value;
	}

	inline static int32_t get_offset_of_playerPosition_13() { return static_cast<int32_t>(offsetof(shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B, ___playerPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_playerPosition_13() const { return ___playerPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_playerPosition_13() { return &___playerPosition_13; }
	inline void set_playerPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___playerPosition_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Swordman
struct Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D  : public PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  m_Items[1];

public:
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB (bool ___value0, const RuntimeMethod* method);
// System.Void Demo_GM::KeyUPDownchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM_KeyUPDownchange_m76473B932BB4A67BA478D2F8C9D141DC2161D734 (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TrajectoryLine>()
inline TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * Component_GetComponent_TisTrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E_m6C99DC4AD85F195C9C0419CE80F39B24C6C1A65A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void TrajectoryLine::RenderLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrajectoryLine_RenderLine_m072223C2C20FFAF671C00500D930FFC8649A255A (TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::GroundCapsulleColliderTimmerFuc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_GroundCapsulleColliderTimmerFuc_mD389E25C373D06752EFBE711F71673629386ABE1 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroundCapsulleColliderTimmerFucU3Ed__16__ctor_m1EB08EF7BCB660CAC0C632C29727FD11CD0B7DA6 (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponentInChildren_m7D7A7C91CA8B24310C9CECD41C362C327D926B07 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// System.Void PlayerMovement::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TakeDamage_m245ADF61DF61F2789EF925F3D903169F91E9C931 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___damage0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.PolygonCollider2D>()
inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<shooting>()
inline shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Int32 HealthBar::GetHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthBar_GetHealth_m0B3B84CBF3C92319FF8CD909F315BE151602B002 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method);
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Swordman::checkInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman_checkInput_mA88FAE6334E273FC0E044EF649E7F7B878A589A9 (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::DownJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_DownJump_mF5A3D49CF372E0C7E37334E56328FEE689C57EF4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void PlayerController::GroundCheckUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GroundCheckUpdate_m0A105E9E8C0B03EF76D7620EAA75F3BF997D0110 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void PlayerController::Filp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Filp_m947A692BD1DE45493E1F7F755F64804082E8FCDD (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, bool ___bLeft0, const RuntimeMethod* method);
// System.Void PlayerController::prefromJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_prefromJump_mF9A8A3B952C46F7FD138BA9FCF74E09E3F551477 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Void shooting::WaitAndDestroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting_WaitAndDestroy_mECE29BEC521EB8CFE72A30A7AE1B7A288146E9FC (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 Targetpos = new Vector3(Target.transform.position.x, Target.transform.position.y + PosY, -100);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Target_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Target_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		float L_8 = __this->get_PosY_7();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_3, ((float)il2cpp_codegen_add((float)L_7, (float)L_8)), (-100.0f), /*hidden argument*/NULL);
		// transform.position = Vector3.Lerp(transform.position, Targetpos, Time.deltaTime * Smoothvalue);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		int32_t L_14 = __this->get_Smoothvalue_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14)))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// public int Smoothvalue =2;
		__this->set_Smoothvalue_6(2);
		// public float PosY = 1;
		__this->set_PosY_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Demo_GM::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM_Awake_m4A2EC4187461B0E259EA83A54A3559ECF421AC2D (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.fullScreen = false;
		Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB((bool)0, /*hidden argument*/NULL);
		// Gm = this;
		((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->set_Gm_4(__this);
		// }
		return;
	}
}
// System.Void Demo_GM::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM_Update_m163E193D1D8E002132442D8B923F85F99D1B7939 (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method)
{
	{
		// KeyUPDownchange();
		Demo_GM_KeyUPDownchange_m76473B932BB4A67BA478D2F8C9D141DC2161D734(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Demo_GM::InitColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM_InitColor_mFCDA88844196FCFC3648930FE46836D4E39AD0BE (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < UIImage.Length; i++)
		V_0 = 0;
		goto IL_002d;
	}

IL_0005:
	{
		// UIImage[i].color = new Color(255, 255, 255);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get_UIImage_5();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_4), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for (int i = 0; i < UIImage.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002d:
	{
		// for (int i = 0; i < UIImage.Length; i++)
		int32_t L_6 = V_0;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_UIImage_5();
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Demo_GM::KeyUPDownchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM_KeyUPDownchange_m76473B932BB4A67BA478D2F8C9D141DC2161D734 (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_23;
	memset((&V_23), 0, sizeof(V_23));
	bool V_24 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_25;
	memset((&V_25), 0, sizeof(V_25));
	bool V_26 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_31;
	memset((&V_31), 0, sizeof(V_31));
	{
		// if (Input.GetKeyUp(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)97), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_2), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Demo_GM.Gm.UIImage[2].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_4 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_5 = L_4->get_UIImage_5();
		int32_t L_6 = 2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = V_1;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
	}

IL_0040:
	{
		// if (Input.GetKeyUp(KeyCode.D))
		bool L_9;
		L_9 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)100), /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_11), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// Demo_GM.Gm.UIImage[3].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_13 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_14 = L_13->get_UIImage_5();
		int32_t L_15 = 3;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = V_3;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
	}

IL_007f:
	{
		// if (Input.GetKeyUp(KeyCode.W))
		bool L_18;
		L_18 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)119), /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00c2;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_20), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		// Demo_GM.Gm.UIImage[0].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_22 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_23 = L_22->get_UIImage_5();
		int32_t L_24 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = V_5;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
	}

IL_00c2:
	{
		// if (Input.GetKeyUp(KeyCode.S))
		bool L_27;
		L_27 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)115), /*hidden argument*/NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0105;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_29), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		// Demo_GM.Gm.UIImage[1].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_31 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_32 = L_31->get_UIImage_5();
		int32_t L_33 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = V_7;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
	}

IL_0105:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_36;
		L_36 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		V_8 = L_36;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_0148;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_38), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_38, /*hidden argument*/NULL);
		V_9 = L_39;
		// Demo_GM.Gm.UIImage[2].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_40 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_41 = L_40->get_UIImage_5();
		int32_t L_42 = 2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = V_9;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_44);
	}

IL_0148:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_45;
		L_45 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		V_10 = L_45;
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_018b;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_47), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_47, /*hidden argument*/NULL);
		V_11 = L_48;
		// Demo_GM.Gm.UIImage[3].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_49 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_50 = L_49->get_UIImage_5();
		int32_t L_51 = 3;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = V_11;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_52, L_53);
	}

IL_018b:
	{
		// if (Input.GetKeyDown(KeyCode.W))
		bool L_54;
		L_54 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)119), /*hidden argument*/NULL);
		V_12 = L_54;
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_01ce;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_56), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_56, /*hidden argument*/NULL);
		V_13 = L_57;
		// Demo_GM.Gm.UIImage[0].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_58 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_59 = L_58->get_UIImage_5();
		int32_t L_60 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_62 = V_13;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_61, L_62);
	}

IL_01ce:
	{
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_63;
		L_63 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)115), /*hidden argument*/NULL);
		V_14 = L_63;
		bool L_64 = V_14;
		if (!L_64)
		{
			goto IL_0211;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_65), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66;
		L_66 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_65, /*hidden argument*/NULL);
		V_15 = L_66;
		// Demo_GM.Gm.UIImage[1].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_67 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_68 = L_67->get_UIImage_5();
		int32_t L_69 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71 = V_15;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_71);
	}

IL_0211:
	{
		// if (Input.GetKeyUp(KeyCode.Mouse0))
		bool L_72;
		L_72 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)323), /*hidden argument*/NULL);
		V_16 = L_72;
		bool L_73 = V_16;
		if (!L_73)
		{
			goto IL_0257;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_74), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75;
		L_75 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_74, /*hidden argument*/NULL);
		V_17 = L_75;
		// Demo_GM.Gm.UIImage[4].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_76 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_77 = L_76->get_UIImage_5();
		int32_t L_78 = 4;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_80 = V_17;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_79, L_80);
	}

IL_0257:
	{
		// if (Input.GetKeyUp(KeyCode.Mouse1))
		bool L_81;
		L_81 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)324), /*hidden argument*/NULL);
		V_18 = L_81;
		bool L_82 = V_18;
		if (!L_82)
		{
			goto IL_029d;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_83), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_84;
		L_84 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_83, /*hidden argument*/NULL);
		V_19 = L_84;
		// Demo_GM.Gm.UIImage[5].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_85 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_86 = L_85->get_UIImage_5();
		int32_t L_87 = 5;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89 = V_19;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_89);
	}

IL_029d:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0))
		bool L_90;
		L_90 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)323), /*hidden argument*/NULL);
		V_20 = L_90;
		bool L_91 = V_20;
		if (!L_91)
		{
			goto IL_02e3;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_92;
		memset((&L_92), 0, sizeof(L_92));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_92), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_92, /*hidden argument*/NULL);
		V_21 = L_93;
		// Demo_GM.Gm.UIImage[4].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_94 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_95 = L_94->get_UIImage_5();
		int32_t L_96 = 4;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_97 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98 = V_21;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_97, L_98);
	}

IL_02e3:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse1))
		bool L_99;
		L_99 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)324), /*hidden argument*/NULL);
		V_22 = L_99;
		bool L_100 = V_22;
		if (!L_100)
		{
			goto IL_0329;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_101;
		memset((&L_101), 0, sizeof(L_101));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_101), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_102;
		L_102 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_101, /*hidden argument*/NULL);
		V_23 = L_102;
		// Demo_GM.Gm.UIImage[5].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_103 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_104 = L_103->get_UIImage_5();
		int32_t L_105 = 5;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_106 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_107 = V_23;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_106, L_107);
	}

IL_0329:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_108;
		L_108 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		V_24 = L_108;
		bool L_109 = V_24;
		if (!L_109)
		{
			goto IL_036c;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_110;
		memset((&L_110), 0, sizeof(L_110));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_110), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_111;
		L_111 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_110, /*hidden argument*/NULL);
		V_25 = L_111;
		// Demo_GM.Gm.UIImage[6].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_112 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_113 = L_112->get_UIImage_5();
		int32_t L_114 = 6;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_115 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_116 = V_25;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_115, L_116);
	}

IL_036c:
	{
		// if (Input.GetKeyUp(KeyCode.Alpha1))
		bool L_117;
		L_117 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)49), /*hidden argument*/NULL);
		V_26 = L_117;
		bool L_118 = V_26;
		if (!L_118)
		{
			goto IL_03af;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_119), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_120;
		L_120 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_119, /*hidden argument*/NULL);
		V_27 = L_120;
		// Demo_GM.Gm.UIImage[6].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_121 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_122 = L_121->get_UIImage_5();
		int32_t L_123 = 6;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_124 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_125 = V_27;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_124, L_125);
	}

IL_03af:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_126;
		L_126 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		V_28 = L_126;
		bool L_127 = V_28;
		if (!L_127)
		{
			goto IL_03f2;
		}
	}
	{
		// Color myColor = new Color32(180, 180, 180, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_128;
		memset((&L_128), 0, sizeof(L_128));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_128), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)180), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_129;
		L_129 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_128, /*hidden argument*/NULL);
		V_29 = L_129;
		// Demo_GM.Gm.UIImage[7].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_130 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_131 = L_130->get_UIImage_5();
		int32_t L_132 = 7;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_133 = (L_131)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_134 = V_29;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_133, L_134);
	}

IL_03f2:
	{
		// if (Input.GetKeyUp(KeyCode.Space))
		bool L_135;
		L_135 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)32), /*hidden argument*/NULL);
		V_30 = L_135;
		bool L_136 = V_30;
		if (!L_136)
		{
			goto IL_0435;
		}
	}
	{
		// Color myColor = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_137;
		memset((&L_137), 0, sizeof(L_137));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_137), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_138;
		L_138 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_137, /*hidden argument*/NULL);
		V_31 = L_138;
		// Demo_GM.Gm.UIImage[7].color = myColor;
		Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * L_139 = ((Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_StaticFields*)il2cpp_codegen_static_fields_for(Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D_il2cpp_TypeInfo_var))->get_Gm_4();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_140 = L_139->get_UIImage_5();
		int32_t L_141 = 7;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_142 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_141));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_143 = V_31;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_142, L_143);
	}

IL_0435:
	{
		// }
		return;
	}
}
// System.Void Demo_GM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GM__ctor_m51A22453C8921352DACD7C53F94FC0FBFE0742FD (Demo_GM_t4894DD50EEE47EB088227B5C869606530BD54D5D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DranNshoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DranNshoot_Start_mA0679624B10C714B395C5F423C1AB02423FB3307 (DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E_m6C99DC4AD85F195C9C0419CE80F39B24C6C1A65A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_cam_9(L_0);
		// tl = GetComponent<TrajectoryLine>();
		TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * L_1;
		L_1 = Component_GetComponent_TisTrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E_m6C99DC4AD85F195C9C0419CE80F39B24C6C1A65A(__this, /*hidden argument*/Component_GetComponent_TisTrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E_m6C99DC4AD85F195C9C0419CE80F39B24C6C1A65A_RuntimeMethod_var);
		__this->set_tl_8(L_1);
		// }
		return;
	}
}
// System.Void DranNshoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DranNshoot_Update_mD55F6BC7E372B9594969406116B1EBE76EE245EE (DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B97F02972640D38C177E241444DEA4FF9BE3B8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// startPoint = cam.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		__this->set_startPoint_11(L_4);
		// startPoint.z = 15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_startPoint_11();
		L_5->set_z_4((15.0f));
	}

IL_0033:
	{
		// if (Input.GetMouseButton(0))
		bool L_6;
		L_6 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0089;
		}
	}
	{
		// Vector3 currentPoint = cam.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_cam_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// currentPoint.z = 15;
		(&V_2)->set_z_4((15.0f));
		// playerPosition = GameObject.Find("bullet1").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral74B97F02972640D38C177E241444DEA4FF9BE3B8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		__this->set_playerPosition_13(L_13);
		// tl.RenderLine(playerPosition, currentPoint);
		TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * L_14 = __this->get_tl_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_playerPosition_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		TrajectoryLine_RenderLine_m072223C2C20FFAF671C00500D930FFC8649A255A(L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_17;
		L_17 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_015c;
		}
	}
	{
		// endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_cam_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_19, L_20, /*hidden argument*/NULL);
		__this->set_endPoint_12(L_21);
		// endPoint.z = 15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_endPoint_12();
		L_22->set_z_4((15.0f));
		// force = new Vector2(Mathf.Clamp(startPoint.x-endPoint.x, minPower.x, maxPower.x), Mathf.Clamp(startPoint.y-endPoint.y, minPower.y, maxPower.y));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_startPoint_11();
		float L_24 = L_23->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_endPoint_12();
		float L_26 = L_25->get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_minPower_6();
		float L_28 = L_27->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_maxPower_7();
		float L_30 = L_29->get_x_0();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), L_28, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_startPoint_11();
		float L_33 = L_32->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_endPoint_12();
		float L_35 = L_34->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_minPower_6();
		float L_37 = L_36->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_maxPower_7();
		float L_39 = L_38->get_y_1();
		float L_40;
		L_40 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_33, (float)L_35)), L_37, L_39, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), L_31, L_40, /*hidden argument*/NULL);
		__this->set_force_10(L_41);
		// Debug.Log(force);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = __this->get_force_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = L_42;
		RuntimeObject * L_44 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_43);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_44, /*hidden argument*/NULL);
		// rb.AddForce(force * power, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_45 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = __this->get_force_10();
		float L_47 = __this->get_power_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_46, L_47, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_45, L_48, 1, /*hidden argument*/NULL);
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void DranNshoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DranNshoot__ctor_m6423B741114E3D5AB02727291F5298E70E38F178 (DranNshoot_t83CA56A333CD0D5A68BDE8AE6DC519100927FC32 * __this, const RuntimeMethod* method)
{
	{
		// public float power = 10f;
		__this->set_power_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Game_Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Manager_Start_mCBEEE22D30AE48F62D2DD61781B25AD777537B94 (Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD81F1BE7555756DB3E11EDFA760848565ED4EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// GameObject player1 = GameObject.Find("Player1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		V_0 = L_0;
		// GameObject player2 = GameObject.Find("Player2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		V_1 = L_1;
		// player1.SendMessage("Player1Turn"); //assume that it's palyer1's turn when the game starts
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_2, _stringLiteral1AD81F1BE7555756DB3E11EDFA760848565ED4EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game_Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Manager_Update_mE9B96A299ACC378670F03DB180E2C3E99D846C6B (Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD81F1BE7555756DB3E11EDFA760848565ED4EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247AAF59CC1D6CA441E00DBEE3EA64A910431A3B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.GetKey(KeyCode.N))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)110), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// player1.SendMessage("Player1Turn");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player1_4();
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_2, _stringLiteral1AD81F1BE7555756DB3E11EDFA760848565ED4EE, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if (Input.GetKey(KeyCode.B))
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)98), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// player2.SendMessage("Player2Turn");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player2_5();
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_5, _stringLiteral247AAF59CC1D6CA441E00DBEE3EA64A910431A3B, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Game_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Manager__ctor_mD60953D9B0F26B533A471F58F2262EBB595E0655 (Game_Manager_tB1C6B52DF80E5873EC46AFAA5CB53831A4E7D439 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GroundSensor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSensor_Start_m42672416B51367064CDA591AF09A80B2DE49E38B (GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_root = this.transform.root.GetComponent<PlayerController>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91(L_0, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_2;
		L_2 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424(L_1, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		__this->set_m_root_4(L_2);
		// }
		return;
	}
}
// System.Void GroundSensor::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSensor_OnTriggerStay2D_m094CB8AE59CC9218CE91A7551F020E52676D606C (GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (other.CompareTag("Ground") || other.CompareTag("Block"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___other0;
		bool L_3;
		L_3 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_2, _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_008c;
		}
	}
	{
		// if (other.CompareTag("Ground"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		bool L_6;
		L_6 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_5, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// m_root.Is_DownJump_GroundCheck = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = __this->get_m_root_4();
		L_8->set_Is_DownJump_GroundCheck_8((bool)1);
		goto IL_004e;
	}

IL_0040:
	{
		// m_root.Is_DownJump_GroundCheck = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_9 = __this->get_m_root_4();
		L_9->set_Is_DownJump_GroundCheck_8((bool)0);
	}

IL_004e:
	{
		// if (m_root.m_rigidbody.velocity.y <= 0)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_10 = __this->get_m_root_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = L_10->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		V_2 = (bool)((((int32_t)((!(((float)L_13) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// m_root.isGrounded = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_15 = __this->get_m_root_4();
		L_15->set_isGrounded_6((bool)1);
		// m_root.currentJumpCount = 0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_16 = __this->get_m_root_4();
		L_16->set_currentJumpCount_5(0);
	}

IL_008b:
	{
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void GroundSensor::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSensor_OnTriggerExit2D_m55FF3AFE4F76BAE9526DD28FF3CBC9CE6EBE972E (GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	{
		// m_root.isGrounded = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get_m_root_4();
		L_0->set_isGrounded_6((bool)0);
		// }
		return;
	}
}
// System.Void GroundSensor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSensor__ctor_m830B547AD20E025B7E3E17AC8A3F6FCE5B885191 (GroundSensor_t3FBF1CCA8039E34F5292DA0B00BB5AA7A19BF845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ContactPoint2D[] contacts = new ContactPoint2D[1];
		ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* L_0 = (ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277*)(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277*)SZArrayNew(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_contacts_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// slider.maxValue = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		int32_t L_1 = ___health0;
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_0, ((float)((float)L_1)), /*hidden argument*/NULL);
		// slider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_4();
		int32_t L_3 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)((float)L_3)));
		// }
		return;
	}
}
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// slider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		int32_t L_1 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_1)));
		// }
		return;
	}
}
// System.Int32 HealthBar::GetHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthBar_GetHealth_m0B3B84CBF3C92319FF8CD909F315BE151602B002 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return (int)slider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Start_m11F7E13E9C92C9009E4150FA83973BB9A5E9FB4B (Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Update_mEC4A4BE674AC1E951746609A1E09C93E68FD5472 (Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement.x = Input.GetAxisRaw("Horizontal");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_movement_5();
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		L_0->set_x_0(L_1);
		// movement.y = Input.GetAxisRaw("Vertical");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_movement_5();
		float L_3;
		L_3 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		L_2->set_y_1(L_3);
		// }
		return;
	}
}
// System.Void Move::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_FixedUpdate_m694B84E94829BA742775A55B8A49BBBE880F7F15 (Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3 * __this, const RuntimeMethod* method)
{
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_movement_5();
		float L_4 = __this->get_moveSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_7, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move__ctor_m7D963099B75667E43E14FB30057A669AB0EA625C (Move_tEA2DA838A15D597C0DE086D57EEA59390CB3E2F3 * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed= 50f;
		__this->set_moveSpeed_4((50.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::AnimUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimUpdate_mF4310A5F3A075662314986B9C02B162579BE0FBD (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_1), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0090;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Mouse0))
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)323), /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// m_Anim.Play("Attack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_6, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		goto IL_008f;
	}

IL_0045:
	{
		// if (m_MoveX == 0)
		float L_7 = __this->get_m_MoveX_9();
		V_3 = (bool)((((float)L_7) == ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		// if (!OnceJumpRayCheck)
		bool L_9 = __this->get_OnceJumpRayCheck_7();
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		// m_Anim.Play("Idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_11, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, /*hidden argument*/NULL);
	}

IL_0078:
	{
		goto IL_008e;
	}

IL_007b:
	{
		// m_Anim.Play("Run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_12, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, /*hidden argument*/NULL);
	}

IL_008e:
	{
	}

IL_008f:
	{
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Filp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Filp_m947A692BD1DE45493E1F7F755F64804082E8FCDD (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, bool ___bLeft0, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B2_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_1 = NULL;
	{
		// transform.localScale = new Vector3(bLeft ? 1 : -1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		bool L_1 = ___bLeft0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), ((float)((float)G_B3_0)), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(G_B3_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::prefromJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_prefromJump_mF9A8A3B952C46F7FD138BA9FCF74E09E3F551477 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Anim.Play("Jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_0, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		// m_rigidbody.velocity = new Vector2(0, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_2, /*hidden argument*/NULL);
		// m_rigidbody.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_5 = __this->get_jumpForce_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_3, L_6, 1, /*hidden argument*/NULL);
		// OnceJumpRayCheck = true;
		__this->set_OnceJumpRayCheck_7((bool)1);
		// isGrounded = false;
		__this->set_isGrounded_6((bool)0);
		// currentJumpCount++;
		int32_t L_7 = __this->get_currentJumpCount_5();
		__this->set_currentJumpCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// }
		return;
	}
}
// System.Void PlayerController::DownJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_DownJump_mF5A3D49CF372E0C7E37334E56328FEE689C57EF4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!isGrounded)
		bool L_0 = __this->get_isGrounded_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0071;
	}

IL_0010:
	{
		// if (!Is_DownJump_GroundCheck)
		bool L_2 = __this->get_Is_DownJump_GroundCheck_8();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// m_Anim.Play("Jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_4, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		// m_rigidbody.AddForce(-Vector2.up * 10);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_5, L_8, /*hidden argument*/NULL);
		// isGrounded = false;
		__this->set_isGrounded_6((bool)0);
		// m_CapsulleCollider.enabled = false;
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_9 = __this->get_m_CapsulleCollider_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(GroundCapsulleColliderTimmerFuc());
		RuntimeObject* L_10;
		L_10 = PlayerController_GroundCapsulleColliderTimmerFuc_mD389E25C373D06752EFBE711F71673629386ABE1(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::GroundCapsulleColliderTimmerFuc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_GroundCapsulleColliderTimmerFuc_mD389E25C373D06752EFBE711F71673629386ABE1 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * L_0 = (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 *)il2cpp_codegen_object_new(U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61_il2cpp_TypeInfo_var);
		U3CGroundCapsulleColliderTimmerFucU3Ed__16__ctor_m1EB08EF7BCB660CAC0C632C29727FD11CD0B7DA6(L_0, 0, /*hidden argument*/NULL);
		U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::GroundCheckUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GroundCheckUpdate_m0A105E9E8C0B03EF76D7620EAA75F3BF997D0110 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4178E1F27250B45B023B23FF0B1434B005537D5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (!OnceJumpRayCheck)
		bool L_0 = __this->get_OnceJumpRayCheck_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00dd;
	}

IL_0013:
	{
		// GroundCheckUpdateTic += Time.deltaTime;
		float L_2 = __this->get_GroundCheckUpdateTic_18();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_GroundCheckUpdateTic_18(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
		// if (GroundCheckUpdateTic > GroundCheckUpdateTime)
		float L_4 = __this->get_GroundCheckUpdateTic_18();
		float L_5 = __this->get_GroundCheckUpdateTime_19();
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00dd;
		}
	}
	{
		// GroundCheckUpdateTic = 0;
		__this->set_GroundCheckUpdateTic_18((0.0f));
		// if (PretmpY == 0)
		float L_7 = __this->get_PretmpY_17();
		V_3 = (bool)((((float)L_7) == ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		// PretmpY = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		__this->set_PretmpY_17(L_11);
		// return;
		goto IL_00dd;
	}

IL_0070:
	{
		// float reY = transform.position.y - PretmpY;  //    -1  - 0 = -1 ,  -2 -   -1 = -3
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		float L_15 = __this->get_PretmpY_17();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_14, (float)L_15));
		// if (reY <= 0)
		float L_16 = V_2;
		V_4 = (bool)((((int32_t)((!(((float)L_16) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00c6;
		}
	}
	{
		// if (isGrounded)
		bool L_18 = __this->get_isGrounded_6();
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// LandingEvent();
		VirtActionInvoker0::Invoke(4 /* System.Void PlayerController::LandingEvent() */, __this);
		// OnceJumpRayCheck = false;
		__this->set_OnceJumpRayCheck_7((bool)0);
		goto IL_00c5;
	}

IL_00b8:
	{
		// Debug.Log("안부딪힘");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF4178E1F27250B45B023B23FF0B1434B005537D5, /*hidden argument*/NULL);
	}

IL_00c5:
	{
	}

IL_00c6:
	{
		// PretmpY = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		__this->set_PretmpY_17(L_22);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSit = false;
		__this->set_IsSit_4((bool)0);
		// public int currentJumpCount = 0;
		__this->set_currentJumpCount_5(0);
		// public bool isGrounded = false;
		__this->set_isGrounded_6((bool)0);
		// public bool OnceJumpRayCheck = false;
		__this->set_OnceJumpRayCheck_7((bool)0);
		// public bool Is_DownJump_GroundCheck = false;   // 다운 점프를 하는데 아래 블록인지 그라운드인지 알려주는 불값
		__this->set_Is_DownJump_GroundCheck_8((bool)0);
		// public float MoveSpeed = 6;
		__this->set_MoveSpeed_13((6.0f));
		// public int JumpCount = 2;
		__this->set_JumpCount_14(2);
		// public float jumpForce = 15f;
		__this->set_jumpForce_15((15.0f));
		// Vector2 RayDir = Vector2.down;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		__this->set_RayDir_16(L_0);
		// float GroundCheckUpdateTic = 0;
		__this->set_GroundCheckUpdateTic_18((0.0f));
		// float GroundCheckUpdateTime = 0.01f;
		__this->set_GroundCheckUpdateTime_19((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996B8FDB9980593CDFB05573689D364ED0420081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB90A88CA7FA5EDBC7D3FCA7AAC7F711CED3A1C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthBarOne = GameObject.Find("CanvasOne").GetComponentInChildren(typeof(HealthBar)) as HealthBar;;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral996B8FDB9980593CDFB05573689D364ED0420081, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_3;
		L_3 = GameObject_GetComponentInChildren_m7D7A7C91CA8B24310C9CECD41C362C327D926B07(L_0, L_2, /*hidden argument*/NULL);
		__this->set_healthBarOne_5(((HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 *)IsInstClass((RuntimeObject*)L_3, HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_il2cpp_TypeInfo_var)));
		// healthBarTwo = GameObject.Find("CanvasTwo").GetComponentInChildren(typeof(HealthBar)) as HealthBar;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCB90A88CA7FA5EDBC7D3FCA7AAC7F711CED3A1C1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_0_0_0_var) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_7;
		L_7 = GameObject_GetComponentInChildren_m7D7A7C91CA8B24310C9CECD41C362C327D926B07(L_4, L_6, /*hidden argument*/NULL);
		__this->set_healthBarTwo_6(((HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 *)IsInstClass((RuntimeObject*)L_7, HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_il2cpp_TypeInfo_var)));
		// healthBarOne.SetMaxHealth(maxHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_8 = __this->get_healthBarOne_5();
		int32_t L_9 = __this->get_maxHealth_4();
		HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA(L_8, L_9, /*hidden argument*/NULL);
		// healthBarTwo.SetMaxHealth(maxHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_10 = __this->get_healthBarTwo_6();
		int32_t L_11 = __this->get_maxHealth_4();
		HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(Input.GetKeyDown(KeyCode.Space)){
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// TakeDamage(2);
		PlayerMovement_TakeDamage_m245ADF61DF61F2789EF925F3D903169F91E9C931(__this, 2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_mousePos_11(L_5);
		// if(PlayerMovement.turn == 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		int32_t L_6 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_turn_12();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// playerPosition = GameObject.Find("Player1").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		__this->set_playerPosition_9(L_10);
		goto IL_0073;
	}

IL_0059:
	{
		// playerPosition = GameObject.Find("Player2").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		__this->set_playerPosition_9(L_13);
	}

IL_0073:
	{
		// mousePos.x = mousePos.x - playerPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_mousePos_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_mousePos_11();
		float L_16 = L_15->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_playerPosition_9();
		float L_18 = L_17->get_x_2();
		L_14->set_x_0(((float)il2cpp_codegen_subtract((float)L_16, (float)L_18)));
		// mousePos.y = mousePos.y - playerPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_mousePos_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_mousePos_11();
		float L_21 = L_20->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_playerPosition_9();
		float L_23 = L_22->get_y_3();
		L_19->set_y_1(((float)il2cpp_codegen_subtract((float)L_21, (float)L_23)));
		// }
		return;
	}
}
// System.Void PlayerMovement::Player1Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Player1Turn_m9DDA7EEE1AAC4EB75015343787AF4D8854ACEBC6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerMovement.turn = 1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->set_turn_12(1);
		// GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_1;
		L_1 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_0, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_3;
		L_3 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_2, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Player1").GetComponent<shooting>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * L_5;
		L_5 = GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A(L_4, /*hidden argument*/GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Player2").GetComponent<shooting>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * L_7;
		L_7 = GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A(L_6, /*hidden argument*/GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Player2Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Player2Turn_m90B201526DE63958C84E24848E7B2B4EB9F6EAC9 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerMovement.turn = 2;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->set_turn_12(2);
		// GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_1;
		L_1 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_0, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_3;
		L_3 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_2, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Player2").GetComponent<shooting>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * L_5;
		L_5 = GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A(L_4, /*hidden argument*/GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Player1").GetComponent<shooting>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * L_7;
		L_7 = GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A(L_6, /*hidden argument*/GameObject_GetComponent_Tisshooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B_m3A575C4EB6D7ED51E3B185A9A7DA0D0074613B9A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 lookDir = mousePos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_mousePos_11();
		V_0 = L_0;
		// float angle = Mathf.Atan2(lookDir.y, lookDir.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		float L_2 = L_1.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		float L_4 = L_3.get_x_0();
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)(57.2957802f)));
		// rb.rotation = angle;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_rb_7();
		float L_7 = V_1;
		Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnCollisionEnter2D_mDC9D43936D485DEF8FE65C90E92042EDD2D1F2DD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// Debug.Log(other.gameObject.tag);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// bool isHitByBullet = other.gameObject.tag == "Player";
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_3 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (isHitByBullet) {
		bool L_7 = V_0;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// TakeDamage(2);
		PlayerMovement_TakeDamage_m245ADF61DF61F2789EF925F3D903169F91E9C931(__this, 2, /*hidden argument*/NULL);
		// Destroy(other.gameObject, 0.0f);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_9 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_10, (0.0f), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_TakeDamage_m245ADF61DF61F2789EF925F3D903169F91E9C931 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (PlayerMovement.turn == 1) {
		IL2CPP_RUNTIME_CLASS_INIT(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_turn_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// int currentHealth = healthBarTwo.GetHealth();
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_2 = __this->get_healthBarTwo_6();
		int32_t L_3;
		L_3 = HealthBar_GetHealth_m0B3B84CBF3C92319FF8CD909F315BE151602B002(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// healthBarTwo.SetHealth(currentHealth - damage);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_4 = __this->get_healthBarTwo_6();
		int32_t L_5 = V_1;
		int32_t L_6 = ___damage0;
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_002c:
	{
		// int currentHealth = healthBarOne.GetHealth();
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_7 = __this->get_healthBarOne_5();
		int32_t L_8;
		L_8 = HealthBar_GetHealth_m0B3B84CBF3C92319FF8CD909F315BE151602B002(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// healthBarOne.SetHealth(currentHealth - damage);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_9 = __this->get_healthBarOne_5();
		int32_t L_10 = V_2;
		int32_t L_11 = ___damage0;
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHealth = 20;
		__this->set_maxHealth_4(((int32_t)20));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__cctor_m71F48D39E44B25D19A046C311349AB2445F957F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int turn = 1;
		((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->set_turn_12(1);
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
// System.Void Swordman::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman_Start_mE6949B7114E77E2709AEC9EB0F4BF6C8431D1EEF (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CapsulleCollider  = this.transform.GetComponent<CapsuleCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0(L_0, /*hidden argument*/Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_m_CapsulleCollider_11(L_1);
		// m_Anim = this.transform.Find("model").GetComponent<Animator>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_2, _stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_3, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_m_Anim_12(L_4);
		// m_rigidbody = this.transform.GetComponent<Rigidbody2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6;
		L_6 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_5, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_m_rigidbody_10(L_6);
		// }
		return;
	}
}
// System.Void Swordman::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman_Update_m381DD424A1D451C6EF5AC376EC2CAAA58B7CE9E1 (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// checkInput();
		Swordman_checkInput_mA88FAE6334E273FC0E044EF649E7F7B878A589A9(__this, /*hidden argument*/NULL);
		// if (m_rigidbody.velocity.magnitude > 30)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_2) > ((float)(30.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// m_rigidbody.velocity = new Vector2(m_rigidbody.velocity.x - 0.1f, m_rigidbody.velocity.y - 0.1f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_rigidbody_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_rigidbody_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)il2cpp_codegen_subtract((float)L_7, (float)(0.100000001f))), ((float)il2cpp_codegen_subtract((float)L_10, (float)(0.100000001f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_4, L_11, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Swordman::checkInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman_checkInput_mA88FAE6334E273FC0E044EF649E7F7B878A589A9 (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
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
	int32_t G_B7_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.S))  //아래 버튼 눌렀을때.
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)115), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// IsSit = true;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_IsSit_4((bool)1);
		// m_Anim.Play("Sit");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_2, _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0028:
	{
		// else if (Input.GetKeyUp(KeyCode.S))
		bool L_3;
		L_3 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)115), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// m_Anim.Play("Idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_5, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, /*hidden argument*/NULL);
		// IsSit = false;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_IsSit_4((bool)0);
	}

IL_004d:
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Sit") || m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Die"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_6, 0, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0083;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_10;
		L_10 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_9, 0, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11;
		L_11 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0084;
	}

IL_0083:
	{
		G_B7_0 = 1;
	}

IL_0084:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00ba;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_13;
		L_13 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00b5;
		}
	}
	{
		// if (currentJumpCount < JumpCount)  // 0 , 1
		int32_t L_15 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_currentJumpCount_5();
		int32_t L_16 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_JumpCount_14();
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		// DownJump();
		PlayerController_DownJump_mF5A3D49CF372E0C7E37334E56328FEE689C57EF4(__this, /*hidden argument*/NULL);
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		// return;
		goto IL_03d8;
	}

IL_00ba:
	{
		// m_MoveX = Input.GetAxis("Horizontal");
		float L_18;
		L_18 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->set_m_MoveX_9(L_18);
		// GroundCheckUpdate();
		PlayerController_GroundCheckUpdate_m0A105E9E8C0B03EF76D7620EAA75F3BF997D0110(__this, /*hidden argument*/NULL);
		// if (!m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_20;
		L_20 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_19, 0, /*hidden argument*/NULL);
		V_3 = L_20;
		bool L_21;
		L_21 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0166;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Mouse0))
		bool L_23;
		L_23 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)323), /*hidden argument*/NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_0119;
		}
	}
	{
		// m_Anim.Play("Attack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_25 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_25, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		goto IL_0165;
	}

IL_0119:
	{
		// if (m_MoveX == 0)
		float L_26 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_MoveX_9();
		V_8 = (bool)((((float)L_26) == ((float)(0.0f)))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0151;
		}
	}
	{
		// if (!OnceJumpRayCheck)
		bool L_28 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_OnceJumpRayCheck_7();
		V_9 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_014e;
		}
	}
	{
		// m_Anim.Play("Idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_30 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_30, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, /*hidden argument*/NULL);
	}

IL_014e:
	{
		goto IL_0164;
	}

IL_0151:
	{
		// m_Anim.Play("Run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_31 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_31, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, /*hidden argument*/NULL);
	}

IL_0164:
	{
	}

IL_0165:
	{
	}

IL_0166:
	{
		// if (Input.GetKey(KeyCode.Alpha1))
		bool L_32;
		L_32 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)49), /*hidden argument*/NULL);
		V_10 = L_32;
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_0186;
		}
	}
	{
		// m_Anim.Play("Die");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_34 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_34, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
	}

IL_0186:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_35;
		L_35 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		V_11 = L_35;
		bool L_36 = V_11;
		if (!L_36)
		{
			goto IL_027d;
		}
	}
	{
		// if (isGrounded)  // 땅바닥에 있었을때.
		bool L_37 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_isGrounded_6();
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0206;
		}
	}
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_39 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_40;
		L_40 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_39, 0, /*hidden argument*/NULL);
		V_3 = L_40;
		bool L_41;
		L_41 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_13 = L_41;
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_01c8;
		}
	}
	{
		// return;
		goto IL_03d8;
	}

IL_01c8:
	{
		// transform.transform.Translate(Vector2.right* m_MoveX * MoveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_46 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_MoveX_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_45, L_46, /*hidden argument*/NULL);
		float L_48 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_MoveSpeed_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_47, L_48, /*hidden argument*/NULL);
		float L_50;
		L_50 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_49, L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_51, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_44, L_52, /*hidden argument*/NULL);
		goto IL_023b;
	}

IL_0206:
	{
		// transform.transform.Translate(new Vector3(m_MoveX * MoveSpeed * Time.deltaTime, 0, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		float L_55 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_MoveX_9();
		float L_56 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_MoveSpeed_13();
		float L_57;
		L_57 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_56)), (float)L_57)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_54, L_58, /*hidden argument*/NULL);
	}

IL_023b:
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_59 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_60;
		L_60 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_59, 0, /*hidden argument*/NULL);
		V_3 = L_60;
		bool L_61;
		L_61 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_14 = L_61;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_025f;
		}
	}
	{
		// return;
		goto IL_03d8;
	}

IL_025f:
	{
		// if (!Input.GetKey(KeyCode.A))
		bool L_63;
		L_63 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_15;
		if (!L_64)
		{
			goto IL_0277;
		}
	}
	{
		// Filp(false);
		PlayerController_Filp_m947A692BD1DE45493E1F7F755F64804082E8FCDD(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0277:
	{
		goto IL_036f;
	}

IL_027d:
	{
		// else if (Input.GetKey(KeyCode.A))
		bool L_65;
		L_65 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		V_16 = L_65;
		bool L_66 = V_16;
		if (!L_66)
		{
			goto IL_036f;
		}
	}
	{
		// if (isGrounded)  // 땅바닥에 있었을때.
		bool L_67 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_isGrounded_6();
		V_17 = L_67;
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_02fd;
		}
	}
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_69 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_70;
		L_70 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_69, 0, /*hidden argument*/NULL);
		V_3 = L_70;
		bool L_71;
		L_71 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_18 = L_71;
		bool L_72 = V_18;
		if (!L_72)
		{
			goto IL_02bf;
		}
	}
	{
		// return;
		goto IL_03d8;
	}

IL_02bf:
	{
		// transform.transform.Translate(Vector2.right * m_MoveX * MoveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_73, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75;
		L_75 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_76 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_MoveX_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		L_77 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_75, L_76, /*hidden argument*/NULL);
		float L_78 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_MoveSpeed_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79;
		L_79 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_77, L_78, /*hidden argument*/NULL);
		float L_80;
		L_80 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81;
		L_81 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_79, L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_81, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_74, L_82, /*hidden argument*/NULL);
		goto IL_0332;
	}

IL_02fd:
	{
		// transform.transform.Translate(new Vector3(m_MoveX * MoveSpeed * Time.deltaTime, 0, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_83, /*hidden argument*/NULL);
		float L_85 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_MoveX_9();
		float L_86 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_MoveSpeed_13();
		float L_87;
		L_87 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_88), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_85, (float)L_86)), (float)L_87)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_84, L_88, /*hidden argument*/NULL);
	}

IL_0332:
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_89 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_90;
		L_90 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_89, 0, /*hidden argument*/NULL);
		V_3 = L_90;
		bool L_91;
		L_91 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_19 = L_91;
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_0356;
		}
	}
	{
		// return;
		goto IL_03d8;
	}

IL_0356:
	{
		// if (!Input.GetKey(KeyCode.D))
		bool L_93;
		L_93 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		V_20 = (bool)((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_20;
		if (!L_94)
		{
			goto IL_036e;
		}
	}
	{
		// Filp(true);
		PlayerController_Filp_m947A692BD1DE45493E1F7F755F64804082E8FCDD(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_036e:
	{
	}

IL_036f:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_95;
		L_95 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		V_21 = L_95;
		bool L_96 = V_21;
		if (!L_96)
		{
			goto IL_03d8;
		}
	}
	{
		// if (m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_97 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_98;
		L_98 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_97, 0, /*hidden argument*/NULL);
		V_3 = L_98;
		bool L_99;
		L_99 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		V_22 = L_99;
		bool L_100 = V_22;
		if (!L_100)
		{
			goto IL_039e;
		}
	}
	{
		// return;
		goto IL_03d8;
	}

IL_039e:
	{
		// if (currentJumpCount < JumpCount)  // 0 , 1
		int32_t L_101 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_currentJumpCount_5();
		int32_t L_102 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_JumpCount_14();
		V_23 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		bool L_103 = V_23;
		if (!L_103)
		{
			goto IL_03d7;
		}
	}
	{
		// if (!IsSit)
		bool L_104 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_IsSit_4();
		V_24 = (bool)((((int32_t)L_104) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_24;
		if (!L_105)
		{
			goto IL_03cd;
		}
	}
	{
		// prefromJump();
		PlayerController_prefromJump_mF9A8A3B952C46F7FD138BA9FCF74E09E3F551477(__this, /*hidden argument*/NULL);
		goto IL_03d6;
	}

IL_03cd:
	{
		// DownJump();
		PlayerController_DownJump_mF5A3D49CF372E0C7E37334E56328FEE689C57EF4(__this, /*hidden argument*/NULL);
	}

IL_03d6:
	{
	}

IL_03d7:
	{
	}

IL_03d8:
	{
		// }
		return;
	}
}
// System.Void Swordman::LandingEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman_LandingEvent_m4B768F922B302463123EB6882C7C5E7765CEB632 (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (!m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Run") && !m_Anim.GetCurrentAnimatorStateInfo(0).IsName("Attack"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_1), _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_1), _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 0;
	}

IL_003b:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// m_Anim.Play("Idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 *)__this)->get_m_Anim_12();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_7, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Swordman::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swordman__ctor_m5064EC11A25AD56B1E4EAC8F5131030759A11CD9 (Swordman_t118C1C04284D84B3787FD5A0724405FED535F79D * __this, const RuntimeMethod* method)
{
	{
		PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB(__this, /*hidden argument*/NULL);
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
// System.Void TrajectoryLine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrajectoryLine_Awake_mE582DEF563C134F95E9F8489FDE637E8CBD7C5D7 (TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lr = GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0;
		L_0 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_lr_4(L_0);
		// }
		return;
	}
}
// System.Void TrajectoryLine::RenderLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrajectoryLine_RenderLine_m072223C2C20FFAF671C00500D930FFC8649A255A (TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	{
		// lr.positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lr_4();
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_0, 2, /*hidden argument*/NULL);
		// Vector3[] points = new Vector3[2];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_1;
		// points[0] = startPoint;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___startPoint0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3);
		// points[1] = endPoint;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___endPoint1;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		// lr.SetPositions(points);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lr_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = V_0;
		LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrajectoryLine::vanish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrajectoryLine_vanish_m524F475CB00A17DE2803A44CEED8EF895DD44215 (TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * __this, const RuntimeMethod* method)
{
	{
		// lr.positionCount = 0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lr_4();
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrajectoryLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrajectoryLine__ctor_m16A93DFDF4AA8B3A1FE47557E9E2DAFC2BC4ECB9 (TrajectoryLine_tF7912D7020701FAAB1284AC1D5EB0C622343317E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting_Start_m681DA34159A6E6F3B0B740639557FDE2686EB330 (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_cam_10(L_0);
		// InvokeRepeating ("Shoot", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting_Update_m7A626F4C905AAD0F1557C96429A14C860C17865E (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(PlayerMovement.turn == 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_turn_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// playerPosition = GameObject.Find("Player1").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral623CBDCC47C6DB996D3C60509009A4E557A3E1EF, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		__this->set_playerPosition_13(L_4);
		goto IL_0043;
	}

IL_0029:
	{
		// playerPosition = GameObject.Find("Player2").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC6753E6A408C8CADF84906DD27E247CA73E2BA1C, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_playerPosition_13(L_7);
	}

IL_0043:
	{
		// endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_cam_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_8, L_9, /*hidden argument*/NULL);
		__this->set_endPoint_12(L_10);
		// bulletDir = new Vector2((endPoint.x - playerPosition.x), (endPoint.y - playerPosition.y));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_endPoint_12();
		float L_12 = L_11->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_playerPosition_13();
		float L_14 = L_13->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_endPoint_12();
		float L_16 = L_15->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_playerPosition_13();
		float L_18 = L_17->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), ((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18)), /*hidden argument*/NULL);
		__this->set_bulletDir_11(L_19);
		// bulletDir.Normalize();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_bulletDir_11();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shooting::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting_Shoot_m286DEB118606EE14D5D8D67B43173E761E8A4D6E (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_1 = NULL;
	{
		// GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bulletPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_firePoint_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_firePoint_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_5;
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_1 = L_7;
		// rb.AddForce(bulletForce*bulletDir, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = V_1;
		float L_9 = __this->get_bulletForce_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = __this->get_bulletDir_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_9, L_10, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_8, L_11, 1, /*hidden argument*/NULL);
		// WaitAndDestroy(bullet);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		shooting_WaitAndDestroy_mECE29BEC521EB8CFE72A30A7AE1B7A288146E9FC(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shooting::WaitAndDestroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting_WaitAndDestroy_mECE29BEC521EB8CFE72A30A7AE1B7A288146E9FC (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("call");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral865374231369E7E652DC36DD4AE7A4E07CF673F3, /*hidden argument*/NULL);
		// Destroy(bullet,Lifetime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___bullet0;
		float L_1 = __this->get_Lifetime_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void shooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shooting__ctor_mC4B3E021925B3E898CDD34ABC7F08DFD85BB6743 (shooting_t5698E79F0A2A9190683544787D18B73CCB3E4E7B * __this, const RuntimeMethod* method)
{
	{
		// public float bulletForce = 10f;
		__this->set_bulletForce_6((10.0f));
		// public float Lifetime = 1.0f;
		__this->set_Lifetime_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroundCapsulleColliderTimmerFucU3Ed__16__ctor_m1EB08EF7BCB660CAC0C632C29727FD11CD0B7DA6 (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_IDisposable_Dispose_m6CC2D9EBC4117C08D492C1B319A5D3567065B99C (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGroundCapsulleColliderTimmerFucU3Ed__16_MoveNext_mB3D65B2CC74DCE8F675DE9D333239F840610DF71 (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_CapsulleCollider.enabled = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = __this->get_U3CU3E4__this_2();
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_5 = L_4->get_m_CapsulleCollider_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m647A1FBB72BDB29621403A44E699C2A69B15F42D (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_Collections_IEnumerator_Reset_mCFC628471427540433B8CF275A3EA5FB6A252976 (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_Collections_IEnumerator_Reset_mCFC628471427540433B8CF275A3EA5FB6A252976_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<GroundCapsulleColliderTimmerFuc>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGroundCapsulleColliderTimmerFucU3Ed__16_System_Collections_IEnumerator_get_Current_m22AF82E3FC2FF6D6FBA6BB8C719A2FAAB843853F (U3CGroundCapsulleColliderTimmerFucU3Ed__16_tC6244D5DC18030DA6BDB84B93C24066F1D2E1A61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
