#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Comparison`1<Cinemachine.CinemachineComponentBase>
struct Comparison_1_t6A46363ED0EDD4A1FFC37329EC94893D616D7876;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t3BF92F530374D86F88B50BEC331DF75845A8EDE1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69;
// Cinemachine.CinemachineOrbitalTransposer
struct CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5;
// PlayerInteractions
struct PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SpawnManager
struct SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Cinemachine.CinemachineOrbitalTransposer/HeadingTracker
struct HeadingTracker_tF22AED26097F8CAB86C9F822E8EEFABA9E8EA8FA;
// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
struct UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC;
// Cinemachine.CinemachinePathBase/Appearance
struct Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3;
// Cinemachine.CinemachineVirtualCamera/<>c
struct U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA;
// Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate
struct OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754;
// Enemy/<Attack>d__23
struct U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B;
// Enemy/<WaitForNextWanderLoc>d__20
struct U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A;
// PlayerInteractions/<Attack>d__10
struct U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C;

IL2CPP_EXTERN_C RuntimeClass* CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stage_tE36E61B2D5A0A49D3D12376EA2856C9BEFB79F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05BD90EB2DF82C650279AE86D3C8A14CB99E704D;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__10_System_Collections_IEnumerator_Reset_mD0D77A72E8ECD7D3B19059434254BE90F6989B87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_mDC3EE58AF13EE3E5432776D9F65D20C7D7F567A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForNextWanderLocU3Ed__20_System_Collections_IEnumerator_Reset_m91F819C0E38C27E806ED60DCB84E8D124521A296_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// Cinemachine.CinemachineVirtualCamera/<>c
struct  U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/<>c Cinemachine.CinemachineVirtualCamera/<>c::<>9
	U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * ___U3CU3E9_0;
	// System.Comparison`1<Cinemachine.CinemachineComponentBase> Cinemachine.CinemachineVirtualCamera/<>c::<>9__39_0
	Comparison_1_t6A46363ED0EDD4A1FFC37329EC94893D616D7876 * ___U3CU3E9__39_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_StaticFields, ___U3CU3E9__39_0_1)); }
	inline Comparison_1_t6A46363ED0EDD4A1FFC37329EC94893D616D7876 * get_U3CU3E9__39_0_1() const { return ___U3CU3E9__39_0_1; }
	inline Comparison_1_t6A46363ED0EDD4A1FFC37329EC94893D616D7876 ** get_address_of_U3CU3E9__39_0_1() { return &___U3CU3E9__39_0_1; }
	inline void set_U3CU3E9__39_0_1(Comparison_1_t6A46363ED0EDD4A1FFC37329EC94893D616D7876 * value)
	{
		___U3CU3E9__39_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_1), (void*)value);
	}
};


// Enemy/<Attack>d__23
struct  U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Attack>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Attack>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Enemy/<Attack>d__23::theAttack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___theAttack_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_theAttack_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B, ___theAttack_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_theAttack_2() const { return ___theAttack_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_theAttack_2() { return &___theAttack_2; }
	inline void set_theAttack_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___theAttack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theAttack_2), (void*)value);
	}
};


// Enemy/<WaitForNextWanderLoc>d__20
struct  U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<WaitForNextWanderLoc>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<WaitForNextWanderLoc>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Enemy/<WaitForNextWanderLoc>d__20::time
	float ___time_2;
	// Enemy Enemy/<WaitForNextWanderLoc>d__20::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A, ___U3CU3E4__this_3)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// PlayerInteractions/<Attack>d__10
struct  U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24  : public RuntimeObject
{
public:
	// System.Int32 PlayerInteractions/<Attack>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerInteractions/<Attack>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject PlayerInteractions/<Attack>d__10::theAttack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___theAttack_2;
	// PlayerInteractions PlayerInteractions/<Attack>d__10::<>4__this
	PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_theAttack_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24, ___theAttack_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_theAttack_2() const { return ___theAttack_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_theAttack_2() { return &___theAttack_2; }
	inline void set_theAttack_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___theAttack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theAttack_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24, ___U3CU3E4__this_3)); }
	inline PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Readme/Section
struct  Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// UnityTemplateProjects.SimpleCameraController/CameraState
struct  CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// Cinemachine.AxisState
struct  AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35 
{
public:
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_1;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_2;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_3;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_4;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_5;
	// System.Boolean Cinemachine.AxisState::m_InvertAxis
	bool ___m_InvertAxis_6;
	// System.Single Cinemachine.AxisState::mCurrentSpeed
	float ___mCurrentSpeed_7;
	// System.Single Cinemachine.AxisState::mMinValue
	float ___mMinValue_8;
	// System.Single Cinemachine.AxisState::mMaxValue
	float ___mMaxValue_9;
	// System.Boolean Cinemachine.AxisState::mWrapAround
	bool ___mWrapAround_10;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_1() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_MaxSpeed_1)); }
	inline float get_m_MaxSpeed_1() const { return ___m_MaxSpeed_1; }
	inline float* get_address_of_m_MaxSpeed_1() { return &___m_MaxSpeed_1; }
	inline void set_m_MaxSpeed_1(float value)
	{
		___m_MaxSpeed_1 = value;
	}

	inline static int32_t get_offset_of_m_AccelTime_2() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_AccelTime_2)); }
	inline float get_m_AccelTime_2() const { return ___m_AccelTime_2; }
	inline float* get_address_of_m_AccelTime_2() { return &___m_AccelTime_2; }
	inline void set_m_AccelTime_2(float value)
	{
		___m_AccelTime_2 = value;
	}

	inline static int32_t get_offset_of_m_DecelTime_3() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_DecelTime_3)); }
	inline float get_m_DecelTime_3() const { return ___m_DecelTime_3; }
	inline float* get_address_of_m_DecelTime_3() { return &___m_DecelTime_3; }
	inline void set_m_DecelTime_3(float value)
	{
		___m_DecelTime_3 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisName_4() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_InputAxisName_4)); }
	inline String_t* get_m_InputAxisName_4() const { return ___m_InputAxisName_4; }
	inline String_t** get_address_of_m_InputAxisName_4() { return &___m_InputAxisName_4; }
	inline void set_m_InputAxisName_4(String_t* value)
	{
		___m_InputAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisName_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisValue_5() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_InputAxisValue_5)); }
	inline float get_m_InputAxisValue_5() const { return ___m_InputAxisValue_5; }
	inline float* get_address_of_m_InputAxisValue_5() { return &___m_InputAxisValue_5; }
	inline void set_m_InputAxisValue_5(float value)
	{
		___m_InputAxisValue_5 = value;
	}

	inline static int32_t get_offset_of_m_InvertAxis_6() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___m_InvertAxis_6)); }
	inline bool get_m_InvertAxis_6() const { return ___m_InvertAxis_6; }
	inline bool* get_address_of_m_InvertAxis_6() { return &___m_InvertAxis_6; }
	inline void set_m_InvertAxis_6(bool value)
	{
		___m_InvertAxis_6 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpeed_7() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___mCurrentSpeed_7)); }
	inline float get_mCurrentSpeed_7() const { return ___mCurrentSpeed_7; }
	inline float* get_address_of_mCurrentSpeed_7() { return &___mCurrentSpeed_7; }
	inline void set_mCurrentSpeed_7(float value)
	{
		___mCurrentSpeed_7 = value;
	}

	inline static int32_t get_offset_of_mMinValue_8() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___mMinValue_8)); }
	inline float get_mMinValue_8() const { return ___mMinValue_8; }
	inline float* get_address_of_mMinValue_8() { return &___mMinValue_8; }
	inline void set_mMinValue_8(float value)
	{
		___mMinValue_8 = value;
	}

	inline static int32_t get_offset_of_mMaxValue_9() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___mMaxValue_9)); }
	inline float get_mMaxValue_9() const { return ___mMaxValue_9; }
	inline float* get_address_of_mMaxValue_9() { return &___mMaxValue_9; }
	inline void set_mMaxValue_9(float value)
	{
		___mMaxValue_9 = value;
	}

	inline static int32_t get_offset_of_mWrapAround_10() { return static_cast<int32_t>(offsetof(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35, ___mWrapAround_10)); }
	inline bool get_mWrapAround_10() const { return ___mWrapAround_10; }
	inline bool* get_address_of_mWrapAround_10() { return &___mWrapAround_10; }
	inline void set_mWrapAround_10(bool value)
	{
		___mWrapAround_10 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35_marshaled_pinvoke
{
	float ___Value_0;
	float ___m_MaxSpeed_1;
	float ___m_AccelTime_2;
	float ___m_DecelTime_3;
	char* ___m_InputAxisName_4;
	float ___m_InputAxisValue_5;
	int32_t ___m_InvertAxis_6;
	float ___mCurrentSpeed_7;
	float ___mMinValue_8;
	float ___mMaxValue_9;
	int32_t ___mWrapAround_10;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35_marshaled_com
{
	float ___Value_0;
	float ___m_MaxSpeed_1;
	float ___m_AccelTime_2;
	float ___m_DecelTime_3;
	Il2CppChar* ___m_InputAxisName_4;
	float ___m_InputAxisValue_5;
	int32_t ___m_InvertAxis_6;
	float ___mCurrentSpeed_7;
	float ___mMinValue_8;
	float ___mMaxValue_9;
	int32_t ___mWrapAround_10;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// Cinemachine.LensSettings
struct  LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// System.Single Cinemachine.LensSettings::<Aspect>k__BackingField
	float ___U3CAspectU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAspectU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231, ___U3CAspectU3Ek__BackingField_7)); }
	inline float get_U3CAspectU3Ek__BackingField_7() const { return ___U3CAspectU3Ek__BackingField_7; }
	inline float* get_address_of_U3CAspectU3Ek__BackingField_7() { return &___U3CAspectU3Ek__BackingField_7; }
	inline void set_U3CAspectU3Ek__BackingField_7(float value)
	{
		___U3CAspectU3Ek__BackingField_7 = value;
	}
};

struct LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_StaticFields, ___Default_0)); }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	float ___U3CAspectU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	float ___U3CAspectU3Ek__BackingField_7;
};

// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// Cinemachine.CameraState/CustomBlendable
struct  CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Recentering
struct  Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 
{
public:
	// System.Boolean Cinemachine.CinemachineOrbitalTransposer/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Recentering::m_RecenterWaitTime
	float ___m_RecenterWaitTime_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_3;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_4;

public:
	inline static int32_t get_offset_of_m_enabled_0() { return static_cast<int32_t>(offsetof(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818, ___m_enabled_0)); }
	inline bool get_m_enabled_0() const { return ___m_enabled_0; }
	inline bool* get_address_of_m_enabled_0() { return &___m_enabled_0; }
	inline void set_m_enabled_0(bool value)
	{
		___m_enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_RecenterWaitTime_1() { return static_cast<int32_t>(offsetof(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818, ___m_RecenterWaitTime_1)); }
	inline float get_m_RecenterWaitTime_1() const { return ___m_RecenterWaitTime_1; }
	inline float* get_address_of_m_RecenterWaitTime_1() { return &___m_RecenterWaitTime_1; }
	inline void set_m_RecenterWaitTime_1(float value)
	{
		___m_RecenterWaitTime_1 = value;
	}

	inline static int32_t get_offset_of_m_RecenteringTime_2() { return static_cast<int32_t>(offsetof(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818, ___m_RecenteringTime_2)); }
	inline float get_m_RecenteringTime_2() const { return ___m_RecenteringTime_2; }
	inline float* get_address_of_m_RecenteringTime_2() { return &___m_RecenteringTime_2; }
	inline void set_m_RecenteringTime_2(float value)
	{
		___m_RecenteringTime_2 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingDefinition_3() { return static_cast<int32_t>(offsetof(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818, ___m_LegacyHeadingDefinition_3)); }
	inline int32_t get_m_LegacyHeadingDefinition_3() const { return ___m_LegacyHeadingDefinition_3; }
	inline int32_t* get_address_of_m_LegacyHeadingDefinition_3() { return &___m_LegacyHeadingDefinition_3; }
	inline void set_m_LegacyHeadingDefinition_3(int32_t value)
	{
		___m_LegacyHeadingDefinition_3 = value;
	}

	inline static int32_t get_offset_of_m_LegacyVelocityFilterStrength_4() { return static_cast<int32_t>(offsetof(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818, ___m_LegacyVelocityFilterStrength_4)); }
	inline int32_t get_m_LegacyVelocityFilterStrength_4() const { return ___m_LegacyVelocityFilterStrength_4; }
	inline int32_t* get_address_of_m_LegacyVelocityFilterStrength_4() { return &___m_LegacyVelocityFilterStrength_4; }
	inline void set_m_LegacyVelocityFilterStrength_4(int32_t value)
	{
		___m_LegacyVelocityFilterStrength_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineOrbitalTransposer/Recentering
struct Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_RecenterWaitTime_1;
	float ___m_RecenteringTime_2;
	int32_t ___m_LegacyHeadingDefinition_3;
	int32_t ___m_LegacyVelocityFilterStrength_4;
};
// Native definition for COM marshalling of Cinemachine.CinemachineOrbitalTransposer/Recentering
struct Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_RecenterWaitTime_1;
	float ___m_RecenteringTime_2;
	int32_t ___m_LegacyHeadingDefinition_3;
	int32_t ___m_LegacyVelocityFilterStrength_4;
};

// Cinemachine.CinemachineStateDrivenCamera/Instruction
struct  Instruction_tFA96534855DE9763408C76E39C7828D780F677AE 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/Instruction::m_FullHash
	int32_t ___m_FullHash_0;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineStateDrivenCamera/Instruction::m_VirtualCamera
	CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___m_VirtualCamera_1;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_ActivateAfter
	float ___m_ActivateAfter_2;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_MinDuration
	float ___m_MinDuration_3;

public:
	inline static int32_t get_offset_of_m_FullHash_0() { return static_cast<int32_t>(offsetof(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE, ___m_FullHash_0)); }
	inline int32_t get_m_FullHash_0() const { return ___m_FullHash_0; }
	inline int32_t* get_address_of_m_FullHash_0() { return &___m_FullHash_0; }
	inline void set_m_FullHash_0(int32_t value)
	{
		___m_FullHash_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualCamera_1() { return static_cast<int32_t>(offsetof(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE, ___m_VirtualCamera_1)); }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * get_m_VirtualCamera_1() const { return ___m_VirtualCamera_1; }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 ** get_address_of_m_VirtualCamera_1() { return &___m_VirtualCamera_1; }
	inline void set_m_VirtualCamera_1(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * value)
	{
		___m_VirtualCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualCamera_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActivateAfter_2() { return static_cast<int32_t>(offsetof(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE, ___m_ActivateAfter_2)); }
	inline float get_m_ActivateAfter_2() const { return ___m_ActivateAfter_2; }
	inline float* get_address_of_m_ActivateAfter_2() { return &___m_ActivateAfter_2; }
	inline void set_m_ActivateAfter_2(float value)
	{
		___m_ActivateAfter_2 = value;
	}

	inline static int32_t get_offset_of_m_MinDuration_3() { return static_cast<int32_t>(offsetof(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE, ___m_MinDuration_3)); }
	inline float get_m_MinDuration_3() const { return ___m_MinDuration_3; }
	inline float* get_address_of_m_MinDuration_3() { return &___m_MinDuration_3; }
	inline void set_m_MinDuration_3(float value)
	{
		___m_MinDuration_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_pinvoke
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_com
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};

// Cinemachine.CinemachineStateDrivenCamera/ParentHash
struct  ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_Hash
	int32_t ___m_Hash_0;
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_ParentHash
	int32_t ___m_ParentHash_1;

public:
	inline static int32_t get_offset_of_m_Hash_0() { return static_cast<int32_t>(offsetof(ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65, ___m_Hash_0)); }
	inline int32_t get_m_Hash_0() const { return ___m_Hash_0; }
	inline int32_t* get_address_of_m_Hash_0() { return &___m_Hash_0; }
	inline void set_m_Hash_0(int32_t value)
	{
		___m_Hash_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentHash_1() { return static_cast<int32_t>(offsetof(ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65, ___m_ParentHash_1)); }
	inline int32_t get_m_ParentHash_1() const { return ___m_ParentHash_1; }
	inline int32_t* get_address_of_m_ParentHash_1() { return &___m_ParentHash_1; }
	inline void set_m_ParentHash_1(int32_t value)
	{
		___m_ParentHash_1 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/Target
struct  Target_t9103DD253B9714625D4654779A55627BD9B1BD23 
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineTargetGroup/Target::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::weight
	float ___weight_1;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Target_t9103DD253B9714625D4654779A55627BD9B1BD23, ___target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_0() const { return ___target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Target_t9103DD253B9714625D4654779A55627BD9B1BD23, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(Target_t9103DD253B9714625D4654779A55627BD9B1BD23, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};

// Cinemachine.CinemachineTrackedDolly/AutoDolly
struct  AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187 
{
public:
	// System.Boolean Cinemachine.CinemachineTrackedDolly/AutoDolly::m_Enabled
	bool ___m_Enabled_0;
	// System.Single Cinemachine.CinemachineTrackedDolly/AutoDolly::m_PositionOffset
	float ___m_PositionOffset_1;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchRadius
	int32_t ___m_SearchRadius_2;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchResolution
	int32_t ___m_SearchResolution_3;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionOffset_1() { return static_cast<int32_t>(offsetof(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187, ___m_PositionOffset_1)); }
	inline float get_m_PositionOffset_1() const { return ___m_PositionOffset_1; }
	inline float* get_address_of_m_PositionOffset_1() { return &___m_PositionOffset_1; }
	inline void set_m_PositionOffset_1(float value)
	{
		___m_PositionOffset_1 = value;
	}

	inline static int32_t get_offset_of_m_SearchRadius_2() { return static_cast<int32_t>(offsetof(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187, ___m_SearchRadius_2)); }
	inline int32_t get_m_SearchRadius_2() const { return ___m_SearchRadius_2; }
	inline int32_t* get_address_of_m_SearchRadius_2() { return &___m_SearchRadius_2; }
	inline void set_m_SearchRadius_2(int32_t value)
	{
		___m_SearchRadius_2 = value;
	}

	inline static int32_t get_offset_of_m_SearchResolution_3() { return static_cast<int32_t>(offsetof(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187, ___m_SearchResolution_3)); }
	inline int32_t get_m_SearchResolution_3() const { return ___m_SearchResolution_3; }
	inline int32_t* get_address_of_m_SearchResolution_3() { return &___m_SearchResolution_3; }
	inline void set_m_SearchResolution_3(int32_t value)
	{
		___m_SearchResolution_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_pinvoke
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_com
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};

// Cinemachine.NoiseSettings/NoiseParams
struct  NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7 
{
public:
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Amplitude
	float ___Amplitude_0;
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Frequency
	float ___Frequency_1;

public:
	inline static int32_t get_offset_of_Amplitude_0() { return static_cast<int32_t>(offsetof(NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7, ___Amplitude_0)); }
	inline float get_Amplitude_0() const { return ___Amplitude_0; }
	inline float* get_address_of_Amplitude_0() { return &___Amplitude_0; }
	inline void set_Amplitude_0(float value)
	{
		___Amplitude_0 = value;
	}

	inline static int32_t get_offset_of_Frequency_1() { return static_cast<int32_t>(offsetof(NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7, ___Frequency_1)); }
	inline float get_Frequency_1() const { return ___Frequency_1; }
	inline float* get_address_of_Frequency_1() { return &___Frequency_1; }
	inline void set_Frequency_1(float value)
	{
		___Frequency_1 = value;
	}
};


// Cinemachine.CameraState
struct  CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom0_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom1_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom2_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom3_13;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 * ___m_CustomOverflow_14;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231 * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_mCustom0_10() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___mCustom0_10)); }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  get_mCustom0_10() const { return ___mCustom0_10; }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A * get_address_of_mCustom0_10() { return &___mCustom0_10; }
	inline void set_mCustom0_10(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  value)
	{
		___mCustom0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_10))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_11() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___mCustom1_11)); }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  get_mCustom1_11() const { return ___mCustom1_11; }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A * get_address_of_mCustom1_11() { return &___mCustom1_11; }
	inline void set_mCustom1_11(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  value)
	{
		___mCustom1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_12() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___mCustom2_12)); }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  get_mCustom2_12() const { return ___mCustom2_12; }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A * get_address_of_mCustom2_12() { return &___mCustom2_12; }
	inline void set_mCustom2_12(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  value)
	{
		___mCustom2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_13() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___mCustom3_13)); }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  get_mCustom3_13() const { return ___mCustom3_13; }
	inline CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A * get_address_of_mCustom3_13() { return &___mCustom3_13; }
	inline void set_mCustom3_13(CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  value)
	{
		___mCustom3_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_14() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___m_CustomOverflow_14)); }
	inline List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 * get_m_CustomOverflow_14() const { return ___m_CustomOverflow_14; }
	inline List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 ** get_address_of_m_CustomOverflow_14() { return &___m_CustomOverflow_14; }
	inline void set_m_CustomOverflow_14(List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 * value)
	{
		___m_CustomOverflow_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E, ___U3CNumCustomBlendablesU3Ek__BackingField_15)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_15() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_15() { return &___U3CNumCustomBlendablesU3Ek__BackingField_15; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_15(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_15 = value;
	}
};

