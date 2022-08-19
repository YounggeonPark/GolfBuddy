#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<Proyecto26.RequestException,System.Int32>
struct Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A;
// System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>
struct Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<RSG.ExceptionEventArgs>
struct EventHandler_1_t8335A74755BD505976912662B4BCB94DAD00DB37;
// System.Func`1<System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>>
struct Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8;
// System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>>
struct Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5;
// System.Func`1<RSG.IPromise>
struct Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088;
// System.Collections.Generic.HashSet`1<RSG.IPromiseInfo>
struct HashSet_1_tB807BD6B14EA587F9500F8A54A88699282893F74;
// System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>
struct IEnumerable_1_tC67D8696780BFBC14407F5645D9CA6DA938520AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<RSG.IPromise>
struct IEnumerable_1_tD9C0C63956A9D5F159BFC256DF46EC664C5A0245;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// RSG.IPromise`1<Proyecto26.ResponseHelper>
struct IPromise_1_tE2D50C2A7065A26A26A915E55F846376F1DA220B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Action`1<Proyecto26.ResponseHelper>>
struct List_1_tE862DAD0C5C6E99FCFE9CD35E2DE45F12792E690;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D;
// System.Collections.Generic.List`1<RSG.IRejectable>
struct List_1_t703D284B89238A3DD7F114C5D59AE04ECE49E58B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<RSG.ProgressHandler>
struct List_1_tA1420D30BB196891EAAF877DE67FDA03115FCB6F;
// System.Collections.Generic.List`1<RSG.RejectHandler>
struct List_1_t6BF651F82BEC1FC93497A9C19BB7E2BCDF04B09F;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<RSG.Promise/ResolveHandler>
struct List_1_t61682CC16BD7B804A56DFDA3B86568FD1D056046;
// RSG.Promise`1<System.Object>
struct Promise_1_t575DC2634B2DDF441B1397BEF55905F219E5B18E;
// RSG.Promise`1<Proyecto26.ResponseHelper>
struct Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Networking.IMultipartFormSection[]
struct IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Proyecto26.Helper.ExecuteOnMainThread
struct ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6;
// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// RSG.IPromise
struct IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5;
// RSG.IRejectable
struct IRejectable_t5959B2682E2D2C137888E12D7F8557BBC1173A3C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Models.Photo
struct Photo_tDBE807FAC03431AC900C25D588DE95507CA4F829;
// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13;
// Models.Post
struct Post_t00666B4FDAE3DCFEA570BF1F371E98517815E62E;
// RSG.Promise
struct Promise_tC0F862077973826645AC46C011CC42F69CDB9A82;
// RSG.Exceptions.PromiseException
struct PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D;
// RSG.Exceptions.PromiseStateException
struct PromiseStateException_t52911F6A2FC32A315E8756D6F9A84D7677D03710;
// Proyecto26.RequestException
struct RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9;
// Proyecto26.RequestHelper
struct RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2;
// Proyecto26.ResponseHelper
struct ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Models.Todo
struct Todo_t0777834F5D9DADFE6EE42A481BACD7C95D553EF7;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// RSG.Tuple
struct Tuple_t342FF880BA83F16C4E0E68DAB992D10F8E106006;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Models.User
struct User_tA36F504B7F9C4B0533EB2CD4CAB7BDA1559018F3;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Proyecto26.Common.Extensions/<>c
struct U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA;
// Proyecto26.Common.Extensions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3;
// Proyecto26.HttpBase/<CreateRequestAndRetry>d__1
struct U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F;
// RSG.Promise/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tE859E6EE2A3CE5B54DBDDC1E3FC63D5BA6EBCB3D;
// RSG.Promise/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t46B987C484E5CDCBDEC78356A11300AD4E744E06;
// RSG.Promise/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78;
// RSG.Promise/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E;
// RSG.Promise/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_tE347B1BEF3E037C7E4B3842B90503FBA058112A8;
// RSG.Promise/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tB83D960DC4F52DECBA0C67FCC7CC932DA05676A2;
// RSG.Promise/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3;
// RSG.Promise/<>c__DisplayClass59_1
struct U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0;
// RSG.Promise/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t75C73781F447AA707177BD52643ED348F750264B;
// RSG.Promise/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC;
// RSG.Promise/<>c__DisplayClass62_1
struct U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061;
// RSG.Promise/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tBA448A28B2BE3F46544E8699CDB596BDA8D11E50;
// RSG.Promise/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0;
// RSG.Promise/<>c__DisplayClass66_1
struct U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59;
// RSG.Promise/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_tB9297E28F01353D5E031C02071FEA22BD5C55A18;
// RSG.Promise/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_t1EECF5BDD49967DF85C1270B3EC6C0F4E0C2936E;
// Proyecto26.StaticCoroutine/CoroutineHolder
struct CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral03B868F7D6AA5E4BE4CEF09331BAA969CE2390E9;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral188048DA32FB97846314CC282D11D1EFAD0462E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4A0CBC38DFAC643D1DEBBD6388D4EA7FE4F9B4E8;
IL2CPP_EXTERN_C String_t* _stringLiteral52B306B7843BAADD97772D377ADAA3A8F4335C7A;
IL2CPP_EXTERN_C String_t* _stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B25C0161B5E0E540CE7683B0B739432CCA04848;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralF31BF35C028888F3D770B43EAC2CCB0DD92251A9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m6B975D4AB123E8A95B5E80935D6D4F3D58F28CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m7BDB54E6AF347996AD88A05A012F226129173FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60_mDC0D94AAC2A4309418FD94DF40431B6150655C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateRequestAndRetryU3Ed__1_System_Collections_IEnumerator_Reset_m13FA4CC32B13471431FC86EC0FB1FCA2E8BD6AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildUrlU3Eb__3_1_mF7A7B262A28BC96810538E15E76941C13C1ED08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CBuildUrlU3Eb__0_m85934B7498E0B2549B7CD1ADA69103F9A50C236F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__2_m0DF0E0F3E4563CE5C7427F7405ADEB03DB8A5F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__3_m7501B93112EC99EC8EE3EEE1B56A7F3C3DEFC685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__4_m194278F8D66D227B7EB1FAFCF826F331113265D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CAllU3Eb__3_mE7882075EE24DC9055D3224D33DD3E7FE5C3649A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__1_m43EED26E0FBA8DE6083A06EF6B646BF78872E14D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__2_m9B45224464BC3BFF1C41548F8B2A37BD35A8F29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__2_m9F213538E12F1333EAADF3690503584E98B82237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__3_m25D42314D26736A13DD29D1331B0BA160532D3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__2_m4EC2810EE4C20AE7FB3AF79489717ADE34ED665A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__3_mC808C98C3D85BA35CB856A3E3739FB79AA5D4D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass66_1_U3CRaceU3Eb__1_m25CC0AF8BFAC0DDB555ECDEA6F7B4068CF1052EE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ___s_emptyArray_5;
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

// RSG.Promise`1<Proyecto26.ResponseHelper>
struct Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D  : public RuntimeObject
{
	// System.Exception RSG.Promise`1::rejectionException
	Exception_t* ___rejectionException_0;
	// PromisedT RSG.Promise`1::resolveValue
	ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* ___resolveValue_1;
	// System.Collections.Generic.List`1<RSG.RejectHandler> RSG.Promise`1::rejectHandlers
	List_1_t6BF651F82BEC1FC93497A9C19BB7E2BCDF04B09F* ___rejectHandlers_2;
	// System.Collections.Generic.List`1<RSG.ProgressHandler> RSG.Promise`1::progressHandlers
	List_1_tA1420D30BB196891EAAF877DE67FDA03115FCB6F* ___progressHandlers_3;
	// System.Collections.Generic.List`1<System.Action`1<PromisedT>> RSG.Promise`1::resolveCallbacks
	List_1_tE862DAD0C5C6E99FCFE9CD35E2DE45F12792E690* ___resolveCallbacks_4;
	// System.Collections.Generic.List`1<RSG.IRejectable> RSG.Promise`1::resolveRejectables
	List_1_t703D284B89238A3DD7F114C5D59AE04ECE49E58B* ___resolveRejectables_5;
	// System.Int32 RSG.Promise`1::id
	int32_t ___id_6;
	// System.String RSG.Promise`1::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// RSG.PromiseState RSG.Promise`1::<CurState>k__BackingField
	int32_t ___U3CCurStateU3Ek__BackingField_8;
};
struct Il2CppArrayBounds;

// Proyecto26.Common.Common
struct Common_t068439077C7CC5EBEFF7350DD7C7E92B598EE2BD  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// RSG.Promises.EnumerableExt
struct EnumerableExt_t9E46CBB5E0A63C44CA87280E6A66A976BABC65B4  : public RuntimeObject
{
};

// Proyecto26.Common.Extensions
struct Extensions_tFA8DB682111557C37806E7E883004A7469905E2F  : public RuntimeObject
{
};

// Proyecto26.HttpBase
struct HttpBase_t053295CE24F4CB23F3A5690A578D7B9BE3CE87E6  : public RuntimeObject
{
};

// Proyecto26.JsonHelper
struct JsonHelper_tF15CAB64C0F386DFFD59A595ABAC4400D6BE53AF  : public RuntimeObject
{
};

// Models.Photo
struct Photo_tDBE807FAC03431AC900C25D588DE95507CA4F829  : public RuntimeObject
{
	// System.Int32 Models.Photo::albumId
	int32_t ___albumId_0;
	// System.Int32 Models.Photo::id
	int32_t ___id_1;
	// System.String Models.Photo::title
	String_t* ___title_2;
	// System.String Models.Photo::url
	String_t* ___url_3;
	// System.String Models.Photo::thumbnailUrl
	String_t* ___thumbnailUrl_4;
};

// Models.Post
struct Post_t00666B4FDAE3DCFEA570BF1F371E98517815E62E  : public RuntimeObject
{
	// System.Int32 Models.Post::id
	int32_t ___id_0;
	// System.Int32 Models.Post::userId
	int32_t ___userId_1;
	// System.String Models.Post::title
	String_t* ___title_2;
	// System.String Models.Post::body
	String_t* ___body_3;
};

// RSG.Promise
struct Promise_tC0F862077973826645AC46C011CC42F69CDB9A82  : public RuntimeObject
{
	// System.Exception RSG.Promise::rejectionException
	Exception_t* ___rejectionException_4;
	// System.Collections.Generic.List`1<RSG.RejectHandler> RSG.Promise::rejectHandlers
	List_1_t6BF651F82BEC1FC93497A9C19BB7E2BCDF04B09F* ___rejectHandlers_5;
	// System.Collections.Generic.List`1<RSG.Promise/ResolveHandler> RSG.Promise::resolveHandlers
	List_1_t61682CC16BD7B804A56DFDA3B86568FD1D056046* ___resolveHandlers_6;
	// System.Collections.Generic.List`1<RSG.ProgressHandler> RSG.Promise::progressHandlers
	List_1_tA1420D30BB196891EAAF877DE67FDA03115FCB6F* ___progressHandlers_7;
	// System.Int32 RSG.Promise::id
	int32_t ___id_8;
	// System.String RSG.Promise::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_9;
	// RSG.PromiseState RSG.Promise::<CurState>k__BackingField
	int32_t ___U3CCurStateU3Ek__BackingField_10;
};

struct Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_StaticFields
{
	// System.Boolean RSG.Promise::EnablePromiseTracking
	bool ___EnablePromiseTracking_0;
	// System.EventHandler`1<RSG.ExceptionEventArgs> RSG.Promise::unhandlerException
	EventHandler_1_t8335A74755BD505976912662B4BCB94DAD00DB37* ___unhandlerException_1;
	// System.Int32 RSG.Promise::nextPromiseId
	int32_t ___nextPromiseId_2;
	// System.Collections.Generic.HashSet`1<RSG.IPromiseInfo> RSG.Promise::PendingPromises
	HashSet_1_tB807BD6B14EA587F9500F8A54A88699282893F74* ___PendingPromises_3;
};

// Proyecto26.ResponseHelper
struct ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequest Proyecto26.ResponseHelper::<Request>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CRequestU3Ek__BackingField_0;
};

// Proyecto26.RestClient
struct RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588  : public RuntimeObject
{
};

struct RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields
{
	// System.Version Proyecto26.RestClient::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::_defaultRequestParams
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____defaultRequestParams_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::_defaultRequestHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____defaultRequestHeaders_2;
};

// Proyecto26.StaticCoroutine
struct StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21  : public RuntimeObject
{
};

struct StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields
{
	// Proyecto26.StaticCoroutine/CoroutineHolder Proyecto26.StaticCoroutine::_runner
	CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* ____runner_0;
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

// Models.Todo
struct Todo_t0777834F5D9DADFE6EE42A481BACD7C95D553EF7  : public RuntimeObject
{
	// System.Int32 Models.Todo::id
	int32_t ___id_0;
	// System.Int32 Models.Todo::userId
	int32_t ___userId_1;
	// System.String Models.Todo::title
	String_t* ___title_2;
	// System.Boolean Models.Todo::completed
	bool ___completed_3;
};

// RSG.Tuple
struct Tuple_t342FF880BA83F16C4E0E68DAB992D10F8E106006  : public RuntimeObject
{
};

// Models.User
struct User_tA36F504B7F9C4B0533EB2CD4CAB7BDA1559018F3  : public RuntimeObject
{
	// System.Int32 Models.User::id
	int32_t ___id_0;
	// System.String Models.User::name
	String_t* ___name_1;
	// System.String Models.User::username
	String_t* ___username_2;
	// System.String Models.User::email
	String_t* ___email_3;
	// System.String Models.User::phone
	String_t* ___phone_4;
	// System.String Models.User::website
	String_t* ___website_5;
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

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Proyecto26.Common.Extensions/<>c
struct U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA  : public RuntimeObject
{
};

struct U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields
{
	// Proyecto26.Common.Extensions/<>c Proyecto26.Common.Extensions/<>c::<>9
	U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Proyecto26.Common.Extensions/<>c::<>9__3_1
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___U3CU3E9__3_1_1;
};

// Proyecto26.Common.Extensions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String> Proyecto26.Common.Extensions/<>c__DisplayClass3_0::urlParamKeys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ___urlParamKeys_0;
};

// Proyecto26.HttpBase/<CreateRequestAndRetry>d__1
struct U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F  : public RuntimeObject
{
	// System.Int32 Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Proyecto26.RequestHelper Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::options
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options_2;
	// System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper> Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::callback
	Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback_3;
	// System.Int32 Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<retries>5__1
	int32_t ___U3CretriesU3E5__1_4;
	// UnityEngine.Networking.UnityWebRequest Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_5;
	// System.Boolean Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<IsNetworkError>5__3
	bool ___U3CIsNetworkErrorU3E5__3_6;
	// UnityEngine.AsyncOperation Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<sendRequest>5__4
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CsendRequestU3E5__4_7;
	// Proyecto26.ResponseHelper Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<response>5__5
	ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* ___U3CresponseU3E5__5_8;
	// Proyecto26.RequestException Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<err>5__6
	RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* ___U3CerrU3E5__6_9;
};

// RSG.Promise/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tE859E6EE2A3CE5B54DBDDC1E3FC63D5BA6EBCB3D  : public RuntimeObject
{
	// RSG.Promise RSG.Promise/<>c__DisplayClass34_0::<>4__this
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___U3CU3E4__this_0;
	// System.Exception RSG.Promise/<>c__DisplayClass34_0::ex
	Exception_t* ___ex_1;
};

// RSG.Promise/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t46B987C484E5CDCBDEC78356A11300AD4E744E06  : public RuntimeObject
{
	// RSG.Promise RSG.Promise/<>c__DisplayClass36_0::<>4__this
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___U3CU3E4__this_0;
	// System.Single RSG.Promise/<>c__DisplayClass36_0::progress
	float ___progress_1;
};

// RSG.Promise/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78  : public RuntimeObject
{
	// RSG.Promise RSG.Promise/<>c__DisplayClass44_0::resultPromise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___resultPromise_0;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass44_0::onRejected
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onRejected_1;
};

// RSG.Promise/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E  : public RuntimeObject
{
	// System.Func`1<RSG.IPromise> RSG.Promise/<>c__DisplayClass52_0::onResolved
	Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* ___onResolved_0;
	// RSG.Promise RSG.Promise/<>c__DisplayClass52_0::resultPromise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___resultPromise_1;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass52_0::onRejected
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onRejected_2;
	// System.Action`1<System.Single> RSG.Promise/<>c__DisplayClass52_0::<>9__2
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___U3CU3E9__2_3;
	// System.Action RSG.Promise/<>c__DisplayClass52_0::<>9__3
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__3_4;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass52_0::<>9__4
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__4_5;
};

// RSG.Promise/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_tE347B1BEF3E037C7E4B3842B90503FBA058112A8  : public RuntimeObject
{
	// System.Action RSG.Promise/<>c__DisplayClass53_0::onResolved
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onResolved_0;
	// RSG.Promise RSG.Promise/<>c__DisplayClass53_0::resultPromise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___resultPromise_1;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass53_0::onRejected
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onRejected_2;
};

// RSG.Promise/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tB83D960DC4F52DECBA0C67FCC7CC932DA05676A2  : public RuntimeObject
{
	// System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>> RSG.Promise/<>c__DisplayClass56_0::chain
	Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5* ___chain_0;
};

// RSG.Promise/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3  : public RuntimeObject
{
	// System.Single[] RSG.Promise/<>c__DisplayClass59_0::progress
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___progress_0;
	// RSG.Promise RSG.Promise/<>c__DisplayClass59_0::resultPromise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___resultPromise_1;
	// System.Int32 RSG.Promise/<>c__DisplayClass59_0::remainingCount
	int32_t ___remainingCount_2;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass59_0::<>9__3
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__3_3;
};

// RSG.Promise/<>c__DisplayClass59_1
struct U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0  : public RuntimeObject
{
	// System.Int32 RSG.Promise/<>c__DisplayClass59_1::index
	int32_t ___index_0;
	// RSG.Promise/<>c__DisplayClass59_0 RSG.Promise/<>c__DisplayClass59_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* ___CSU24U3CU3E8__locals1_1;
};

// RSG.Promise/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t75C73781F447AA707177BD52643ED348F750264B  : public RuntimeObject
{
	// System.Func`1<System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>> RSG.Promise/<>c__DisplayClass60_0::chain
	Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8* ___chain_0;
};

// RSG.Promise/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC  : public RuntimeObject
{
	// System.Int32 RSG.Promise/<>c__DisplayClass62_0::count
	int32_t ___count_0;
	// RSG.Promise RSG.Promise/<>c__DisplayClass62_0::promise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___promise_1;
};

// RSG.Promise/<>c__DisplayClass62_1
struct U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061  : public RuntimeObject
{
	// System.Int32 RSG.Promise/<>c__DisplayClass62_1::itemSequence
	int32_t ___itemSequence_0;
	// System.Func`1<RSG.IPromise> RSG.Promise/<>c__DisplayClass62_1::fn
	Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* ___fn_1;
	// RSG.Promise/<>c__DisplayClass62_0 RSG.Promise/<>c__DisplayClass62_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* ___CSU24U3CU3E8__locals1_2;
};

// RSG.Promise/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tBA448A28B2BE3F46544E8699CDB596BDA8D11E50  : public RuntimeObject
{
	// System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>> RSG.Promise/<>c__DisplayClass63_0::chain
	Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5* ___chain_0;
};

// RSG.Promise/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0  : public RuntimeObject
{
	// System.Single[] RSG.Promise/<>c__DisplayClass66_0::progress
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___progress_0;
	// RSG.Promise RSG.Promise/<>c__DisplayClass66_0::resultPromise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___resultPromise_1;
	// System.Action`1<System.Exception> RSG.Promise/<>c__DisplayClass66_0::<>9__2
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__2_2;
	// System.Action RSG.Promise/<>c__DisplayClass66_0::<>9__3
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__3_3;
};

// RSG.Promise/<>c__DisplayClass66_1
struct U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59  : public RuntimeObject
{
	// System.Int32 RSG.Promise/<>c__DisplayClass66_1::index
	int32_t ___index_0;
	// RSG.Promise/<>c__DisplayClass66_0 RSG.Promise/<>c__DisplayClass66_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* ___CSU24U3CU3E8__locals1_1;
};

// RSG.Promise/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_tB9297E28F01353D5E031C02071FEA22BD5C55A18  : public RuntimeObject
{
	// RSG.Promise RSG.Promise/<>c__DisplayClass69_0::promise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___promise_0;
	// System.Action RSG.Promise/<>c__DisplayClass69_0::onComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete_1;
};

// RSG.Promise/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_t1EECF5BDD49967DF85C1270B3EC6C0F4E0C2936E  : public RuntimeObject
{
	// RSG.Promise RSG.Promise/<>c__DisplayClass70_0::promise
	Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* ___promise_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// RSG.ProgressHandler
struct ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D 
{
	// System.Action`1<System.Single> RSG.ProgressHandler::callback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___callback_0;
	// RSG.IRejectable RSG.ProgressHandler::rejectable
	RuntimeObject* ___rejectable_1;
};
// Native definition for P/Invoke marshalling of RSG.ProgressHandler
struct ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
};
// Native definition for COM marshalling of RSG.ProgressHandler
struct ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D_marshaled_com
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
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

// RSG.RejectHandler
struct RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440 
{
	// System.Action`1<System.Exception> RSG.RejectHandler::callback
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___callback_0;
	// RSG.IRejectable RSG.RejectHandler::rejectable
	RuntimeObject* ___rejectable_1;
};
// Native definition for P/Invoke marshalling of RSG.RejectHandler
struct RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
};
// Native definition for COM marshalling of RSG.RejectHandler
struct RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440_marshaled_com
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tFC327D5C8A887D6A7356E822EEEF4CE3A58CB9A5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tFC327D5C8A887D6A7356E822EEEF4CE3A58CB9A5__padding[3];
	};
};