struct CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_marshaled_pinvoke
{
	LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom0_10;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom1_11;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom2_12;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom3_13;
	List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 * ___m_CustomOverflow_14;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_15;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_marshaled_com
{
	LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom0_10;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom1_11;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom2_12;
	CustomBlendable_t9DE256DE4FBD4019FB463D202DECC75456B5BE4A  ___mCustom3_13;
	List_1_t04474BAED997DDDFA75D145DF159EDBE1D766A27 * ___m_CustomOverflow_14;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_15;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Cinemachine.CinemachineCore/Stage
struct  Stage_tE36E61B2D5A0A49D3D12376EA2856C9BEFB79F1C 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_tE36E61B2D5A0A49D3D12376EA2856C9BEFB79F1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachinePath/Waypoint
struct  Waypoint_t39B7FC4259063CDF64F2617BB75C3BD41665C041 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachinePath/Waypoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 Cinemachine.CinemachinePath/Waypoint::tangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___tangent_1;
	// System.Single Cinemachine.CinemachinePath/Waypoint::roll
	float ___roll_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Waypoint_t39B7FC4259063CDF64F2617BB75C3BD41665C041, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_tangent_1() { return static_cast<int32_t>(offsetof(Waypoint_t39B7FC4259063CDF64F2617BB75C3BD41665C041, ___tangent_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_tangent_1() const { return ___tangent_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_tangent_1() { return &___tangent_1; }
	inline void set_tangent_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___tangent_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(Waypoint_t39B7FC4259063CDF64F2617BB75C3BD41665C041, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}
};


// Cinemachine.CinemachinePathBase/Appearance
struct  Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3  : public RuntimeObject
{
public:
	// UnityEngine.Color Cinemachine.CinemachinePathBase/Appearance::pathColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pathColor_0;
	// UnityEngine.Color Cinemachine.CinemachinePathBase/Appearance::inactivePathColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___inactivePathColor_1;
	// System.Single Cinemachine.CinemachinePathBase/Appearance::width
	float ___width_2;

public:
	inline static int32_t get_offset_of_pathColor_0() { return static_cast<int32_t>(offsetof(Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3, ___pathColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pathColor_0() const { return ___pathColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pathColor_0() { return &___pathColor_0; }
	inline void set_pathColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pathColor_0 = value;
	}

	inline static int32_t get_offset_of_inactivePathColor_1() { return static_cast<int32_t>(offsetof(Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3, ___inactivePathColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_inactivePathColor_1() const { return ___inactivePathColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_inactivePathColor_1() { return &___inactivePathColor_1; }
	inline void set_inactivePathColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___inactivePathColor_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}
};


// Cinemachine.CinemachinePathBase/PositionUnits
struct  PositionUnits_tEC170393B7284571CF1CB9F6C154949D8EF81CC3 
{
public:
	// System.Int32 Cinemachine.CinemachinePathBase/PositionUnits::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionUnits_tEC170393B7284571CF1CB9F6C154949D8EF81CC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineSmoothPath/Waypoint
struct  Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineSmoothPath/Waypoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single Cinemachine.CinemachineSmoothPath/Waypoint::roll
	float ___roll_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_roll_1() { return static_cast<int32_t>(offsetof(Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0, ___roll_1)); }
	inline float get_roll_1() const { return ___roll_1; }
	inline float* get_address_of_roll_1() { return &___roll_1; }
	inline void set_roll_1(float value)
	{
		___roll_1 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/PositionMode
struct  PositionMode_tEC6B4A314AC3FD64DB388752468CC705F17E8C78 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/PositionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionMode_tEC6B4A314AC3FD64DB388752468CC705F17E8C78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/RotationMode
struct  RotationMode_t079588E131C565D286C87E143EBCEDB67426A0B9 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/RotationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationMode_t079588E131C565D286C87E143EBCEDB67426A0B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/UpdateMethod
struct  UpdateMethod_tE3A7BB2B06642F371AE1F2DA1F0436E9206874BE 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_tE3A7BB2B06642F371AE1F2DA1F0436E9206874BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTrackedDolly/CameraUpMode
struct  CameraUpMode_tEE4EEDF41CFE8CB4B8C18CE3C6DF3B916ED58773 
{
public:
	// System.Int32 Cinemachine.CinemachineTrackedDolly/CameraUpMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraUpMode_tEE4EEDF41CFE8CB4B8C18CE3C6DF3B916ED58773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct  BindingMode_tDAA13727A8765F56EC6CB8BA1126336ABCD92802 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tDAA13727A8765F56EC6CB8BA1126336ABCD92802, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.DocumentationSortingAttribute/Level
struct  Level_tB7FDA2B095414E60C659A986633527459208DC40 
{
public:
	// System.Int32 Cinemachine.DocumentationSortingAttribute/Level::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Level_tB7FDA2B095414E60C659A986633527459208DC40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.NoiseSettings/TransformNoiseParams
struct  TransformNoiseParams_tACD11DEAAFCCB9FCE91266281BD741E0B1B16753 
{
public:
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::X
	NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  ___X_0;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Y
	NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  ___Y_1;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Z
	NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(TransformNoiseParams_tACD11DEAAFCCB9FCE91266281BD741E0B1B16753, ___X_0)); }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  get_X_0() const { return ___X_0; }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7 * get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(TransformNoiseParams_tACD11DEAAFCCB9FCE91266281BD741E0B1B16753, ___Y_1)); }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  get_Y_1() const { return ___Y_1; }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7 * get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(TransformNoiseParams_tACD11DEAAFCCB9FCE91266281BD741E0B1B16753, ___Z_2)); }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  get_Z_2() const { return ___Z_2; }
	inline NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7 * get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(NoiseParams_tC4297420F43B9F7062710B5BF31C3FE0A62054F7  value)
	{
		___Z_2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct  HeadingDefinition_t35E78C003017DC3D2E2E9A7D6BBBA54A80BB3E0A 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_t35E78C003017DC3D2E2E9A7D6BBBA54A80BB3E0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/HeadingTracker/Item
struct  Item_t95FA4F5CF980470AF551D299A91E84133367A38D 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer/HeadingTracker/Item::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_0;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/HeadingTracker/Item::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(Item_t95FA4F5CF980470AF551D299A91E84133367A38D, ___velocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_0() const { return ___velocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Item_t95FA4F5CF980470AF551D299A91E84133367A38D, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Item_t95FA4F5CF980470AF551D299A91E84133367A38D, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Cinemachine.CinemachineOrbitalTransposer/Heading
struct  Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004 
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_HeadingDefinition
	int32_t ___m_HeadingDefinition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_HeadingBias
	float ___m_HeadingBias_2;

public:
	inline static int32_t get_offset_of_m_HeadingDefinition_0() { return static_cast<int32_t>(offsetof(Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004, ___m_HeadingDefinition_0)); }
	inline int32_t get_m_HeadingDefinition_0() const { return ___m_HeadingDefinition_0; }
	inline int32_t* get_address_of_m_HeadingDefinition_0() { return &___m_HeadingDefinition_0; }
	inline void set_m_HeadingDefinition_0(int32_t value)
	{
		___m_HeadingDefinition_0 = value;
	}

	inline static int32_t get_offset_of_m_VelocityFilterStrength_1() { return static_cast<int32_t>(offsetof(Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004, ___m_VelocityFilterStrength_1)); }
	inline int32_t get_m_VelocityFilterStrength_1() const { return ___m_VelocityFilterStrength_1; }
	inline int32_t* get_address_of_m_VelocityFilterStrength_1() { return &___m_VelocityFilterStrength_1; }
	inline void set_m_VelocityFilterStrength_1(int32_t value)
	{
		___m_VelocityFilterStrength_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadingBias_2() { return static_cast<int32_t>(offsetof(Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004, ___m_HeadingBias_2)); }
	inline float get_m_HeadingBias_2() const { return ___m_HeadingBias_2; }
	inline float* get_address_of_m_HeadingBias_2() { return &___m_HeadingBias_2; }
	inline void set_m_HeadingBias_2(float value)
	{
		___m_HeadingBias_2 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
struct  UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct  CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct  DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate
struct  OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cinemachine.CinemachineComponentBase
struct  CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___m_vcamOwner_5;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct  CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Cinemachine.CinemachineVirtualCameraBase::CinemachineGUIDebuggerCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___CinemachineGUIDebuggerCallback_4;
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_5;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t3BF92F530374D86F88B50BEC331DF75845A8EDE1* ___m_LockStageInInspector_6;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_7;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_10;
	// Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate Cinemachine.CinemachineVirtualCameraBase::OnPostPipelineStage
	OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * ___OnPostPipelineStage_11;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_previousStateIsValid
	bool ___m_previousStateIsValid_12;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_previousLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_previousLookAtTarget_13;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_previousFollowTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_previousFollowTarget_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_15;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___m_parentVcam_16;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_17;

public:
	inline static int32_t get_offset_of_CinemachineGUIDebuggerCallback_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___CinemachineGUIDebuggerCallback_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_CinemachineGUIDebuggerCallback_4() const { return ___CinemachineGUIDebuggerCallback_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_CinemachineGUIDebuggerCallback_4() { return &___CinemachineGUIDebuggerCallback_4; }
	inline void set_CinemachineGUIDebuggerCallback_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___CinemachineGUIDebuggerCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CinemachineGUIDebuggerCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_ExcludedPropertiesInInspector_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_5() const { return ___m_ExcludedPropertiesInInspector_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_5() { return &___m_ExcludedPropertiesInInspector_5; }
	inline void set_m_ExcludedPropertiesInInspector_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_LockStageInInspector_6)); }
	inline StageU5BU5D_t3BF92F530374D86F88B50BEC331DF75845A8EDE1* get_m_LockStageInInspector_6() const { return ___m_LockStageInInspector_6; }
	inline StageU5BU5D_t3BF92F530374D86F88B50BEC331DF75845A8EDE1** get_address_of_m_LockStageInInspector_6() { return &___m_LockStageInInspector_6; }
	inline void set_m_LockStageInInspector_6(StageU5BU5D_t3BF92F530374D86F88B50BEC331DF75845A8EDE1* value)
	{
		___m_LockStageInInspector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_ValidatingStreamVersion_7)); }
	inline int32_t get_m_ValidatingStreamVersion_7() const { return ___m_ValidatingStreamVersion_7; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_7() { return &___m_ValidatingStreamVersion_7; }
	inline void set_m_ValidatingStreamVersion_7(int32_t value)
	{
		___m_ValidatingStreamVersion_7 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_OnValidateCalled_8)); }
	inline bool get_m_OnValidateCalled_8() const { return ___m_OnValidateCalled_8; }
	inline bool* get_address_of_m_OnValidateCalled_8() { return &___m_OnValidateCalled_8; }
	inline void set_m_OnValidateCalled_8(bool value)
	{
		___m_OnValidateCalled_8 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_StreamingVersion_9)); }
	inline int32_t get_m_StreamingVersion_9() const { return ___m_StreamingVersion_9; }
	inline int32_t* get_address_of_m_StreamingVersion_9() { return &___m_StreamingVersion_9; }
	inline void set_m_StreamingVersion_9(int32_t value)
	{
		___m_StreamingVersion_9 = value;
	}

	inline static int32_t get_offset_of_m_Priority_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_Priority_10)); }
	inline int32_t get_m_Priority_10() const { return ___m_Priority_10; }
	inline int32_t* get_address_of_m_Priority_10() { return &___m_Priority_10; }
	inline void set_m_Priority_10(int32_t value)
	{
		___m_Priority_10 = value;
	}

	inline static int32_t get_offset_of_OnPostPipelineStage_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___OnPostPipelineStage_11)); }
	inline OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * get_OnPostPipelineStage_11() const { return ___OnPostPipelineStage_11; }
	inline OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 ** get_address_of_OnPostPipelineStage_11() { return &___OnPostPipelineStage_11; }
	inline void set_OnPostPipelineStage_11(OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * value)
	{
		___OnPostPipelineStage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostPipelineStage_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousStateIsValid_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_previousStateIsValid_12)); }
	inline bool get_m_previousStateIsValid_12() const { return ___m_previousStateIsValid_12; }
	inline bool* get_address_of_m_previousStateIsValid_12() { return &___m_previousStateIsValid_12; }
	inline void set_m_previousStateIsValid_12(bool value)
	{
		___m_previousStateIsValid_12 = value;
	}