// RSG.Promise/ResolveHandler
struct ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63 
{
	// System.Action RSG.Promise/ResolveHandler::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_0;
	// RSG.IRejectable RSG.Promise/ResolveHandler::rejectable
	RuntimeObject* ___rejectable_1;
};
// Native definition for P/Invoke marshalling of RSG.Promise/ResolveHandler
struct ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
};
// Native definition for COM marshalling of RSG.Promise/ResolveHandler
struct ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_com
{
	Il2CppMethodPointer ___callback_0;
	RuntimeObject* ___rejectable_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::438186DB0672B9D4D9F0FAB1AC9010FA9D75138834A75F4709F795ED35B1421A
	__StaticArrayInitTypeSizeU3D3_tFC327D5C8A887D6A7356E822EEEF4CE3A58CB9A5 ___438186DB0672B9D4D9F0FAB1AC9010FA9D75138834A75F4709F795ED35B1421A_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Proyecto26.RequestHelper
struct RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2  : public RuntimeObject
{
	// System.String Proyecto26.RequestHelper::_uri
	String_t* ____uri_0;
	// System.String Proyecto26.RequestHelper::_method
	String_t* ____method_1;
	// System.Object Proyecto26.RequestHelper::_body
	RuntimeObject* ____body_2;
	// System.String Proyecto26.RequestHelper::_bodyString
	String_t* ____bodyString_3;
	// System.Byte[] Proyecto26.RequestHelper::_bodyRaw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bodyRaw_4;
	// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::_timeout
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____timeout_5;
	// System.String Proyecto26.RequestHelper::_contentType
	String_t* ____contentType_6;
	// System.Int32 Proyecto26.RequestHelper::_retries
	int32_t ____retries_7;
	// System.Single Proyecto26.RequestHelper::_retrySecondsDelay
	float ____retrySecondsDelay_8;
	// System.Boolean Proyecto26.RequestHelper::_retryCallbackOnlyOnNetworkErrors
	bool ____retryCallbackOnlyOnNetworkErrors_9;
	// System.Action`2<Proyecto26.RequestException,System.Int32> Proyecto26.RequestHelper::_retryCallback
	Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* ____retryCallback_10;
	// System.Action`1<System.Single> Proyecto26.RequestHelper::_progressCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ____progressCallback_11;
	// System.Boolean Proyecto26.RequestHelper::_enableDebug
	bool ____enableDebug_12;
	// System.Nullable`1<System.Boolean> Proyecto26.RequestHelper::_useHttpContinue
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____useHttpContinue_13;
	// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::_redirectLimit
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____redirectLimit_14;
	// System.Boolean Proyecto26.RequestHelper::_ignoreHttpException
	bool ____ignoreHttpException_15;
	// UnityEngine.WWWForm Proyecto26.RequestHelper::_formData
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ____formData_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::_simpleForm
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____simpleForm_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> Proyecto26.RequestHelper::_formSections
	List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ____formSections_18;
	// UnityEngine.Networking.CertificateHandler Proyecto26.RequestHelper::_certificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ____certificateHandler_19;
	// UnityEngine.Networking.UploadHandler Proyecto26.RequestHelper::_uploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ____uploadHandler_20;
	// UnityEngine.Networking.DownloadHandler Proyecto26.RequestHelper::_downloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ____downloadHandler_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::_headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____headers_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::_params
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____params_23;
	// System.Boolean Proyecto26.RequestHelper::_parseResponseBody
	bool ____parseResponseBody_24;
	// UnityEngine.Networking.UnityWebRequest Proyecto26.RequestHelper::<Request>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CRequestU3Ek__BackingField_25;
	// System.Boolean Proyecto26.RequestHelper::_isAborted
	bool ____isAborted_26;
	// System.Boolean Proyecto26.RequestHelper::_defaultContentType
	bool ____defaultContentType_27;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
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

// RSG.Exceptions.PromiseException
struct PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D  : public Exception_t
{
};

// Proyecto26.RequestException
struct RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9  : public Exception_t
{
	// Proyecto26.RequestHelper Proyecto26.RequestException::_request
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ____request_18;
	// System.Boolean Proyecto26.RequestException::_isHttpError
	bool ____isHttpError_19;
	// System.Boolean Proyecto26.RequestException::_isNetworkError
	bool ____isNetworkError_20;
	// System.Int64 Proyecto26.RequestException::_statusCode
	int64_t ____statusCode_21;
	// System.String Proyecto26.RequestException::_serverMessage
	String_t* ____serverMessage_22;
	// System.String Proyecto26.RequestException::_response
	String_t* ____response_23;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<Proyecto26.RequestException,System.Int32>
struct Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A  : public MulticastDelegate_t
{
};

// System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>
struct Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>>
struct Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>>
struct Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5  : public MulticastDelegate_t
{
};

// System.Func`1<RSG.IPromise>
struct Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// RSG.Exceptions.PromiseStateException
struct PromiseStateException_t52911F6A2FC32A315E8756D6F9A84D7677D03710  : public PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Target_4;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_5;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetRigidbody_7;
};

// Proyecto26.Helper.ExecuteOnMainThread
struct ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields
{
	// Proyecto26.Helper.ExecuteOnMainThread Proyecto26.Helper.ExecuteOnMainThread::_instance
	ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* ____instance_4;
};

// Proyecto26.StaticCoroutine/CoroutineHolder
struct CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13  : public AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Cam_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Pivot_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastTargetPosition_10;
};

// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E  : public PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13
{
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_MoveSpeed
	float ___m_MoveSpeed_11;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSpeed
	float ___m_TurnSpeed_12;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSmoothing
	float ___m_TurnSmoothing_13;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMax
	float ___m_TiltMax_14;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMin
	float ___m_TiltMin_15;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_LockCursor
	bool ___m_LockCursor_16;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_VerticalAutoReturn
	bool ___m_VerticalAutoReturn_17;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_LookAngle
	float ___m_LookAngle_18;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltAngle
	float ___m_TiltAngle_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.FreeLookCam::m_PivotEulers
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PivotEulers_21;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_PivotTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_PivotTargetRot_22;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_TransformTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_TransformTargetRot_23;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void RSG.Promise`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m35D9AC4CFCE1354636EDC5F4DEC74FEF713C6894_gshared (Promise_1_t575DC2634B2DDF441B1397BEF55905F219E5B18E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m8C29905D5456961490731FA54B1FC3DCE2A7193C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m7F79A13D8C0618EB1FB29A5CC73DF6F0B8048CAD_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m9649CC8328C44B44485D78A25A3F08C6B53F65C1_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void RSG.Promise::InvokeRejectHandler(System.Action`1<System.Exception>,RSG.IRejectable,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_InvokeRejectHandler_m49B2D5AAEB34EFCC768224F0AA8BF2F02C040991 (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___callback0, RuntimeObject* ___rejectable1, Exception_t* ___value2, const RuntimeMethod* method) ;
// System.Void RSG.Promise::InvokeProgressHandler(System.Action`1<System.Single>,RSG.IRejectable,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_InvokeProgressHandler_m83372C7CDE89BE8C915155346E4F216B87389B9E (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___callback0, RuntimeObject* ___rejectable1, float ___progress2, const RuntimeMethod* method) ;
// System.Void RSG.Promise::Resolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3 (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void RSG.Promise::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85 (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void RSG.Promise::ReportProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97 (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, float ___progress0, const RuntimeMethod* method) ;
// TResult System.Func`1<RSG.IPromise>::Invoke()
inline RuntimeObject* Func_1_Invoke_mFD02CEBD949E5D5F5AF8F349A581276B5B0E1C5E_inline (Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.Generic.IEnumerable`1<RSG.IPromise>>::Invoke()
inline RuntimeObject* Func_1_Invoke_mAC8FEE1CB70B6132D837DBD5835ECDC55B9F6D95_inline (Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// RSG.IPromise RSG.Promise::All(System.Collections.Generic.IEnumerable`1<RSG.IPromise>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Promise_All_m3B98DCD6437D152821B923BEAC0781782B69A3A3 (RuntimeObject* ___promises0, const RuntimeMethod* method) ;
// System.Void RSG.Promise/<>c__DisplayClass59_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_1__ctor_m4B8FB61B59089C4DEA648A75D409E836CEE092FF (U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* __this, const RuntimeMethod* method) ;
// RSG.PromiseState RSG.Promise::get_CurState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, const RuntimeMethod* method) ;
// System.Single System.Linq.Enumerable::Average(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Average_m2DBF0BBC0642716C2296C5C3CC9AFF18F574C368 (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>>::Invoke()
inline RuntimeObject* Func_1_Invoke_m094B9768473799B3EF51CB7AA71586F4D3CF146D_inline (Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// RSG.IPromise RSG.Promise::Sequence(System.Collections.Generic.IEnumerable`1<System.Func`1<RSG.IPromise>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Promise_Sequence_mE68AE5606783CB0E5C6C8652F6B7605E1AC4FF18 (RuntimeObject* ___fns0, const RuntimeMethod* method) ;
// System.Void RSG.Promise/<>c__DisplayClass62_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_1__ctor_mF6802236B37785089ED7E9A3F5DA5558ED85951D (U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<RSG.IPromise>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m89610324C7917C555F5DC66907FCA7D6D8F6EBD2 (Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// RSG.IPromise RSG.Promise::Race(System.Collections.Generic.IEnumerable`1<RSG.IPromise>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Promise_Race_m6B716AA24E2584C8F986F506B8470269D6FADA0F (RuntimeObject* ___promises0, const RuntimeMethod* method) ;
// System.Void RSG.Promise/<>c__DisplayClass66_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_1__ctor_m9DBFC26D5CBB1FBB640770336F18C142C8E93405 (U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* __this, const RuntimeMethod* method) ;
// System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Max_m3215FA2A65ACAFE226A0FBE065D772C7CE1A5E9F (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void RSG.Exceptions.PromiseException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_mDF49A69B00B47D8E30C59A1EFE8CDCCCED2175BD (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, const RuntimeMethod* method) ;
// System.Void RSG.Exceptions.PromiseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_m327B4108B2935F10E2B77A95E7B6D3CD7574DA63 (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void RSG.Exceptions.PromiseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_mB2C16AE66329DF694119F386C897F586F72F96F1 (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1__ctor_mB1EB168AD8F16B094B7B642D236ED8CFD4B21D93 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String Proyecto26.RequestHelper::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_Uri_m4BBB86E86D0B704C7EE5DBE2D36EC7D1D925D245 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_Params()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_Params_m52A62A6900B4D659B401879E1B9AAE4A7E6D1123 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String Proyecto26.Common.Extensions::BuildUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_BuildUrl_m645B675043A508CFFA2E02A854B447582039CEA6 (String_t* ___uri0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParams1, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.RequestHelper::get_EnableDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Proyecto26.HttpBase::DebugLog(System.Boolean,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444 (bool ___debugEnabled0, RuntimeObject* ___message1, bool ___isError2, const RuntimeMethod* method) ;
// UnityEngine.WWWForm Proyecto26.RequestHelper::get_FormData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* RequestHelper_get_FormData_mFCABF1F3476D7580A9AAB63C6B010C1114DD6947 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String Proyecto26.RequestHelper::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.RequestHelper::get_ParseResponseBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_ParseResponseBody_m87AE3F014C05690D1CC4C6D5204DCA44D386D591 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestException::.ctor(Proyecto26.RequestHelper,System.String,System.Boolean,System.Boolean,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException__ctor_mEE6C35547B7E1F32B9E8A4A1270323E36ECDE869 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___request0, String_t* ___message1, bool ___isHttpError2, bool ___isNetworkError3, int64_t ___statusCode4, String_t* ___response5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Proyecto26.HttpBase::CreateRequestAndRetry(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpBase_CreateRequestAndRetry_m1FA979805F69820E822F747C80FB412329ECE2CD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1_U3CU3Em__Finally1_m67AA93F9FE785A41D82008F53D548A3484C6C0B3 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) ;
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1_System_IDisposable_Dispose_m5EDA8599DA335CB6537EC9926059B2B1F2E61396 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Proyecto26.HttpBase::CreateRequest(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* HttpBase_CreateRequest_mE46933690ED952E4B217266D8624D1EA206DB0FB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation Proyecto26.Common.Common::SendWebRequestWithOptions(UnityEngine.Networking.UnityWebRequest,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* Common_SendWebRequestWithOptions_mDB409523D4A032BC6BF203E6CCB339589E141E45 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) ;
// System.Action`1<System.Single> Proyecto26.RequestHelper::get_ProgressCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// Proyecto26.ResponseHelper Proyecto26.Common.Extensions::CreateWebResponse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* Extensions_CreateWebResponse_mEFA909BB0D920047E6999C47B69DD35214887ABF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.Common.Extensions::IsValidRequest(UnityEngine.Networking.UnityWebRequest,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsValidRequest_m5593CAE9FE30B954ED2E03751FB3DC1B81EA126A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) ;
// System.String Proyecto26.ResponseHelper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHelper_get_Text_m4529907A41F3E760A73564C9C189AC97F320F822 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>::Invoke(T1,T2)
inline void Action_2_Invoke_mC4A878B0D6C4C4ED0BCA68FD2505F1A2726431BF_inline (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* __this, RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* ___arg10, ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*, RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9*, ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean Proyecto26.RequestHelper::get_IsAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_IsAborted_m5B21E1C18BD58CCDE57D63D2BD61537C40735129 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Int32 Proyecto26.RequestHelper::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequestHelper_get_Retries_m9BF4A1F6FA0020CB3CCF729FE41650C13769E83E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.RequestHelper::get_RetryCallbackOnlyOnNetworkErrors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_RetryCallbackOnlyOnNetworkErrors_m345837ED1A7C7DA8C84C363522418B704965423A (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Action`2<Proyecto26.RequestException,System.Int32> Proyecto26.RequestHelper::get_RetryCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* RequestHelper_get_RetryCallback_m8958FBD9B8E6A0852AFC98537FF1A2AB40273461 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// Proyecto26.RequestException Proyecto26.HttpBase::CreateException(Proyecto26.RequestHelper,UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* HttpBase_CreateException_m068524885278C8CEA04B10740715A7FA6246B4C3 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request1, const RuntimeMethod* method) ;
// System.Void System.Action`2<Proyecto26.RequestException,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m32ED1787501742DAF3F58DEE071F6B1CA6E81043_inline (Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* __this, RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A*, RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Single Proyecto26.RequestHelper::get_RetrySecondsDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RequestHelper_get_RetrySecondsDelay_m234E28296D60688F538185FD3E11466B67668EB7 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest Proyecto26.RequestHelper::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_uploadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityWebRequest_get_uploadedBytes_mA1DA52CB702E41CB42D0A8809AA80D642976B0D4 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetRequestHeader_mEDAC73EA86F30AE1438EBD3452AA927359437076 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_Headers_mF06E05AD5EE832BFE56704B7A546B0C7E25D4B79 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Proyecto26.RequestHelper::set_Request(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestHelper_set_Request_mA1C3D38E6CBDABDCF58527D9A28070653A1C1979_inline (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_IsAborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_IsAborted_m94327332571DC63115E2C45BC4BF07D15C8F3694 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void Proyecto26.ResponseHelper::set_Request(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseHelper_set_Request_m9734C03F625D17D16F2BD1696ADED283AE295194_inline (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Proyecto26.ResponseHelper::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_m9AC0E1BB43CE0469BC7FE865B3D9B2C4198DDF03 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___obj0, bool ___prettyPrint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Proyecto26.StaticCoroutine/CoroutineHolder>()
inline CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* GameObject_AddComponent_TisCoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60_mDC0D94AAC2A4309418FD94DF40431B6150655C9A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// Proyecto26.StaticCoroutine/CoroutineHolder Proyecto26.StaticCoroutine::get_Runner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* StaticCoroutine_get_Runner_m893C755952DF4D4DF7E5FADBB84F993C9FB4F4D0 (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, String_t* ___version0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::get_DefaultRequestParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RestClient_get_DefaultRequestParams_mB02E1192C1368FCE6DF8DD874D3033F9E25EC36E (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::get_DefaultRequestHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RestClient_get_DefaultRequestHeaders_m19D3D13F645191B13463EDBD9125BFF41A3193A0 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Proyecto26.HttpBase::DefaultUnityWebRequest(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpBase_DefaultUnityWebRequest_m29B82281D1D77B29A1B18C05D92042DDD9CB933F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine Proyecto26.StaticCoroutine::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* StaticCoroutine_StartCoroutine_mE7F39B286CDB161CDB7E046E1E8D30A7D5F5DE8D (RuntimeObject* ___coroutine0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_Uri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Get(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Get_mD11999D6A39CAF37E54BC5E957FC4F29BD3CB1E6 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Request(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_Body(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Post(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Post_m163B07093FA2C7EE792D0FECDC8928D836CFC591 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_BodyString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Put(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Put_m70834D6C23681658FA93AFC6D4038553AFAC45A9 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Patch(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Patch_m17881C3BB0702DAA9425D1D0F93309BCF3B7B7B1 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Delete(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Delete_m3AAA7506A280314FBB4C3AAE422B595FDBA4BFCD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void Proyecto26.RestClient::Head(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Head_m1781234DA3CDAD5EF72644A9C90984A69356CAF4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) ;
// System.Void RSG.Promise`1<Proyecto26.ResponseHelper>::.ctor()
inline void Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97 (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* __this, const RuntimeMethod* method)
{
	((  void (*) (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*, const RuntimeMethod*))Promise_1__ctor_m35D9AC4CFCE1354636EDC5F4DEC74FEF713C6894_gshared)(__this, method);
}
// System.Void System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558 (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Get(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Get_m58BC91957FB3E473503F45867DD4F87E8F78F699 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Post(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Post_m1796D82EBE3AD34C846A7BB1A25116C55C161600 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Put(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Put_mB417B0F9F75CAD5F8C4F515834494D099A945BA8 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Patch(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Patch_mCD8A5D6EF73829F03E1856B1FACDE7A70ED26F59 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Delete(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Delete_mEB361DE273AA7ED06CE07C0F56996555F408725F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> Proyecto26.RequestHelper::get_FormSections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* RequestHelper_get_FormSections_m43721DC6C2EBCC4BB13FAE074739AD26C8583F97 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeFormSections(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_SerializeFormSections_mC0691C6F240272DD5C0A2C4C06DF5DE93BE354B3 (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___multipartFormSections0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Networking.CertificateHandler Proyecto26.RequestHelper::get_CertificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* RequestHelper_get_CertificateHandler_m321AC0450D35604BA128C3288D044FE6884ED265 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_certificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_certificateHandler_m4B4FA1E2F5FD0394D079CB711EB612F6A62458E2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UploadHandler Proyecto26.RequestHelper::get_UploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* RequestHelper_get_UploadHandler_m67989620874FA461E24832C70D639EC15147AE3F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* UnityWebRequest_get_uploadHandler_mF92ED2E0410E7F720B8775B467CFD86B60909CF5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler Proyecto26.RequestHelper::get_DownloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* RequestHelper_get_DownloadHandler_m576BE2E2C2E06E5B1831D089223FDD2C399D08E4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Void Proyecto26.RequestHelper::set_ParseResponseBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_ParseResponseBody_m021500316923EA402EDE2E525753AA265389C14E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RequestHelper_get_Timeout_m2B636E856FDDFD91989839B407A414D9932312F0 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Proyecto26.RequestHelper::get_UseHttpContinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 RequestHelper_get_UseHttpContinue_m3637AB717925A6979C5B34080D032E2FFDC5FD2F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_useHttpContinue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_useHttpContinue_m69A9328F59DD88D26472A60530C42DB1D770571E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::get_RedirectLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RequestHelper_get_RedirectLimit_m12FA845010695EEE4A09DD9A6F76DE8471A862D4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_redirectLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_redirectLimit_m595CF14137D16BE4385E802869A28AA9B8460928 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] Proyecto26.RequestHelper::get_BodyRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RequestHelper_get_BodyRaw_m819005CD0C1E7634FCF67CA97B1F8D5D06A1EAFD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.RequestHelper::get_DefaultContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_DefaultContentType_m91687E0E1878F17A2047E3E7741EF6CA42A1458B (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Object Proyecto26.RequestHelper::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestHelper_get_Body_m727A2AEE626E7FC01DF0A978441C001EB34EBCBB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String Proyecto26.RequestHelper::get_BodyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_BodyString_m9F94287AC2B538F2A7DAEC148696D217EFBF8E53 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_SimpleForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_SimpleForm_m15B81EB567521859E32A255F893E86F798C8B164 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeSimpleForm(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_SerializeSimpleForm_m43DDB6E77AB45B6A53F63F692E94D7C00F212977 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___formFields0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>::get_Count()
inline int32_t List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_inline (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String Proyecto26.Common.Common::GetFormSectionsContentType(System.Byte[]&,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Common_GetFormSectionsContentType_m3A5FF6FDA02EFEB9D5BEF45E02DA57C964745CDE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___bodyRaw0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) ;
// System.String Proyecto26.RequestHelper::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_ContentType_m1DE79D1DB56E8D9E796B0E9E60ED993AB94715AB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.Void Proyecto26.Common.Common::ConfigureWebRequestWithOptions(UnityEngine.Networking.UnityWebRequest,System.Byte[],System.String,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ConfigureWebRequestWithOptions_m2768A6006025ABD91ADC36932330BFB133718169 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyRaw1, String_t* ___contentType2, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options3, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Proyecto26.ResponseHelper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseHelper__ctor_m3CCCE641244AC12357CC70E8C05AA39285A9C9A0 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Boolean Proyecto26.RequestHelper::get_IgnoreHttpException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_IgnoreHttpException_m62F4E6F0A29DA302D61746DD6AAF49EB657ACF50 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m8C29905D5456961490731FA54B1FC3DCE2A7193C_gshared)(___source0, method);
}
// System.Void Proyecto26.Common.Extensions/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m39F8F1DFCE5887655F9E6168820F86EA4D3DB29F (U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2 (RuntimeObject* ___source0, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m6B975D4AB123E8A95B5E80935D6D4F3D58F28CC3 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m7F79A13D8C0618EB1FB29A5CC73DF6F0B8048CAD_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30 (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m7BDB54E6AF347996AD88A05A012F226129173FCB (RuntimeObject* ___source0, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m9649CC8328C44B44485D78A25A3F08C6B53F65C1_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___source0, ___value1, method);
}
// System.Void Proyecto26.Common.Extensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAB9972DF599999D1767BC5FA12A2C547E525FF79 (U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* __this, const RuntimeMethod* method) ;
// System.String Proyecto26.Common.Extensions::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_EscapeURL_m3C1CBAED3CCE96113BA65B8B884C45CE21CBD8B4 (String_t* ___queryParam0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: RSG.Promise/ResolveHandler
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_pinvoke(const ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63& unmarshaled, ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_pinvoke& marshaled)
{
	Exception_t* ___rejectable_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rejectable' of type 'ResolveHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rejectable_1Exception, NULL);
}
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_pinvoke_back(const ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_pinvoke& marshaled, ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63& unmarshaled)
{
	Exception_t* ___rejectable_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rejectable' of type 'ResolveHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rejectable_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: RSG.Promise/ResolveHandler
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_pinvoke_cleanup(ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RSG.Promise/ResolveHandler
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_com(const ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63& unmarshaled, ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_com& marshaled)
{
	Exception_t* ___rejectable_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rejectable' of type 'ResolveHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rejectable_1Exception, NULL);
}
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_com_back(const ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_com& marshaled, ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63& unmarshaled)
{
	Exception_t* ___rejectable_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rejectable' of type 'ResolveHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rejectable_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: RSG.Promise/ResolveHandler
IL2CPP_EXTERN_C void ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshal_com_cleanup(ResolveHandler_t8D0768F8A2CFBB616FB239F7E68D7EFA8E7D3F63_marshaled_com& marshaled)
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
// System.Void RSG.Promise/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m897DC60DCFF9720781FDDCF89BAF8AE80A641586 (U3CU3Ec__DisplayClass34_0_tE859E6EE2A3CE5B54DBDDC1E3FC63D5BA6EBCB3D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass34_0::<InvokeRejectHandlers>b__0(RSG.RejectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CInvokeRejectHandlersU3Eb__0_mB4D3508FB53C5380CF3DA70DFA540EF228F52481 (U3CU3Ec__DisplayClass34_0_tE859E6EE2A3CE5B54DBDDC1E3FC63D5BA6EBCB3D* __this, RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440 ___handler0, const RuntimeMethod* method) 
{
	{
		// rejectHandlers.Each(handler => InvokeRejectHandler(handler.callback, handler.rejectable, ex));
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___U3CU3E4__this_0;
		RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440 L_1 = ___handler0;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_2 = L_1.___callback_0;
		RejectHandler_t6B3D50F7C1A42A10FDD31A7DE710B3B6E90DD440 L_3 = ___handler0;
		RuntimeObject* L_4 = L_3.___rejectable_1;
		Exception_t* L_5 = __this->___ex_1;
		NullCheck(L_0);
		Promise_InvokeRejectHandler_m49B2D5AAEB34EFCC768224F0AA8BF2F02C040991(L_0, L_2, L_4, L_5, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m14342AEB656B3C6E043CB9C328024C9498A709DB (U3CU3Ec__DisplayClass36_0_t46B987C484E5CDCBDEC78356A11300AD4E744E06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass36_0::<InvokeProgressHandlers>b__0(RSG.ProgressHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInvokeProgressHandlersU3Eb__0_mD181A5DD642FE3E0D38EC53325C7E45430715A5F (U3CU3Ec__DisplayClass36_0_t46B987C484E5CDCBDEC78356A11300AD4E744E06* __this, ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D ___handler0, const RuntimeMethod* method) 
{
	{
		// progressHandlers.Each(handler => InvokeProgressHandler(handler.callback, handler.rejectable, progress));
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___U3CU3E4__this_0;
		ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D L_1 = ___handler0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = L_1.___callback_0;
		ProgressHandler_tFE539BC8444815A7D4CA51D44D588EA75654073D L_3 = ___handler0;
		RuntimeObject* L_4 = L_3.___rejectable_1;
		float L_5 = __this->___progress_1;
		NullCheck(L_0);
		Promise_InvokeProgressHandler_m83372C7CDE89BE8C915155346E4F216B87389B9E(L_0, L_2, L_4, L_5, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_mF6D43FC6CD19DE6AFF0B9656924C222BFAEA6C0E (U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass44_0::<Catch>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0_U3CCatchU3Eb__0_mB3B9D6EB885D400E307A3BB7B4148ECC9BEED195 (U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78* __this, const RuntimeMethod* method) 
{
	{
		// Action resolveHandler = () => resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_0;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass44_0::<Catch>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0_U3CCatchU3Eb__1_m7D1C74900668244ED2925D69FFEB0353189765B1 (U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// onRejected(ex);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = __this->___onRejected_1;
		Exception_t* L_1 = ___ex0;
		NullCheck(L_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_0, L_1, NULL);
		// resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_2 = __this->___resultPromise_0;
		NullCheck(L_2);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_2, NULL);
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Exception)
		// catch (Exception callbackException)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// resultPromise.Reject(callbackException);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___resultPromise_0;
		Exception_t* L_4 = V_0;
		NullCheck(L_3);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_3, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0030;
	}// end catch (depth: 1)

IL_0030:
	{
		// };
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass44_0::<Catch>b__2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0_U3CCatchU3Eb__2_m20246593163120F7F446B076B1F4EC4E6C90A2CA (U3CU3Ec__DisplayClass44_0_t2A4D218AEC89D29943C7BE379C20C2598998ED78* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// ProgressHandlers(resultPromise, v => resultPromise.ReportProgress(v));
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_0;
		float L_1 = ___v0;
		NullCheck(L_0);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_0, L_1, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_mC731BB36D8ADD6B4079B3BC339BBF9E0C4EFB4F8 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass52_0::<Then>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__0_m91C10E82E96D2D909CE9F075FBE73C2D7E278192 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__2_m0DF0E0F3E4563CE5C7427F7405ADEB03DB8A5F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__3_m7501B93112EC99EC8EE3EEE1B56A7F3C3DEFC685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__4_m194278F8D66D227B7EB1FAFCF826F331113265D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* V_3 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B7_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	{
		// if (onResolved != null)
		Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* L_0 = __this->___onResolved_0;
		V_0 = (bool)((!(((RuntimeObject*)(Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		// onResolved()
		//     .Progress(progress => resultPromise.ReportProgress(progress))
		//     .Then(
		//         () => resultPromise.Resolve(),
		//         ex => resultPromise.Reject(ex)
		//     );
		Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* L_2 = __this->___onResolved_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mFD02CEBD949E5D5F5AF8F349A581276B5B0E1C5E_inline(L_2, NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = __this->___U3CU3E9__2_3;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = L_4;
		G_B2_0 = L_5;
		G_B2_1 = L_3;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = L_3;
			goto IL_0039;
		}
	}
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_6, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__2_m0DF0E0F3E4563CE5C7427F7405ADEB03DB8A5F83_RuntimeMethod_var), NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = L_6;
		V_1 = L_7;
		__this->___U3CU3E9__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__2_3), (void*)L_7);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8 = V_1;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
	}

IL_0039:
	{
		NullCheck(G_B3_1);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(23 /* RSG.IPromise RSG.IPromise::Progress(System.Action`1<System.Single>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = __this->___U3CU3E9__3_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = L_9;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			goto IL_005d;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__3_m7501B93112EC99EC8EE3EEE1B56A7F3C3DEFC685_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = L_12;
		V_2 = L_13;
		__this->___U3CU3E9__3_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__3_4), (void*)L_13);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = V_2;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
	}

IL_005d:
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_15 = __this->___U3CU3E9__4_5;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_16 = L_15;
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		if (L_16)
		{
			G_B7_0 = L_16;
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			goto IL_007c;
		}
	}
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_17 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_17, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__4_m194278F8D66D227B7EB1FAFCF826F331113265D1_RuntimeMethod_var), NULL);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_18 = L_17;
		V_3 = L_18;
		__this->___U3CU3E9__4_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__4_5), (void*)L_18);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_19 = V_3;
		G_B7_0 = L_19;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_007c:
	{
		NullCheck(G_B7_2);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* >::Invoke(11 /* RSG.IPromise RSG.IPromise::Then(System.Action,System.Action`1<System.Exception>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, G_B7_2, G_B7_1, G_B7_0);
		goto IL_0093;
	}

IL_0085:
	{
		// resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_21 = __this->___resultPromise_1;
		NullCheck(L_21);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_21, NULL);
	}

IL_0093:
	{
		// };
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass52_0::<Then>b__2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__2_m0DF0E0F3E4563CE5C7427F7405ADEB03DB8A5F83 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// .Progress(progress => resultPromise.ReportProgress(progress))
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		float L_1 = ___progress0;
		NullCheck(L_0);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_0, L_1, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass52_0::<Then>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__3_m7501B93112EC99EC8EE3EEE1B56A7F3C3DEFC685 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, const RuntimeMethod* method) 
{
	{
		// () => resultPromise.Resolve(),
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass52_0::<Then>b__4(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__4_m194278F8D66D227B7EB1FAFCF826F331113265D1 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	{
		// ex => resultPromise.Reject(ex)
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		Exception_t* L_1 = ___ex0;
		NullCheck(L_0);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_0, L_1, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass52_0::<Then>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CThenU3Eb__1_m2DDEA0BFAE75634CEB55BB1D746BBD330F4869C0 (U3CU3Ec__DisplayClass52_0_t9A137DDBE66F29DC360D4DA3F76FBAE823BC3F3E* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (onRejected != null)
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = __this->___onRejected_2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onRejected(ex);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_2 = __this->___onRejected_2;
		Exception_t* L_3 = ___ex0;
		NullCheck(L_2);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_2, L_3, NULL);
	}

IL_001d:
	{
		// resultPromise.Reject(ex);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_4 = __this->___resultPromise_1;
		Exception_t* L_5 = ___ex0;
		NullCheck(L_4);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_4, L_5, NULL);
		// };
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
// System.Void RSG.Promise/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_mFACADFB9DBD1920C191A332AF7300F7E8E024ED3 (U3CU3Ec__DisplayClass53_0_tE347B1BEF3E037C7E4B3842B90503FBA058112A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass53_0::<Then>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3CThenU3Eb__0_mF7C4944C5F8BE6513BDDCA8B0FDBB6E14DC2C5E3 (U3CU3Ec__DisplayClass53_0_tE347B1BEF3E037C7E4B3842B90503FBA058112A8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (onResolved != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onResolved_0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onResolved();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___onResolved_0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_001c:
	{
		// resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___resultPromise_1;
		NullCheck(L_3);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_3, NULL);
		// };
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass53_0::<Then>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3CThenU3Eb__1_m979DC9DB8F68E5C79ABF476468906D4B87D01D9C (U3CU3Ec__DisplayClass53_0_tE347B1BEF3E037C7E4B3842B90503FBA058112A8* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (onRejected != null)
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = __this->___onRejected_2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// onRejected(ex);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_2 = __this->___onRejected_2;
		Exception_t* L_3 = ___ex0;
		NullCheck(L_2);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_2, L_3, NULL);
		// resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_4 = __this->___resultPromise_1;
		NullCheck(L_4);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_4, NULL);
		// return;
		goto IL_0037;
	}

IL_002a:
	{
		// resultPromise.Reject(ex);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_5 = __this->___resultPromise_1;
		Exception_t* L_6 = ___ex0;
		NullCheck(L_5);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_5, L_6, NULL);
	}

IL_0037:
	{
		// };
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
// System.Void RSG.Promise/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m612F1A6EDC882C7B7B04ACCEA10F78FFB99D71A7 (U3CU3Ec__DisplayClass56_0_tB83D960DC4F52DECBA0C67FCC7CC932DA05676A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RSG.IPromise RSG.Promise/<>c__DisplayClass56_0::<ThenAll>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass56_0_U3CThenAllU3Eb__0_m7BBD1735E2BD1AECDEA2A20CB9E29A311E048C50 (U3CU3Ec__DisplayClass56_0_tB83D960DC4F52DECBA0C67FCC7CC932DA05676A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Then(() => All(chain()));
		Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5* L_0 = __this->___chain_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Func_1_Invoke_mAC8FEE1CB70B6132D837DBD5835ECDC55B9F6D95_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Promise_All_m3B98DCD6437D152821B923BEAC0781782B69A3A3(L_1, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m516408BBD1540BB479CACA4215789A61E588D810 (U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass59_0::<All>b__0(RSG.IPromise,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CAllU3Eb__0_m87565D3C5EA3DFEB778B00A54EF744307E7FFD01 (U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* __this, RuntimeObject* ___promise0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0_U3CAllU3Eb__3_mE7882075EE24DC9055D3224D33DD3E7FE5C3649A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__1_m43EED26E0FBA8DE6083A06EF6B646BF78872E14D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__2_m9B45224464BC3BFF1C41548F8B2A37BD35A8F29C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* V_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* V_1 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* L_0 = (U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass59_1__ctor_m4B8FB61B59089C4DEA648A75D409E836CEE092FF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* L_2 = V_0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		L_2->___index_0 = L_3;
		// promise
		//     .Progress(v =>
		//     {
		//         progress[index] = v;
		//         if (resultPromise.CurState == PromiseState.Pending)
		//         {
		//             resultPromise.ReportProgress(progress.Average());
		//         }
		//     })
		//     .Then(() =>
		//     {
		//         progress[index] = 1f;
		// 
		//         --remainingCount;
		//         if (remainingCount <= 0 && resultPromise.CurState == PromiseState.Pending)
		//         {
		//             // This will never happen if any of the promises errorred.
		//             resultPromise.Resolve();
		//         }
		//     })
		//     .Catch(ex =>
		//     {
		//         if (resultPromise.CurState == PromiseState.Pending)
		//         {
		//             // If a promise errorred and the result promise is still pending, reject it.
		//             resultPromise.Reject(ex);
		//         }
		//     })
		//     .Done();
		RuntimeObject* L_4 = ___promise0;
		U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* L_5 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__1_m43EED26E0FBA8DE6083A06EF6B646BF78872E14D_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(23 /* RSG.IPromise RSG.IPromise::Progress(System.Action`1<System.Single>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_4, L_6);
		U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__2_m9B45224464BC3BFF1C41548F8B2A37BD35A8F29C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8 /* RSG.IPromise RSG.IPromise::Then(System.Action) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_7, L_9);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_11 = __this->___U3CU3E9__3_3;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			goto IL_0057;
		}
	}
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_13 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_13, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass59_0_U3CAllU3Eb__3_mE7882075EE24DC9055D3224D33DD3E7FE5C3649A_RuntimeMethod_var), NULL);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_14 = L_13;
		V_1 = L_14;
		__this->___U3CU3E9__3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__3_3), (void*)L_14);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_15 = V_1;
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
	}

IL_0057:
	{
		NullCheck(G_B2_1);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* >::Invoke(5 /* RSG.IPromise RSG.IPromise::Catch(System.Action`1<System.Exception>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, G_B2_1, G_B2_0);
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(4 /* System.Void RSG.IPromise::Done() */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_16);
		// });
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass59_0::<All>b__3(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CAllU3Eb__3_mE7882075EE24DC9055D3224D33DD3E7FE5C3649A (U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (resultPromise.CurState == PromiseState.Pending)
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// resultPromise.Reject(ex);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___resultPromise_1;
		Exception_t* L_4 = ___ex0;
		NullCheck(L_3);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_3, L_4, NULL);
	}

IL_0022:
	{
		// })
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
// System.Void RSG.Promise/<>c__DisplayClass59_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_1__ctor_m4B8FB61B59089C4DEA648A75D409E836CEE092FF (U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass59_1::<All>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__1_m43EED26E0FBA8DE6083A06EF6B646BF78872E14D (U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* __this, float ___v0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// progress[index] = v;
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0->___progress_0;
		int32_t L_2 = __this->___index_0;
		float L_3 = ___v0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)L_3);
		// if (resultPromise.CurState == PromiseState.Pending)
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_5 = L_4->___resultPromise_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline(L_5, NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// resultPromise.ReportProgress(progress.Average());
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_8 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_8);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_9 = L_8->___resultPromise_1;
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_10 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_10->___progress_0;
		float L_12;
		L_12 = Enumerable_Average_m2DBF0BBC0642716C2296C5C3CC9AFF18F574C368((RuntimeObject*)L_11, NULL);
		NullCheck(L_9);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_9, L_12, NULL);
	}

IL_004e:
	{
		// })
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass59_1::<All>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_1_U3CAllU3Eb__2_m9B45224464BC3BFF1C41548F8B2A37BD35A8F29C (U3CU3Ec__DisplayClass59_1_tEF0BAD905E3CDBA6512C405D62F2E5D0DAD856A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// progress[index] = 1f;
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0->___progress_0;
		int32_t L_2 = __this->___index_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)(1.0f));
		// --remainingCount;
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___remainingCount_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_5 = __this->___CSU24U3CU3E8__locals1_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		L_5->___remainingCount_2 = L_6;
		// if (remainingCount <= 0 && resultPromise.CurState == PromiseState.Pending)
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_7 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___remainingCount_2;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_9 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_9);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_10 = L_9->___resultPromise_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline(L_10, NULL);
		G_B3_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B3_0 = 0;
	}

IL_0056:
	{
		V_1 = (bool)G_B3_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		// resultPromise.Resolve();
		U3CU3Ec__DisplayClass59_0_tA9F3D6D1F579041540DCDA13A48B4F5C05CFFAA3* L_13 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_13);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_14 = L_13->___resultPromise_1;
		NullCheck(L_14);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_14, NULL);
	}

IL_006d:
	{
		// })
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
// System.Void RSG.Promise/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m2E7C2B7DDFE3EEB3871DF5303188E2430F55AA74 (U3CU3Ec__DisplayClass60_0_t75C73781F447AA707177BD52643ED348F750264B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RSG.IPromise RSG.Promise/<>c__DisplayClass60_0::<ThenSequence>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass60_0_U3CThenSequenceU3Eb__0_mB394CFDCCB95FD085A8736AD8E482A50F44D4A49 (U3CU3Ec__DisplayClass60_0_t75C73781F447AA707177BD52643ED348F750264B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Then(() => Sequence(chain()));
		Func_1_t5EB90604A5DA330966F5BAE5A769C41CEC70C8E8* L_0 = __this->___chain_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Func_1_Invoke_m094B9768473799B3EF51CB7AA71586F4D3CF146D_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Promise_Sequence_mE68AE5606783CB0E5C6C8652F6B7605E1AC4FF18(L_1, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m9CE32458E8BABAD882B5CA483D36D5EB2994C570 (U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RSG.IPromise RSG.Promise/<>c__DisplayClass62_0::<Sequence>b__0(RSG.IPromise,System.Func`1<RSG.IPromise>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass62_0_U3CSequenceU3Eb__0_m7D3A4FFC66539686B3257F32DF09A8EFC93D7AED (U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* __this, RuntimeObject* ___prevPromise0, Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* ___fn1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__2_m9F213538E12F1333EAADF3690503584E98B82237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__3_m25D42314D26736A13DD29D1331B0BA160532D3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_0 = (U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass62_1__ctor_mF6802236B37785089ED7E9A3F5DA5558ED85951D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_2), (void*)__this);
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_2 = V_0;
		Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* L_3 = ___fn1;
		NullCheck(L_2);
		L_2->___fn_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___fn_1), (void*)L_3);
		// int itemSequence = count;
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_4 = V_0;
		int32_t L_5 = __this->___count_0;
		NullCheck(L_4);
		L_4->___itemSequence_0 = L_5;
		// ++count;
		int32_t L_6 = __this->___count_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__this->___count_0 = L_7;
		// return prevPromise
		//         .Then(() =>
		//         {
		//             var sliceLength = 1f / count;
		//             promise.ReportProgress(sliceLength * itemSequence);
		//             return fn();
		//         })
		//         .Progress(v =>
		//         {
		//             var sliceLength = 1f / count;
		//             promise.ReportProgress(sliceLength * (v + itemSequence));
		//         })
		// ;
		RuntimeObject* L_8 = ___prevPromise0;
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_9 = V_0;
		Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* L_10 = (Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3*)il2cpp_codegen_object_new(Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_1__ctor_m89610324C7917C555F5DC66907FCA7D6D8F6EBD2(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__2_m9F213538E12F1333EAADF3690503584E98B82237_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* >::Invoke(7 /* RSG.IPromise RSG.IPromise::Then(System.Func`1<RSG.IPromise>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_8, L_10);
		U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* L_12 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_13 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__3_m25D42314D26736A13DD29D1331B0BA160532D3AA_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(23 /* RSG.IPromise RSG.IPromise::Progress(System.Action`1<System.Single>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_11, L_13);
		V_2 = L_14;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		RuntimeObject* L_15 = V_2;
		return L_15;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass62_0::<Sequence>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CSequenceU3Eb__1_mB3DB8505EF43580EE4356A320BF4FB3842CFFA50 (U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* __this, const RuntimeMethod* method) 
{
	{
		// .Then(() => promise.Resolve())
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___promise_1;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass62_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_1__ctor_mF6802236B37785089ED7E9A3F5DA5558ED85951D (U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RSG.IPromise RSG.Promise/<>c__DisplayClass62_1::<Sequence>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__2_m9F213538E12F1333EAADF3690503584E98B82237 (U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	{
		// var sliceLength = 1f / count;
		U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* L_0 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___count_0;
		V_0 = ((float)((1.0f)/((float)L_1)));
		// promise.ReportProgress(sliceLength * itemSequence);
		U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = L_2->___promise_1;
		float L_4 = V_0;
		int32_t L_5 = __this->___itemSequence_0;
		NullCheck(L_3);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_3, ((float)il2cpp_codegen_multiply(L_4, ((float)L_5))), NULL);
		// return fn();
		Func_1_t2EDE2202534E1B54F5819A58EA01366A9D922AB3* L_6 = __this->___fn_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Func_1_Invoke_mFD02CEBD949E5D5F5AF8F349A581276B5B0E1C5E_inline(L_6, NULL);
		V_1 = L_7;
		goto IL_003c;
	}

IL_003c:
	{
		// })
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass62_1::<Sequence>b__3(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_1_U3CSequenceU3Eb__3_m25D42314D26736A13DD29D1331B0BA160532D3AA (U3CU3Ec__DisplayClass62_1_t830CBF2EA28F567661612ECD1150F7900DBB6061* __this, float ___v0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var sliceLength = 1f / count;
		U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* L_0 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___count_0;
		V_0 = ((float)((1.0f)/((float)L_1)));
		// promise.ReportProgress(sliceLength * (v + itemSequence));
		U3CU3Ec__DisplayClass62_0_t9579835F260BD2BBFB5C3122077C317720A036AC* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = L_2->___promise_1;
		float L_4 = V_0;
		float L_5 = ___v0;
		int32_t L_6 = __this->___itemSequence_0;
		NullCheck(L_3);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_3, ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_add(L_5, ((float)L_6))))), NULL);
		// })
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
// System.Void RSG.Promise/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m05206B1BC0E0943BD3F41312AA406BF6190D2521 (U3CU3Ec__DisplayClass63_0_tBA448A28B2BE3F46544E8699CDB596BDA8D11E50* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RSG.IPromise RSG.Promise/<>c__DisplayClass63_0::<ThenRace>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass63_0_U3CThenRaceU3Eb__0_m57BC5E3BB67D69BCA61F5E8BF4AC755B38295222 (U3CU3Ec__DisplayClass63_0_tBA448A28B2BE3F46544E8699CDB596BDA8D11E50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Then(() => Race(chain()));
		Func_1_tAAB9D6CC213B998FE31B7A4FD9AC922164860AC5* L_0 = __this->___chain_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Func_1_Invoke_mAC8FEE1CB70B6132D837DBD5835ECDC55B9F6D95_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Promise_tC0F862077973826645AC46C011CC42F69CDB9A82_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Promise_Race_m6B716AA24E2584C8F986F506B8470269D6FADA0F(L_1, NULL);
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
// System.Void RSG.Promise/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m0532938FA47506CFA8732885E283AD9F21C72ADD (U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass66_0::<Race>b__0(RSG.IPromise,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__0_m930B260B50CC2D259DD4E73FC7EF574B6ED6BEA0 (U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* __this, RuntimeObject* ___promise0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__2_m4EC2810EE4C20AE7FB3AF79489717ADE34ED665A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__3_mC808C98C3D85BA35CB856A3E3739FB79AA5D4D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_1_U3CRaceU3Eb__1_m25CC0AF8BFAC0DDB555ECDEA6F7B4068CF1052EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* V_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* L_0 = (U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass66_1__ctor_m9DBFC26D5CBB1FBB640770336F18C142C8E93405(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* L_2 = V_0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		L_2->___index_0 = L_3;
		// promise
		//     .Progress(v =>
		//     {
		//         progress[index] = v;
		//         resultPromise.ReportProgress(progress.Max());
		//     })
		//     .Catch(ex =>
		//     {
		//         if (resultPromise.CurState == PromiseState.Pending)
		//         {
		//             // If a promise errorred and the result promise is still pending, reject it.
		//             resultPromise.Reject(ex);
		//         }
		//     })
		//     .Then(() =>
		//     {
		//         if (resultPromise.CurState == PromiseState.Pending)
		//         {
		//             resultPromise.Resolve();
		//         }
		//     })
		//     .Done();
		RuntimeObject* L_4 = ___promise0;
		U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* L_5 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass66_1_U3CRaceU3Eb__1_m25CC0AF8BFAC0DDB555ECDEA6F7B4068CF1052EE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* >::Invoke(23 /* RSG.IPromise RSG.IPromise::Progress(System.Action`1<System.Single>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_4, L_6);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_8 = __this->___U3CU3E9__2_2;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			goto IL_0046;
		}
	}
	{
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_10 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_10, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__2_m4EC2810EE4C20AE7FB3AF79489717ADE34ED665A_RuntimeMethod_var), NULL);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_11 = L_10;
		V_1 = L_11;
		__this->___U3CU3E9__2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__2_2), (void*)L_11);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_12 = V_1;
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
	}

IL_0046:
	{
		NullCheck(G_B2_1);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* >::Invoke(5 /* RSG.IPromise RSG.IPromise::Catch(System.Action`1<System.Exception>) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, G_B2_1, G_B2_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = __this->___U3CU3E9__3_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = L_14;
		G_B3_0 = L_15;
		G_B3_1 = L_13;
		if (L_15)
		{
			G_B4_0 = L_15;
			G_B4_1 = L_13;
			goto IL_006a;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__3_mC808C98C3D85BA35CB856A3E3739FB79AA5D4D2F_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = L_16;
		V_2 = L_17;
		__this->___U3CU3E9__3_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__3_3), (void*)L_17);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = V_2;
		G_B4_0 = L_18;
		G_B4_1 = G_B3_1;
	}

IL_006a:
	{
		NullCheck(G_B4_1);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8 /* RSG.IPromise RSG.IPromise::Then(System.Action) */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, G_B4_1, G_B4_0);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(4 /* System.Void RSG.IPromise::Done() */, IPromise_t2CA0A5D2AEFD4E8F55897CD526249A686274F4F5_il2cpp_TypeInfo_var, L_19);
		// });
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass66_0::<Race>b__2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__2_m4EC2810EE4C20AE7FB3AF79489717ADE34ED665A (U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (resultPromise.CurState == PromiseState.Pending)
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// resultPromise.Reject(ex);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___resultPromise_1;
		Exception_t* L_4 = ___ex0;
		NullCheck(L_3);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_3, L_4, NULL);
	}

IL_0022:
	{
		// })
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass66_0::<Race>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CRaceU3Eb__3_mC808C98C3D85BA35CB856A3E3739FB79AA5D4D2F (U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (resultPromise.CurState == PromiseState.Pending)
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___resultPromise_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// resultPromise.Resolve();
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___resultPromise_1;
		NullCheck(L_3);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_3, NULL);
	}

IL_0021:
	{
		// })
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
// System.Void RSG.Promise/<>c__DisplayClass66_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_1__ctor_m9DBFC26D5CBB1FBB640770336F18C142C8E93405 (U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass66_1::<Race>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_1_U3CRaceU3Eb__1_m25CC0AF8BFAC0DDB555ECDEA6F7B4068CF1052EE (U3CU3Ec__DisplayClass66_1_t7371C65772D158B0726B9A18FC3EAFB7D220DC59* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// progress[index] = v;
		U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0->___progress_0;
		int32_t L_2 = __this->___index_0;
		float L_3 = ___v0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)L_3);
		// resultPromise.ReportProgress(progress.Max());
		U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_5 = L_4->___resultPromise_1;
		U3CU3Ec__DisplayClass66_0_t0BCA1CD521EE12166F0F3D022BD6DEE047BABED0* L_6 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_6->___progress_0;
		float L_8;
		L_8 = Enumerable_Max_m3215FA2A65ACAFE226A0FBE065D772C7CE1A5E9F((RuntimeObject*)L_7, NULL);
		NullCheck(L_5);
		Promise_ReportProgress_m6D4C8B13F0FDC54826EC382F834B90F3A37B1E97(L_5, L_8, NULL);
		// })
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
// System.Void RSG.Promise/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m78E8AD1705A8C3F3CA12430C2E97120BF28F5C36 (U3CU3Ec__DisplayClass69_0_tB9297E28F01353D5E031C02071FEA22BD5C55A18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass69_0::<Finally>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0_U3CFinallyU3Eb__0_mB98B7DDB295AFE5A93D21C9EA74C15A70B620BD4 (U3CU3Ec__DisplayClass69_0_tB9297E28F01353D5E031C02071FEA22BD5C55A18* __this, const RuntimeMethod* method) 
{
	{
		// this.Then(() => promise.Resolve());
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___promise_0;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass69_0::<Finally>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0_U3CFinallyU3Eb__1_mA1F009415ADC80C8DF29CADD62E6CE6E861BCDE2 (U3CU3Ec__DisplayClass69_0_tB9297E28F01353D5E031C02071FEA22BD5C55A18* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// onComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onComplete_1;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// promise.Reject(e);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_1 = __this->___promise_0;
		Exception_t* L_2 = ___e0;
		NullCheck(L_1);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_1, L_2, NULL);
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Exception)
		// } catch (Exception ne) {
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// promise.Reject(ne);
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_3 = __this->___promise_0;
		Exception_t* L_4 = V_0;
		NullCheck(L_3);
		Promise_Reject_mBBDFB4EEB1AA6DBECC97FC732840CE6194693A85(L_3, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0030;
	}// end catch (depth: 1)

IL_0030:
	{
		// });
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
// System.Void RSG.Promise/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_m2335F4081798B9CA126758D5B38D58578ACD02B4 (U3CU3Ec__DisplayClass70_0_t1EECF5BDD49967DF85C1270B3EC6C0F4E0C2936E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass70_0::<ContinueWith>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CContinueWithU3Eb__0_m5ED5B955EBC2657600378AEA3741D2096B294467 (U3CU3Ec__DisplayClass70_0_t1EECF5BDD49967DF85C1270B3EC6C0F4E0C2936E* __this, const RuntimeMethod* method) 
{
	{
		// this.Then(() => promise.Resolve());
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___promise_0;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
		return;
	}
}
// System.Void RSG.Promise/<>c__DisplayClass70_0::<ContinueWith>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CContinueWithU3Eb__1_m7C6285AA36261DCEE12D834674167AF1F8418D44 (U3CU3Ec__DisplayClass70_0_t1EECF5BDD49967DF85C1270B3EC6C0F4E0C2936E* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		// this.Catch(e => promise.Resolve());
		Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* L_0 = __this->___promise_0;
		NullCheck(L_0);
		Promise_Resolve_mF554905157A7FCB6711F4524BEF276FEAF0442F3(L_0, NULL);
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
// System.Void RSG.Tuple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple__ctor_mB5EB21B83239E3B55CB51B72E10F63D87F75A724 (Tuple_t342FF880BA83F16C4E0E68DAB992D10F8E106006* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RSG.Exceptions.PromiseException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_mDF49A69B00B47D8E30C59A1EFE8CDCCCED2175BD (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PromiseException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public PromiseException() { }
		return;
	}
}
// System.Void RSG.Exceptions.PromiseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_m327B4108B2935F10E2B77A95E7B6D3CD7574DA63 (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PromiseException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public PromiseException(string message) : base(message) { }
		return;
	}
}
// System.Void RSG.Exceptions.PromiseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseException__ctor_mB2C16AE66329DF694119F386C897F586F72F96F1 (PromiseException_tE07436A4D72EBBC7E9F97A00388F66379D75321D* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PromiseException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// public PromiseException(string message, Exception inner) : base(message, inner) { }
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
// System.Void RSG.Exceptions.PromiseStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseStateException__ctor_m5AF42A933A440D43FE8A735DAAEFC5B59D439A25 (PromiseStateException_t52911F6A2FC32A315E8756D6F9A84D7677D03710* __this, const RuntimeMethod* method) 
{
	{
		// public PromiseStateException() { }
		PromiseException__ctor_mDF49A69B00B47D8E30C59A1EFE8CDCCCED2175BD(__this, NULL);
		// public PromiseStateException() { }
		return;
	}
}
// System.Void RSG.Exceptions.PromiseStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseStateException__ctor_mF4411B73A303831214435467F21ABB529A5C3CA9 (PromiseStateException_t52911F6A2FC32A315E8756D6F9A84D7677D03710* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// public PromiseStateException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		PromiseException__ctor_m327B4108B2935F10E2B77A95E7B6D3CD7574DA63(__this, L_0, NULL);
		// public PromiseStateException(string message) : base(message) { }
		return;
	}
}
// System.Void RSG.Exceptions.PromiseStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseStateException__ctor_m6D6DEBEE15613C770037CF803694BFEA0167B311 (PromiseStateException_t52911F6A2FC32A315E8756D6F9A84D7677D03710* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		// : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		PromiseException__ctor_mB2C16AE66329DF694119F386C897F586F72F96F1(__this, L_0, L_1, NULL);
		// { }
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
// System.Collections.IEnumerator Proyecto26.HttpBase::CreateRequestAndRetry(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpBase_CreateRequestAndRetry_m1FA979805F69820E822F747C80FB412329ECE2CD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* L_0 = (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F*)il2cpp_codegen_object_new(U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreateRequestAndRetryU3Ed__1__ctor_mB1EB168AD8F16B094B7B642D236ED8CFD4B21D93(L_0, 0, NULL);
		U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* L_1 = L_0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_2 = ___options0;
		NullCheck(L_1);
		L_1->___options_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___options_2), (void*)L_2);
		U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* L_3 = L_1;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
	}
}
// UnityEngine.Networking.UnityWebRequest Proyecto26.HttpBase::CreateRequest(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* HttpBase_CreateRequest_mE46933690ED952E4B217266D8624D1EA206DB0FB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF31BF35C028888F3D770B43EAC2CCB0DD92251A9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var url = options.Uri.BuildUrl(options.Params);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RequestHelper_get_Uri_m4BBB86E86D0B704C7EE5DBE2D36EC7D1D925D245(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_2 = ___options0;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = RequestHelper_get_Params_m52A62A6900B4D659B401879E1B9AAE4A7E6D1123(L_2, NULL);
		String_t* L_4;
		L_4 = Extensions_BuildUrl_m645B675043A508CFFA2E02A854B447582039CEA6(L_1, L_3, NULL);
		V_0 = L_4;
		// DebugLog(options.EnableDebug, string.Format("RestClient - Request\nUrl: {0}", url), false);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_5 = ___options0;
		NullCheck(L_5);
		bool L_6;
		L_6 = RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1(L_5, NULL);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF31BF35C028888F3D770B43EAC2CCB0DD92251A9, L_7, NULL);
		HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444(L_6, L_8, (bool)0, NULL);
		// if (options.FormData is WWWForm && options.Method == UnityWebRequest.kHttpVerbPOST)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_9 = ___options0;
		NullCheck(L_9);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_10;
		L_10 = RequestHelper_get_FormData_mFCABF1F3476D7580A9AAB63C6B010C1114DD6947(L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_11 = ___options0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		G_B3_0 = ((int32_t)(L_13));
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 0;
	}

IL_0046:
	{
		V_1 = (bool)G_B3_0;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// return UnityWebRequest.Post(url, options.FormData);
		String_t* L_15 = V_0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_16 = ___options0;
		NullCheck(L_16);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_17;
		L_17 = RequestHelper_get_FormData_mFCABF1F3476D7580A9AAB63C6B010C1114DD6947(L_16, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18;
		L_18 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_15, L_17, NULL);
		V_2 = L_18;
		goto IL_006a;
	}

IL_005a:
	{
		// return new UnityWebRequest(url, options.Method);
		String_t* L_19 = V_0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_20 = ___options0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719(L_20, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_22, L_19, L_21, NULL);
		V_2 = L_22;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = V_2;
		return L_23;
	}
}
// Proyecto26.RequestException Proyecto26.HttpBase::CreateException(Proyecto26.RequestHelper,UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* HttpBase_CreateException_m068524885278C8CEA04B10740715A7FA6246B4C3 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B25C0161B5E0E540CE7683B0B739432CCA04848);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* V_2 = NULL;
	int64_t G_B2_0 = 0;
	bool G_B2_1 = false;
	bool G_B2_2 = false;
	String_t* G_B2_3 = NULL;
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* G_B2_4 = NULL;
	int64_t G_B1_0 = 0;
	bool G_B1_1 = false;
	bool G_B1_2 = false;
	String_t* G_B1_3 = NULL;
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int64_t G_B3_1 = 0;
	bool G_B3_2 = false;
	bool G_B3_3 = false;
	String_t* G_B3_4 = NULL;
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* G_B3_5 = NULL;
	{
		// IsNetworkError = (request.result == UnityWebRequest.Result.ConnectionError);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// IsHttpError = (request.result == UnityWebRequest.Result.ProtocolError);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___request1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		// return new RequestException(options, request.error, IsHttpError, IsNetworkError, request.responseCode, options.ParseResponseBody ? request.downloadHandler.text : "body not parsed");
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_4 = ___options0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___request1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_5, NULL);
		bool L_7 = V_1;
		bool L_8 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = ___request1;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_9, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_11 = ___options0;
		NullCheck(L_11);
		bool L_12;
		L_12 = RequestHelper_get_ParseResponseBody_m87AE3F014C05690D1CC4C6D5204DCA44D386D591(L_11, NULL);
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_7;
		G_B1_3 = L_6;
		G_B1_4 = L_4;
		if (L_12)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_7;
			G_B2_3 = L_6;
			G_B2_4 = L_4;
			goto IL_0033;
		}
	}
	{
		G_B3_0 = _stringLiteral8B25C0161B5E0E540CE7683B0B739432CCA04848;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_003e;
	}

IL_0033:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = ___request1;
		NullCheck(L_13);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
		L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_003e:
	{
		RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_16 = (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9*)il2cpp_codegen_object_new(RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		RequestException__ctor_mEE6C35547B7E1F32B9E8A4A1270323E36ECDE869(L_16, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		V_2 = L_16;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_17 = V_2;
		return L_17;
	}
}
// System.Void Proyecto26.HttpBase::DebugLog(System.Boolean,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444 (bool ___debugEnabled0, RuntimeObject* ___message1, bool ___isError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (debugEnabled)
		bool L_0 = ___debugEnabled0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (isError)
		bool L_2 = ___isError2;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogError(message);
		RuntimeObject* L_4 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		goto IL_001c;
	}

IL_0015:
	{
		// Debug.Log(message);
		RuntimeObject* L_5 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_001c:
	{
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Proyecto26.HttpBase::DefaultUnityWebRequest(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpBase_DefaultUnityWebRequest_m29B82281D1D77B29A1B18C05D92042DDD9CB933F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return CreateRequestAndRetry(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_1 = ___callback1;
		RuntimeObject* L_2;
		L_2 = HttpBase_CreateRequestAndRetry_m1FA979805F69820E822F747C80FB412329ECE2CD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_3 = V_0;
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
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1__ctor_mB1EB168AD8F16B094B7B642D236ED8CFD4B21D93 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1_System_IDisposable_Dispose_m5EDA8599DA335CB6537EC9926059B2B1F2E61396 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))) > ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0022;
	}

IL_0016:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				U3CCreateRequestAndRetryU3Ed__1_U3CU3Em__Finally1_m67AA93F9FE785A41D82008F53D548A3484C6C0B3(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0020;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0020:
	{
		goto IL_0022;
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateRequestAndRetryU3Ed__1_MoveNext_m339EB2C40A99750F58696026014E81E2A1926A40 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral188048DA32FB97846314CC282D11D1EFAD0462E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A0CBC38DFAC643D1DEBBD6388D4EA7FE4F9B4E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B25C0161B5E0E540CE7683B0B739432CCA04848);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B19_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B19_2 = NULL;
	String_t* G_B19_3 = NULL;
	bool G_B19_4 = false;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B18_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	bool G_B18_4 = false;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B20_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B20_3 = NULL;
	String_t* G_B20_4 = NULL;
	bool G_B20_5 = false;
	int32_t G_B25_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0381:
			{// begin fault (depth: 1)
				U3CCreateRequestAndRetryU3Ed__1_System_IDisposable_Dispose_m5EDA8599DA335CB6537EC9926059B2B1F2E61396(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_001f_1;
					}
					case 1:
					{
						goto IL_0021_1;
					}
					case 2:
					{
						goto IL_0026_1;
					}
					case 3:
					{
						goto IL_002b_1;
					}
				}
			}
			{
				goto IL_0030_1;
			}

IL_001f_1:
			{
				goto IL_0037_1;
			}

IL_0021_1:
			{
				goto IL_00b9_1;
			}

IL_0026_1:
			{
				goto IL_010f_1;
			}

IL_002b_1:
			{
				goto IL_029c_1;
			}

IL_0030_1:
			{
				V_0 = (bool)0;
				goto IL_0389;
			}

IL_0037_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var retries = 0;
				__this->___U3CretriesU3E5__1_4 = 0;
			}

IL_0046_1:
			{
				// using (var request = CreateRequest(options))
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_2 = __this->___options_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3;
				L_3 = HttpBase_CreateRequest_mE46933690ED952E4B217266D8624D1EA206DB0FB(L_2, NULL);
				__this->___U3CrequestU3E5__2_5 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_5), (void*)L_3);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// IsNetworkError = (request.result == UnityWebRequest.Result.ConnectionError);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___U3CrequestU3E5__2_5;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_4, NULL);
				__this->___U3CIsNetworkErrorU3E5__3_6 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
				// var sendRequest = request.SendWebRequestWithOptions(options);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__2_5;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_7 = __this->___options_2;
				AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8;
				L_8 = Common_SendWebRequestWithOptions_mDB409523D4A032BC6BF203E6CCB339589E141E45(L_6, L_7, NULL);
				__this->___U3CsendRequestU3E5__4_7 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsendRequestU3E5__4_7), (void*)L_8);
				// if (options.ProgressCallback == null)
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_9 = __this->___options_2;
				NullCheck(L_9);
				Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10;
				L_10 = RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2(L_9, NULL);
				V_2 = (bool)((((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_00c4_1;
				}
			}
			{
				// yield return sendRequest;
				AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_12 = __this->___U3CsendRequestU3E5__4_7;
				__this->___U3CU3E2__current_1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0389;
			}

IL_00b9_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0141_1;
			}

IL_00c4_1:
			{
				// options.ProgressCallback(0);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_13 = __this->___options_2;
				NullCheck(L_13);
				Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_14;
				L_14 = RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2(L_13, NULL);
				NullCheck(L_14);
				Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_14, (0.0f), NULL);
				goto IL_0118_1;
			}

IL_00dd_1:
			{
				// options.ProgressCallback(sendRequest.progress);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_15 = __this->___options_2;
				NullCheck(L_15);
				Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_16;
				L_16 = RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2(L_15, NULL);
				AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_17 = __this->___U3CsendRequestU3E5__4_7;
				NullCheck(L_17);
				float L_18;
				L_18 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_17, NULL);
				NullCheck(L_16);
				Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_16, L_18, NULL);
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0389;
			}