	inline static int32_t get_offset_of_m_previousLookAtTarget_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_previousLookAtTarget_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_previousLookAtTarget_13() const { return ___m_previousLookAtTarget_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_previousLookAtTarget_13() { return &___m_previousLookAtTarget_13; }
	inline void set_m_previousLookAtTarget_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_previousLookAtTarget_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousLookAtTarget_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousFollowTarget_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_previousFollowTarget_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_previousFollowTarget_14() const { return ___m_previousFollowTarget_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_previousFollowTarget_14() { return &___m_previousFollowTarget_14; }
	inline void set_m_previousFollowTarget_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_previousFollowTarget_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousFollowTarget_14), (void*)value);
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___mSlaveStatusUpdated_15)); }
	inline bool get_mSlaveStatusUpdated_15() const { return ___mSlaveStatusUpdated_15; }
	inline bool* get_address_of_mSlaveStatusUpdated_15() { return &___mSlaveStatusUpdated_15; }
	inline void set_mSlaveStatusUpdated_15(bool value)
	{
		___mSlaveStatusUpdated_15 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_parentVcam_16)); }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * get_m_parentVcam_16() const { return ___m_parentVcam_16; }
	inline CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 ** get_address_of_m_parentVcam_16() { return &___m_parentVcam_16; }
	inline void set_m_parentVcam_16(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * value)
	{
		___m_parentVcam_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64, ___m_QueuePriority_17)); }
	inline int32_t get_m_QueuePriority_17() const { return ___m_QueuePriority_17; }
	inline int32_t* get_address_of_m_QueuePriority_17() { return &___m_QueuePriority_17; }
	inline void set_m_QueuePriority_17(int32_t value)
	{
		___m_QueuePriority_17 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Enemy::damage
	int32_t ___damage_4;
	// System.Int32 Enemy::health
	int32_t ___health_5;
	// SpawnManager Enemy::sp
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___sp_6;
	// UnityEngine.GameObject Enemy::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_7;
	// UnityEngine.AI.NavMeshAgent Enemy::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_8;
	// System.Single Enemy::sightDistance
	float ___sightDistance_9;
	// System.Boolean Enemy::wander
	bool ___wander_10;
	// System.Single Enemy::wanderDist
	float ___wanderDist_11;
	// UnityEngine.Vector3 Enemy::targeWanderDest
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targeWanderDest_12;
	// System.Boolean Enemy::traveling
	bool ___traveling_13;
	// System.Single Enemy::distThresh
	float ___distThresh_14;
	// System.Single Enemy::wanderDistance
	float ___wanderDistance_15;
	// System.Single Enemy::stoppingDist
	float ___stoppingDist_16;
	// UnityEngine.GameObject Enemy::attackTigger
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___attackTigger_17;
	// System.Boolean Enemy::attack
	bool ___attack_18;
	// System.Single Enemy::attackRange
	float ___attackRange_19;
	// System.Single Enemy::attackRate
	float ___attackRate_20;
	// System.Single Enemy::attackTimer
	float ___attackTimer_21;

public:
	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_sp_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___sp_6)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_sp_6() const { return ___sp_6; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_sp_6() { return &___sp_6; }
	inline void set_sp_6(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___sp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sp_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___player_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_7() const { return ___player_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_agent_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___agent_8)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_8() const { return ___agent_8; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_8() { return &___agent_8; }
	inline void set_agent_8(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_8), (void*)value);
	}

	inline static int32_t get_offset_of_sightDistance_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___sightDistance_9)); }
	inline float get_sightDistance_9() const { return ___sightDistance_9; }
	inline float* get_address_of_sightDistance_9() { return &___sightDistance_9; }
	inline void set_sightDistance_9(float value)
	{
		___sightDistance_9 = value;
	}

	inline static int32_t get_offset_of_wander_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___wander_10)); }
	inline bool get_wander_10() const { return ___wander_10; }
	inline bool* get_address_of_wander_10() { return &___wander_10; }
	inline void set_wander_10(bool value)
	{
		___wander_10 = value;
	}

	inline static int32_t get_offset_of_wanderDist_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___wanderDist_11)); }
	inline float get_wanderDist_11() const { return ___wanderDist_11; }
	inline float* get_address_of_wanderDist_11() { return &___wanderDist_11; }
	inline void set_wanderDist_11(float value)
	{
		___wanderDist_11 = value;
	}

	inline static int32_t get_offset_of_targeWanderDest_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___targeWanderDest_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targeWanderDest_12() const { return ___targeWanderDest_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targeWanderDest_12() { return &___targeWanderDest_12; }
	inline void set_targeWanderDest_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targeWanderDest_12 = value;
	}

	inline static int32_t get_offset_of_traveling_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___traveling_13)); }
	inline bool get_traveling_13() const { return ___traveling_13; }
	inline bool* get_address_of_traveling_13() { return &___traveling_13; }
	inline void set_traveling_13(bool value)
	{
		___traveling_13 = value;
	}

	inline static int32_t get_offset_of_distThresh_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___distThresh_14)); }
	inline float get_distThresh_14() const { return ___distThresh_14; }
	inline float* get_address_of_distThresh_14() { return &___distThresh_14; }
	inline void set_distThresh_14(float value)
	{
		___distThresh_14 = value;
	}

	inline static int32_t get_offset_of_wanderDistance_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___wanderDistance_15)); }
	inline float get_wanderDistance_15() const { return ___wanderDistance_15; }
	inline float* get_address_of_wanderDistance_15() { return &___wanderDistance_15; }
	inline void set_wanderDistance_15(float value)
	{
		___wanderDistance_15 = value;
	}

	inline static int32_t get_offset_of_stoppingDist_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___stoppingDist_16)); }
	inline float get_stoppingDist_16() const { return ___stoppingDist_16; }
	inline float* get_address_of_stoppingDist_16() { return &___stoppingDist_16; }
	inline void set_stoppingDist_16(float value)
	{
		___stoppingDist_16 = value;
	}

	inline static int32_t get_offset_of_attackTigger_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackTigger_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_attackTigger_17() const { return ___attackTigger_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_attackTigger_17() { return &___attackTigger_17; }
	inline void set_attackTigger_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___attackTigger_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackTigger_17), (void*)value);
	}

	inline static int32_t get_offset_of_attack_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attack_18)); }
	inline bool get_attack_18() const { return ___attack_18; }
	inline bool* get_address_of_attack_18() { return &___attack_18; }
	inline void set_attack_18(bool value)
	{
		___attack_18 = value;
	}

	inline static int32_t get_offset_of_attackRange_19() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackRange_19)); }
	inline float get_attackRange_19() const { return ___attackRange_19; }
	inline float* get_address_of_attackRange_19() { return &___attackRange_19; }
	inline void set_attackRange_19(float value)
	{
		___attackRange_19 = value;
	}

	inline static int32_t get_offset_of_attackRate_20() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackRate_20)); }
	inline float get_attackRate_20() const { return ___attackRate_20; }
	inline float* get_address_of_attackRate_20() { return &___attackRate_20; }
	inline void set_attackRate_20(float value)
	{
		___attackRate_20 = value;
	}

	inline static int32_t get_offset_of_attackTimer_21() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackTimer_21)); }
	inline float get_attackTimer_21() const { return ___attackTimer_21; }
	inline float* get_address_of_attackTimer_21() { return &___attackTimer_21; }
	inline void set_attackTimer_21(float value)
	{
		___attackTimer_21 = value;
	}
};


// PlayerInteractions
struct  PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerData PlayerInteractions::PlayerData
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___PlayerData_4;
	// UnityEngine.GameObject PlayerInteractions::forwardAttack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___forwardAttack_5;
	// UnityEngine.GameObject PlayerInteractions::areaAttack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___areaAttack_6;
	// System.Boolean PlayerInteractions::disableForwardattack
	bool ___disableForwardattack_7;
	// System.Boolean PlayerInteractions::disableAreaattack
	bool ___disableAreaattack_8;
	// UnityEngine.GameObject PlayerInteractions::deathPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPanel_9;

public:
	inline static int32_t get_offset_of_PlayerData_4() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___PlayerData_4)); }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * get_PlayerData_4() const { return ___PlayerData_4; }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 ** get_address_of_PlayerData_4() { return &___PlayerData_4; }
	inline void set_PlayerData_4(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * value)
	{
		___PlayerData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerData_4), (void*)value);
	}

	inline static int32_t get_offset_of_forwardAttack_5() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___forwardAttack_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_forwardAttack_5() const { return ___forwardAttack_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_forwardAttack_5() { return &___forwardAttack_5; }
	inline void set_forwardAttack_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___forwardAttack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardAttack_5), (void*)value);
	}

	inline static int32_t get_offset_of_areaAttack_6() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___areaAttack_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_areaAttack_6() const { return ___areaAttack_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_areaAttack_6() { return &___areaAttack_6; }
	inline void set_areaAttack_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___areaAttack_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaAttack_6), (void*)value);
	}

	inline static int32_t get_offset_of_disableForwardattack_7() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___disableForwardattack_7)); }
	inline bool get_disableForwardattack_7() const { return ___disableForwardattack_7; }
	inline bool* get_address_of_disableForwardattack_7() { return &___disableForwardattack_7; }
	inline void set_disableForwardattack_7(bool value)
	{
		___disableForwardattack_7 = value;
	}

	inline static int32_t get_offset_of_disableAreaattack_8() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___disableAreaattack_8)); }
	inline bool get_disableAreaattack_8() const { return ___disableAreaattack_8; }
	inline bool* get_address_of_disableAreaattack_8() { return &___disableAreaattack_8; }
	inline void set_disableAreaattack_8(bool value)
	{
		___disableAreaattack_8 = value;
	}

	inline static int32_t get_offset_of_deathPanel_9() { return static_cast<int32_t>(offsetof(PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34, ___deathPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPanel_9() const { return ___deathPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPanel_9() { return &___deathPanel_9; }
	inline void set_deathPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPanel_9), (void*)value);
	}
};