IL_010f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0118_1:
			{
				// while (!sendRequest.isDone)
				AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_19 = __this->___U3CsendRequestU3E5__4_7;
				NullCheck(L_19);
				bool L_20;
				L_20 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_19, NULL);
				V_3 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
				bool L_21 = V_3;
				if (L_21)
				{
					goto IL_00dd_1;
				}
			}
			{
				// options.ProgressCallback(1);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_22 = __this->___options_2;
				NullCheck(L_22);
				Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_23;
				L_23 = RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2(L_22, NULL);
				NullCheck(L_23);
				Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_23, (1.0f), NULL);
			}

IL_0141_1:
			{
				// var response = request.CreateWebResponse();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CrequestU3E5__2_5;
				ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_25;
				L_25 = Extensions_CreateWebResponse_mEFA909BB0D920047E6999C47B69DD35214887ABF(L_24, NULL);
				__this->___U3CresponseU3E5__5_8 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__5_8), (void*)L_25);
				// if (request.IsValidRequest(options))
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CrequestU3E5__2_5;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_27 = __this->___options_2;
				bool L_28;
				L_28 = Extensions_IsValidRequest_m5593CAE9FE30B954ED2E03751FB3DC1B81EA126A(L_26, L_27, NULL);
				V_4 = L_28;
				bool L_29 = V_4;
				if (!L_29)
				{
					goto IL_01f8_1;
				}
			}
			{
				// DebugLog(options.EnableDebug, string.Format("RestClient - Response\nUrl: {0}\nMethod: {1}\nStatus: {2}\nResponse: {3}", options.Uri, options.Method, request.responseCode, options.ParseResponseBody ? response.Text : "body not parsed"), false);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_30 = __this->___options_2;
				NullCheck(L_30);
				bool L_31;
				L_31 = RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1(L_30, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_34 = __this->___options_2;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = RequestHelper_get_Uri_m4BBB86E86D0B704C7EE5DBE2D36EC7D1D925D245(L_34, NULL);
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_35);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_33;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_37 = __this->___options_2;
				NullCheck(L_37);
				String_t* L_38;
				L_38 = RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719(L_37, NULL);
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, L_38);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_38);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_36;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_40 = __this->___U3CrequestU3E5__2_5;
				NullCheck(L_40);
				int64_t L_41;
				L_41 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_40, NULL);
				int64_t L_42 = L_41;
				RuntimeObject* L_43 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_42);
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_43);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_43);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_39;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_45 = __this->___options_2;
				NullCheck(L_45);
				bool L_46;
				L_46 = RequestHelper_get_ParseResponseBody_m87AE3F014C05690D1CC4C6D5204DCA44D386D591(L_45, NULL);
				G_B18_0 = 3;
				G_B18_1 = L_44;
				G_B18_2 = L_44;
				G_B18_3 = _stringLiteral188048DA32FB97846314CC282D11D1EFAD0462E2;
				G_B18_4 = L_31;
				if (L_46)
				{
					G_B19_0 = 3;
					G_B19_1 = L_44;
					G_B19_2 = L_44;
					G_B19_3 = _stringLiteral188048DA32FB97846314CC282D11D1EFAD0462E2;
					G_B19_4 = L_31;
					goto IL_01c8_1;
				}
			}
			{
				G_B20_0 = _stringLiteral8B25C0161B5E0E540CE7683B0B739432CCA04848;
				G_B20_1 = G_B18_0;
				G_B20_2 = G_B18_1;
				G_B20_3 = G_B18_2;
				G_B20_4 = G_B18_3;
				G_B20_5 = G_B18_4;
				goto IL_01d3_1;
			}

IL_01c8_1:
			{
				ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_47 = __this->___U3CresponseU3E5__5_8;
				NullCheck(L_47);
				String_t* L_48;
				L_48 = ResponseHelper_get_Text_m4529907A41F3E760A73564C9C189AC97F320F822(L_47, NULL);
				G_B20_0 = L_48;
				G_B20_1 = G_B19_0;
				G_B20_2 = G_B19_1;
				G_B20_3 = G_B19_2;
				G_B20_4 = G_B19_3;
				G_B20_5 = G_B19_4;
			}

IL_01d3_1:
			{
				NullCheck(G_B20_2);
				ArrayElementTypeCheck (G_B20_2, G_B20_0);
				(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (RuntimeObject*)G_B20_0);
				String_t* L_49;
				L_49 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B20_4, G_B20_3, NULL);
				HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444(G_B20_5, L_49, (bool)0, NULL);
				// callback(null, response);
				Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_50 = __this->___callback_3;
				ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_51 = __this->___U3CresponseU3E5__5_8;
				NullCheck(L_50);
				Action_2_Invoke_mC4A878B0D6C4C4ED0BCA68FD2505F1A2726431BF_inline(L_50, (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9*)NULL, L_51, NULL);
				// break;
				goto IL_034d_1;
			}

IL_01f8_1:
			{
				// else if (!options.IsAborted && retries < options.Retries && (!options.RetryCallbackOnlyOnNetworkErrors || IsNetworkError))
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_52 = __this->___options_2;
				NullCheck(L_52);
				bool L_53;
				L_53 = RequestHelper_get_IsAborted_m5B21E1C18BD58CCDE57D63D2BD61537C40735129(L_52, NULL);
				if (L_53)
				{
					goto IL_022f_1;
				}
			}
			{
				int32_t L_54 = __this->___U3CretriesU3E5__1_4;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_55 = __this->___options_2;
				NullCheck(L_55);
				int32_t L_56;
				L_56 = RequestHelper_get_Retries_m9BF4A1F6FA0020CB3CCF729FE41650C13769E83E(L_55, NULL);
				if ((((int32_t)L_54) >= ((int32_t)L_56)))
				{
					goto IL_022f_1;
				}
			}
			{
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_57 = __this->___options_2;
				NullCheck(L_57);
				bool L_58;
				L_58 = RequestHelper_get_RetryCallbackOnlyOnNetworkErrors_m345837ED1A7C7DA8C84C363522418B704965423A(L_57, NULL);
				bool L_59 = __this->___U3CIsNetworkErrorU3E5__3_6;
				G_B25_0 = ((int32_t)(((((int32_t)L_58) == ((int32_t)0))? 1 : 0)|(int32_t)L_59));
				goto IL_0230_1;
			}