// Cinemachine.CinemachineTransposer
struct  CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83  : public CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69
{
public:
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineTransposer::m_BindingMode
	int32_t ___m_BindingMode_6;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_FollowOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FollowOffset_7;
	// System.Single Cinemachine.CinemachineTransposer::m_XDamping
	float ___m_XDamping_8;
	// System.Single Cinemachine.CinemachineTransposer::m_YDamping
	float ___m_YDamping_9;
	// System.Single Cinemachine.CinemachineTransposer::m_ZDamping
	float ___m_ZDamping_10;
	// System.Single Cinemachine.CinemachineTransposer::m_PitchDamping
	float ___m_PitchDamping_11;
	// System.Single Cinemachine.CinemachineTransposer::m_YawDamping
	float ___m_YawDamping_12;
	// System.Single Cinemachine.CinemachineTransposer::m_RollDamping
	float ___m_RollDamping_13;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_PreviousTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousTargetPosition_14;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_PreviousReferenceOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_PreviousReferenceOrientation_15;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_targetOrientationOnAssign
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_targetOrientationOnAssign_16;
	// UnityEngine.Transform Cinemachine.CinemachineTransposer::m_previousTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_previousTarget_17;

public:
	inline static int32_t get_offset_of_m_BindingMode_6() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_BindingMode_6)); }
	inline int32_t get_m_BindingMode_6() const { return ___m_BindingMode_6; }
	inline int32_t* get_address_of_m_BindingMode_6() { return &___m_BindingMode_6; }
	inline void set_m_BindingMode_6(int32_t value)
	{
		___m_BindingMode_6 = value;
	}

	inline static int32_t get_offset_of_m_FollowOffset_7() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_FollowOffset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FollowOffset_7() const { return ___m_FollowOffset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FollowOffset_7() { return &___m_FollowOffset_7; }
	inline void set_m_FollowOffset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FollowOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_XDamping_8() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_XDamping_8)); }
	inline float get_m_XDamping_8() const { return ___m_XDamping_8; }
	inline float* get_address_of_m_XDamping_8() { return &___m_XDamping_8; }
	inline void set_m_XDamping_8(float value)
	{
		___m_XDamping_8 = value;
	}

	inline static int32_t get_offset_of_m_YDamping_9() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_YDamping_9)); }
	inline float get_m_YDamping_9() const { return ___m_YDamping_9; }
	inline float* get_address_of_m_YDamping_9() { return &___m_YDamping_9; }
	inline void set_m_YDamping_9(float value)
	{
		___m_YDamping_9 = value;
	}

	inline static int32_t get_offset_of_m_ZDamping_10() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_ZDamping_10)); }
	inline float get_m_ZDamping_10() const { return ___m_ZDamping_10; }
	inline float* get_address_of_m_ZDamping_10() { return &___m_ZDamping_10; }
	inline void set_m_ZDamping_10(float value)
	{
		___m_ZDamping_10 = value;
	}

	inline static int32_t get_offset_of_m_PitchDamping_11() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_PitchDamping_11)); }
	inline float get_m_PitchDamping_11() const { return ___m_PitchDamping_11; }
	inline float* get_address_of_m_PitchDamping_11() { return &___m_PitchDamping_11; }
	inline void set_m_PitchDamping_11(float value)
	{
		___m_PitchDamping_11 = value;
	}

	inline static int32_t get_offset_of_m_YawDamping_12() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_YawDamping_12)); }
	inline float get_m_YawDamping_12() const { return ___m_YawDamping_12; }
	inline float* get_address_of_m_YawDamping_12() { return &___m_YawDamping_12; }
	inline void set_m_YawDamping_12(float value)
	{
		___m_YawDamping_12 = value;
	}

	inline static int32_t get_offset_of_m_RollDamping_13() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_RollDamping_13)); }
	inline float get_m_RollDamping_13() const { return ___m_RollDamping_13; }
	inline float* get_address_of_m_RollDamping_13() { return &___m_RollDamping_13; }
	inline void set_m_RollDamping_13(float value)
	{
		___m_RollDamping_13 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTargetPosition_14() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_PreviousTargetPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousTargetPosition_14() const { return ___m_PreviousTargetPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousTargetPosition_14() { return &___m_PreviousTargetPosition_14; }
	inline void set_m_PreviousTargetPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousTargetPosition_14 = value;
	}

	inline static int32_t get_offset_of_m_PreviousReferenceOrientation_15() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_PreviousReferenceOrientation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_PreviousReferenceOrientation_15() const { return ___m_PreviousReferenceOrientation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_PreviousReferenceOrientation_15() { return &___m_PreviousReferenceOrientation_15; }
	inline void set_m_PreviousReferenceOrientation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_PreviousReferenceOrientation_15 = value;
	}

	inline static int32_t get_offset_of_m_targetOrientationOnAssign_16() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_targetOrientationOnAssign_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_targetOrientationOnAssign_16() const { return ___m_targetOrientationOnAssign_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_targetOrientationOnAssign_16() { return &___m_targetOrientationOnAssign_16; }
	inline void set_m_targetOrientationOnAssign_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_targetOrientationOnAssign_16 = value;
	}

	inline static int32_t get_offset_of_m_previousTarget_17() { return static_cast<int32_t>(offsetof(CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83, ___m_previousTarget_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_previousTarget_17() const { return ___m_previousTarget_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_previousTarget_17() { return &___m_previousTarget_17; }
	inline void set_m_previousTarget_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_previousTarget_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousTarget_17), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera
struct  CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60  : public CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_18;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_19;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  ___m_Lens_20;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::<UserIsDragging>k__BackingField
	bool ___U3CUserIsDraggingU3Ek__BackingField_24;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E  ___m_State_25;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* ___m_ComponentPipeline_26;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ComponentOwner_27;

public:
	inline static int32_t get_offset_of_m_LookAt_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_LookAt_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_18() const { return ___m_LookAt_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_18() { return &___m_LookAt_18; }
	inline void set_m_LookAt_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_Follow_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_19() const { return ___m_Follow_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_19() { return &___m_Follow_19; }
	inline void set_m_Follow_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lens_20() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_Lens_20)); }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  get_m_Lens_20() const { return ___m_Lens_20; }
	inline LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231 * get_address_of_m_Lens_20() { return &___m_Lens_20; }
	inline void set_m_Lens_20(LensSettings_tC7C0BA0E6876CE219B93019B3C4103144B67E231  value)
	{
		___m_Lens_20 = value;
	}

	inline static int32_t get_offset_of_U3CUserIsDraggingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___U3CUserIsDraggingU3Ek__BackingField_24)); }
	inline bool get_U3CUserIsDraggingU3Ek__BackingField_24() const { return ___U3CUserIsDraggingU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CUserIsDraggingU3Ek__BackingField_24() { return &___U3CUserIsDraggingU3Ek__BackingField_24; }
	inline void set_U3CUserIsDraggingU3Ek__BackingField_24(bool value)
	{
		___U3CUserIsDraggingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_m_State_25() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_State_25)); }
	inline CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E  get_m_State_25() const { return ___m_State_25; }
	inline CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E * get_address_of_m_State_25() { return &___m_State_25; }
	inline void set_m_State_25(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E  value)
	{
		___m_State_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_25))->___mCustom0_10))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_25))->___mCustom1_11))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_25))->___mCustom2_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_25))->___mCustom3_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_25))->___m_CustomOverflow_14), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ComponentPipeline_26() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_ComponentPipeline_26)); }
	inline CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* get_m_ComponentPipeline_26() const { return ___m_ComponentPipeline_26; }
	inline CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F** get_address_of_m_ComponentPipeline_26() { return &___m_ComponentPipeline_26; }
	inline void set_m_ComponentPipeline_26(CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* value)
	{
		___m_ComponentPipeline_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentPipeline_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentOwner_27() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60, ___m_ComponentOwner_27)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ComponentOwner_27() const { return ___m_ComponentOwner_27; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ComponentOwner_27() { return &___m_ComponentOwner_27; }
	inline void set_m_ComponentOwner_27(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ComponentOwner_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentOwner_27), (void*)value);
	}
};

struct CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * ___CreatePipelineOverride_22;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * ___DestroyPipelineOverride_23;

public:
	inline static int32_t get_offset_of_CreatePipelineOverride_22() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60_StaticFields, ___CreatePipelineOverride_22)); }
	inline CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * get_CreatePipelineOverride_22() const { return ___CreatePipelineOverride_22; }
	inline CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 ** get_address_of_CreatePipelineOverride_22() { return &___CreatePipelineOverride_22; }
	inline void set_CreatePipelineOverride_22(CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * value)
	{
		___CreatePipelineOverride_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatePipelineOverride_22), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyPipelineOverride_23() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60_StaticFields, ___DestroyPipelineOverride_23)); }
	inline DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * get_DestroyPipelineOverride_23() const { return ___DestroyPipelineOverride_23; }
	inline DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA ** get_address_of_DestroyPipelineOverride_23() { return &___DestroyPipelineOverride_23; }
	inline void set_DestroyPipelineOverride_23(DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * value)
	{
		___DestroyPipelineOverride_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyPipelineOverride_23), (void*)value);
	}
};


// Cinemachine.CinemachineOrbitalTransposer
struct  CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7  : public CinemachineTransposer_tB61775DC85EFA3AFB7C273BEB57CF4DA3C23ED83
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineOrbitalTransposer::m_Heading
	Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004  ___m_Heading_18;
	// Cinemachine.CinemachineOrbitalTransposer/Recentering Cinemachine.CinemachineOrbitalTransposer::m_RecenterToTargetHeading
	Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818  ___m_RecenterToTargetHeading_19;
	// Cinemachine.AxisState Cinemachine.CinemachineOrbitalTransposer::m_XAxis
	AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35  ___m_XAxis_20;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyRadius
	float ___m_LegacyRadius_21;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeightOffset
	float ___m_LegacyHeightOffset_22;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_23;
	// System.Boolean Cinemachine.CinemachineOrbitalTransposer::m_HeadingIsSlave
	bool ___m_HeadingIsSlave_24;
	// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate Cinemachine.CinemachineOrbitalTransposer::HeadingUpdater
	UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * ___HeadingUpdater_25;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::mLastHeadingAxisInputTime
	float ___mLastHeadingAxisInputTime_26;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::mHeadingRecenteringVelocity
	float ___mHeadingRecenteringVelocity_27;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::mLastTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mLastTargetPosition_28;
	// Cinemachine.CinemachineOrbitalTransposer/HeadingTracker Cinemachine.CinemachineOrbitalTransposer::mHeadingTracker
	HeadingTracker_tF22AED26097F8CAB86C9F822E8EEFABA9E8EA8FA * ___mHeadingTracker_29;
	// UnityEngine.Rigidbody Cinemachine.CinemachineOrbitalTransposer::mTargetRigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___mTargetRigidBody_30;
	// UnityEngine.Transform Cinemachine.CinemachineOrbitalTransposer::<PreviousTarget>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CPreviousTargetU3Ek__BackingField_31;
	// UnityEngine.Quaternion Cinemachine.CinemachineOrbitalTransposer::mHeadingPrevFrame
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___mHeadingPrevFrame_32;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::mOffsetPrevFrame
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mOffsetPrevFrame_33;