IL_022f_1:
			{
				G_B25_0 = 0;
			}

IL_0230_1:
			{
				V_5 = (bool)G_B25_0;
				bool L_60 = V_5;
				if (!L_60)
				{
					goto IL_02eb_1;
				}
			}
			{
				// if (options.RetryCallback != null)
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_61 = __this->___options_2;
				NullCheck(L_61);
				Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* L_62;
				L_62 = RequestHelper_get_RetryCallback_m8958FBD9B8E6A0852AFC98537FF1A2AB40273461(L_61, NULL);
				V_6 = (bool)((!(((RuntimeObject*)(Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A*)L_62) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_63 = V_6;
				if (!L_63)
				{
					goto IL_0278_1;
				}
			}
			{
				// options.RetryCallback(CreateException(options, request), retries);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_64 = __this->___options_2;
				NullCheck(L_64);
				Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* L_65;
				L_65 = RequestHelper_get_RetryCallback_m8958FBD9B8E6A0852AFC98537FF1A2AB40273461(L_64, NULL);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_66 = __this->___options_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_67 = __this->___U3CrequestU3E5__2_5;
				RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_68;
				L_68 = HttpBase_CreateException_m068524885278C8CEA04B10740715A7FA6246B4C3(L_66, L_67, NULL);
				int32_t L_69 = __this->___U3CretriesU3E5__1_4;
				NullCheck(L_65);
				Action_2_Invoke_m32ED1787501742DAF3F58DEE071F6B1CA6E81043_inline(L_65, L_68, L_69, NULL);
			}

IL_0278_1:
			{
				// yield return new WaitForSeconds(options.RetrySecondsDelay);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_70 = __this->___options_2;
				NullCheck(L_70);
				float L_71;
				L_71 = RequestHelper_get_RetrySecondsDelay_m234E28296D60688F538185FD3E11466B67668EB7(L_70, NULL);
				WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_72 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
				NullCheck(L_72);
				WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_72, L_71, NULL);
				__this->___U3CU3E2__current_1 = L_72;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_72);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_0389;
			}

IL_029c_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// retries++;
				int32_t L_73 = __this->___U3CretriesU3E5__1_4;
				V_7 = L_73;
				int32_t L_74 = V_7;
				__this->___U3CretriesU3E5__1_4 = ((int32_t)il2cpp_codegen_add(L_74, 1));
				// DebugLog(options.EnableDebug, string.Format("RestClient - Retry Request\nUrl: {0}\nMethod: {1}", options.Uri, options.Method), false);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_75 = __this->___options_2;
				NullCheck(L_75);
				bool L_76;
				L_76 = RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1(L_75, NULL);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_77 = __this->___options_2;
				NullCheck(L_77);
				String_t* L_78;
				L_78 = RequestHelper_get_Uri_m4BBB86E86D0B704C7EE5DBE2D36EC7D1D925D245(L_77, NULL);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_79 = __this->___options_2;
				NullCheck(L_79);
				String_t* L_80;
				L_80 = RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719(L_79, NULL);
				String_t* L_81;
				L_81 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral4A0CBC38DFAC643D1DEBBD6388D4EA7FE4F9B4E8, L_78, L_80, NULL);
				HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444(L_76, L_81, (bool)0, NULL);
				goto IL_0335_1;
			}

IL_02eb_1:
			{
				// var err = CreateException(options, request);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_82 = __this->___options_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_83 = __this->___U3CrequestU3E5__2_5;
				RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_84;
				L_84 = HttpBase_CreateException_m068524885278C8CEA04B10740715A7FA6246B4C3(L_82, L_83, NULL);
				__this->___U3CerrU3E5__6_9 = L_84;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrU3E5__6_9), (void*)L_84);
				// DebugLog(options.EnableDebug, err, true);
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_85 = __this->___options_2;
				NullCheck(L_85);
				bool L_86;
				L_86 = RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1(L_85, NULL);
				RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_87 = __this->___U3CerrU3E5__6_9;
				HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444(L_86, L_87, (bool)1, NULL);
				// callback(err, response);
				Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_88 = __this->___callback_3;
				RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* L_89 = __this->___U3CerrU3E5__6_9;
				ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_90 = __this->___U3CresponseU3E5__5_8;
				NullCheck(L_88);
				Action_2_Invoke_mC4A878B0D6C4C4ED0BCA68FD2505F1A2726431BF_inline(L_88, L_89, L_90, NULL);
				// break;
				goto IL_034d_1;
			}

IL_0335_1:
			{
				__this->___U3CsendRequestU3E5__4_7 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsendRequestU3E5__4_7), (void*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL);
				__this->___U3CresponseU3E5__5_8 = (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__5_8), (void*)(ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C*)NULL);
				U3CCreateRequestAndRetryU3Ed__1_U3CU3Em__Finally1_m67AA93F9FE785A41D82008F53D548A3484C6C0B3(__this, NULL);
				goto IL_0356_1;
			}

IL_034d_1:
			{
				U3CCreateRequestAndRetryU3Ed__1_U3CU3Em__Finally1_m67AA93F9FE785A41D82008F53D548A3484C6C0B3(__this, NULL);
				goto IL_037d_1;
			}

IL_0356_1:
			{
				__this->___U3CrequestU3E5__2_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_5), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// while (retries <= options.Retries);
				int32_t L_91 = __this->___U3CretriesU3E5__1_4;
				RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_92 = __this->___options_2;
				NullCheck(L_92);
				int32_t L_93;
				L_93 = RequestHelper_get_Retries_m9BF4A1F6FA0020CB3CCF729FE41650C13769E83E(L_92, NULL);
				V_8 = (bool)((((int32_t)((((int32_t)L_91) > ((int32_t)L_93))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_94 = V_8;
				if (L_94)
				{
					goto IL_0046_1;
				}
			}

IL_037d_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0389;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0389:
	{
		bool L_95 = V_0;
		return L_95;
	}
}
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1_U3CU3Em__Finally1_m67AA93F9FE785A41D82008F53D548A3484C6C0B3 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__2_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__2_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateRequestAndRetryU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m97E66B8BAD956883BCC8131DF9A54557FADB15AF (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateRequestAndRetryU3Ed__1_System_Collections_IEnumerator_Reset_m13FA4CC32B13471431FC86EC0FB1FCA2E8BD6AA4 (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateRequestAndRetryU3Ed__1_System_Collections_IEnumerator_Reset_m13FA4CC32B13471431FC86EC0FB1FCA2E8BD6AA4_RuntimeMethod_var)));
	}
}
// System.Object Proyecto26.HttpBase/<CreateRequestAndRetry>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateRequestAndRetryU3Ed__1_System_Collections_IEnumerator_get_Current_m46D17F003FC5CD9211994B23675A58EB54AB3F1F (U3CCreateRequestAndRetryU3Ed__1_t9B8923DD2F407F085CCBC41DCEB4D819FCD5680F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// Proyecto26.RequestHelper Proyecto26.RequestException::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* RequestException_get_Request_m3E619CA5E6DF922C28E73E0B52AFA0A42DD527A1 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* V_0 = NULL;
	{
		// get { return _request; }
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = __this->____request_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _request; }
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_Request(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_Request_m4A39C732359927451AF59D654313E73727FAA113 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { _request = value; }
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___value0;
		__this->____request_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_18), (void*)L_0);
		// private set { _request = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestException::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestException_get_IsHttpError_m2FBBBB7756A22FF573189DCD20590F773436AF38 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isHttpError; }
		bool L_0 = __this->____isHttpError_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isHttpError; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_IsHttpError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_IsHttpError_m0BAA2B0BE9794C73D99DE699E643BF53E9074A9B (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { _isHttpError = value; }
		bool L_0 = ___value0;
		__this->____isHttpError_19 = L_0;
		// private set { _isHttpError = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestException::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestException_get_IsNetworkError_m1E99469DB868249A682360D6812AF364F69B43B8 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isNetworkError; }
		bool L_0 = __this->____isNetworkError_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isNetworkError; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_IsNetworkError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_IsNetworkError_mD03F7650C1DEF980ED2EAD76E91D660D34654995 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set { _isNetworkError = value; }
		bool L_0 = ___value0;
		__this->____isNetworkError_20 = L_0;
		// private set { _isNetworkError = value; }
		return;
	}
}
// System.Int64 Proyecto26.RequestException::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RequestException_get_StatusCode_m095758F8685082FDE8835A82E94BF4EE1E9D391F (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return _statusCode; }
		int64_t L_0 = __this->____statusCode_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _statusCode; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_StatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_StatusCode_mC6924445A9BFA983A0C44D9F90D029760CEA2542 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set { _statusCode = value; }
		int64_t L_0 = ___value0;
		__this->____statusCode_21 = L_0;
		// private set { _statusCode = value; }
		return;
	}
}
// System.String Proyecto26.RequestException::get_ServerMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestException_get_ServerMessage_m495637BFD1FA10496F20C6AD90931AB70BE9DDE5 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _serverMessage; }
		String_t* L_0 = __this->____serverMessage_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _serverMessage; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_ServerMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_ServerMessage_m046F5AF5B54CF7BB2A627F056133571B7964F933 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _serverMessage = value; }
		String_t* L_0 = ___value0;
		__this->____serverMessage_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serverMessage_22), (void*)L_0);
		// set { _serverMessage = value; }
		return;
	}
}
// System.String Proyecto26.RequestException::get_Response()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestException_get_Response_m7AA3200ADA93B624DCC0768D324204F5D7171D92 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _response; }
		String_t* L_0 = __this->____response_23;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _response; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestException::set_Response(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException_set_Response_m3650ABABE07676D1D97D845AA42F681113549F04 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _response = value; }
		String_t* L_0 = ___value0;
		__this->____response_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____response_23), (void*)L_0);
		// set { _response = value; }
		return;
	}
}
// System.Void Proyecto26.RequestException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException__ctor_mC77265431C17D4AC0450CEA340469690794E9F2C (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RequestException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public RequestException() { }
		return;
	}
}
// System.Void Proyecto26.RequestException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException__ctor_m56382201F8D03DC7AF75DC54776681CEAC3639BA (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RequestException(string message): base(message) { }
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public RequestException(string message): base(message) { }
		return;
	}
}
// System.Void Proyecto26.RequestException::.ctor(Proyecto26.RequestHelper,System.String,System.Boolean,System.Boolean,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestException__ctor_mEE6C35547B7E1F32B9E8A4A1270323E36ECDE869 (RequestException_tB79F2199F4A33F1A4334D5AC169AA874B46F80A9* __this, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___request0, String_t* ___message1, bool ___isHttpError2, bool ___isNetworkError3, int64_t ___statusCode4, String_t* ___response5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RequestException(RequestHelper request, string message, bool isHttpError, bool isNetworkError, long statusCode, string response) : base(message) {
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// _request = request;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___request0;
		__this->____request_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_18), (void*)L_1);
		// _isHttpError = isHttpError;
		bool L_2 = ___isHttpError2;
		__this->____isHttpError_19 = L_2;
		// _isNetworkError = isNetworkError;
		bool L_3 = ___isNetworkError3;
		__this->____isNetworkError_20 = L_3;
		// _statusCode = statusCode;
		int64_t L_4 = ___statusCode4;
		__this->____statusCode_21 = L_4;
		// _response = response;
		String_t* L_5 = ___response5;
		__this->____response_23 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____response_23), (void*)L_5);
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
// System.String Proyecto26.RequestHelper::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_Uri_m4BBB86E86D0B704C7EE5DBE2D36EC7D1D925D245 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _uri; }
		String_t* L_0 = __this->____uri_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _uri; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_Uri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _uri = value; }
		String_t* L_0 = ___value0;
		__this->____uri_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uri_0), (void*)L_0);
		// set { _uri = value; }
		return;
	}
}
// System.String Proyecto26.RequestHelper::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_Method_mD86FE6C056CAA5BFA4C768D5CFD6B1AC2D924719 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _method; }
		String_t* L_0 = __this->____method_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _method; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _method = value; }
		String_t* L_0 = ___value0;
		__this->____method_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____method_1), (void*)L_0);
		// set { _method = value; }
		return;
	}
}
// System.Object Proyecto26.RequestHelper::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestHelper_get_Body_m727A2AEE626E7FC01DF0A978441C001EB34EBCBB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return _body; }
		RuntimeObject* L_0 = __this->____body_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _body; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_Body(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _body = value; }
		RuntimeObject* L_0 = ___value0;
		__this->____body_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_2), (void*)L_0);
		// set { _body = value; }
		return;
	}
}
// System.String Proyecto26.RequestHelper::get_BodyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_BodyString_m9F94287AC2B538F2A7DAEC148696D217EFBF8E53 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _bodyString; }
		String_t* L_0 = __this->____bodyString_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _bodyString; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_BodyString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _bodyString = value; }
		String_t* L_0 = ___value0;
		__this->____bodyString_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyString_3), (void*)L_0);
		// set { _bodyString = value; }
		return;
	}
}
// System.Byte[] Proyecto26.RequestHelper::get_BodyRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RequestHelper_get_BodyRaw_m819005CD0C1E7634FCF67CA97B1F8D5D06A1EAFD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return _bodyRaw; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____bodyRaw_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _bodyRaw; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_BodyRaw(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_BodyRaw_mF989309E4B72DC5FB7AA0B0918F902CDCFC6C56D (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _bodyRaw = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->____bodyRaw_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyRaw_4), (void*)L_0);
		// set { _bodyRaw = value; }
		return;
	}
}
// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RequestHelper_get_Timeout_m2B636E856FDDFD91989839B407A414D9932312F0 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return _timeout; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____timeout_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _timeout; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_Timeout(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Timeout_m9F4273E021F533CE48552400B15F603D8E4C50CE (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// set { _timeout = value; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->____timeout_5 = L_0;
		// set { _timeout = value; }
		return;
	}
}
// System.String Proyecto26.RequestHelper::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_get_ContentType_m1DE79D1DB56E8D9E796B0E9E60ED993AB94715AB (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _contentType; }
		String_t* L_0 = __this->____contentType_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _contentType; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_ContentType_m2ECE34056F84BBE96CD18F18A7B1CFD03942A66E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _contentType = value; }
		String_t* L_0 = ___value0;
		__this->____contentType_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____contentType_6), (void*)L_0);
		// set { _contentType = value; }
		return;
	}
}
// System.Int32 Proyecto26.RequestHelper::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequestHelper_get_Retries_m9BF4A1F6FA0020CB3CCF729FE41650C13769E83E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _retries; }
		int32_t L_0 = __this->____retries_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _retries; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_Retries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Retries_m890B434A994EFEABB0CD0680B8E0377C5B5B5318 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { _retries = value; }
		int32_t L_0 = ___value0;
		__this->____retries_7 = L_0;
		// set { _retries = value; }
		return;
	}
}
// System.Single Proyecto26.RequestHelper::get_RetrySecondsDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RequestHelper_get_RetrySecondsDelay_m234E28296D60688F538185FD3E11466B67668EB7 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return _retrySecondsDelay; }
		float L_0 = __this->____retrySecondsDelay_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _retrySecondsDelay; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_RetrySecondsDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_RetrySecondsDelay_m17A1172B216D0985B7D63832F54C0B8AF37A2090 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _retrySecondsDelay = value; }
		float L_0 = ___value0;
		__this->____retrySecondsDelay_8 = L_0;
		// set { _retrySecondsDelay = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_RetryCallbackOnlyOnNetworkErrors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_RetryCallbackOnlyOnNetworkErrors_m345837ED1A7C7DA8C84C363522418B704965423A (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _retryCallbackOnlyOnNetworkErrors; }
		bool L_0 = __this->____retryCallbackOnlyOnNetworkErrors_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _retryCallbackOnlyOnNetworkErrors; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_RetryCallbackOnlyOnNetworkErrors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_RetryCallbackOnlyOnNetworkErrors_mDEF28C9504B4F402EB0ECCBC74DA6E568997D85A (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _retryCallbackOnlyOnNetworkErrors = value; }
		bool L_0 = ___value0;
		__this->____retryCallbackOnlyOnNetworkErrors_9 = L_0;
		// set { _retryCallbackOnlyOnNetworkErrors = value; }
		return;
	}
}
// System.Action`2<Proyecto26.RequestException,System.Int32> Proyecto26.RequestHelper::get_RetryCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* RequestHelper_get_RetryCallback_m8958FBD9B8E6A0852AFC98537FF1A2AB40273461 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* V_0 = NULL;
	{
		// get { return _retryCallback; }
		Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* L_0 = __this->____retryCallback_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _retryCallback; }
		Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_RetryCallback(System.Action`2<Proyecto26.RequestException,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_RetryCallback_mB09B3A1DED93C0565A309D708FE77A84085F89DD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _retryCallback = value; }
		Action_2_tA9194427C1E04F3B41D0E3650EFA97CA3322D66A* L_0 = ___value0;
		__this->____retryCallback_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____retryCallback_10), (void*)L_0);
		// set { _retryCallback = value; }
		return;
	}
}
// System.Action`1<System.Single> Proyecto26.RequestHelper::get_ProgressCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* RequestHelper_get_ProgressCallback_m914F4F08FFB614CF83D64A5FF4F0164539A11CB2 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	{
		// get { return _progressCallback; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->____progressCallback_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _progressCallback; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_ProgressCallback(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_ProgressCallback_m58CF4252FDE248CE2F7862B345B6C55F002B50C3 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _progressCallback = value; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___value0;
		__this->____progressCallback_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____progressCallback_11), (void*)L_0);
		// set { _progressCallback = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_EnableDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _enableDebug; }
		bool L_0 = __this->____enableDebug_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _enableDebug; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_EnableDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_EnableDebug_mCB357C37BA62BF8103C6508A6B1743F2D83A9C3C (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _enableDebug = value; }
		bool L_0 = ___value0;
		__this->____enableDebug_12 = L_0;
		// set { _enableDebug = value; }
		return;
	}
}
// System.Nullable`1<System.Boolean> Proyecto26.RequestHelper::get_UseHttpContinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 RequestHelper_get_UseHttpContinue_m3637AB717925A6979C5B34080D032E2FFDC5FD2F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return _useHttpContinue; }
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->____useHttpContinue_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _useHttpContinue; }
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_UseHttpContinue(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_UseHttpContinue_mB4AF296D392D92304FA264EED61600095C9E73EE (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		// set { _useHttpContinue = value; }
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->____useHttpContinue_13 = L_0;
		// set { _useHttpContinue = value; }
		return;
	}
}
// System.Nullable`1<System.Int32> Proyecto26.RequestHelper::get_RedirectLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RequestHelper_get_RedirectLimit_m12FA845010695EEE4A09DD9A6F76DE8471A862D4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return _redirectLimit; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____redirectLimit_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _redirectLimit; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_RedirectLimit(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_RedirectLimit_m86B5BBC876F738C1BE292CD062077D24C00AEA9F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// set { _redirectLimit = value; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->____redirectLimit_14 = L_0;
		// set { _redirectLimit = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_IgnoreHttpException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_IgnoreHttpException_m62F4E6F0A29DA302D61746DD6AAF49EB657ACF50 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _ignoreHttpException; }
		bool L_0 = __this->____ignoreHttpException_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _ignoreHttpException; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_IgnoreHttpException(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_IgnoreHttpException_mE9395D343CF98123B065E9ACF06C7FA1100AC075 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _ignoreHttpException = value; }
		bool L_0 = ___value0;
		__this->____ignoreHttpException_15 = L_0;
		// set { _ignoreHttpException = value; }
		return;
	}
}
// UnityEngine.WWWForm Proyecto26.RequestHelper::get_FormData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* RequestHelper_get_FormData_mFCABF1F3476D7580A9AAB63C6B010C1114DD6947 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_0 = NULL;
	{
		// get { return _formData; }
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = __this->____formData_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _formData; }
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_FormData(UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_FormData_m548CAB9872FFD2A8027994B8D95506B79F06115B (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _formData = value; }
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = ___value0;
		__this->____formData_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formData_16), (void*)L_0);
		// set { _formData = value; }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_SimpleForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_SimpleForm_m15B81EB567521859E32A255F893E86F798C8B164 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// get { return _simpleForm; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____simpleForm_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _simpleForm; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_SimpleForm(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_SimpleForm_m9FF72C01F325AF2A39944732B2F7B5D5B8B8C7B1 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _simpleForm = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->____simpleForm_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____simpleForm_17), (void*)L_0);
		// set { _simpleForm = value; }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> Proyecto26.RequestHelper::get_FormSections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* RequestHelper_get_FormSections_m43721DC6C2EBCC4BB13FAE074739AD26C8583F97 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* V_0 = NULL;
	{
		// get { return _formSections; }
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_0 = __this->____formSections_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _formSections; }
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_FormSections(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_FormSections_mD874EEC922A94AC08D0FAC879652033B54C9424D (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _formSections = value; }
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_0 = ___value0;
		__this->____formSections_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formSections_18), (void*)L_0);
		// set { _formSections = value; }
		return;
	}
}
// UnityEngine.Networking.CertificateHandler Proyecto26.RequestHelper::get_CertificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* RequestHelper_get_CertificateHandler_m321AC0450D35604BA128C3288D044FE6884ED265 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* V_0 = NULL;
	{
		// get { return _certificateHandler; }
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_0 = __this->____certificateHandler_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _certificateHandler; }
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_CertificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_CertificateHandler_m2D81B9BEECF8BFA4F18047F08EE7C256E1B21117 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _certificateHandler = value; }
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_0 = ___value0;
		__this->____certificateHandler_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____certificateHandler_19), (void*)L_0);
		// set { _certificateHandler = value; }
		return;
	}
}
// UnityEngine.Networking.UploadHandler Proyecto26.RequestHelper::get_UploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* RequestHelper_get_UploadHandler_m67989620874FA461E24832C70D639EC15147AE3F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_0 = NULL;
	{
		// get { return _uploadHandler; }
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_0 = __this->____uploadHandler_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _uploadHandler; }
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_UploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_UploadHandler_mCFF33186F8DCA2178A4AA54EC97B6823DB6350A4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _uploadHandler = value; }
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_0 = ___value0;
		__this->____uploadHandler_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uploadHandler_20), (void*)L_0);
		// set { _uploadHandler = value; }
		return;
	}
}
// UnityEngine.Networking.DownloadHandler Proyecto26.RequestHelper::get_DownloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* RequestHelper_get_DownloadHandler_m576BE2E2C2E06E5B1831D089223FDD2C399D08E4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	{
		// get { return _downloadHandler; }
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_0 = __this->____downloadHandler_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _downloadHandler; }
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_DownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_DownloadHandler_mF3F1FAFD4D003B5F5718979222F871F32DC636C6 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _downloadHandler = value; }
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_0 = ___value0;
		__this->____downloadHandler_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____downloadHandler_21), (void*)L_0);
		// set { _downloadHandler = value; }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_Headers_mF06E05AD5EE832BFE56704B7A546B0C7E25D4B79 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// if (_headers == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____headers_22;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____headers_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____headers_22), (void*)L_2);
	}

IL_001b:
	{
		// return _headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = __this->____headers_22;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_1;
		return L_4;
	}
}
// System.Void Proyecto26.RequestHelper::set_Headers(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Headers_mC80E0F973C211BD73B04AECB46205766BA9F6409 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _headers = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->____headers_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____headers_22), (void*)L_0);
		// set { _headers = value; }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RequestHelper::get_Params()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RequestHelper_get_Params_m52A62A6900B4D659B401879E1B9AAE4A7E6D1123 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// if (_params == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____params_23;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _params = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____params_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____params_23), (void*)L_2);
	}

IL_001b:
	{
		// return _params;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = __this->____params_23;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_1;
		return L_4;
	}
}
// System.Void Proyecto26.RequestHelper::set_Params(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Params_m3F4126B55624310028A0C42D490E10F54A4750AF (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _params = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->____params_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____params_23), (void*)L_0);
		// set { _params = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_ParseResponseBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_ParseResponseBody_m87AE3F014C05690D1CC4C6D5204DCA44D386D591 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _parseResponseBody; }
		bool L_0 = __this->____parseResponseBody_24;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _parseResponseBody; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_ParseResponseBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_ParseResponseBody_m021500316923EA402EDE2E525753AA265389C14E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _parseResponseBody = value; }
		bool L_0 = ___value0;
		__this->____parseResponseBody_24 = L_0;
		// set { _parseResponseBody = value; }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest Proyecto26.RequestHelper::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { private get; set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CRequestU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void Proyecto26.RequestHelper::set_Request(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_Request_mA1C3D38E6CBDABDCF58527D9A28070653A1C1979 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { private get; set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CRequestU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Single Proyecto26.RequestHelper::get_UploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RequestHelper_get_UploadProgress_m981820F2EEF397803961FC90BBBD36B6CC6D574A (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// float progress = 0;
		V_0 = (0.0f);
		// if (this.Request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// progress = this.Request.uploadProgress;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95(L_2, NULL);
		V_0 = L_3;
	}

IL_0022:
	{
		// return progress;
		float L_4 = V_0;
		V_2 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		float L_5 = V_2;
		return L_5;
	}
}
// System.UInt64 Proyecto26.RequestHelper::get_UploadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RequestHelper_get_UploadedBytes_m9E7B04CE766C97D243CEDE9DB42E4CEA35A8D6F7 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint64_t V_2 = 0;
	{
		// ulong bytes = 0;
		V_0 = ((int64_t)0);
		// if (this.Request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// bytes = this.Request.uploadedBytes;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = UnityWebRequest_get_uploadedBytes_mA1DA52CB702E41CB42D0A8809AA80D642976B0D4(L_2, NULL);
		V_0 = L_3;
	}

IL_001f:
	{
		// return bytes;
		uint64_t L_4 = V_0;
		V_2 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		uint64_t L_5 = V_2;
		return L_5;
	}
}
// System.Single Proyecto26.RequestHelper::get_DownloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RequestHelper_get_DownloadProgress_m5158223FDF91676452FA27A330E661EE8C9D9506 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// float progress = 0;
		V_0 = (0.0f);
		// if (this.Request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// progress = this.Request.downloadProgress;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_2, NULL);
		V_0 = L_3;
	}

IL_0022:
	{
		// return progress;
		float L_4 = V_0;
		V_2 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		float L_5 = V_2;
		return L_5;
	}
}
// System.UInt64 Proyecto26.RequestHelper::get_DownloadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RequestHelper_get_DownloadedBytes_m7D8E2CC4748631F399B91549A2E7A597E2316841 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint64_t V_2 = 0;
	{
		// ulong bytes = 0;
		V_0 = ((int64_t)0);
		// if (this.Request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// bytes = this.Request.downloadedBytes;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610(L_2, NULL);
		V_0 = L_3;
	}

IL_001f:
	{
		// return bytes;
		uint64_t L_4 = V_0;
		V_2 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		uint64_t L_5 = V_2;
		return L_5;
	}
}
// System.String Proyecto26.RequestHelper::GetHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequestHelper_GetHeader_m522CB3C8DEAA6725CC66F293E84BF09B7DB26683 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// if (this.Request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// headerValue = this.Request.GetRequestHeader(name);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = UnityWebRequest_GetRequestHeader_mEDAC73EA86F30AE1438EBD3452AA927359437076(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0030;
	}

IL_001f:
	{
		// this.Headers.TryGetValue(name, out headerValue);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = RequestHelper_get_Headers_mF06E05AD5EE832BFE56704B7A546B0C7E25D4B79(__this, NULL);
		String_t* L_6 = ___name0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
	}