public:
	inline static int32_t get_offset_of_m_Heading_18() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_Heading_18)); }
	inline Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004  get_m_Heading_18() const { return ___m_Heading_18; }
	inline Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004 * get_address_of_m_Heading_18() { return &___m_Heading_18; }
	inline void set_m_Heading_18(Heading_t201FFC96729F7FE74F18CFE6606C4344B81F2004  value)
	{
		___m_Heading_18 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_19() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_RecenterToTargetHeading_19)); }
	inline Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818  get_m_RecenterToTargetHeading_19() const { return ___m_RecenterToTargetHeading_19; }
	inline Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * get_address_of_m_RecenterToTargetHeading_19() { return &___m_RecenterToTargetHeading_19; }
	inline void set_m_RecenterToTargetHeading_19(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818  value)
	{
		___m_RecenterToTargetHeading_19 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_20() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_XAxis_20)); }
	inline AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35  get_m_XAxis_20() const { return ___m_XAxis_20; }
	inline AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35 * get_address_of_m_XAxis_20() { return &___m_XAxis_20; }
	inline void set_m_XAxis_20(AxisState_t0A0186B7498CA420E3733F585B889A75860D4E35  value)
	{
		___m_XAxis_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_20))->___m_InputAxisName_4), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyRadius_21() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_LegacyRadius_21)); }
	inline float get_m_LegacyRadius_21() const { return ___m_LegacyRadius_21; }
	inline float* get_address_of_m_LegacyRadius_21() { return &___m_LegacyRadius_21; }
	inline void set_m_LegacyRadius_21(float value)
	{
		___m_LegacyRadius_21 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeightOffset_22() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_LegacyHeightOffset_22)); }
	inline float get_m_LegacyHeightOffset_22() const { return ___m_LegacyHeightOffset_22; }
	inline float* get_address_of_m_LegacyHeightOffset_22() { return &___m_LegacyHeightOffset_22; }
	inline void set_m_LegacyHeightOffset_22(float value)
	{
		___m_LegacyHeightOffset_22 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_23() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_LegacyHeadingBias_23)); }
	inline float get_m_LegacyHeadingBias_23() const { return ___m_LegacyHeadingBias_23; }
	inline float* get_address_of_m_LegacyHeadingBias_23() { return &___m_LegacyHeadingBias_23; }
	inline void set_m_LegacyHeadingBias_23(float value)
	{
		___m_LegacyHeadingBias_23 = value;
	}

	inline static int32_t get_offset_of_m_HeadingIsSlave_24() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___m_HeadingIsSlave_24)); }
	inline bool get_m_HeadingIsSlave_24() const { return ___m_HeadingIsSlave_24; }
	inline bool* get_address_of_m_HeadingIsSlave_24() { return &___m_HeadingIsSlave_24; }
	inline void set_m_HeadingIsSlave_24(bool value)
	{
		___m_HeadingIsSlave_24 = value;
	}

	inline static int32_t get_offset_of_HeadingUpdater_25() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___HeadingUpdater_25)); }
	inline UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * get_HeadingUpdater_25() const { return ___HeadingUpdater_25; }
	inline UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC ** get_address_of_HeadingUpdater_25() { return &___HeadingUpdater_25; }
	inline void set_HeadingUpdater_25(UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * value)
	{
		___HeadingUpdater_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeadingUpdater_25), (void*)value);
	}

	inline static int32_t get_offset_of_mLastHeadingAxisInputTime_26() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mLastHeadingAxisInputTime_26)); }
	inline float get_mLastHeadingAxisInputTime_26() const { return ___mLastHeadingAxisInputTime_26; }
	inline float* get_address_of_mLastHeadingAxisInputTime_26() { return &___mLastHeadingAxisInputTime_26; }
	inline void set_mLastHeadingAxisInputTime_26(float value)
	{
		___mLastHeadingAxisInputTime_26 = value;
	}

	inline static int32_t get_offset_of_mHeadingRecenteringVelocity_27() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mHeadingRecenteringVelocity_27)); }
	inline float get_mHeadingRecenteringVelocity_27() const { return ___mHeadingRecenteringVelocity_27; }
	inline float* get_address_of_mHeadingRecenteringVelocity_27() { return &___mHeadingRecenteringVelocity_27; }
	inline void set_mHeadingRecenteringVelocity_27(float value)
	{
		___mHeadingRecenteringVelocity_27 = value;
	}

	inline static int32_t get_offset_of_mLastTargetPosition_28() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mLastTargetPosition_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mLastTargetPosition_28() const { return ___mLastTargetPosition_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mLastTargetPosition_28() { return &___mLastTargetPosition_28; }
	inline void set_mLastTargetPosition_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mLastTargetPosition_28 = value;
	}

	inline static int32_t get_offset_of_mHeadingTracker_29() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mHeadingTracker_29)); }
	inline HeadingTracker_tF22AED26097F8CAB86C9F822E8EEFABA9E8EA8FA * get_mHeadingTracker_29() const { return ___mHeadingTracker_29; }
	inline HeadingTracker_tF22AED26097F8CAB86C9F822E8EEFABA9E8EA8FA ** get_address_of_mHeadingTracker_29() { return &___mHeadingTracker_29; }
	inline void set_mHeadingTracker_29(HeadingTracker_tF22AED26097F8CAB86C9F822E8EEFABA9E8EA8FA * value)
	{
		___mHeadingTracker_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHeadingTracker_29), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetRigidBody_30() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mTargetRigidBody_30)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_mTargetRigidBody_30() const { return ___mTargetRigidBody_30; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_mTargetRigidBody_30() { return &___mTargetRigidBody_30; }
	inline void set_mTargetRigidBody_30(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___mTargetRigidBody_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetRigidBody_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousTargetU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___U3CPreviousTargetU3Ek__BackingField_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CPreviousTargetU3Ek__BackingField_31() const { return ___U3CPreviousTargetU3Ek__BackingField_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CPreviousTargetU3Ek__BackingField_31() { return &___U3CPreviousTargetU3Ek__BackingField_31; }
	inline void set_U3CPreviousTargetU3Ek__BackingField_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CPreviousTargetU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousTargetU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_mHeadingPrevFrame_32() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mHeadingPrevFrame_32)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_mHeadingPrevFrame_32() const { return ___mHeadingPrevFrame_32; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_mHeadingPrevFrame_32() { return &___mHeadingPrevFrame_32; }
	inline void set_mHeadingPrevFrame_32(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___mHeadingPrevFrame_32 = value;
	}

	inline static int32_t get_offset_of_mOffsetPrevFrame_33() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7, ___mOffsetPrevFrame_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mOffsetPrevFrame_33() const { return ___mOffsetPrevFrame_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mOffsetPrevFrame_33() { return &___mOffsetPrevFrame_33; }
	inline void set_mOffsetPrevFrame_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mOffsetPrevFrame_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * m_Items[1];

public:
	inline CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Cinemachine.CinemachineOrbitalTransposer/Recentering::.ctor(System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recentering__ctor_m7148682EF799F5046727C379B86FBD1690C7E83E (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, bool ___enabled0, float ___recenterWaitTime1, float ___recenteringSpeed2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineOrbitalTransposer/Recentering::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recentering_Validate_mE4D581DA069BE071476BC83C7F7C67B030C45386 (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.CinemachineOrbitalTransposer/Recentering::LegacyUpgrade(Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recentering_LegacyUpgrade_m02C201A0CD9CBEEFFC1FB27E1ABA7A3F587CFF98 (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, int32_t* ___heading0, int32_t* ___velocityFilter1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m2CA4BE7351B80BBF23107621CBFADB1512DF7675 (Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_m61ADDF3CC1D7DD77E2D434C4D2B14B602EC092CE (ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_m505427060B6D1DA7D183283481081717470325F6 (AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187 * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m351193C0D9F73B436DCEC2922DA335CCC046F7AC (U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.CinemachineOrbitalTransposer/Recentering
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_pinvoke(const Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818& unmarshaled, Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_pinvoke& marshaled)
{
	marshaled.___m_enabled_0 = static_cast<int32_t>(unmarshaled.get_m_enabled_0());
	marshaled.___m_RecenterWaitTime_1 = unmarshaled.get_m_RecenterWaitTime_1();
	marshaled.___m_RecenteringTime_2 = unmarshaled.get_m_RecenteringTime_2();
	marshaled.___m_LegacyHeadingDefinition_3 = unmarshaled.get_m_LegacyHeadingDefinition_3();
	marshaled.___m_LegacyVelocityFilterStrength_4 = unmarshaled.get_m_LegacyVelocityFilterStrength_4();
}
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_pinvoke_back(const Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_pinvoke& marshaled, Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818& unmarshaled)
{
	bool unmarshaled_m_enabled_temp_0 = false;
	unmarshaled_m_enabled_temp_0 = static_cast<bool>(marshaled.___m_enabled_0);
	unmarshaled.set_m_enabled_0(unmarshaled_m_enabled_temp_0);
	float unmarshaled_m_RecenterWaitTime_temp_1 = 0.0f;
	unmarshaled_m_RecenterWaitTime_temp_1 = marshaled.___m_RecenterWaitTime_1;
	unmarshaled.set_m_RecenterWaitTime_1(unmarshaled_m_RecenterWaitTime_temp_1);
	float unmarshaled_m_RecenteringTime_temp_2 = 0.0f;
	unmarshaled_m_RecenteringTime_temp_2 = marshaled.___m_RecenteringTime_2;
	unmarshaled.set_m_RecenteringTime_2(unmarshaled_m_RecenteringTime_temp_2);
	int32_t unmarshaled_m_LegacyHeadingDefinition_temp_3 = 0;
	unmarshaled_m_LegacyHeadingDefinition_temp_3 = marshaled.___m_LegacyHeadingDefinition_3;
	unmarshaled.set_m_LegacyHeadingDefinition_3(unmarshaled_m_LegacyHeadingDefinition_temp_3);
	int32_t unmarshaled_m_LegacyVelocityFilterStrength_temp_4 = 0;
	unmarshaled_m_LegacyVelocityFilterStrength_temp_4 = marshaled.___m_LegacyVelocityFilterStrength_4;
	unmarshaled.set_m_LegacyVelocityFilterStrength_4(unmarshaled_m_LegacyVelocityFilterStrength_temp_4);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineOrbitalTransposer/Recentering
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_pinvoke_cleanup(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineOrbitalTransposer/Recentering
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_com(const Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818& unmarshaled, Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_com& marshaled)
{
	marshaled.___m_enabled_0 = static_cast<int32_t>(unmarshaled.get_m_enabled_0());
	marshaled.___m_RecenterWaitTime_1 = unmarshaled.get_m_RecenterWaitTime_1();
	marshaled.___m_RecenteringTime_2 = unmarshaled.get_m_RecenteringTime_2();
	marshaled.___m_LegacyHeadingDefinition_3 = unmarshaled.get_m_LegacyHeadingDefinition_3();
	marshaled.___m_LegacyVelocityFilterStrength_4 = unmarshaled.get_m_LegacyVelocityFilterStrength_4();
}
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_com_back(const Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_com& marshaled, Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818& unmarshaled)
{
	bool unmarshaled_m_enabled_temp_0 = false;
	unmarshaled_m_enabled_temp_0 = static_cast<bool>(marshaled.___m_enabled_0);
	unmarshaled.set_m_enabled_0(unmarshaled_m_enabled_temp_0);
	float unmarshaled_m_RecenterWaitTime_temp_1 = 0.0f;
	unmarshaled_m_RecenterWaitTime_temp_1 = marshaled.___m_RecenterWaitTime_1;
	unmarshaled.set_m_RecenterWaitTime_1(unmarshaled_m_RecenterWaitTime_temp_1);
	float unmarshaled_m_RecenteringTime_temp_2 = 0.0f;
	unmarshaled_m_RecenteringTime_temp_2 = marshaled.___m_RecenteringTime_2;
	unmarshaled.set_m_RecenteringTime_2(unmarshaled_m_RecenteringTime_temp_2);
	int32_t unmarshaled_m_LegacyHeadingDefinition_temp_3 = 0;
	unmarshaled_m_LegacyHeadingDefinition_temp_3 = marshaled.___m_LegacyHeadingDefinition_3;
	unmarshaled.set_m_LegacyHeadingDefinition_3(unmarshaled_m_LegacyHeadingDefinition_temp_3);
	int32_t unmarshaled_m_LegacyVelocityFilterStrength_temp_4 = 0;
	unmarshaled_m_LegacyVelocityFilterStrength_temp_4 = marshaled.___m_LegacyVelocityFilterStrength_4;
	unmarshaled.set_m_LegacyVelocityFilterStrength_4(unmarshaled_m_LegacyVelocityFilterStrength_temp_4);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineOrbitalTransposer/Recentering
IL2CPP_EXTERN_C void Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshal_com_cleanup(Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineOrbitalTransposer/Recentering::.ctor(System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recentering__ctor_m7148682EF799F5046727C379B86FBD1690C7E83E (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, bool ___enabled0, float ___recenterWaitTime1, float ___recenteringSpeed2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// m_enabled = enabled;
		bool L_0 = ___enabled0;
		__this->set_m_enabled_0(L_0);
		// m_RecenterWaitTime = recenterWaitTime;
		float L_1 = ___recenterWaitTime1;
		__this->set_m_RecenterWaitTime_1(L_1);
		// m_RecenteringTime = recenteringSpeed;
		float L_2 = ___recenteringSpeed2;
		__this->set_m_RecenteringTime_2(L_2);
		// m_LegacyHeadingDefinition = m_LegacyVelocityFilterStrength = -1;
		int32_t L_3 = (-1);
		V_0 = L_3;
		__this->set_m_LegacyVelocityFilterStrength_4(L_3);
		int32_t L_4 = V_0;
		__this->set_m_LegacyHeadingDefinition_3(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Recentering__ctor_m7148682EF799F5046727C379B86FBD1690C7E83E_AdjustorThunk (RuntimeObject * __this, bool ___enabled0, float ___recenterWaitTime1, float ___recenteringSpeed2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * _thisAdjusted = reinterpret_cast<Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 *>(__this + _offset);
	Recentering__ctor_m7148682EF799F5046727C379B86FBD1690C7E83E(_thisAdjusted, ___enabled0, ___recenterWaitTime1, ___recenteringSpeed2, method);
}
// System.Void Cinemachine.CinemachineOrbitalTransposer/Recentering::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recentering_Validate_mE4D581DA069BE071476BC83C7F7C67B030C45386 (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, const RuntimeMethod* method)
{
	{
		// m_RecenterWaitTime = Mathf.Max(0, m_RecenterWaitTime);
		float L_0 = __this->get_m_RecenterWaitTime_1();
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_0, /*hidden argument*/NULL);
		__this->set_m_RecenterWaitTime_1(L_1);
		// m_RecenteringTime = Mathf.Max(0, m_RecenteringTime);
		float L_2 = __this->get_m_RecenteringTime_2();
		float L_3;
		L_3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_2, /*hidden argument*/NULL);
		__this->set_m_RecenteringTime_2(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Recentering_Validate_mE4D581DA069BE071476BC83C7F7C67B030C45386_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * _thisAdjusted = reinterpret_cast<Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 *>(__this + _offset);
	Recentering_Validate_mE4D581DA069BE071476BC83C7F7C67B030C45386(_thisAdjusted, method);
}
// System.Boolean Cinemachine.CinemachineOrbitalTransposer/Recentering::LegacyUpgrade(Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recentering_LegacyUpgrade_m02C201A0CD9CBEEFFC1FB27E1ABA7A3F587CFF98 (Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * __this, int32_t* ___heading0, int32_t* ___velocityFilter1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_LegacyHeadingDefinition != -1 && m_LegacyVelocityFilterStrength != -1)
		int32_t L_0 = __this->get_m_LegacyHeadingDefinition_3();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = __this->get_m_LegacyVelocityFilterStrength_4();
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		// heading = (Heading.HeadingDefinition)m_LegacyHeadingDefinition;
		int32_t* L_2 = ___heading0;
		int32_t L_3 = __this->get_m_LegacyHeadingDefinition_3();
		*((int32_t*)L_2) = (int32_t)L_3;
		// velocityFilter = m_LegacyVelocityFilterStrength;
		int32_t* L_4 = ___velocityFilter1;
		int32_t L_5 = __this->get_m_LegacyVelocityFilterStrength_4();
		*((int32_t*)L_4) = (int32_t)L_5;
		// m_LegacyHeadingDefinition = m_LegacyVelocityFilterStrength = -1;
		int32_t L_6 = (-1);
		V_0 = L_6;
		__this->set_m_LegacyVelocityFilterStrength_4(L_6);
		int32_t L_7 = V_0;
		__this->set_m_LegacyHeadingDefinition_3(L_7);
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Recentering_LegacyUpgrade_m02C201A0CD9CBEEFFC1FB27E1ABA7A3F587CFF98_AdjustorThunk (RuntimeObject * __this, int32_t* ___heading0, int32_t* ___velocityFilter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 * _thisAdjusted = reinterpret_cast<Recentering_tEB9A472E4671365183DEF6B1A302E31A0997A818 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Recentering_LegacyUpgrade_m02C201A0CD9CBEEFFC1FB27E1ABA7A3F587CFF98(_thisAdjusted, ___heading0, ___velocityFilter1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateHeadingDelegate__ctor_m4D476326EE2DDEDAFDF57A0073150202354F4728 (UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::Invoke(Cinemachine.CinemachineOrbitalTransposer,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateHeadingDelegate_Invoke_m51AE3C86BBC822264029D3AF91AAA2CE56749759 (UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * __this, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 * ___orbital0, float ___deltaTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___orbital0, ___deltaTime1, ___up2);
					else
						result = GenericVirtFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___orbital0, ___deltaTime1, ___up2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___orbital0, ___deltaTime1, ___up2);
					else
						result = VirtFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___orbital0, ___deltaTime1, ___up2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___orbital0, ___deltaTime1, ___up2);
					else
						result = GenericVirtFuncInvoker3< float, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___orbital0, ___deltaTime1, ___up2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___orbital0, ___deltaTime1, ___up2);
					else
						result = VirtFuncInvoker3< float, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___orbital0, ___deltaTime1, ___up2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___orbital0, ___deltaTime1, ___up2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::BeginInvoke(Cinemachine.CinemachineOrbitalTransposer,System.Single,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateHeadingDelegate_BeginInvoke_m4F7919383199B15ECB0EE265482354BF09D6151C (UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * __this, CinemachineOrbitalTransposer_tE605F85FFDB2DA3BDBCF99EDBA32DFB866604EB7 * ___orbital0, float ___deltaTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___orbital0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___deltaTime1);
	__d_args[2] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___up2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateHeadingDelegate_EndInvoke_m7F307A1C287EAC6B2C7C8FB1B506611D5DD4B572 (UpdateHeadingDelegate_tB259C846AD527FCCA582AADEFBDB805B152D34FC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
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
// System.Void Cinemachine.CinemachinePathBase/Appearance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appearance__ctor_mB0AA9700EAA3935D292D9DA5C629F87B82E40F18 (Appearance_tC9A584AB9C7DB52F8671EE72E56EC1D47D666EF3 * __this, const RuntimeMethod* method)
{
	{
		// public Color pathColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_pathColor_0(L_0);
		// public Color inactivePathColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_inactivePathColor_1(L_1);
		// public float width = 0.2f;
		__this->set_width_2((0.200000003f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m2CA4BE7351B80BBF23107621CBFADB1512DF7675 (Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector4(position.x, position.y, position.z, roll); }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_position_0();
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_position_0();
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_position_0();
		float L_5 = L_4->get_z_4();
		float L_6 = __this->get_roll_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m2CA4BE7351B80BBF23107621CBFADB1512DF7675_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 * _thisAdjusted = reinterpret_cast<Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 *>(__this + _offset);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  _returnValue;
	_returnValue = Waypoint_get_AsVector4_m2CA4BE7351B80BBF23107621CBFADB1512DF7675(_thisAdjusted, method);
	return _returnValue;
}
// Cinemachine.CinemachineSmoothPath/Waypoint Cinemachine.CinemachineSmoothPath/Waypoint::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0  Waypoint_FromVector4_m68A85517209E7A976163566F607FB34CD5C47FA4 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Waypoint wp = new Waypoint();
		il2cpp_codegen_initobj((&V_0), sizeof(Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0 ));
		// wp.position = new Vector3(v[0], v[1], v[2]);
		float L_0;
		L_0 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 0, /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 1, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		(&V_0)->set_position_0(L_3);
		// wp.roll = v[3];
		float L_4;
		L_4 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 3, /*hidden argument*/NULL);
		(&V_0)->set_roll_1(L_4);
		// return wp;
		Waypoint_t41D9961E311ABF17F570128A7588768180FD82C0  L_5 = V_0;
		return L_5;
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
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_pinvoke(const Instruction_tFA96534855DE9763408C76E39C7828D780F677AE& unmarshaled, Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_pinvoke_back(const Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_pinvoke& marshaled, Instruction_tFA96534855DE9763408C76E39C7828D780F677AE& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_pinvoke_cleanup(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_com(const Instruction_tFA96534855DE9763408C76E39C7828D780F677AE& unmarshaled, Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_com& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_com_back(const Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_com& marshaled, Instruction_tFA96534855DE9763408C76E39C7828D780F677AE& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshal_com_cleanup(Instruction_tFA96534855DE9763408C76E39C7828D780F677AE_marshaled_com& marshaled)
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
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_m61ADDF3CC1D7DD77E2D434C4D2B14B602EC092CE (ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	{
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_0 = ___h0;
		__this->set_m_Hash_0(L_0);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_1 = ___p1;
		__this->set_m_ParentHash_1(L_1);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		return;
	}
}
IL2CPP_EXTERN_C  void ParentHash__ctor_m61ADDF3CC1D7DD77E2D434C4D2B14B602EC092CE_AdjustorThunk (RuntimeObject * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65 * _thisAdjusted = reinterpret_cast<ParentHash_t2150AA9EE041B53958E0B24DA3E547C4BBB11A65 *>(__this + _offset);
	ParentHash__ctor_m61ADDF3CC1D7DD77E2D434C4D2B14B602EC092CE(_thisAdjusted, ___h0, ___p1, method);
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
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_pinvoke(const Target_t9103DD253B9714625D4654779A55627BD9B1BD23& unmarshaled, Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_pinvoke_back(const Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_pinvoke& marshaled, Target_t9103DD253B9714625D4654779A55627BD9B1BD23& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_pinvoke_cleanup(Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_com(const Target_t9103DD253B9714625D4654779A55627BD9B1BD23& unmarshaled, Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_com& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_com_back(const Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_com& marshaled, Target_t9103DD253B9714625D4654779A55627BD9B1BD23& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshal_com_cleanup(Target_t9103DD253B9714625D4654779A55627BD9B1BD23_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_pinvoke(const AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187& unmarshaled, AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_pinvoke_back(const AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_pinvoke& marshaled, AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_pinvoke_cleanup(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_com(const AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187& unmarshaled, AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_com& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_com_back(const AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_com& marshaled, AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshal_com_cleanup(AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_m505427060B6D1DA7D183283481081717470325F6 (AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187 * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	{
		// m_Enabled = enabled;
		bool L_0 = ___enabled0;
		__this->set_m_Enabled_0(L_0);
		// m_PositionOffset = positionOffset;
		float L_1 = ___positionOffset1;
		__this->set_m_PositionOffset_1(L_1);
		// m_SearchRadius = searchRadius;
		int32_t L_2 = ___searchRadius2;
		__this->set_m_SearchRadius_2(L_2);
		// m_SearchResolution = stepsPerSegment;
		int32_t L_3 = ___stepsPerSegment3;
		__this->set_m_SearchResolution_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AutoDolly__ctor_m505427060B6D1DA7D183283481081717470325F6_AdjustorThunk (RuntimeObject * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187 * _thisAdjusted = reinterpret_cast<AutoDolly_t46A65004DABF03AA9273EAC3E6841ACB1E7D5187 *>(__this + _offset);
	AutoDolly__ctor_m505427060B6D1DA7D183283481081717470325F6(_thisAdjusted, ___enabled0, ___positionOffset1, ___searchRadius2, ___stepsPerSegment3, method);
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
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m02086EF0FDF4C14BD38E3C1B2B158ADE48820B61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * L_0 = (U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B *)il2cpp_codegen_object_new(U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m351193C0D9F73B436DCEC2922DA335CCC046F7AC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m351193C0D9F73B436DCEC2922DA335CCC046F7AC (U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cinemachine.CinemachineVirtualCamera/<>c::<UpdateComponentPipeline>b__39_0(Cinemachine.CinemachineComponentBase,Cinemachine.CinemachineComponentBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateComponentPipelineU3Eb__39_0_m552CEB41B243101987526D428695585E726CA766 (U3CU3Ec_t5718505A76440A93D5ADC86859E952B0A8E5883B * __this, CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * ___c10, CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * ___c21, const RuntimeMethod* method)
{
	{
		// list.Sort((c1, c2) => (int)c1.Stage - (int)c2.Stage);
		CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * L_0 = ___c10;
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_0);
		CinemachineComponentBase_tE32135C22C31887B55189C46BD9AA4A0DD082B69 * L_2 = ___c21;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_2);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
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
// System.Void Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePipelineDelegate__ctor_mE7AC463EC02A20A04A4D2EC20145910A4485C73E (CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::Invoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_Invoke_m5ADF8D247BFF915371B1BA01F6F2DAE49C6430C0 (CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * __this, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* ___copyFrom2, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				// closed
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(targetMethod, targetThis, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(targetMethod, targetThis, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
				}
				else
				{
					typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 *, String_t*, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::BeginInvoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreatePipelineDelegate_BeginInvoke_m7C0C857394D2C96423026AD19C2D29A56BDB4D55 (CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * __this, CinemachineVirtualCamera_t0F2560F6DF462DA6B1459C9EF81C769953DE9C60 * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_tE41A48B11C8A742C981E3913C6A05B1C3137892F* ___copyFrom2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___vcam0;
	__d_args[1] = ___name1;
	__d_args[2] = ___copyFrom2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_EndInvoke_mD9FB4CF21F79A6CF650238429F7BD83848103CD9 (CreatePipelineDelegate_t14441775647758F416BEC8BBF6303CE39F389C25 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate__ctor_m99854C62CB0ADE9A5B924BB28C240DD605D51DD0 (DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_Invoke_m4678EF2178CC1EE1A247FE44E9336AF06420EB86 (DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___pipeline0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___pipeline0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pipeline0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pipeline0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___pipeline0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___pipeline0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pipeline0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pipeline0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyPipelineDelegate_BeginInvoke_mEF908C9DF4C53DE9E3E6A4DB18ADCCE74BFA64A3 (DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___pipeline0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_EndInvoke_m0E680A59A02DB41B7C0945C27F499DF20EB0E649 (DestroyPipelineDelegate_t8CB9327A1F358B39A374DD6B4EDAEB0C7F074ADA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostPipelineStageDelegate__ctor_m90ABDF0BC74C11ADBE6183DA0089F1BA90641039 (OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate::Invoke(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostPipelineStageDelegate_Invoke_mD6BC510C9DC0F1F1810A726E3F77F134AE23B81A (OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * __this, CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___vcam0, int32_t ___stage1, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E * ___newState2, float ___deltaTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___vcam0, ___stage1, ___newState2, ___deltaTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(targetMethod, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
					else
						GenericVirtActionInvoker3< int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(targetMethod, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___vcam0, ___stage1, ___newState2, ___deltaTime3);
					else
						VirtActionInvoker3< int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___vcam0, ___stage1, ___newState2, ___deltaTime3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___vcam0, ___stage1, ___newState2, ___deltaTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(targetMethod, targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
					else
						GenericVirtActionInvoker4< CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(targetMethod, targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
					else
						VirtActionInvoker4< CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___vcam0, ___stage1, ___newState2, ___deltaTime3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 *, int32_t, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___stage1, ___newState2, ___deltaTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate::BeginInvoke(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPostPipelineStageDelegate_BeginInvoke_mA59DC2C84EDA1E01BF1C42A8CC3277FAAAEA2CE9 (OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * __this, CinemachineVirtualCameraBase_t646C48A720DF39BF247AF73B98242DFEF114CC64 * ___vcam0, int32_t ___stage1, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E * ___newState2, float ___deltaTime3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage_tE36E61B2D5A0A49D3D12376EA2856C9BEFB79F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___vcam0;
	__d_args[1] = Box(Stage_tE36E61B2D5A0A49D3D12376EA2856C9BEFB79F1C_il2cpp_TypeInfo_var, &___stage1);
	__d_args[2] = Box(CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E_il2cpp_TypeInfo_var, &*___newState2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___deltaTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Cinemachine.CinemachineVirtualCameraBase/OnPostPipelineStageDelegate::EndInvoke(Cinemachine.CameraState&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostPipelineStageDelegate_EndInvoke_mD9BB022277D06782FA1B33ED640F42E940B0E316 (OnPostPipelineStageDelegate_t1CA689FED81BCB0AB657D289CF06BCD990E25754 * __this, CameraState_t8FF4DE72D4C83131D1E23268DF3E587BAA40A84E * ___newState0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___newState0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
// System.Void Enemy/<Attack>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23__ctor_m0EFA8A9D21894557589F8FB240BE9D9CAC3783B6 (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Attack>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23_System_IDisposable_Dispose_m8F9354B2722F1D15D6CDBD0B138F9ED643949592 (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Attack>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__23_MoveNext_m4F960DFAFFC41737AD4B58428605E4CF4F2EE8A5 (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, const RuntimeMethod* method)
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
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// theAttack.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_theAttack_2();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// theAttack.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_theAttack_2();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Attack>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1FE2CB3ADD50786EC815BC3B35BF0E56D6C9D8ED (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Attack>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_mDC3EE58AF13EE3E5432776D9F65D20C7D7F567A6 (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_mDC3EE58AF13EE3E5432776D9F65D20C7D7F567A6_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Attack>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__23_System_Collections_IEnumerator_get_Current_mE5A38528E840BDAAE8576810731BC5924CABC771 (U3CAttackU3Ed__23_t51845166DEC144512A299BCD6F113CA9AFB7813B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Enemy/<WaitForNextWanderLoc>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForNextWanderLocU3Ed__20__ctor_m174B1A30F459D94C990040D59E4EC1CFC4401614 (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<WaitForNextWanderLoc>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForNextWanderLocU3Ed__20_System_IDisposable_Dispose_mCADE5C5A356DBDB00FC4B298BD948A319A72CCB9 (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<WaitForNextWanderLoc>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForNextWanderLocU3Ed__20_MoveNext_mF47C877B9B9D91A4AFDEDF78119EBF2FF7AC9C8A (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// traveling = false;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_6 = V_1;
		L_6->set_traveling_13((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<WaitForNextWanderLoc>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForNextWanderLocU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC8393D8430182C38A6D988B6FC7DDCCE897AA435 (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<WaitForNextWanderLoc>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForNextWanderLocU3Ed__20_System_Collections_IEnumerator_Reset_m91F819C0E38C27E806ED60DCB84E8D124521A296 (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForNextWanderLocU3Ed__20_System_Collections_IEnumerator_Reset_m91F819C0E38C27E806ED60DCB84E8D124521A296_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<WaitForNextWanderLoc>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForNextWanderLocU3Ed__20_System_Collections_IEnumerator_get_Current_mF179EA8F66ED6EA1D2B3FF22DF6732B3F77D9098 (U3CWaitForNextWanderLocU3Ed__20_t693B5EC7F55503F669A59F73CC0031A3E2F21F6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInteractions/<Attack>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__10__ctor_m5F68D8D3482DA5C32EDCB6588F5B8DD531D57774 (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerInteractions/<Attack>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__10_System_IDisposable_Dispose_m8DFB9A7D04F8788F409CB623CBAE8A318A4F6EE6 (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerInteractions/<Attack>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__10_MoveNext_m7F2F05DBAC37568D45E265F83C99985D03E87D02 (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BD90EB2DF82C650279AE86D3C8A14CB99E704D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("attacking..");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral05BD90EB2DF82C650279AE86D3C8A14CB99E704D, /*hidden argument*/NULL);
		// theAttack.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_theAttack_2();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// theAttack.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_theAttack_2();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// disableForwardattack = false;
		PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * L_7 = V_1;
		L_7->set_disableForwardattack_7((bool)0);
		// disableAreaattack = false;
		PlayerInteractions_tC5DBF1B47E23FFF780E4C6003F4F84E3F1041E34 * L_8 = V_1;
		L_8->set_disableAreaattack_8((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerInteractions/<Attack>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0754F51F03833EA9B79E97CD2A2CA2F903AB9B2B (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerInteractions/<Attack>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__10_System_Collections_IEnumerator_Reset_mD0D77A72E8ECD7D3B19059434254BE90F6989B87 (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__10_System_Collections_IEnumerator_Reset_mD0D77A72E8ECD7D3B19059434254BE90F6989B87_RuntimeMethod_var)));
	}
}
// System.Object PlayerInteractions/<Attack>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__10_System_Collections_IEnumerator_get_Current_mAE5C84E20F4D54A269B4B65B7777A5E40FDE6540 (U3CAttackU3Ed__10_tF2939B3933130E3CD601B0D5350618415441FD24 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___translation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = ___target0;
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		float L_4;
		L_4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_6 = ___target0;
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_11 = ___target0;
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_16 = ___target0;
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19;
		L_19 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_21 = ___target0;
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24;
		L_24 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_26 = ___target0;
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29;
		L_29 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