IL_0030:
	{
		// return headerValue;
		String_t* L_8 = V_0;
		V_2 = L_8;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_IsAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_IsAborted_m5B21E1C18BD58CCDE57D63D2BD61537C40735129 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isAborted; }
		bool L_0 = __this->____isAborted_26;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isAborted; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_IsAborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_IsAborted_m94327332571DC63115E2C45BC4BF07D15C8F3694 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _isAborted = value; }
		bool L_0 = ___value0;
		__this->____isAborted_26 = L_0;
		// set { _isAborted = value; }
		return;
	}
}
// System.Boolean Proyecto26.RequestHelper::get_DefaultContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestHelper_get_DefaultContentType_m91687E0E1878F17A2047E3E7741EF6CA42A1458B (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _defaultContentType; }
		bool L_0 = __this->____defaultContentType_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _defaultContentType; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.RequestHelper::set_DefaultContentType(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_set_DefaultContentType_m58E76D9215877D62BA0BDE96356D961D70184203 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _defaultContentType = value; }
		bool L_0 = ___value0;
		__this->____defaultContentType_27 = L_0;
		// set { _defaultContentType = value; }
		return;
	}
}
// System.Void Proyecto26.RequestHelper::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper_Abort_m8A66AFBDDFC59B629764F7242D284DA1D71503EF (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	{
		// if (!this.IsAborted && this.Request != null)
		bool L_0;
		L_0 = RequestHelper_get_IsAborted_m5B21E1C18BD58CCDE57D63D2BD61537C40735129(__this, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
		G_B3_0 = ((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				// this.Request = null;
				RequestHelper_set_Request_mA1C3D38E6CBDABDCF58527D9A28070653A1C1979_inline(__this, (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// this.IsAborted = true;
					RequestHelper_set_IsAborted_m94327332571DC63115E2C45BC4BF07D15C8F3694(__this, (bool)1, NULL);
					// if (!this.Request.isDone) {
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3;
					L_3 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
					NullCheck(L_3);
					bool L_4;
					L_4 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_3, NULL);
					V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
					bool L_5 = V_1;
					if (!L_5)
					{
						goto IL_0043_2;
					}
				}
				{
					// this.Request.Abort();
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
					L_6 = RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline(__this, NULL);
					NullCheck(L_6);
					UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B(L_6, NULL);
				}

IL_0043_2:
				{
					goto IL_005e_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0046_1;
				}
				throw e;
			}

CATCH_0046_1:
			{// begin catch(System.Exception)
				// catch (Exception error) {
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// HttpBase.DebugLog(this.EnableDebug, error.Message, true);
				bool L_7;
				L_7 = RequestHelper_get_EnableDebug_mDB14F675CDD96C48A77B3E1322020207030547C1(__this, NULL);
				Exception_t* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
				HttpBase_DebugLog_m71F23F194D778548F110B5B94B2811CAA2B74444(L_7, L_9, (bool)1, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_005e_1;
			}// end catch (depth: 2)

IL_005e_1:
			{
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Proyecto26.RequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _retryCallbackOnlyOnNetworkErrors = true;
		__this->____retryCallbackOnlyOnNetworkErrors_9 = (bool)1;
		// private bool? _useHttpContinue = true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_0), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____useHttpContinue_13 = L_0;
		// private bool _parseResponseBody = true;
		__this->____parseResponseBody_24 = (bool)1;
		// private bool _defaultContentType = true;
		__this->____defaultContentType_27 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Networking.UnityWebRequest Proyecto26.ResponseHelper::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { get; private set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CRequestU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Proyecto26.ResponseHelper::set_Request(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseHelper_set_Request_m9734C03F625D17D16F2BD1696ADED283AE295194 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { get; private set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CRequestU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Proyecto26.ResponseHelper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseHelper__ctor_m3CCCE641244AC12357CC70E8C05AA39285A9C9A0 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	{
		// public ResponseHelper(UnityWebRequest request)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Request = request;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		ResponseHelper_set_Request_m9734C03F625D17D16F2BD1696ADED283AE295194_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Int64 Proyecto26.ResponseHelper::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseHelper_get_StatusCode_m217BF73AEA4E2259D9A19D797E9C4CCFB3819633 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return Request.responseCode; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return Request.responseCode; }
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] Proyecto26.ResponseHelper::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ResponseHelper_get_Data_m27FFFFF8A67EC8C3F7793072A4D094CEA7C09336 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// _data = Request.downloadHandler.data;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_1, NULL);
		V_0 = L_2;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// catch (Exception)
		// _data = null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		// return _data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		return L_4;
	}
}
// System.String Proyecto26.ResponseHelper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHelper_get_Text_m4529907A41F3E760A73564C9C189AC97F320F822 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// _text = Request.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_1, NULL);
		V_0 = L_2;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// catch (Exception)
		// _text = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	}// end catch (depth: 1)

IL_0021:
	{
		// return _text;
		String_t* L_4 = V_0;
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String Proyecto26.ResponseHelper::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHelper_get_Error_mBD25C2495C9336770708687BDB2A08B8AB09E7C9 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return Request.error; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return Request.error; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.ResponseHelper::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ResponseHelper_get_Headers_m2A5A136C757A50B353C80E0323FAF95D5970A4E5 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// get { return Request.GetResponseHeaders(); }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return Request.GetResponseHeaders(); }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_0;
		return L_2;
	}
}
// System.String Proyecto26.ResponseHelper::GetHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHelper_GetHeader_m479626D4E493E1CEC980E312D85BE27A20AA3501 (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return this.Request.GetResponseHeader(name);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0;
		L_0 = ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline(__this, NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = UnityWebRequest_GetResponseHeader_m9AC0E1BB43CE0469BC7FE865B3D9B2C4198DDF03(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Proyecto26.ResponseHelper::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHelper_ToString_m5DDBBE98399DDA4D2B534767C539573FAE8F33EC (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return JsonUtility.ToJson(this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
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
// Proyecto26.StaticCoroutine/CoroutineHolder Proyecto26.StaticCoroutine::get_Runner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* StaticCoroutine_get_Runner_m893C755952DF4D4DF7E5FADBB84F993C9FB4F4D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60_mDC0D94AAC2A4309418FD94DF40431B6150655C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03B868F7D6AA5E4BE4CEF09331BAA969CE2390E9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* V_1 = NULL;
	{
		// if (_runner == null)
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_0 = ((StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields*)il2cpp_codegen_static_fields_for(StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var))->____runner_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// _runner = new GameObject("Static Coroutine RestClient").AddComponent<CoroutineHolder>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral03B868F7D6AA5E4BE4CEF09331BAA969CE2390E9, NULL);
		NullCheck(L_3);
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_4;
		L_4 = GameObject_AddComponent_TisCoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60_mDC0D94AAC2A4309418FD94DF40431B6150655C9A(L_3, GameObject_AddComponent_TisCoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60_mDC0D94AAC2A4309418FD94DF40431B6150655C9A_RuntimeMethod_var);
		((StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields*)il2cpp_codegen_static_fields_for(StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var))->____runner_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields*)il2cpp_codegen_static_fields_for(StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var))->____runner_0), (void*)L_4);
		// Object.DontDestroyOnLoad(_runner);
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_5 = ((StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields*)il2cpp_codegen_static_fields_for(StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var))->____runner_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
	}

IL_0031:
	{
		// return _runner;
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_6 = ((StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_StaticFields*)il2cpp_codegen_static_fields_for(StaticCoroutine_t236529E90CE34CD1CEFC0D271502E26905FDBC21_il2cpp_TypeInfo_var))->____runner_0;
		V_1 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Coroutine Proyecto26.StaticCoroutine::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* StaticCoroutine_StartCoroutine_mE7F39B286CDB161CDB7E046E1E8D30A7D5F5DE8D (RuntimeObject* ___coroutine0, const RuntimeMethod* method) 
{
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* V_0 = NULL;
	{
		// return Runner.StartCoroutine(coroutine);
		CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* L_0;
		L_0 = StaticCoroutine_get_Runner_m893C755952DF4D4DF7E5FADBB84F993C9FB4F4D0(NULL);
		RuntimeObject* L_1 = ___coroutine0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3 = V_0;
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
// System.Void Proyecto26.StaticCoroutine/CoroutineHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineHolder__ctor_m44080B42ED079EFD8E60751B760C0210006C9EEC (CoroutineHolder_tA1CFD4F58612E62A290D13D2A5C3A13CC1DB0B60* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Version Proyecto26.RestClient::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* RestClient_get_Version_m053278C1EB0D4AC058F20CBA82F3304B13656A8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B306B7843BAADD97772D377ADAA3A8F4335C7A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* V_1 = NULL;
	{
		// if (_version == null) {
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____version_0;
		bool L_1;
		L_1 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B(L_0, (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _version = new System.Version("2.6.2");
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_3 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(L_3, _stringLiteral52B306B7843BAADD97772D377ADAA3A8F4335C7A, NULL);
		((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____version_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____version_0), (void*)L_3);
	}

IL_0021:
	{
		// return _version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_4 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____version_0;
		V_1 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::get_DefaultRequestParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RestClient_get_DefaultRequestParams_mB02E1192C1368FCE6DF8DD874D3033F9E25EC36E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// if (_defaultRequestParams == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _defaultRequestParams = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1), (void*)L_2);
	}

IL_0019:
	{
		// return _defaultRequestParams;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_1;
		return L_4;
	}
}
// System.Void Proyecto26.RestClient::set_DefaultRequestParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_set_DefaultRequestParams_m5BC298FB8A9DA41AB1B3313832BDF62BF0C436F1 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _defaultRequestParams = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestParams_1), (void*)L_0);
		// set { _defaultRequestParams = value; }
		return;
	}
}
// System.Void Proyecto26.RestClient::ClearDefaultParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_ClearDefaultParams_mDFBD47E63077F5A9E900F4E3CF47578FA796591F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DefaultRequestParams.Clear();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0;
		L_0 = RestClient_get_DefaultRequestParams_mB02E1192C1368FCE6DF8DD874D3033F9E25EC36E(NULL);
		NullCheck(L_0);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_0, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Proyecto26.RestClient::get_DefaultRequestHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RestClient_get_DefaultRequestHeaders_m19D3D13F645191B13463EDBD9125BFF41A3193A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// if (_defaultRequestHeaders == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _defaultRequestHeaders = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2), (void*)L_2);
	}

IL_0019:
	{
		// return _defaultRequestHeaders;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_1;
		return L_4;
	}
}
// System.Void Proyecto26.RestClient::set_DefaultRequestHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_set_DefaultRequestHeaders_m40FD143DF9A0896CFD005F569DC973A5EEB48172 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _defaultRequestHeaders = value; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_StaticFields*)il2cpp_codegen_static_fields_for(RestClient_t5710FB9E44037625CBC0EB4FEC8DF15C002FF588_il2cpp_TypeInfo_var))->____defaultRequestHeaders_2), (void*)L_0);
		// set { _defaultRequestHeaders = value; }
		return;
	}
}
// System.Void Proyecto26.RestClient::ClearDefaultHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_ClearDefaultHeaders_m45E8A94612AF1CC54020F142A8EE8EB90F191B4F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DefaultRequestHeaders.Clear();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0;
		L_0 = RestClient_get_DefaultRequestHeaders_m19D3D13F645191B13463EDBD9125BFF41A3193A0(NULL);
		NullCheck(L_0);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_0, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Request(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	{
		// StaticCoroutine.StartCoroutine(HttpBase.DefaultUnityWebRequest(options, callback));
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_1 = ___callback1;
		RuntimeObject* L_2;
		L_2 = HttpBase_DefaultUnityWebRequest_m29B82281D1D77B29A1B18C05D92042DDD9CB933F(L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = StaticCoroutine_StartCoroutine_mE7F39B286CDB161CDB7E046E1E8D30A7D5F5DE8D(L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Get(System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Get_m6D8042A0528A3214D81BA1956B77CFC5F0103582 (String_t* ___url0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Get(new RequestHelper { Uri = url }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = ___callback1;
		RestClient_Get_mD11999D6A39CAF37E54BC5E957FC4F29BD3CB1E6(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Get(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Get_mD11999D6A39CAF37E54BC5E957FC4F29BD3CB1E6 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = UnityWebRequest.kHttpVerbGET;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Post(System.String,System.Object,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Post_mF2A4DE738B324FCDACA76494DF85C8FB61C9F503 (String_t* ___url0, RuntimeObject* ___body1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Post(new RequestHelper { Uri = url, Body = body }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Post_m163B07093FA2C7EE792D0FECDC8928D836CFC591(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Post(System.String,System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Post_m3F04C5CF442192B972349358C79F9BAC56131794 (String_t* ___url0, String_t* ___bodyString1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Post(new RequestHelper { Uri = url, BodyString = bodyString }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Post_m163B07093FA2C7EE792D0FECDC8928D836CFC591(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Post(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Post_m163B07093FA2C7EE792D0FECDC8928D836CFC591 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = UnityWebRequest.kHttpVerbPOST;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Put(System.String,System.Object,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Put_m75BA6D86F804B2BDD9410184DF08FD77395E71FB (String_t* ___url0, RuntimeObject* ___body1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Put(new RequestHelper { Uri = url, Body = body }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Put_m70834D6C23681658FA93AFC6D4038553AFAC45A9(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Put(System.String,System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Put_m4B3CFD739B8132E7D748FB03983B49763B0B5A96 (String_t* ___url0, String_t* ___bodyString1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Put(new RequestHelper { Uri = url, BodyString = bodyString }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Put_m70834D6C23681658FA93AFC6D4038553AFAC45A9(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Put(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Put_m70834D6C23681658FA93AFC6D4038553AFAC45A9 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = UnityWebRequest.kHttpVerbPUT;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Patch(System.String,System.Object,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Patch_mB4F89BF383E5F6E5DE91813CD7340B5B46635281 (String_t* ___url0, RuntimeObject* ___body1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Patch(new RequestHelper { Uri = url, Body = body }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Patch_m17881C3BB0702DAA9425D1D0F93309BCF3B7B7B1(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Patch(System.String,System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Patch_m513B44CC706B0FBD445B72B7581DFD44AB7F5FBA (String_t* ___url0, String_t* ___bodyString1, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Patch(new RequestHelper { Uri = url, BodyString = bodyString }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_5 = ___callback2;
		RestClient_Patch_m17881C3BB0702DAA9425D1D0F93309BCF3B7B7B1(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Patch(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Patch_m17881C3BB0702DAA9425D1D0F93309BCF3B7B7B1 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = "PATCH";
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Delete(System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Delete_mA2E21518479E064C726C9F7B8B519F84DB2156A7 (String_t* ___url0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Delete(new RequestHelper { Uri = url }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = ___callback1;
		RestClient_Delete_m3AAA7506A280314FBB4C3AAE422B595FDBA4BFCD(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Delete(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Delete_m3AAA7506A280314FBB4C3AAE422B595FDBA4BFCD (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = UnityWebRequest.kHttpVerbDELETE;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Head(System.String,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Head_m7013C2927DEB82E7A159873E3C21FA39E4976A2D (String_t* ___url0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Head(new RequestHelper { Uri = url }, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = ___callback1;
		RestClient_Head_m1781234DA3CDAD5EF72644A9C90984A69356CAF4(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Proyecto26.RestClient::Head(Proyecto26.RequestHelper,System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestClient_Head_m1781234DA3CDAD5EF72644A9C90984A69356CAF4 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// options.Method = UnityWebRequest.kHttpVerbHEAD;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options0;
		NullCheck(L_0);
		RequestHelper_set_Method_m6112760F386FB3160A999EE7E505E7B7B78CFAD5(L_0, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, NULL);
		// Request(options, callback);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_2 = ___callback1;
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_2, NULL);
		// }
		return;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Request(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Request_mEA945FA59AA2459BD9E8780A5B4340C662B0C802 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Request(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Request_mA97B9FAC81396C27EA3B497CC6891845A502287C(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Get_mB22EB8274C52DA31B39483A8783D7A6E8EE89D07 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Get(new RequestHelper { Uri = url });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RuntimeObject* L_3;
		L_3 = RestClient_Get_m58BC91957FB3E473503F45867DD4F87E8F78F699(L_1, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Get(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Get_m58BC91957FB3E473503F45867DD4F87E8F78F699 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Get(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Get_mD11999D6A39CAF37E54BC5E957FC4F29BD3CB1E6(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Post(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Post_m1738C8A194457D6002395552342EB879040737DE (String_t* ___url0, RuntimeObject* ___body1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Post(new RequestHelper { Uri = url, Body = body });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Post_m1796D82EBE3AD34C846A7BB1A25116C55C161600(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Post_m942598B419348E314841DBF89163C0D463F507B1 (String_t* ___url0, String_t* ___bodyString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Post(new RequestHelper { Uri = url, BodyString = bodyString });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Post_m1796D82EBE3AD34C846A7BB1A25116C55C161600(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Post(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Post_m1796D82EBE3AD34C846A7BB1A25116C55C161600 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Post(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Post_m163B07093FA2C7EE792D0FECDC8928D836CFC591(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Put(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Put_m7CF9BAD17D14895C381C040CCA9F34770CB10B6A (String_t* ___url0, RuntimeObject* ___body1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Put(new RequestHelper { Uri = url, Body = body });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Put_mB417B0F9F75CAD5F8C4F515834494D099A945BA8(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Put_m1E8CEE6F7C1EEA4C1EC5F9DB63EDE93EC5415CA9 (String_t* ___url0, String_t* ___bodyString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Put(new RequestHelper { Uri = url, BodyString = bodyString });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Put_mB417B0F9F75CAD5F8C4F515834494D099A945BA8(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Put(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Put_mB417B0F9F75CAD5F8C4F515834494D099A945BA8 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Put(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Put_m70834D6C23681658FA93AFC6D4038553AFAC45A9(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Patch(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Patch_mDB5001A1CC6521BD7CAEBA84D65B855D77561173 (String_t* ___url0, RuntimeObject* ___body1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Patch(new RequestHelper { Uri = url, Body = body });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		RuntimeObject* L_4 = ___body1;
		NullCheck(L_3);
		RequestHelper_set_Body_m2CCEC8C91A32A69CA7B68E9906326DDA156CE4C8(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Patch_mCD8A5D6EF73829F03E1856B1FACDE7A70ED26F59(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Patch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Patch_m548D852B049D92832C9385F4D6DB025844BBBE9E (String_t* ___url0, String_t* ___bodyString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Patch(new RequestHelper { Uri = url, BodyString = bodyString });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = L_1;
		String_t* L_4 = ___bodyString1;
		NullCheck(L_3);
		RequestHelper_set_BodyString_m49A6D60FDBDACE28CFD43E4EDFB3A67CC3B681EB(L_3, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = RestClient_Patch_mCD8A5D6EF73829F03E1856B1FACDE7A70ED26F59(L_3, NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Patch(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Patch_mCD8A5D6EF73829F03E1856B1FACDE7A70ED26F59 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Patch(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Patch_m17881C3BB0702DAA9425D1D0F93309BCF3B7B7B1(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Delete_m34618086590BF3E75CC65D3E056BB42EB725585E (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Delete(new RequestHelper { Uri = url });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RuntimeObject* L_3;
		L_3 = RestClient_Delete_mEB361DE273AA7ED06CE07C0F56996555F408725F(L_1, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Delete(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Delete_mEB361DE273AA7ED06CE07C0F56996555F408725F (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Delete(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Delete_m3AAA7506A280314FBB4C3AAE422B595FDBA4BFCD(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Head(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Head_m96850C15AD710ECAC9773130A3524EA790FFF7C6 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Delete(new RequestHelper { Uri = url });
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2*)il2cpp_codegen_object_new(RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RequestHelper__ctor_m7C53F61C41E1B440A83BB8761275696AF36AF7DC(L_0, NULL);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		RequestHelper_set_Uri_m95F799EA43CDE070FB94050EB32739594DA824CE(L_1, L_2, NULL);
		RuntimeObject* L_3;
		L_3 = RestClient_Delete_mEB361DE273AA7ED06CE07C0F56996555F408725F(L_1, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Head(Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Head_m3A5045AA1B5CA0BEAE8FB4A5137D9A1C015B4573 (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var promise = new Promise<ResponseHelper>();
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_0 = (Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D*)il2cpp_codegen_object_new(Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97(L_0, Promise_1__ctor_m80077EC45B59AA6C139AE7C13BB75412465BFE97_RuntimeMethod_var);
		V_0 = L_0;
		// Head(options, promise.Promisify);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options0;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_2 = V_0;
		Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D* L_3 = (Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D*)il2cpp_codegen_object_new(Action_2_t780BB764B8CF05233039D2DC8DB05E6E34CEB16D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_mA3BEC7A1B9E7A99BE0F861DEF698BBC95B1C8558(L_3, L_2, (intptr_t)((void*)RestClient_Promisify_TisResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_m070F63C48BA332CB2F020F2AA40DCFC331F02A6A_RuntimeMethod_var), NULL);
		RestClient_Head_m1781234DA3CDAD5EF72644A9C90984A69356CAF4(L_1, L_3, NULL);
		// return promise;
		Promise_1_t46079F9D6D313B9E6BE300F749F3E0643995165D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		RuntimeObject* L_5 = V_1;
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
// Proyecto26.Helper.ExecuteOnMainThread Proyecto26.Helper.ExecuteOnMainThread::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* ExecuteOnMainThread_get_Instance_m7478D7280C8C1D15770704D7354D69F5CEB2E432 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* V_0 = NULL;
	{
		// public static ExecuteOnMainThread Instance { get { return _instance; } }
		ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* L_0 = ((ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var))->____instance_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static ExecuteOnMainThread Instance { get { return _instance; } }
		ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* L_1 = V_0;
		return L_1;
	}
}
// System.Void Proyecto26.Helper.ExecuteOnMainThread::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteOnMainThread_Awake_m96AA2D23BE882B821722FB53B9B5ACA35DF3B0F2 (ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_instance != null && _instance != this)
		ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* L_0 = ((ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* L_2 = ((ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		goto IL_0044;
	}

IL_0030:
	{
		// _instance = this;
		((ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Proyecto26.Helper.ExecuteOnMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteOnMainThread__ctor_m9396E93259FED5C79003E08CC1D95F3C4C9D1814 (ExecuteOnMainThread_t93DCDA0946C4A42C7020EF5BE3749C8530E260F6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Proyecto26.Common.Common::GetFormSectionsContentType(System.Byte[]&,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Common_GetFormSectionsContentType_m3A5FF6FDA02EFEB9D5BEF45E02DA57C964745CDE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___bodyRaw0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// byte[] boundary = UnityWebRequest.GenerateBoundary();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241(NULL);
		V_0 = L_0;
		// byte[] formSections = UnityWebRequest.SerializeFormSections(options.FormSections, boundary);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_1 = ___options1;
		NullCheck(L_1);
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_2;
		L_2 = RequestHelper_get_FormSections_m43721DC6C2EBCC4BB13FAE074739AD26C8583F97(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = UnityWebRequest_SerializeFormSections_mC0691C6F240272DD5C0A2C4C06DF5DE93BE354B3(L_2, L_3, NULL);
		V_1 = L_4;
		// byte[] terminate = Encoding.UTF8.GetBytes(string.Concat("\r\n--", Encoding.UTF8.GetString(boundary), "--"));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB, L_8, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_9);
		V_2 = L_10;
		// bodyRaw = new byte[formSections.Length + terminate.Length];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_11 = ___bodyRaw0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_12)->max_length)), ((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_14);
		// System.Buffer.BlockCopy(formSections, 0, bodyRaw, 0, formSections.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_16 = ___bodyRaw0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_15, 0, (RuntimeArray*)L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		// System.Buffer.BlockCopy(terminate, 0, bodyRaw, formSections.Length, terminate.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_20 = ___bodyRaw0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_19, 0, (RuntimeArray*)L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		// return string.Concat("multipart/form-data; boundary=", Encoding.UTF8.GetString(boundary));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_24;
		L_24 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_24, L_25);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396, L_26, NULL);
		V_3 = L_27;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.Void Proyecto26.Common.Common::ConfigureWebRequestWithOptions(UnityEngine.Networking.UnityWebRequest,System.Byte[],System.String,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ConfigureWebRequestWithOptions_m2768A6006025ABD91ADC36932330BFB133718169 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyRaw1, String_t* ___contentType2, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	{
		// if (options.CertificateHandler is CertificateHandler)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options3;
		NullCheck(L_0);
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_1;
		L_1 = RequestHelper_get_CertificateHandler_m321AC0450D35604BA128C3288D044FE6884ED265(L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// request.certificateHandler = options.CertificateHandler;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_4 = ___options3;
		NullCheck(L_4);
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_5;
		L_5 = RequestHelper_get_CertificateHandler_m321AC0450D35604BA128C3288D044FE6884ED265(L_4, NULL);
		NullCheck(L_3);
		UnityWebRequest_set_certificateHandler_m4B4FA1E2F5FD0394D079CB711EB612F6A62458E2(L_3, L_5, NULL);
	}

IL_001b:
	{
		// if (options.UploadHandler is UploadHandler)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_6 = ___options3;
		NullCheck(L_6);
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_7;
		L_7 = RequestHelper_get_UploadHandler_m67989620874FA461E24832C70D639EC15147AE3F(L_6, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// request.uploadHandler = options.UploadHandler;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_10 = ___options3;
		NullCheck(L_10);
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_11;
		L_11 = RequestHelper_get_UploadHandler_m67989620874FA461E24832C70D639EC15147AE3F(L_10, NULL);
		NullCheck(L_9);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_9, L_11, NULL);
	}

IL_0035:
	{
		// if (bodyRaw != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bodyRaw1;
		V_2 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = ___request0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bodyRaw1;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_16 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_16, L_15, NULL);
		NullCheck(L_14);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_14, L_16, NULL);
		// request.uploadHandler.contentType = contentType;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = ___request0;
		NullCheck(L_17);
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_18;
		L_18 = UnityWebRequest_get_uploadHandler_mF92ED2E0410E7F720B8775B467CFD86B60909CF5(L_17, NULL);
		String_t* L_19 = ___contentType2;
		NullCheck(L_18);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_18, L_19, NULL);
	}

IL_0059:
	{
		// if (options.DownloadHandler is DownloadHandler)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_20 = ___options3;
		NullCheck(L_20);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_21;
		L_21 = RequestHelper_get_DownloadHandler_m576BE2E2C2E06E5B1831D089223FDD2C399D08E4(L_20, NULL);
		V_3 = (bool)((!(((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		// request.downloadHandler = options.DownloadHandler;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_24 = ___options3;
		NullCheck(L_24);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
		L_25 = RequestHelper_get_DownloadHandler_m576BE2E2C2E06E5B1831D089223FDD2C399D08E4(L_24, NULL);
		NullCheck(L_23);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_23, L_25, NULL);
		// options.ParseResponseBody = (options.DownloadHandler is DownloadHandlerBuffer);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_26 = ___options3;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_27 = ___options3;
		NullCheck(L_27);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
		L_28 = RequestHelper_get_DownloadHandler_m576BE2E2C2E06E5B1831D089223FDD2C399D08E4(L_27, NULL);
		NullCheck(L_26);
		RequestHelper_set_ParseResponseBody_m021500316923EA402EDE2E525753AA265389C14E(L_26, (bool)((!(((RuntimeObject*)(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)((DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)IsInstSealed((RuntimeObject*)L_28, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		goto IL_0098;
	}

IL_008c:
	{
		// request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = ___request0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_30 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_30, NULL);
		NullCheck(L_29);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_29, L_30, NULL);
	}

IL_0098:
	{
		// if (!string.IsNullOrEmpty(contentType))
		String_t* L_31 = ___contentType2;
		bool L_32;
		L_32 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_31, NULL);
		V_4 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00b6;
		}
	}
	{
		// request.SetRequestHeader(CONTENT_TYPE_HEADER, contentType);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_34 = ___request0;
		String_t* L_35 = ___contentType2;
		NullCheck(L_34);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_34, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_35, NULL);
	}

IL_00b6:
	{
		// foreach (var header in RestClient.DefaultRequestHeaders)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_36;
		L_36 = RestClient_get_DefaultRequestHeaders_m19D3D13F645191B13463EDBD9125BFF41A3193A0(NULL);
		NullCheck(L_36);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_37;
		L_37 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_36, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_5 = L_37;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_5), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e5_1;
			}

IL_00c5_1:
			{
				// foreach (var header in RestClient.DefaultRequestHeaders)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_38;
				L_38 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_5), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_6 = L_38;
				// request.SetRequestHeader(header.Key, header.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_39 = ___request0;
				String_t* L_40;
				L_40 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_6), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_41;
				L_41 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_6), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_39);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_39, L_40, L_41, NULL);
			}

IL_00e5_1:
			{
				// foreach (var header in RestClient.DefaultRequestHeaders)
				bool L_42;
				L_42 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_5), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00c5_1;
				}
			}
			{
				goto IL_00ff;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ff:
	{
		// foreach (var header in options.Headers)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_43 = ___options3;
		NullCheck(L_43);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44;
		L_44 = RequestHelper_get_Headers_mF06E05AD5EE832BFE56704B7A546B0C7E25D4B79(L_43, NULL);
		NullCheck(L_44);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_45;
		L_45 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_44, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_7 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_7), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012f_1;
			}

IL_010f_1:
			{
				// foreach (var header in options.Headers)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_46;
				L_46 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_7), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_8 = L_46;
				// request.SetRequestHeader(header.Key, header.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_47 = ___request0;
				String_t* L_48;
				L_48 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_8), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_49;
				L_49 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_8), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_47);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_47, L_48, L_49, NULL);
			}

IL_012f_1:
			{
				// foreach (var header in options.Headers)
				bool L_50;
				L_50 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_7), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_010f_1;
				}
			}
			{
				goto IL_0149;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0149:
	{
		// if (options.Timeout.HasValue)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_51 = ___options3;
		NullCheck(L_51);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_52;
		L_52 = RequestHelper_get_Timeout_m2B636E856FDDFD91989839B407A414D9932312F0(L_51, NULL);
		V_10 = L_52;
		bool L_53;
		L_53 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_10), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_0176;
		}
	}
	{
		// request.timeout = options.Timeout.Value;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_55 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_56 = ___options3;
		NullCheck(L_56);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_57;
		L_57 = RequestHelper_get_Timeout_m2B636E856FDDFD91989839B407A414D9932312F0(L_56, NULL);
		V_10 = L_57;
		int32_t L_58;
		L_58 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_10), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_55);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_55, L_58, NULL);
	}

IL_0176:
	{
		// if (options.UseHttpContinue.HasValue)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_59 = ___options3;
		NullCheck(L_59);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_60;
		L_60 = RequestHelper_get_UseHttpContinue_m3637AB717925A6979C5B34080D032E2FFDC5FD2F(L_59, NULL);
		V_12 = L_60;
		bool L_61;
		L_61 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_12), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_01a3;
		}
	}
	{
		// request.useHttpContinue = options.UseHttpContinue.Value;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_63 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_64 = ___options3;
		NullCheck(L_64);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_65;
		L_65 = RequestHelper_get_UseHttpContinue_m3637AB717925A6979C5B34080D032E2FFDC5FD2F(L_64, NULL);
		V_12 = L_65;
		bool L_66;
		L_66 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_12), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		NullCheck(L_63);
		UnityWebRequest_set_useHttpContinue_m69A9328F59DD88D26472A60530C42DB1D770571E(L_63, L_66, NULL);
	}

IL_01a3:
	{
		// if (options.RedirectLimit.HasValue)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_67 = ___options3;
		NullCheck(L_67);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_68;
		L_68 = RequestHelper_get_RedirectLimit_m12FA845010695EEE4A09DD9A6F76DE8471A862D4(L_67, NULL);
		V_10 = L_68;
		bool L_69;
		L_69 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_10), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_13 = L_69;
		bool L_70 = V_13;
		if (!L_70)
		{
			goto IL_01d0;
		}
	}
	{
		// request.redirectLimit = options.RedirectLimit.Value;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_71 = ___request0;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_72 = ___options3;
		NullCheck(L_72);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_73;
		L_73 = RequestHelper_get_RedirectLimit_m12FA845010695EEE4A09DD9A6F76DE8471A862D4(L_72, NULL);
		V_10 = L_73;
		int32_t L_74;
		L_74 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_10), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_71);
		UnityWebRequest_set_redirectLimit_m595CF14137D16BE4385E802869A28AA9B8460928(L_71, L_74, NULL);
	}

IL_01d0:
	{
		// options.Request = request;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_75 = ___options3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_76 = ___request0;
		NullCheck(L_75);
		RequestHelper_set_Request_mA1C3D38E6CBDABDCF58527D9A28070653A1C1979_inline(L_75, L_76, NULL);
		// }
		return;
	}
}
// UnityEngine.AsyncOperation Proyecto26.Common.Common::SendWebRequestWithOptions(UnityEngine.Networking.UnityWebRequest,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* Common_SendWebRequestWithOptions_mDB409523D4A032BC6BF203E6CCB339589E141E45 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_10 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// byte[] bodyRaw = options.BodyRaw;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_0 = ___options1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RequestHelper_get_BodyRaw_m819005CD0C1E7634FCF67CA97B1F8D5D06A1EAFD(L_0, NULL);
		V_0 = L_1;
		// string contentType = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_2;
		// if (!options.Headers.TryGetValue(CONTENT_TYPE_HEADER, out contentType) && options.DefaultContentType)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_3 = ___options1;
		NullCheck(L_3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = RequestHelper_get_Headers_mF06E05AD5EE832BFE56704B7A546B0C7E25D4B79(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_4, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, (&V_1), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = RequestHelper_get_DefaultContentType_m91687E0E1878F17A2047E3E7741EF6CA42A1458B(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
	}

IL_002b:
	{
		V_2 = (bool)G_B3_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// contentType = DEFAULT_CONTENT_TYPE;
		V_1 = _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
	}

IL_0037:
	{
		// if (options.Body != null || !string.IsNullOrEmpty(options.BodyString))
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_9 = ___options1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = RequestHelper_get_Body_m727A2AEE626E7FC01DF0A978441C001EB34EBCBB(L_9, NULL);
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_11 = ___options1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = RequestHelper_get_BodyString_m9F94287AC2B538F2A7DAEC148696D217EFBF8E53(L_11, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		G_B8_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B8_0 = 1;
	}

IL_0050:
	{
		V_3 = (bool)G_B8_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// var bodyString = options.BodyString;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_15 = ___options1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = RequestHelper_get_BodyString_m9F94287AC2B538F2A7DAEC148696D217EFBF8E53(L_15, NULL);
		V_4 = L_16;
		// if (options.Body != null)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_17 = ___options1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = RequestHelper_get_Body_m727A2AEE626E7FC01DF0A978441C001EB34EBCBB(L_17, NULL);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		// bodyString = JsonUtility.ToJson(options.Body);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_20 = ___options1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = RequestHelper_get_Body_m727A2AEE626E7FC01DF0A978441C001EB34EBCBB(L_20, NULL);
		String_t* L_22;
		L_22 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_21, NULL);
		V_4 = L_22;
	}

IL_007b:
	{
		// bodyRaw = Encoding.UTF8.GetBytes(bodyString.ToCharArray());
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_24 = V_4;
		NullCheck(L_24);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25;
		L_25 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_24, NULL);
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_23, L_25);
		V_0 = L_26;
		goto IL_0108;
	}

IL_0090:
	{
		// else if (options.SimpleForm != null && options.SimpleForm.Count > 0)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_27 = ___options1;
		NullCheck(L_27);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28;
		L_28 = RequestHelper_get_SimpleForm_m15B81EB567521859E32A255F893E86F798C8B164(L_27, NULL);
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_29 = ___options1;
		NullCheck(L_29);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30;
		L_30 = RequestHelper_get_SimpleForm_m15B81EB567521859E32A255F893E86F798C8B164(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843(L_30, Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		G_B15_0 = ((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B15_0 = 0;
	}

IL_00a9:
	{
		V_6 = (bool)G_B15_0;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00c5;
		}
	}
	{
		// bodyRaw = UnityWebRequest.SerializeSimpleForm(options.SimpleForm);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_33 = ___options1;
		NullCheck(L_33);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34;
		L_34 = RequestHelper_get_SimpleForm_m15B81EB567521859E32A255F893E86F798C8B164(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = UnityWebRequest_SerializeSimpleForm_m43DDB6E77AB45B6A53F63F692E94D7C00F212977(L_34, NULL);
		V_0 = L_35;
		// contentType = "application/x-www-form-urlencoded";
		V_1 = _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
		goto IL_0108;
	}

IL_00c5:
	{
		// else if (options.FormSections != null && options.FormSections.Count > 0)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_36 = ___options1;
		NullCheck(L_36);
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_37;
		L_37 = RequestHelper_get_FormSections_m43721DC6C2EBCC4BB13FAE074739AD26C8583F97(L_36, NULL);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_38 = ___options1;
		NullCheck(L_38);
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_39;
		L_39 = RequestHelper_get_FormSections_m43721DC6C2EBCC4BB13FAE074739AD26C8583F97(L_38, NULL);
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_inline(L_39, List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var);
		G_B20_0 = ((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		goto IL_00de;
	}

IL_00dd:
	{
		G_B20_0 = 0;
	}

IL_00de:
	{
		V_7 = (bool)G_B20_0;
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00f1;
		}
	}
	{
		// contentType = GetFormSectionsContentType(out bodyRaw, options);
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_42 = ___options1;
		String_t* L_43;
		L_43 = Common_GetFormSectionsContentType_m3A5FF6FDA02EFEB9D5BEF45E02DA57C964745CDE((&V_0), L_42, NULL);
		V_1 = L_43;
		goto IL_0108;
	}

IL_00f1:
	{
		// else if (options.FormData is WWWForm)
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_44 = ___options1;
		NullCheck(L_44);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_45;
		L_45 = RequestHelper_get_FormData_mFCABF1F3476D7580A9AAB63C6B010C1114DD6947(L_44, NULL);
		V_8 = (bool)((!(((RuntimeObject*)(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0108;
		}
	}
	{
		// contentType = string.Empty;
		String_t* L_47 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_47;
	}

IL_0108:
	{
		// if (!string.IsNullOrEmpty(options.ContentType))
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_48 = ___options1;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = RequestHelper_get_ContentType_m1DE79D1DB56E8D9E796B0E9E60ED993AB94715AB(L_48, NULL);
		bool L_50;
		L_50 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_49, NULL);
		V_9 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_9;
		if (!L_51)
		{
			goto IL_0125;
		}
	}
	{
		// contentType = options.ContentType;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_52 = ___options1;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = RequestHelper_get_ContentType_m1DE79D1DB56E8D9E796B0E9E60ED993AB94715AB(L_52, NULL);
		V_1 = L_53;
	}

IL_0125:
	{
		// ConfigureWebRequestWithOptions(request, bodyRaw, contentType, options);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_54 = ___request0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		String_t* L_56 = V_1;
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_57 = ___options1;
		Common_ConfigureWebRequestWithOptions_m2768A6006025ABD91ADC36932330BFB133718169(L_54, L_55, L_56, L_57, NULL);
		// return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_58 = ___request0;
		NullCheck(L_58);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_59;
		L_59 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_58, NULL);
		V_10 = L_59;
		goto IL_0139;
	}

IL_0139:
	{
		// }
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_60 = V_10;
		return L_60;
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
// Proyecto26.ResponseHelper Proyecto26.Common.Extensions::CreateWebResponse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* Extensions_CreateWebResponse_mEFA909BB0D920047E6999C47B69DD35214887ABF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* V_0 = NULL;
	{
		// return new ResponseHelper(request);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_1 = (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C*)il2cpp_codegen_object_new(ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResponseHelper__ctor_m3CCCE641244AC12357CC70E8C05AA39285A9C9A0(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Proyecto26.Common.Extensions::IsValidRequest(UnityEngine.Networking.UnityWebRequest,Proyecto26.RequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsValidRequest_m5593CAE9FE30B954ED2E03751FB3DC1B81EA126A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* ___options1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// IsNetworkError = (request.result == UnityWebRequest.Result.ConnectionError);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// IsHttpError = (request.result == UnityWebRequest.Result.ProtocolError);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___request0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		// return request.isDone &&
		// !IsNetworkError &&
		// (
		//     !IsHttpError || options.IgnoreHttpException
		// );
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___request0;
		NullCheck(L_4);
		bool L_5;
		L_5 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* L_8 = ___options1;
		NullCheck(L_8);
		bool L_9;
		L_9 = RequestHelper_get_IgnoreHttpException_m62F4E6F0A29DA302D61746DD6AAF49EB657ACF50(L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 1;
	}

IL_002c:
	{
		G_B7_0 = G_B5_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B7_0 = 0;
	}

IL_002f:
	{
		V_2 = (bool)G_B7_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.String Proyecto26.Common.Extensions::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_EscapeURL_m3C1CBAED3CCE96113BA65B8B884C45CE21CBD8B4 (String_t* ___queryParam0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return UnityWebRequest.EscapeURL(queryParam);
		String_t* L_0 = ___queryParam0;
		String_t* L_1;
		L_1 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Proyecto26.Common.Extensions::BuildUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_BuildUrl_m645B675043A508CFFA2E02A854B447582039CEA6 (String_t* ___uri0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m6B975D4AB123E8A95B5E80935D6D4F3D58F28CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m7BDB54E6AF347996AD88A05A012F226129173FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildUrlU3Eb__3_1_mF7A7B262A28BC96810538E15E76941C13C1ED08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CBuildUrlU3Eb__0_m85934B7498E0B2549B7CD1ADA69103F9A50C236F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	{
		// var url = uri;
		String_t* L_0 = ___uri0;
		V_0 = L_0;
		// var defaultParams = RestClient.DefaultRequestParams;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = RestClient_get_DefaultRequestParams_mB02E1192C1368FCE6DF8DD874D3033F9E25EC36E(NULL);
		V_1 = L_1;
		// if (defaultParams.Any() || queryParams.Any())
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_1;
		bool L_3;
		L_3 = Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7(L_2, Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___queryParams1;
		bool L_5;
		L_5 = Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7(L_4, Enumerable_Any_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m273D43030FC1F3603895938D4C855DF745EB1FC7_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_009d;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* L_7 = (U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ec__DisplayClass3_0__ctor_m39F8F1DFCE5887655F9E6168820F86EA4D3DB29F(L_7, NULL);
		V_3 = L_7;
		// var urlParamKeys = queryParams.Keys;
		U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* L_8 = V_3;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = ___queryParams1;
		NullCheck(L_9);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_10;
		L_10 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_9, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___urlParamKeys_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___urlParamKeys_0), (void*)L_10);
		// url += (url.Contains("?") ? "&" : "?") + string.Join("&",
		//     queryParams
		//     .Concat(
		//         defaultParams
		//         .Where(p => !urlParamKeys.Contains(p.Key))
		//     )
		//     .Select(p => string.Format("{0}={1}", p.Key, p.Value.EscapeURL()))
		//     .ToArray()
		// );
		String_t* L_11 = V_0;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_12, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		G_B5_0 = L_11;
		if (L_13)
		{
			G_B6_0 = L_11;
			goto IL_0046;
		}
	}
	{
		G_B7_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		G_B7_1 = G_B5_0;
		goto IL_004b;
	}

IL_0046:
	{
		G_B7_0 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
		G_B7_1 = G_B6_0;
	}

IL_004b:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = ___queryParams1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_1;
		U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* L_16 = V_3;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_17 = (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*)il2cpp_codegen_object_new(Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CBuildUrlU3Eb__0_m85934B7498E0B2549B7CD1ADA69103F9A50C236F_RuntimeMethod_var), NULL);
		RuntimeObject* L_18;
		L_18 = Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2(L_15, L_17, Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		RuntimeObject* L_19;
		L_19 = Enumerable_Concat_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m6B975D4AB123E8A95B5E80935D6D4F3D58F28CC3(L_14, L_18, Enumerable_Concat_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m6B975D4AB123E8A95B5E80935D6D4F3D58F28CC3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_20 = ((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_21 = L_20;
		G_B8_0 = L_21;
		G_B8_1 = L_19;
		G_B8_2 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
		G_B8_3 = G_B7_0;
		G_B8_4 = G_B7_1;
		if (L_21)
		{
			G_B9_0 = L_21;
			G_B9_1 = L_19;
			G_B9_2 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
			G_B9_3 = G_B7_0;
			G_B9_4 = G_B7_1;
			goto IL_0087;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var);
		U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* L_22 = ((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_23 = (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*)il2cpp_codegen_object_new(Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CBuildUrlU3Eb__3_1_mF7A7B262A28BC96810538E15E76941C13C1ED08F_RuntimeMethod_var), NULL);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_24 = L_23;
		((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1), (void*)L_24);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
		G_B9_4 = G_B8_4;
	}

IL_0087:
	{
		RuntimeObject* L_25;
		L_25 = Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m7BDB54E6AF347996AD88A05A012F226129173FCB(G_B9_1, G_B9_0, Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m7BDB54E6AF347996AD88A05A012F226129173FCB_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_25, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_27;
		L_27 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B9_2, L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B9_4, G_B9_3, L_27, NULL);
		V_0 = L_28;
	}

IL_009d:
	{
		// return url;
		String_t* L_29 = V_0;
		V_4 = L_29;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		String_t* L_30 = V_4;
		return L_30;
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
// System.Void Proyecto26.Common.Extensions/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m39F8F1DFCE5887655F9E6168820F86EA4D3DB29F (U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Proyecto26.Common.Extensions/<>c__DisplayClass3_0::<BuildUrl>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CBuildUrlU3Eb__0_m85934B7498E0B2549B7CD1ADA69103F9A50C236F (U3CU3Ec__DisplayClass3_0_tBFF889D118F48F200DCFE9FD9A77E140545974B3* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(p => !urlParamKeys.Contains(p.Key))
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_0 = __this->___urlParamKeys_0;
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___p0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		bool L_2;
		L_2 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33(L_0, L_1, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void Proyecto26.Common.Extensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m569C94FB5AF90D9DFC93CF5DD6D987320E49AEF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* L_0 = (U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA*)il2cpp_codegen_object_new(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAB9972DF599999D1767BC5FA12A2C547E525FF79(L_0, NULL);
		((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Proyecto26.Common.Extensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAB9972DF599999D1767BC5FA12A2C547E525FF79 (U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Proyecto26.Common.Extensions/<>c::<BuildUrl>b__3_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CBuildUrlU3Eb__3_1_mF7A7B262A28BC96810538E15E76941C13C1ED08F (U3CU3Ec_t9E835B3D0636C5E4297AF06D28466B503BED97DA* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(p => string.Format("{0}={1}", p.Key, p.Value.EscapeURL()))
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___p0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___p0), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = Extensions_EscapeURL_m3C1CBAED3CCE96113BA65B8B884C45CE21CBD8B4(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_0, L_2, NULL);
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
// System.String Models.Photo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Photo_ToString_mD6A22636275A6B35FAC2E3CB8574231785438D8C (Photo_tDBE807FAC03431AC900C25D588DE95507CA4F829* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return UnityEngine.JsonUtility.ToJson (this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Models.Photo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Photo__ctor_mC6E90DF93DF6EE443FE41F931F45C95EB31C0A31 (Photo_tDBE807FAC03431AC900C25D588DE95507CA4F829* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Models.Post::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Post_ToString_m29DD92DEF3102ED3D3B8A6342DF7E6B681DC8AC5 (Post_t00666B4FDAE3DCFEA570BF1F371E98517815E62E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return UnityEngine.JsonUtility.ToJson (this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Models.Post::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Post__ctor_mA6934B0F1762428A4C4A9B709EFA7DADDDD7B5D5 (Post_t00666B4FDAE3DCFEA570BF1F371E98517815E62E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Models.Todo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Todo_ToString_m2717C1F1DF64663621435EF9C35CE95C8C7F51B9 (Todo_t0777834F5D9DADFE6EE42A481BACD7C95D553EF7* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return UnityEngine.JsonUtility.ToJson (this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Models.Todo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Todo__ctor_mBFA41A1DC43949DAAA32DDE4D705863D4F469C13 (Todo_t0777834F5D9DADFE6EE42A481BACD7C95D553EF7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Models.User::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* User_ToString_m4DEC5DBD2A99CE340A211F2C66BA6D86D01C12CF (User_tA36F504B7F9C4B0533EB2CD4CAB7BDA1559018F3* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return UnityEngine.JsonUtility.ToJson (this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Models.User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m7F7F3F420853C6F4A54B9270C6DD870EB878C993 (User_tA36F504B7F9C4B0533EB2CD4CAB7BDA1559018F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_AutoTargetPlayer)
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_0014:
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// if (m_Target == null) return;
		goto IL_0037;
	}

IL_0026:
	{
		// targetRigidbody = m_Target.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Target_4;
		NullCheck(L_5);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_5, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___targetRigidbody_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRigidbody_7), (void*)L_6);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FixedUpdate_mB21B34361FB6322B028B8087893942F3E9A11A22 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
	}

IL_0030:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_003d:
	{
		// if (m_UpdateType == UpdateType.FixedUpdate)
		int32_t L_7 = __this->___m_UpdateType_6;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_9);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_LateUpdate_m15329BC030A27BD5C92BCF0B9A2E7DC27C4ED202 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
	}

IL_0030:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_003d:
	{
		// if (m_UpdateType == UpdateType.LateUpdate)
		int32_t L_7 = __this->___m_UpdateType_6;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_9);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_ManualUpdate_mC0EDA156049123462E7E0507191183A112209C58 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
	}

IL_0030:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_003d:
	{
		// if (m_UpdateType == UpdateType.ManualUpdate)
		int32_t L_7 = __this->___m_UpdateType_6;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_9);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		// var targetObj = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_0;
		// if (targetObj)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// SetTarget(targetObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform) */, __this, L_5);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) 
{
	{
		// m_Target = newTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTransform0;
		__this->___m_Target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AbstractTargetFollower_get_Target_m0A358E204FE5247E0702B24B3D2047E89815A3D0 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// get { return m_Target; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Target_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Target; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool m_AutoTargetPlayer = true;  // Whether the rig should automatically target the player.
		__this->___m_AutoTargetPlayer_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Awake_m6DF1C77903C277F5D7111A267F9B71B708A50867 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// base.Awake();
		PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2(__this, NULL);
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = __this->___m_LockCursor_16;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B3_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_1 = __this->___m_LockCursor_16;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// m_PivotEulers = m_Pivot.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___m_PivotEulers_21 = L_4;
		// m_PivotTargetRot = m_Pivot.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		__this->___m_PivotTargetRot_22 = L_7;
		// m_TransformTargetRot = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		__this->___m_TransformTargetRot_23 = L_9;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Update_m1158A615C803765D6375B456ADB1DDF93D8E7FB8 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// HandleRotationMovement();
		FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F(__this, NULL);
		// if (m_LockCursor && Input.GetMouseButtonUp(0))
		bool L_0 = __this->___m_LockCursor_16;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_3 = __this->___m_LockCursor_16;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B7_0 = 1;
	}

IL_002a:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B7_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_4 = __this->___m_LockCursor_16;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_OnDisable_mCD044A476BAF96C34A06162121D3D21664AD438E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_FollowTarget_m807D7425DA3AC99BCFC995FC3F53B3139F50FE7E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_Target == null) return;
		goto IL_0042;
	}

IL_0013:
	{
		// transform.position = Vector3.Lerp(transform.position, m_Target.position, deltaTime*m_MoveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = ___deltaTime0;
		float L_9 = __this->___m_MoveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_5, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_10, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B5_0 = NULL;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B6_1 = NULL;
	{
		// if(Time.timeScale < float.Epsilon)
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		V_2 = (bool)((((float)L_0) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0193;
	}

IL_0016:
	{
		// var x = Input.GetAxis("Mouse X");
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_2;
		// var y = Input.GetAxis("Mouse Y");
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_3;
		// m_LookAngle += x*m_TurnSpeed;
		float L_4 = __this->___m_LookAngle_18;
		float L_5 = V_0;
		float L_6 = __this->___m_TurnSpeed_12;
		__this->___m_LookAngle_18 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// m_TransformTargetRot = Quaternion.Euler(0f, m_LookAngle, 0f);
		float L_7 = __this->___m_LookAngle_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_7, (0.0f), NULL);
		__this->___m_TransformTargetRot_23 = L_8;
		// if (m_VerticalAutoReturn)
		bool L_9 = __this->___m_VerticalAutoReturn_17;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_009e;
		}
	}
	{
		// m_TiltAngle = y > 0 ? Mathf.Lerp(0, -m_TiltMin, y) : Mathf.Lerp(0, m_TiltMax, -y);
		float L_11 = V_1;
		G_B4_0 = __this;
		if ((((float)L_11) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_0084;
		}
	}
	{
		float L_12 = __this->___m_TiltMax_14;
		float L_13 = V_1;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_12, ((-L_13)), NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		goto IL_0096;
	}

IL_0084:
	{
		float L_15 = __this->___m_TiltMin_15;
		float L_16 = V_1;
		float L_17;
		L_17 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), ((-L_15)), L_16, NULL);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_0;
	}

IL_0096:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_TiltAngle_19 = G_B6_0;
		goto IL_00d3;
	}

IL_009e:
	{
		// m_TiltAngle -= y*m_TurnSpeed;
		float L_18 = __this->___m_TiltAngle_19;
		float L_19 = V_1;
		float L_20 = __this->___m_TurnSpeed_12;
		__this->___m_TiltAngle_19 = ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(L_19, L_20))));
		// m_TiltAngle = Mathf.Clamp(m_TiltAngle, -m_TiltMin, m_TiltMax);
		float L_21 = __this->___m_TiltAngle_19;
		float L_22 = __this->___m_TiltMin_15;
		float L_23 = __this->___m_TiltMax_14;
		float L_24;
		L_24 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_21, ((-L_22)), L_23, NULL);
		__this->___m_TiltAngle_19 = L_24;
	}

IL_00d3:
	{
		// m_PivotTargetRot = Quaternion.Euler(m_TiltAngle, m_PivotEulers.y , m_PivotEulers.z);
		float L_25 = __this->___m_TiltAngle_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___m_PivotEulers_21);
		float L_27 = L_26->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_PivotEulers_21);
		float L_29 = L_28->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_25, L_27, L_29, NULL);
		__this->___m_PivotTargetRot_22 = L_30;
		// if (m_TurnSmoothing > 0)
		float L_31 = __this->___m_TurnSmoothing_13;
		V_4 = (bool)((((float)L_31) > ((float)(0.0f)))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_016d;
		}
	}
	{
		// m_Pivot.localRotation = Quaternion.Slerp(m_Pivot.localRotation, m_PivotTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = __this->___m_PivotTargetRot_22;
		float L_37 = __this->___m_TurnSmoothing_13;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_35, L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)), NULL);
		NullCheck(L_33);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_33, L_39, NULL);
		// transform.localRotation = Quaternion.Slerp(transform.localRotation, m_TransformTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_41, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = __this->___m_TransformTargetRot_23;
		float L_44 = __this->___m_TurnSmoothing_13;
		float L_45;
		L_45 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_42, L_43, ((float)il2cpp_codegen_multiply(L_44, L_45)), NULL);
		NullCheck(L_40);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_40, L_46, NULL);
		goto IL_0193;
	}

IL_016d:
	{
		// m_Pivot.localRotation = m_PivotTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = __this->___m_PivotTargetRot_22;
		NullCheck(L_47);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_47, L_48, NULL);
		// transform.localRotation = m_TransformTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = __this->___m_TransformTargetRot_23;
		NullCheck(L_49);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_49, L_50, NULL);
	}

IL_0193:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam__ctor_m0B5161AC16134D026A74E23EDE3011F252B9C28B (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_MoveSpeed = 1f;                      // How fast the rig will move to keep up with the target's position.
		__this->___m_MoveSpeed_11 = (1.0f);
		// [Range(0f, 10f)] [SerializeField] private float m_TurnSpeed = 1.5f;   // How fast the rig will rotate from user input.
		__this->___m_TurnSpeed_12 = (1.5f);
		// [SerializeField] private float m_TurnSmoothing = 0.0f;                // How much smoothing to apply to the turn input, to reduce mouse-turn jerkiness
		__this->___m_TurnSmoothing_13 = (0.0f);
		// [SerializeField] private float m_TiltMax = 75f;                       // The maximum value of the x axis rotation of the pivot.
		__this->___m_TiltMax_14 = (75.0f);
		// [SerializeField] private float m_TiltMin = 45f;                       // The minimum value of the x axis rotation of the pivot.
		__this->___m_TiltMin_15 = (45.0f);
		// [SerializeField] private bool m_LockCursor = false;                   // Whether the cursor should be hidden and locked.
		__this->___m_LockCursor_16 = (bool)0;
		// [SerializeField] private bool m_VerticalAutoReturn = false;           // set wether or not the vertical axis should auto return
		__this->___m_VerticalAutoReturn_17 = (bool)0;
		PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cam = GetComponentInChildren<Camera>().transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___m_Cam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_8), (void*)L_1);
		// m_Pivot = m_Cam.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Cam_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		__this->___m_Pivot_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pivot_9), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	{
		AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Promise_get_CurState_mD0512D15E08EC733965BA299239B02AFAB772490_inline (Promise_tC0F862077973826645AC46C011CC42F69CDB9A82* __this, const RuntimeMethod* method) 
{
	{
		// public PromiseState CurState { get; private set; }
		int32_t L_0 = __this->___U3CCurStateU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* RequestHelper_get_Request_m6E6296880FD1879EAEDE88034709C17D68F0643E_inline (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { private get; set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CRequestU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestHelper_set_Request_mA1C3D38E6CBDABDCF58527D9A28070653A1C1979_inline (RequestHelper_t9D74E18CE3036DEF5E7344045F37CE8B5AF496C2* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { private get; set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CRequestU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseHelper_set_Request_m9734C03F625D17D16F2BD1696ADED283AE295194_inline (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { get; private set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CRequestU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ResponseHelper_get_Request_m7BC4EF21DC9F461CDFCBC86DCF0AA8F2C06D50B0_inline (ResponseHelper_t7B7E3E0E325AE7C80E16329CA85D2FFEC3D4CB9C* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest Request { get; private set; }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CRequestU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
