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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`2<System.Byte[],System.Int32>
struct Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F;
// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<ARS.SharpOSC.OscMessage>
struct IEnumerable_1_t02FA3910B52C808717C1903C44EDE511AAD0E9C0;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>
struct List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D;
// System.Collections.Generic.List`1<ARS.OSC/OSCListener>
struct List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B;
// System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>
struct List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710;
// System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>
struct List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ARS.SharpOSC.OscMessage[]
struct OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// ARS.OSC/OSCListener[]
struct OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A;
// ARS.OSC/OSCRealListener[]
struct OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D;
// ARS.OSC/OSCListener/Entry[]
struct EntryU5BU5D_tC876B0223DD53B507E8EF4F7E9EC97B6B4B98E4E;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ARS.SharpOSC.HandleBytePacket
struct HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078;
// ARS.SharpOSC.HandleOscPacket
struct HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ARS.OSC
struct OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ARS.SharpOSC.OscBundle
struct OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944;
// ARS.SharpOSC.OscMessage
struct OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C;
// ARS.SharpOSC.OscPacket
struct OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ARS.SharpOSC.UDPListener
struct UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3;
// ARS.SharpOSC.UDPSender
struct UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4;
// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8;
// ARS.SharpOSC.Utils
struct Utils_tEC045FE83E2E20C6394A355842BA8553D153A42D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ARS.OSC/OSCBundle
struct OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF;
// ARS.OSC/OSCListener
struct OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1;
// ARS.OSC/OSCRealListener
struct OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B;
// ARS.OSC/OSCSender
struct OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A;
// ARS.OSC/Symbol
struct Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00;
// ARS.SharpOSC.OscBundle/<>c
struct U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC;
// ARS.SharpOSC.OscMessage/<>c
struct U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC;
// ARS.SharpOSC.OscPacket/<>c
struct U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// ARS.OSC/OSCListener/Entry
struct Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D;

IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029DC4FAF64E03C62AAE6872CA2C93D609D1DD09;
IL2CPP_EXTERN_C String_t* _stringLiteral06CDC2346B74309C3902E3A7961C7B70E50E0AEC;
IL2CPP_EXTERN_C String_t* _stringLiteral08440D5D4C6716EB5A69FB4349AD1731E41170F7;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028;
IL2CPP_EXTERN_C String_t* _stringLiteral143D07DEDFD792D6E79F35B423ABCBE031A3F9B4;
IL2CPP_EXTERN_C String_t* _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0DB69E664288D7920AD26AE966F146A9CA59D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral41F9662AC67058AED0D7122A99991B3220ED038D;
IL2CPP_EXTERN_C String_t* _stringLiteral457BB9CC606AFD6B73B8BFB40AB0C962B88922BB;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3A062D84E3B5D4FBEE1EE78E87CFE581941C56;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral74A421F26A14F973978128DB2DE707AF6A123850;
IL2CPP_EXTERN_C String_t* _stringLiteral76304F27F341425195EB9B044C5255005458CD64;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A7528F99075D45C449C07855762BE653619DF32;
IL2CPP_EXTERN_C String_t* _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758;
IL2CPP_EXTERN_C String_t* _stringLiteral7C07C2923A97C4DCCA6D0DF9CBBB15079DB06F1C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF01FC1C59A964A68D9C823503122A645FBD92A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral85C02C4E1E7A28733B80A36E8C78DE145E2F43C3;
IL2CPP_EXTERN_C String_t* _stringLiteral88880EB2655C6232FF5B7E574115367FBC38FB80;
IL2CPP_EXTERN_C String_t* _stringLiteral9189B980B59718C86A3426319EBD31B3A74758CC;
IL2CPP_EXTERN_C String_t* _stringLiteral96B6C567AC8FECCBB574E426BE8890D096E8C2BE;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD1B6EDCACBEF64431726E2E063A15932D08D86;
IL2CPP_EXTERN_C String_t* _stringLiteral9D06A18EC637629CD24F5F3AF83FCCD3D14ABFFA;
IL2CPP_EXTERN_C String_t* _stringLiteral9F9557D4F85550E960D9FB4190E899AE8F24AC93;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA073827D84E42E200779A9ABD3B23BD8D698E0E5;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892;
IL2CPP_EXTERN_C String_t* _stringLiteralBCB290D98536529E0C3D51B61C085067F21AEDBC;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C7952086E5CDBF827DC1B0F3B7FC0ECD3BAC61;
IL2CPP_EXTERN_C String_t* _stringLiteralCFDFACECADD345F32614EC7CBBBA0B786E135F12;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C365B7684444E68559B9B38BC65931D50F37E1;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78;
IL2CPP_EXTERN_C String_t* _stringLiteralD8321B250975371D78EAF34224F896D74A105671;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA62DD4C6D47A156ACB3B85711066223BD240E19;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B078198C79970EE8E8D053E2E477C1817670CA;
IL2CPP_EXTERN_C String_t* _stringLiteralF62C78146978B26577219AC5E198F558246166A4;
IL2CPP_EXTERN_C String_t* _stringLiteralFB291D377E1C085F396956AE264D8F7AA68225B9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB9C069C8367E15DCF6E8FAD626BE10CB6E025BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m981B28FE981E12E775363469AB424F83F97AF507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7611B1DDC761A32458AA0F96A4F8F1D533611D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_mE4ECD2CB6CCADA131211AF958B25834AD0C48E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFE77A45F5BE98B60DF5135B8409755F7E34F3AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3906A73DD409F6B543C4AD842AD81F58BFE72BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m71DBBB7D6BAB5A45F30C57FC86C4AF1F5012451C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m996A8F01FCB46FE3A83F1873481FEF66E8A0E1AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5EBDC553E16B61B0F6F6A673142D4C6D056B47AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m51037E9957BA62033CF9CB8EFA5D4269E0131A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m55E902A24D9990C5254D1E83E191003B8479E183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m732F6D7B9760534EC315F9A927806C080CCF3A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7ADBF731FBB74EBF3937E24FF4665F3EEE584B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m15B4FBAFA904767E112B9D22DD6B40F91DFD4417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9B56383C49F8F2914BAA3611837F2EF6B2C449FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA64C785FCAFBE7D789ACC96997AEBF94B4AAEE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAE9EF5132A194D53E35D415B0C4E3739789928A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF6D680909A3C09ACE8D20C79E47DF6945C09844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m583D155C69F896180F2CA14109056BD841458333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0CDD15A2AFE1CEC388DB9A4D08971BFBDCBF7882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m80ADC2A577B00AE1F1F1A8ED4D11C57B7D9BF4BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscMessage_GetBytes_m07B137D72B990453EC1763F2911B2000A20729D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscPacket_getAddress_m19CD07CDCA4A3EB01074A47972DE9B985C134CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscPacket_getTypes_mAA4AAD679F0311E5B9FD169EDFCBE7F36A652A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscPacket_parseBundle_m5EC4BD221CFC382F6AAC6ACD6A071B34B097DB3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetBytesU3Eb__3_0_m1160B834ADAE7D04E9EAC932EE5D30760E3BE2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetBytesU3Eb__9_0_m160B0B019C0938F837BDFA7A3834938578EE3C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CparseMessageU3Eb__2_0_mB8FF483437BEC53F249DAD0D41455236A13775B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPListener_ReceiveBytes_mD943FE37DBF2413DEC0E725ED6EBA385166BD67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPSender__ctor_m788AB554FA1C3C2B76CFCA34D53952CB0C14A298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A;
struct OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD1FE22FE325C567862771A05EE57FBC0C0EAB5A9 
{
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>
struct List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ARS.OSC/OSCListener>
struct List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>
struct List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>
struct List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_tC876B0223DD53B507E8EF4F7E9EC97B6B4B98E4E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EntryU5BU5D_tC876B0223DD53B507E8EF4F7E9EC97B6B4B98E4E* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF04F04BE65537289B0A6ECC570C8B1320B68B6D7  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

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

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// ARS.SharpOSC.Extensions
struct Extensions_tAEAE41DAB2109393E9CC0F3572901ECC4DF442B5  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ARS.SharpOSC.OscPacket
struct OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
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

// ARS.SharpOSC.UDPListener
struct UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3  : public RuntimeObject
{
	// System.Int32 ARS.SharpOSC.UDPListener::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_0;
	// System.Object ARS.SharpOSC.UDPListener::callbackLock
	RuntimeObject* ___callbackLock_1;
	// System.Net.Sockets.UdpClient ARS.SharpOSC.UDPListener::receivingUdpClient
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ___receivingUdpClient_2;
	// System.Net.IPEndPoint ARS.SharpOSC.UDPListener::RemoteIpEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___RemoteIpEndPoint_3;
	// ARS.SharpOSC.HandleBytePacket ARS.SharpOSC.UDPListener::BytePacketCallback
	HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* ___BytePacketCallback_4;
	// ARS.SharpOSC.HandleOscPacket ARS.SharpOSC.UDPListener::OscPacketCallback
	HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* ___OscPacketCallback_5;
	// System.Collections.Generic.Queue`1<System.Byte[]> ARS.SharpOSC.UDPListener::queue
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* ___queue_6;
	// System.Threading.ManualResetEvent ARS.SharpOSC.UDPListener::ClosingEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___ClosingEvent_7;
	// System.Boolean ARS.SharpOSC.UDPListener::closing
	bool ___closing_8;
};

// ARS.SharpOSC.UDPSender
struct UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4  : public RuntimeObject
{
	// System.Int32 ARS.SharpOSC.UDPSender::_port
	int32_t ____port_0;
	// System.String ARS.SharpOSC.UDPSender::_address
	String_t* ____address_1;
	// System.Net.IPEndPoint ARS.SharpOSC.UDPSender::RemoteIpEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___RemoteIpEndPoint_2;
	// System.Net.Sockets.Socket ARS.SharpOSC.UDPSender::sock
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___sock_3;
};

// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_1;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_2;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_3;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_5;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_6;
};

// ARS.SharpOSC.Utils
struct Utils_tEC045FE83E2E20C6394A355842BA8553D153A42D  : public RuntimeObject
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

// ARS.OSC/OSCBundle
struct OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage> ARS.OSC/OSCBundle::messageList
	List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* ___messageList_0;
	// System.UInt64 ARS.OSC/OSCBundle::timertag
	uint64_t ___timertag_1;
};

// ARS.OSC/OSCListener
struct OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1  : public RuntimeObject
{
	// UnityEngine.Object ARS.OSC/OSCListener::thiz
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___thiz_2;
	// ARS.OSC/OSCRealListener ARS.OSC/OSCListener::realListener
	OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* ___realListener_3;
	// System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry> ARS.OSC/OSCListener::addressList
	List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* ___addressList_4;
	// System.Boolean ARS.OSC/OSCListener::ComesFromBundle
	bool ___ComesFromBundle_5;
	// System.UInt64 ARS.OSC/OSCListener::BundleTimeTag
	uint64_t ___BundleTimeTag_6;
};

struct OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields
{
	// System.Net.IPAddress[] ARS.OSC/OSCListener::hostIPs
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___hostIPs_0;
	// System.Net.IPAddress[] ARS.OSC/OSCListener::localIPs
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___localIPs_1;
};

// ARS.OSC/OSCRealListener
struct OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B  : public RuntimeObject
{
	// ARS.SharpOSC.UDPListener ARS.OSC/OSCRealListener::listener
	UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* ___listener_0;
	// System.Collections.Generic.List`1<ARS.OSC/OSCListener> ARS.OSC/OSCRealListener::unityListeners
	List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* ___unityListeners_1;
};

// ARS.OSC/OSCSender
struct OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A  : public RuntimeObject
{
	// ARS.SharpOSC.UDPSender ARS.OSC/OSCSender::sender
	UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* ___sender_0;
};

// ARS.OSC/Symbol
struct Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00  : public RuntimeObject
{
	// System.String ARS.OSC/Symbol::Value
	String_t* ___Value_0;
};

// ARS.SharpOSC.OscBundle/<>c
struct U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC  : public RuntimeObject
{
};

struct U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields
{
	// ARS.SharpOSC.OscBundle/<>c ARS.SharpOSC.OscBundle/<>c::<>9
	U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* ___U3CU3E9_0;
	// System.Func`2<System.Byte[],System.Int32> ARS.SharpOSC.OscBundle/<>c::<>9__9_0
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* ___U3CU3E9__9_0_1;
};

// ARS.SharpOSC.OscMessage/<>c
struct U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC  : public RuntimeObject
{
};

struct U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields
{
	// ARS.SharpOSC.OscMessage/<>c ARS.SharpOSC.OscMessage/<>c::<>9
	U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* ___U3CU3E9_0;
	// System.Func`2<System.Byte[],System.Int32> ARS.SharpOSC.OscMessage/<>c::<>9__3_0
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* ___U3CU3E9__3_0_1;
};

// ARS.SharpOSC.OscPacket/<>c
struct U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160  : public RuntimeObject
{
};

struct U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields
{
	// ARS.SharpOSC.OscPacket/<>c ARS.SharpOSC.OscPacket/<>c::<>9
	U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* ___U3CU3E9_0;
	// System.Func`2<System.Byte,System.Boolean> ARS.SharpOSC.OscPacket/<>c::<>9__2_0
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___U3CU3E9__2_0_1;
};

// ARS.OSC/OSCListener/Entry
struct Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D  : public RuntimeObject
{
	// System.String ARS.OSC/OSCListener/Entry::address
	String_t* ___address_0;
	// System.Object ARS.OSC/OSCListener/Entry::obj
	RuntimeObject* ___obj_1;
	// System.String ARS.OSC/OSCListener/Entry::methodname
	String_t* ___methodname_2;
	// System.Reflection.MethodInfo ARS.OSC/OSCListener/Entry::mi
	MethodInfo_t* ___mi_3;
	// System.Reflection.ParameterInfo[] ARS.OSC/OSCListener/Entry::pi
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___pi_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ARS.SharpOSC.OscMessage>
struct Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* ____current_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// ARS.SharpOSC.OscMessage
struct OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C  : public OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD
{
	// System.String ARS.SharpOSC.OscMessage::Address
	String_t* ___Address_0;
	// System.Collections.Generic.List`1<System.Object> ARS.SharpOSC.OscMessage::Arguments
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___Arguments_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// ARS.SharpOSC.Timetag
struct Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 
{
	// System.UInt64 ARS.SharpOSC.Timetag::Tag
	uint64_t ___Tag_0;
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

// ARS.OSC/Midi
struct Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E 
{
	// System.Byte ARS.OSC/Midi::Port
	uint8_t ___Port_0;
	// System.Byte ARS.OSC/Midi::Status
	uint8_t ___Status_1;
	// System.Byte ARS.OSC/Midi::Data1
	uint8_t ___Data1_2;
	// System.Byte ARS.OSC/Midi::Data2
	uint8_t ___Data2_3;
};

// ARS.OSC/RGBA
struct RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 
{
	// System.Byte ARS.OSC/RGBA::R
	uint8_t ___R_0;
	// System.Byte ARS.OSC/RGBA::G
	uint8_t ___G_1;
	// System.Byte ARS.OSC/RGBA::B
	uint8_t ___B_2;
	// System.Byte ARS.OSC/RGBA::A
	uint8_t ___A_3;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// ARS.SharpOSC.OscBundle
struct OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944  : public OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD
{
	// ARS.SharpOSC.Timetag ARS.SharpOSC.OscBundle::_timetag
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 ____timetag_0;
	// System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage> ARS.SharpOSC.OscBundle::Messages
	List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* ___Messages_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// System.Func`2<System.Byte[],System.Int32>
struct Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ARS.SharpOSC.HandleBytePacket
struct HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078  : public MulticastDelegate_t
{
};

// ARS.SharpOSC.HandleOscPacket
struct HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// ARS.OSC
struct OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<ARS.OSC/OSCRealListener> ARS.OSC::realListeners
	List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* ___realListeners_4;
};

struct OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields
{
	// ARS.OSC ARS.OSC::_OSC
	OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* ____OSC_5;
	// System.Boolean ARS.OSC::DEBUG_TEXT
	bool ___DEBUG_TEXT_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ARS.OSC/OSCRealListener[]
struct OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D  : public RuntimeArray
{
	ALIGN_FIELD (8) OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* m_Items[1];

	inline OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ARS.OSC/OSCListener[]
struct OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A  : public RuntimeArray
{
	ALIGN_FIELD (8) OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* m_Items[1];

	inline OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ARS.SharpOSC.OscMessage[]
struct OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1  : public RuntimeArray
{
	ALIGN_FIELD (8) OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* m_Items[1];

	inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* value)
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


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Sum<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisRuntimeObject_mFA696FB46760DFFDB2B06EA129F9BCD5664CA0A1_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B_gshared (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 ARS.SharpOSC.Extensions::FirstIndexAfter<System.Byte>(System.Collections.Generic.IEnumerable`1<T>,System.Int32,System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E_gshared (RuntimeObject* ___items0, int32_t ___start1, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate2, const RuntimeMethod* method) ;
// T[] ARS.SharpOSC.Extensions::SubArray<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;

// System.DateTime ARS.SharpOSC.Utils::TimetagToDateTime(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utils_TimetagToDateTime_mAA74126FC74386CB4820686126699488F2373AE4 (uint64_t ___val0, const RuntimeMethod* method) ;
// System.UInt64 ARS.SharpOSC.Utils::DateTimeToTimetag(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Utils_DateTimeToTimetag_m0D418E28410E846F4DCED0D42A8B6D74667CDEB3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::get_Item(System.Int32)
inline OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 ARS.OSC/OSCRealListener::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSCRealListener_get_Port_m1E7B4A27E1D36D552A5F11F861A696C553BC45AE (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::get_Count()
inline int32_t List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ARS.OSC/OSCRealListener::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener__ctor_m0B0288D68171928D9BA162369205C9FFFEF705A0 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::Add(T)
inline void List_1_Add_m3906A73DD409F6B543C4AD842AD81F58BFE72BBE_inline (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// ARS.OSC ARS.OSC::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::Remove(T)
inline bool List_1_Remove_m732F6D7B9760534EC315F9A927806C080CCF3A95 (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void ARS.OSC/OSCRealListener::dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_dispose_m7CD4762BF37B2587BAF4305C256578A44DDBEF43 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, const RuntimeMethod* method) ;
// System.Void ARS.OSC::checkOscCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_checkOscCreate_m61DB071BEEB9D38C19FF7CEA3247CFD0B4859313 (const RuntimeMethod* method) ;
// ARS.OSC/OSCRealListener ARS.OSC::getListenerFromPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* OSC_getListenerFromPort_m3E9C6EAE67A3899E84BEBFE9BE1B07730149E222 (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCListener::.ctor(UnityEngine.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener__ctor_m900E304956400123054C130CFAE13DA42BACC086 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___thiz0, RuntimeObject* ___realListener1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener>::Add(T)
inline void List_1_Add_m71DBBB7D6BAB5A45F30C57FC86C4AF1F5012451C_inline (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ARS.OSC>()
inline OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* GameObject_AddComponent_TisOSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_mE4ECD2CB6CCADA131211AF958B25834AD0C48E71 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ARS.OSC/OSCListener>::get_Count()
inline int32_t List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_inline (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ARS.OSC/OSCListener>::get_Item(System.Int32)
inline OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* List_1_get_Item_m0CDD15A2AFE1CEC388DB9A4D08971BFBDCBF7882 (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Object ARS.OSC/OSCListener::get_TargetUnityObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* OSCListener_get_TargetUnityObject_mD57F86B54A7219A481C3A01F3A76173EB7AEACEE_inline (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m55E902A24D9990C5254D1E83E191003B8479E183 (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T[] System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::ToArray()
inline OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* List_1_ToArray_m9B56383C49F8F2914BAA3611837F2EF6B2C449FF (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, const RuntimeMethod* method)
{
	return ((  OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// ARS.SharpOSC.OscPacket ARS.SharpOSC.UDPListener::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCRealListener::processOscMessage(System.Object,System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_processOscMessage_m58DA00C2DCA36890E21BD6733B7357CF63E5B09D (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, RuntimeObject* ____msg0, bool ___comesFromBundle1, uint64_t ___timeTag2, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCRealListener::processOscBundle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_processOscBundle_m37B4F14830D02EED8EB1A1E964944B58022FD915 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, RuntimeObject* ____bndl0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCSender::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCSender__ctor_mE9ADDD74364F9660384B294C3E4731653CD1F568 (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* __this, String_t* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCRealListener>::.ctor()
inline void List_1__ctor_mAE9EF5132A194D53E35D415B0C4E3739789928A5 (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::.ctor()
inline void List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54 (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.OscMessage::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscMessage__ctor_m95BE40F7B2EB50AA2659EA9B942D8E507816B19A (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* __this, String_t* ___address0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::Add(T)
inline void List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_inline (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_IsLoopback_m15B12D3C66B1698F20609F59BA3C72D5C22D60F3 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>::.ctor()
inline void List_1__ctor_mA64C785FCAFBE7D789ACC96997AEBF94B4AAEE5D (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>::get_Item(System.Int32)
inline Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* (*) (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>::get_Count()
inline int32_t List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_inline (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCListener::bind(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_bind_mB4B019374FA6EADAE07D9B4BB663689208E942C7 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) ;
// System.Boolean ARS.OSC/OSCListener::exists(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCListener_exists_m5B1FFFE6C00908DECA0585E62D9B07BF78B118B4 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCListener/Entry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_mC3FBF2305DD1187D5C97B931C816E83402407CA2 (Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>::Add(T)
inline void List_1_Add_m996A8F01FCB46FE3A83F1873481FEF66E8A0E1AC_inline (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* __this, Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*, Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ARS.OSC/OSCListener::unbind(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_unbind_m601ED3556425DF69309893FE05F3FC9CB76AAC1E (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener/Entry>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m51037E9957BA62033CF9CB8EFA5D4269E0131A09 (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<ARS.OSC/OSCListener>::Remove(T)
inline bool List_1_Remove_m7ADBF731FBB74EBF3937E24FF4665F3EEE584B28 (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 ARS.SharpOSC.UDPListener::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UDPListener_get_Port_m6FCF8E21E4254F16248E58087807E4C10C9D5D6B_inline (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.OSC/OSCListener>::.ctor()
inline void List_1__ctor_mBF6D680909A3C09ACE8D20C79E47DF6945C09844 (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ARS.SharpOSC.UDPListener::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener__ctor_mA61CE4121BBD22C2D47A0B942968534A71969D21 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.UDPListener::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener_Close_m9E3C2B14CF790565CA830CAC53798929E3C5B3C4 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) ;
// System.Void ARS.OSC::destroyListener(ARS.OSC/OSCRealListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_destroyListener_m480973A7566514801BC733AD56914C8070171105 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* ___rl0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<ARS.OSC/OSCListener>::ToArray()
inline OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* List_1_ToArray_m15B4FBAFA904767E112B9D22DD6B40F91DFD4417 (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* __this, const RuntimeMethod* method)
{
	return ((  OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* (*) (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void ARS.OSC/OSCListener::call(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_call_m391CAECD4F2C5734B366D1A682B9C34C2F1436D8 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, RuntimeObject* ____msg0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::get_Item(System.Int32)
inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* List_1_get_Item_m80ADC2A577B00AE1F1F1A8ED4D11C57B7D9BF4BF (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.UInt64 ARS.SharpOSC.OscBundle::get_Timetag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OscBundle_get_Timetag_m7E852E23A38FA8CDC435C9AF8683B3E09FCB76F2 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::get_Count()
inline int32_t List_1_get_Count_m583D155C69F896180F2CA14109056BD841458333_inline (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ARS.SharpOSC.UDPSender::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender__ctor_m788AB554FA1C3C2B76CFCA34D53952CB0C14A298 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, String_t* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.UDPSender::Send(ARS.SharpOSC.OscPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Send_mF3782E8B30C907FB420434989DC81220A07DD520 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method) ;
// System.Void ARS.OSC/OSCBundle::queryInternals(System.UInt64&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCBundle_queryInternals_m55C872DC5001866F314C7BE3AD8BA6D174F30FBD (OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* __this, uint64_t* ___t0, RuntimeObject** ___list1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::ToArray()
inline OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, const RuntimeMethod* method)
{
	return ((  OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void ARS.SharpOSC.OscBundle::.ctor(System.UInt64,ARS.SharpOSC.OscMessage[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscBundle__ctor_mDAE5DC2E118036C4AFFC9CFC9601EEFA66B14701 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, uint64_t ___timetag0, OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* ___args1, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.UDPSender::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Close_m0A9E92D3139BB0BB8ED884A8C469AD37B60FACD8 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, const RuntimeMethod* method) ;
// System.Void ARS.OSC/Midi::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Midi__ctor_m36E2D18301F86A832ED70A9D0CACC45DC4E20588 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, uint8_t ___port0, uint8_t ___status1, uint8_t ___data12, uint8_t ___data23, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean ARS.OSC/Midi::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 ARS.OSC/Midi::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Midi_GetHashCode_mD576A28EEB090A4641272AF29C3F86D9003ED084 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, const RuntimeMethod* method) ;
// System.Void ARS.OSC/RGBA::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBA__ctor_mFCEDC44FD08A0946F0E02E179F4B7673210DDA55 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, uint8_t ___red0, uint8_t ___green1, uint8_t ___blue2, uint8_t ___alpha3, const RuntimeMethod* method) ;
// System.Boolean ARS.OSC/RGBA::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 ARS.OSC/RGBA::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBA_GetHashCode_m4F9B340441C6C7BEA02DA958D29EC3A89B10C686 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.DateTime ARS.SharpOSC.Timetag::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timetag_get_Timestamp_mBE9E99A5729A6EB32945B1F1BB341A75F65E2223 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.Timetag::set_Timestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.OscPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscPacket__ctor_m6BCCA24B6238608673F5C293FB753A47C4B46F3F (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.Timetag::.ctor(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3_inline (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mFE77A45F5BE98B60DF5135B8409755F7E34F3AD0 (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 ARS.SharpOSC.Utils::AlignedStringLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_AlignedStringLength_m7D98C6D29151DB4102D2698BB34E942B74550337 (String_t* ___val0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setULong_m21F71EDE18B475E628470ABFB98E589815BC7C0F (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ARS.SharpOSC.OscMessage>::GetEnumerator()
inline Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453 List_1_GetEnumerator_m5EBDC553E16B61B0F6F6A673142D4C6D056B47AA (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453 (*) (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ARS.SharpOSC.OscMessage>::Dispose()
inline void Enumerator_Dispose_mB9C069C8367E15DCF6E8FAD626BE10CB6E025BB2 (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ARS.SharpOSC.OscMessage>::get_Current()
inline OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* Enumerator_get_Current_m7611B1DDC761A32458AA0F96A4F8F1D533611D6A_inline (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453* __this, const RuntimeMethod* method)
{
	return ((  OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* (*) (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ARS.SharpOSC.OscMessage>::MoveNext()
inline bool Enumerator_MoveNext_m981B28FE981E12E775363469AB424F83F97AF507 (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Func`2<System.Byte[],System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m31977A36A1BABEF780AECDA194D4EC8863DC57CB (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Sum<System.Byte[]>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1 (RuntimeObject* ___source0, Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* ___selector1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*, const RuntimeMethod*))Enumerable_Sum_TisRuntimeObject_mFA696FB46760DFFDB2B06EA129F9BCD5664CA0A1_gshared)(___source0, ___selector1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Byte[] ARS.SharpOSC.OscPacket::setInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setInt_mFEE6BB6FF29C372316AC56A8F5A5C5C7D8F3E57A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void ARS.SharpOSC.OscBundle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1A62094724C2130A1A3D99966FCBA95C1DA6C1E1 (U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB866B89B3B39789B6B4C8FAA26D83E059DF7C561 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setFloat_mA6EA13F59BD6DFBD559795985F2F10CF5D505B58 (float ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setString_mECBEE34B8E89E263B45DB2900A3C6C39362F8211 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setBlob_m60CB13505D11E50EB75994E4D2144D58FF96AE3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setLong_mA9B273A52C6D2CAEEF3C12F921EF1CC51B09DF22 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline (double ___d0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setDouble_m016FB9A112171FAF5192E6DACEE4E04A802C0E0D (double ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setChar_mDB56C8B476929BD42D93C6F6974A1F5EA8C04B09 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setRGBA(ARS.OSC/RGBA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setRGBA_m55787FDF825BAA3C97927850331E1D5D12B58096 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___value0, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::setMidi(ARS.OSC/Midi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setMidi_mCD0D518D0AABAF172E915FBE1169EE9470FC2865 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.OscMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D063C33EBCBD27C6AD6AE7C2509BD63FCF0A33E (U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* __this, const RuntimeMethod* method) ;
// ARS.SharpOSC.OscBundle ARS.SharpOSC.OscPacket::parseBundle(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* OscPacket_parseBundle_m5EC4BD221CFC382F6AAC6ACD6A071B34B097DB3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bundle0, const RuntimeMethod* method) ;
// ARS.SharpOSC.OscMessage ARS.SharpOSC.OscPacket::parseMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, const RuntimeMethod* method) ;
// System.String ARS.SharpOSC.OscPacket::getAddress(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OscPacket_getAddress_m19CD07CDCA4A3EB01074A47972DE9B985C134CA7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 ARS.SharpOSC.Extensions::FirstIndexAfter<System.Byte>(System.Collections.Generic.IEnumerable`1<T>,System.Int32,System.Func`2<T,System.Boolean>)
inline int32_t Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E (RuntimeObject* ___items0, int32_t ___start1, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, const RuntimeMethod*))Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E_gshared)(___items0, ___start1, ___predicate2, method);
}
// System.Char[] ARS.SharpOSC.OscPacket::getTypes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* OscPacket_getTypes_mAA4AAD679F0311E5B9FD169EDFCBE7F36A652A5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 ARS.SharpOSC.OscPacket::getInt(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OscPacket_getInt_m0689EBE0CDD0B5802166C55FFF23244A3061E683 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Single ARS.SharpOSC.OscPacket::getFloat(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OscPacket_getFloat_mC0671765264F6717BF9C5F1979AA3C91F76614F5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String ARS.SharpOSC.OscPacket::getString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte[] ARS.SharpOSC.OscPacket::getBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_getBlob_m4A23AD82AF73E13B107573CB351404B2410973BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int64 ARS.SharpOSC.OscPacket::getLong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t OscPacket_getLong_m6B3EB58631A59AA40AC4ED6871A32D1D29AD79A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.UInt64 ARS.SharpOSC.OscPacket::getULong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OscPacket_getULong_m7E54B6BA59E26A3194C4ACA3814D2502E52B7AAE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Double ARS.SharpOSC.OscPacket::getDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double OscPacket_getDouble_mCDCAB80FB80F49EBC8F6B3A131DF0E8876D3C4B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void ARS.OSC/Symbol::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Symbol__ctor_m371A441FFB155F8ED4E81A106F9FDC5EBC5AD149 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Char ARS.SharpOSC.OscPacket::getChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OscPacket_getChar_m3C5335A4B990135ADCAF42BDCEE3E29560B50B9D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// ARS.OSC/RGBA ARS.SharpOSC.OscPacket::getRGBA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 OscPacket_getRGBA_mBB030A7FDC0A8DC722B329D28CD0ABF2815A63B8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// ARS.OSC/Midi ARS.SharpOSC.OscPacket::getMidi(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E OscPacket_getMidi_m793E98E6B84CE1B9D6A969CDC44496044137326A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// T[] ARS.SharpOSC.Extensions::SubArray<System.Byte>(T[],System.Int32,System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_gshared)(___data0, ___index1, ___length2, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549 (float ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mDFA957490F403B0A6F73768C710649AC18DA227C (double ___value0, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.OscPacket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCE321183B4DABA8E60790AAA6F8EAA51EDC3698A (U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* __this, const RuntimeMethod* method) ;
// System.Double ARS.SharpOSC.Utils::TimetagToFraction(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_TimetagToFraction_m15BE40D92939985FEFDD18FA3124760FF6ED48BB (uint64_t ___val0, const RuntimeMethod* method) ;
// System.Double ARS.SharpOSC.Timetag::get_Fraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Timetag_get_Fraction_mFB2F5766F8D64EC6713FA21A6C7752C2524F1A56 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.Timetag::set_Fraction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag_set_Fraction_mF53D244B7071F1566267155E8340DD341D447907 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.Timetag::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag__ctor_m112E94B8D4A34CA1E8D5D169F067891D6771374F (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Boolean ARS.SharpOSC.Timetag::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 ARS.SharpOSC.Timetag::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timetag_GetHashCode_m9615472E2A9417F56C676A828AA0861A77D818D8 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.UDPListener::set_Port(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UDPListener_set_Port_mEA6355C631C861AF107725D9D5F13342D1047A43_inline (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor()
inline void Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845 (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginReceive_m5B450DDB7B13BF24E52CD53FB2DF00CE410CC4E3 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___requestCallback0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpClient_EndReceive_m1BAA258139FD339A82F427A6D4049DF4A7A82B39 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, RuntimeObject* ___asyncResult0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** ___remoteEP1, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.HandleBytePacket::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_inline (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method) ;
// ARS.SharpOSC.OscPacket ARS.SharpOSC.OscPacket::GetPacket(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* OscPacket_GetPacket_m8898FE996481C21347D420D8C91D57BE683E6E0A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OscData0, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.HandleOscPacket::Invoke(ARS.SharpOSC.OscPacket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_inline (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(T)
inline void Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.UdpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient_Close_m5441019910E37A7F7B8610A46769004E614FF5B6 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Byte[]>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// T System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0 (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP1, const RuntimeMethod* method) ;
// System.Void ARS.SharpOSC.UDPSender::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Send_m0C0EC20F68B912D6A21B351AABCF232F0188F93F (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB (String_t* ___s0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Millisecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
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
// System.DateTime ARS.OSC::TimetagToDateTime(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D OSC_TimetagToDateTime_mA1F19F1EEAD41A34D86FBB85BD19EAD4B1557127 (uint64_t ___timeTag0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___timeTag0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Utils_TimetagToDateTime_mAA74126FC74386CB4820686126699488F2373AE4(L_0, NULL);
		return L_1;
	}
}
// System.UInt64 ARS.OSC::DateTimeToTimetag(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OSC_DateTimeToTimetag_m3817494F59A914EDF92FBCA98680479034BC6F6C (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___timeTagDateTime0, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___timeTagDateTime0;
		uint64_t L_1;
		L_1 = Utils_DateTimeToTimetag_m0D418E28410E846F4DCED0D42A8B6D74667CDEB3(L_0, NULL);
		return L_1;
	}
}
// ARS.OSC/OSCRealListener ARS.OSC::getListenerFromPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* OSC_getListenerFromPort_m3E9C6EAE67A3899E84BEBFE9BE1B07730149E222 (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, int32_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3906A73DD409F6B543C4AD842AD81F58BFE72BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_0 = __this->___realListeners_4;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_2;
		L_2 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_0, L_1, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = OSCRealListener_get_Port_m1E7B4A27E1D36D552A5F11F861A696C553BC45AE(L_2, NULL);
		int32_t L_4 = ___port0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_5 = __this->___realListeners_4;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_7;
		L_7 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_5, L_6, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_10 = __this->___realListeners_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline(L_10, List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_12 = ___port0;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_13 = (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B*)il2cpp_codegen_object_new(OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OSCRealListener__ctor_m0B0288D68171928D9BA162369205C9FFFEF705A0(L_13, L_12, NULL);
		V_0 = L_13;
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_14 = __this->___realListeners_4;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m3906A73DD409F6B543C4AD842AD81F58BFE72BBE_inline(L_14, L_15, List_1_Add_m3906A73DD409F6B543C4AD842AD81F58BFE72BBE_RuntimeMethod_var);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_16 = V_0;
		return L_16;
	}
}
// System.Void ARS.OSC::destroyListener(ARS.OSC/OSCRealListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_destroyListener_m480973A7566514801BC733AD56914C8070171105 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* ___rl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m732F6D7B9760534EC315F9A927806C080CCF3A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_0 = ___rl0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_1;
		L_1 = OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_3;
		L_3 = OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837(NULL);
		NullCheck(L_3);
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_4 = L_3->___realListeners_4;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_5 = ___rl0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m732F6D7B9760534EC315F9A927806C080CCF3A95(L_4, L_5, List_1_Remove_m732F6D7B9760534EC315F9A927806C080CCF3A95_RuntimeMethod_var);
		return;
	}
}
// System.Void ARS.OSC::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_OnDestroy_m3341DAD94388066459953AFBBE08EA63D98664C8 (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_0 = __this->___realListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline(L_0, List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0033;
	}

IL_0010:
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_2 = __this->___realListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_4;
		L_4 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_2, L_3, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_5 = __this->___realListeners_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_7;
		L_7 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_5, L_6, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_7);
		OSCRealListener_dispose_m7CD4762BF37B2587BAF4305C256578A44DDBEF43(L_7, NULL);
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// ARS.OSC/OSCListener ARS.OSC::aquireListener(UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* OSC_aquireListener_m841B1CEFCD979CDDAD0B387613F19AF916C74A16 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___thiz0, int32_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m71DBBB7D6BAB5A45F30C57FC86C4AF1F5012451C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* V_0 = NULL;
	OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_checkOscCreate_m61DB071BEEB9D38C19FF7CEA3247CFD0B4859313(NULL);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_0;
		L_0 = OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837(NULL);
		int32_t L_1 = ___port1;
		NullCheck(L_0);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_2;
		L_2 = OSC_getListenerFromPort_m3E9C6EAE67A3899E84BEBFE9BE1B07730149E222(L_0, L_1, NULL);
		V_0 = L_2;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___thiz0;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_4 = V_0;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_5 = (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1*)il2cpp_codegen_object_new(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OSCListener__ctor_m900E304956400123054C130CFAE13DA42BACC086(L_5, L_3, L_4, NULL);
		V_1 = L_5;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_6 = V_0;
		NullCheck(L_6);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_7 = L_6->___unityListeners_1;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_8 = V_1;
		NullCheck(L_7);
		List_1_Add_m71DBBB7D6BAB5A45F30C57FC86C4AF1F5012451C_inline(L_7, L_8, List_1_Add_m71DBBB7D6BAB5A45F30C57FC86C4AF1F5012451C_RuntimeMethod_var);
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_9 = V_1;
		return L_9;
	}
}
// System.Void ARS.OSC::checkOscCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_checkOscCreate_m61DB071BEEB9D38C19FF7CEA3247CFD0B4859313 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_mE4ECD2CB6CCADA131211AF958B25834AD0C48E71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C02C4E1E7A28733B80A36E8C78DE145E2F43C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_0;
		L_0 = OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral85C02C4E1E7A28733B80A36E8C78DE145E2F43C3, NULL);
		NullCheck(L_2);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_3;
		L_3 = GameObject_AddComponent_TisOSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_mE4ECD2CB6CCADA131211AF958B25834AD0C48E71(L_2, GameObject_AddComponent_TisOSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_mE4ECD2CB6CCADA131211AF958B25834AD0C48E71_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5), (void*)L_3);
	}

IL_0021:
	{
		return;
	}
}
// ARS.OSC ARS.OSC::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_0 = ((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5 = ((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0*)CastclassClass((RuntimeObject*)L_4, OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5), (void*)((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0*)CastclassClass((RuntimeObject*)L_4, OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var)));
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_5 = ((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->____OSC_5;
		return L_5;
	}
}
// System.Void ARS.OSC::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_Awake_m37F984007BB867C7999F7DC30E24378FD2D137D3 (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		return;
	}
}
// System.Void ARS.OSC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_Start_mF73E8CCAEDF105022874809DAAA20F542702966D (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* L_0;
		L_0 = OSC_get_Instance_m0C943F6417B44380B1F1B9C78AEC9CFD5D3CD837(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ARS.OSC::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC_LateUpdate_mED9E0B3B8ECFBA5F93144C7CDEEAA10B5245C8AF (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m55E902A24D9990C5254D1E83E191003B8479E183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9B56383C49F8F2914BAA3611837F2EF6B2C449FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0CDD15A2AFE1CEC388DB9A4D08971BFBDCBF7882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CDC2346B74309C3902E3A7961C7B70E50E0AEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A7528F99075D45C449C07855762BE653619DF32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF01FC1C59A964A68D9C823503122A645FBD92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCB290D98536529E0C3D51B61C085067F21AEDBC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* V_2 = NULL;
	int32_t V_3 = 0;
	OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* V_4 = NULL;
	OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_0 = __this->___realListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline(L_0, List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_009e;
	}

IL_0013:
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_2 = __this->___realListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_4;
		L_4 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_2, L_3, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_5 = L_4->___unityListeners_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_inline(L_5, List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_006d;
	}

IL_002e:
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_7 = __this->___realListeners_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_9;
		L_9 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_7, L_8, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_10 = L_9->___unityListeners_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_12;
		L_12 = List_1_get_Item_m0CDD15A2AFE1CEC388DB9A4D08971BFBDCBF7882(L_10, L_11, List_1_get_Item_m0CDD15A2AFE1CEC388DB9A4D08971BFBDCBF7882_RuntimeMethod_var);
		NullCheck(L_12);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13;
		L_13 = OSCListener_get_TargetUnityObject_mD57F86B54A7219A481C3A01F3A76173EB7AEACEE_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_15 = __this->___realListeners_4;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_17;
		L_17 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_15, L_16, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_18 = L_17->___unityListeners_1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		List_1_RemoveAt_m55E902A24D9990C5254D1E83E191003B8479E183(L_18, L_19, List_1_RemoveAt_m55E902A24D9990C5254D1E83E191003B8479E183_RuntimeMethod_var);
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_006d:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_22 = __this->___realListeners_4;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_24;
		L_24 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_22, L_23, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_24);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_25 = L_24->___unityListeners_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_inline(L_25, List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_009a;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_27 = __this->___realListeners_4;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_29;
		L_29 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_27, L_28, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_29);
		OSCRealListener_dispose_m7CD4762BF37B2587BAF4305C256578A44DDBEF43(L_29, NULL);
	}

IL_009a:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_009e:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_32 = __this->___realListeners_4;
		NullCheck(L_32);
		OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* L_33;
		L_33 = List_1_ToArray_m9B56383C49F8F2914BAA3611837F2EF6B2C449FF(L_32, List_1_ToArray_m9B56383C49F8F2914BAA3611837F2EF6B2C449FF_RuntimeMethod_var);
		V_2 = L_33;
		V_3 = 0;
		goto IL_0109;
	}

IL_00b5:
	{
		OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* L_34 = V_2;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = L_37;
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_38 = V_4;
		NullCheck(L_38);
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_39 = L_38->___listener_0;
		NullCheck(L_39);
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_40;
		L_40 = UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F(L_39, NULL);
		V_5 = L_40;
		goto IL_0101;
	}

IL_00ca:
	{
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_41 = V_5;
		if (!((OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)IsInstClass((RuntimeObject*)L_41, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var)))
		{
			goto IL_00e1;
		}
	}
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_42 = V_4;
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_43 = V_5;
		NullCheck(L_42);
		OSCRealListener_processOscMessage_m58DA00C2DCA36890E21BD6733B7357CF63E5B09D(L_42, L_43, (bool)0, ((int64_t)0), NULL);
		goto IL_00f3;
	}

IL_00e1:
	{
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_44 = V_5;
		if (!((OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944*)IsInstClass((RuntimeObject*)L_44, OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var)))
		{
			goto IL_00f3;
		}
	}
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_45 = V_4;
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_46 = V_5;
		NullCheck(L_45);
		OSCRealListener_processOscBundle_m37B4F14830D02EED8EB1A1E964944B58022FD915(L_45, L_46, NULL);
	}

IL_00f3:
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_47 = V_4;
		NullCheck(L_47);
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_48 = L_47->___listener_0;
		NullCheck(L_48);
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_49;
		L_49 = UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F(L_48, NULL);
		V_5 = L_49;
	}

IL_0101:
	{
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_50 = V_5;
		if (L_50)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0109:
	{
		int32_t L_52 = V_3;
		OSCRealListenerU5BU5D_t1D80FC1F3F254221037FA49B6DCCA0B13AE5524D* L_53 = V_2;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00b5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		bool L_54 = ((OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_StaticFields*)il2cpp_codegen_static_fields_for(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var))->___DEBUG_TEXT_6;
		if (!L_54)
		{
			goto IL_01aa;
		}
	}
	{
		V_6 = _stringLiteral7A7528F99075D45C449C07855762BE653619DF32;
		String_t* L_55 = V_6;
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_56 = __this->___realListeners_4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline(L_56, List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_58);
		String_t* L_60;
		L_60 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(L_55, _stringLiteral7EF01FC1C59A964A68D9C823503122A645FBD92A, L_59, NULL);
		V_6 = L_60;
		V_7 = 0;
		goto IL_0194;
	}

IL_0143:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_61;
		String_t* L_63 = V_6;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_62;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral06CDC2346B74309C3902E3A7961C7B70E50E0AEC);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral06CDC2346B74309C3902E3A7961C7B70E50E0AEC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		int32_t L_66 = V_7;
		int32_t L_67 = L_66;
		RuntimeObject* L_68 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_68);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = L_65;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteralBCB290D98536529E0C3D51B61C085067F21AEDBC);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralBCB290D98536529E0C3D51B61C085067F21AEDBC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_69;
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_71 = __this->___realListeners_4;
		int32_t L_72 = V_7;
		NullCheck(L_71);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_73;
		L_73 = List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E(L_71, L_72, List_1_get_Item_mBDC5406A739BF540FA3DE51B417054739B9D6B4E_RuntimeMethod_var);
		NullCheck(L_73);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_74 = L_73->___unityListeners_1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_inline(L_74, List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		int32_t L_76 = L_75;
		RuntimeObject* L_77 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_77);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_77);
		String_t* L_78;
		L_78 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_70, NULL);
		V_6 = L_78;
		int32_t L_79 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0194:
	{
		int32_t L_80 = V_7;
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_81 = __this->___realListeners_4;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_inline(L_81, List_1_get_Count_m8D215879F88CF652D28497EC4FBEFB479D57B8D4_RuntimeMethod_var);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_83 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_83, NULL);
	}

IL_01aa:
	{
		return;
	}
}
// ARS.OSC/OSCSender ARS.OSC::aquireSender(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* OSC_aquireSender_mA273704680A694457C4577E332253944544EEA2B (String_t* ___address0, int32_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		___address0 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_checkOscCreate_m61DB071BEEB9D38C19FF7CEA3247CFD0B4859313(NULL);
		String_t* L_3 = ___address0;
		int32_t L_4 = ___port1;
		OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* L_5 = (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A*)il2cpp_codegen_object_new(OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OSCSender__ctor_mE9ADDD74364F9660384B294C3E4731653CD1F568(L_5, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void ARS.OSC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC__ctor_mAD9602C047A8FFF2A41F333315841AAA79CD7AC2 (OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAE9EF5132A194D53E35D415B0C4E3739789928A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710* L_0 = (List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710*)il2cpp_codegen_object_new(List_1_t141818A3E77A694EBA7FF505E7924ADF2C8B3710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAE9EF5132A194D53E35D415B0C4E3739789928A5(L_0, List_1__ctor_mAE9EF5132A194D53E35D415B0C4E3739789928A5_RuntimeMethod_var);
		__this->___realListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___realListeners_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARS.OSC::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSC__cctor_mBEFB8417E3B9291A7B1C8CA3B6F40EEBFC84CA00 (const RuntimeMethod* method) 
{
	{
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
// System.Void ARS.OSC/OSCBundle::queryInternals(System.UInt64&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCBundle_queryInternals_m55C872DC5001866F314C7BE3AD8BA6D174F30FBD (OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* __this, uint64_t* ___t0, RuntimeObject** ___list1, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___t0;
		uint64_t L_1 = __this->___timertag_1;
		*((int64_t*)L_0) = (int64_t)L_1;
		RuntimeObject** L_2 = ___list1;
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_3 = __this->___messageList_0;
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		return;
	}
}
// System.Void ARS.OSC/OSCBundle::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCBundle__ctor_m9970F95A510142377CCE85A1C3C91B0AB536B6D6 (OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_0 = (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)il2cpp_codegen_object_new(List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54(L_0, List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		__this->___messageList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageList_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___dateTime0;
		uint64_t L_2;
		L_2 = Utils_DateTimeToTimetag_m0D418E28410E846F4DCED0D42A8B6D74667CDEB3(L_1, NULL);
		__this->___timertag_1 = L_2;
		return;
	}
}
// System.Void ARS.OSC/OSCBundle::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCBundle__ctor_m52F30616189309D32CFD1E725CA5638D7C720639 (OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* __this, uint64_t ___timertag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_0 = (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)il2cpp_codegen_object_new(List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54(L_0, List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		__this->___messageList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageList_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint64_t L_1 = ___timertag0;
		__this->___timertag_1 = L_1;
		return;
	}
}
// System.Void ARS.OSC/OSCBundle::addMessage(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCBundle_addMessage_mAD8EBEECD6C1BBE0B30B5E5E314C2B09AB1C8C0B (OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* __this, String_t* ___address0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_0 = __this->___messageList_0;
		String_t* L_1 = ___address0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___p1;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_3 = (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)il2cpp_codegen_object_new(OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OscMessage__ctor_m95BE40F7B2EB50AA2659EA9B942D8E507816B19A(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_inline(L_0, L_3, List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_RuntimeMethod_var);
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
// System.Boolean ARS.OSC/OSCListener::IsLocalIpAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCListener_IsLocalIpAddress_m4476277DBFF5F822FD180F6013D209FF2AE93E68 (String_t* ___host0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_0 = NULL;
	int32_t V_1 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_2 = NULL;
	bool V_3 = false;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_4 = NULL;
	int32_t V_5 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = ((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___hostIPs_0;
			if (L_0)
			{
				goto IL_0021_1;
			}
		}
		{
			String_t* L_1 = ___host0;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
			L_2 = Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212(L_1, NULL);
			il2cpp_codegen_runtime_class_init_inline(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
			((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___hostIPs_0 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___hostIPs_0), (void*)L_2);
			String_t* L_3;
			L_3 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_4;
			L_4 = Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212(L_3, NULL);
			((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___localIPs_1 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___localIPs_1), (void*)L_4);
		}

IL_0021_1:
		{
			il2cpp_codegen_runtime_class_init_inline(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_5 = ((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___hostIPs_0;
			V_0 = L_5;
			V_1 = 0;
			goto IL_006e_1;
		}

IL_002b_1:
		{
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_6 = V_0;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_2 = L_9;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = V_2;
			il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = IPAddress_IsLoopback_m15B12D3C66B1698F20609F59BA3C72D5C22D60F3(L_10, NULL);
			if (!L_11)
			{
				goto IL_003b_1;
			}
		}
		{
			V_3 = (bool)1;
			goto IL_007b;
		}

IL_003b_1:
		{
			il2cpp_codegen_runtime_class_init_inline(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_12 = ((OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_StaticFields*)il2cpp_codegen_static_fields_for(OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1_il2cpp_TypeInfo_var))->___localIPs_1;
			V_4 = L_12;
			V_5 = 0;
			goto IL_0062_1;
		}

IL_0047_1:
		{
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_13 = V_4;
			int32_t L_14 = V_5;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_6 = L_16;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = V_2;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_18 = V_6;
			NullCheck(L_17);
			bool L_19;
			L_19 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_17, L_18);
			if (!L_19)
			{
				goto IL_005c_1;
			}
		}
		{
			V_3 = (bool)1;
			goto IL_007b;
		}

IL_005c_1:
		{
			int32_t L_20 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		}

IL_0062_1:
		{
			int32_t L_21 = V_5;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_22 = V_4;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
			{
				goto IL_0047_1;
			}
		}
		{
			int32_t L_23 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_006e_1:
		{
			int32_t L_24 = V_1;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_25 = V_0;
			NullCheck(L_25);
			if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
			{
				goto IL_002b_1;
			}
		}
		{
			goto IL_0079;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0079:
	{
		return (bool)0;
	}

IL_007b:
	{
		bool L_26 = V_3;
		return L_26;
	}
}
// UnityEngine.Object ARS.OSC/OSCListener::get_TargetUnityObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* OSCListener_get_TargetUnityObject_mD57F86B54A7219A481C3A01F3A76173EB7AEACEE (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___thiz_2;
		return L_0;
	}
}
// System.DateTime ARS.OSC/OSCListener::get_BundleTimeTagDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D OSCListener_get_BundleTimeTagDateTime_m6F19DF446B43813926FED7FDF9BC0E810C1285A3 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___BundleTimeTag_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Utils_TimetagToDateTime_mAA74126FC74386CB4820686126699488F2373AE4(L_0, NULL);
		return L_1;
	}
}
// System.Void ARS.OSC/OSCListener::.ctor(UnityEngine.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener__ctor_m900E304956400123054C130CFAE13DA42BACC086 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___thiz0, RuntimeObject* ___realListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA64C785FCAFBE7D789ACC96997AEBF94B4AAEE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_0 = (List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB*)il2cpp_codegen_object_new(List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA64C785FCAFBE7D789ACC96997AEBF94B4AAEE5D(L_0, List_1__ctor_mA64C785FCAFBE7D789ACC96997AEBF94B4AAEE5D_RuntimeMethod_var);
		__this->___addressList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___addressList_4), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___thiz0;
		__this->___thiz_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thiz_2), (void*)L_1);
		RuntimeObject* L_2 = ___realListener1;
		__this->___realListener_3 = ((OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B*)IsInstClass((RuntimeObject*)L_2, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___realListener_3), (void*)((OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B*)IsInstClass((RuntimeObject*)L_2, OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean ARS.OSC/OSCListener::exists(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCListener_exists_m5B1FFFE6C00908DECA0585E62D9B07BF78B118B4 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0050;
	}

IL_0004:
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_0 = __this->___addressList_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_2;
		L_2 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_0, L_1, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___obj_1;
		RuntimeObject* L_4 = ___obj1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_004c;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_5 = __this->___addressList_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_7;
		L_7 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_5, L_6, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = L_7->___address_0;
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_11 = __this->___addressList_4;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_13;
		L_13 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_11, L_12, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14 = L_13->___methodname_2;
		String_t* L_15 = ___methodname2;
		NullCheck(L_14);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)1;
	}

IL_004c:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0050:
	{
		int32_t L_18 = V_0;
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_19 = __this->___addressList_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_inline(L_19, List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void ARS.OSC/OSCListener::call(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_call_m391CAECD4F2C5734B366D1A682B9C34C2F1436D8 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, RuntimeObject* ____msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = ____msg0;
		V_0 = ((OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)IsInstClass((RuntimeObject*)L_0, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_00d8;
	}

IL_000e:
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_1 = __this->___addressList_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_3;
		L_3 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_1, L_2, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4 = L_3->___address_0;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Address_0;
		NullCheck(L_4);
		bool L_7;
		L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_00d4;
		}
	}
	{
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_8 = V_0;
		NullCheck(L_8);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = L_8->___Arguments_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_9, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_11 = __this->___addressList_4;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_13;
		L_13 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_11, L_12, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_13);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14 = L_13->___pi_4;
		NullCheck(L_14);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_00d4;
		}
	}
	{
		V_2 = (bool)1;
		V_3 = 0;
		goto IL_0090;
	}

IL_0058:
	{
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_15 = V_0;
		NullCheck(L_15);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = L_15->___Arguments_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_16, L_17, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_20 = __this->___addressList_4;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_22;
		L_22 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_20, L_21, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_22);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_23 = L_22->___pi_4;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_26);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_19, L_27, NULL);
		if (!L_28)
		{
			goto IL_008c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_009e;
	}

IL_008c:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0090:
	{
		int32_t L_30 = V_3;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_31 = V_0;
		NullCheck(L_31);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_32 = L_31->___Arguments_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_32, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_33)))
		{
			goto IL_0058;
		}
	}

IL_009e:
	{
		bool L_34 = V_2;
		if (!L_34)
		{
			goto IL_00d4;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_35 = __this->___addressList_4;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_37;
		L_37 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_35, L_36, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_37);
		MethodInfo_t* L_38 = L_37->___mi_3;
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_39 = __this->___addressList_4;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_41;
		L_41 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_39, L_40, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->___obj_1;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_43 = V_0;
		NullCheck(L_43);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_44 = L_43->___Arguments_1;
		NullCheck(L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45;
		L_45 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_44, List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		NullCheck(L_38);
		RuntimeObject* L_46;
		L_46 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_38, L_42, L_45, NULL);
	}

IL_00d4:
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00d8:
	{
		int32_t L_48 = V_1;
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_49 = __this->___addressList_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_inline(L_49, List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void ARS.OSC/OSCListener::bind(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_bind_m3C64C6BB71DDA9173F227D250BAADF6F1B7E41C1 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, String_t* ___methodname1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___address0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___thiz_2;
		String_t* L_2 = ___methodname1;
		OSCListener_bind_mB4B019374FA6EADAE07D9B4BB663689208E942C7(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ARS.OSC/OSCListener::bind(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_bind_mB4B019374FA6EADAE07D9B4BB663689208E942C7 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m996A8F01FCB46FE3A83F1873481FEF66E8A0E1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3A062D84E3B5D4FBEE1EE78E87CFE581941C56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B6C567AC8FECCBB574E426BE8890D096E8C2BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AD1B6EDCACBEF64431726E2E063A15932D08D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF62C78146978B26577219AC5E198F558246166A4);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* V_2 = NULL;
	{
		String_t* L_0 = ___address0;
		RuntimeObject* L_1 = ___obj1;
		String_t* L_2 = ___methodname2;
		bool L_3;
		L_3 = OSCListener_exists_m5B1FFFE6C00908DECA0585E62D9B07BF78B118B4(__this, L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___address0;
		String_t* L_5 = ___methodname2;
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF62C78146978B26577219AC5E198F558246166A4, L_4, _stringLiteral96B6C567AC8FECCBB574E426BE8890D096E8C2BE, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		String_t* L_9 = ___methodname2;
		NullCheck(L_8);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_8, L_9, NULL);
		V_0 = L_10;
		MethodInfo_t* L_11 = V_0;
		bool L_12;
		L_12 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_11, (MethodInfo_t*)NULL, NULL);
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = ___methodname2;
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9AD1B6EDCACBEF64431726E2E063A15932D08D86, L_13, _stringLiteral6C3A062D84E3B5D4FBEE1EE78E87CFE581941C56, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		return;
	}

IL_004e:
	{
		MethodInfo_t* L_15 = V_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_15);
		V_1 = L_16;
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_17 = (Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D*)il2cpp_codegen_object_new(Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Entry__ctor_mC3FBF2305DD1187D5C97B931C816E83402407CA2(L_17, NULL);
		V_2 = L_17;
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_18 = V_2;
		String_t* L_19 = ___address0;
		NullCheck(L_18);
		L_18->___address_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___address_0), (void*)L_19);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_20 = V_2;
		RuntimeObject* L_21 = ___obj1;
		NullCheck(L_20);
		L_20->___obj_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___obj_1), (void*)L_21);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_22 = V_2;
		String_t* L_23 = ___methodname2;
		NullCheck(L_22);
		L_22->___methodname_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___methodname_2), (void*)L_23);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_24 = V_2;
		MethodInfo_t* L_25 = V_0;
		NullCheck(L_24);
		L_24->___mi_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___mi_3), (void*)L_25);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_26 = V_2;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_27 = V_1;
		NullCheck(L_26);
		L_26->___pi_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___pi_4), (void*)L_27);
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_28 = __this->___addressList_4;
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_29 = V_2;
		NullCheck(L_28);
		List_1_Add_m996A8F01FCB46FE3A83F1873481FEF66E8A0E1AC_inline(L_28, L_29, List_1_Add_m996A8F01FCB46FE3A83F1873481FEF66E8A0E1AC_RuntimeMethod_var);
		return;
	}
}
// System.Void ARS.OSC/OSCListener::unbind(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_unbind_m9CB15026868A6663B01C92342A08C799C6786D38 (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, String_t* ___methodname1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___address0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___thiz_2;
		String_t* L_2 = ___methodname1;
		OSCListener_unbind_m601ED3556425DF69309893FE05F3FC9CB76AAC1E(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ARS.OSC/OSCListener::unbind(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_unbind_m601ED3556425DF69309893FE05F3FC9CB76AAC1E (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, String_t* ___address0, RuntimeObject* ___obj1, String_t* ___methodname2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m51037E9957BA62033CF9CB8EFA5D4269E0131A09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_0004:
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_0 = __this->___addressList_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_2;
		L_2 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_0, L_1, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___obj_1;
		RuntimeObject* L_4 = ___obj1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_0057;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_5 = __this->___addressList_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_7;
		L_7 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_5, L_6, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = L_7->___address_0;
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_11 = __this->___addressList_4;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* L_13;
		L_13 = List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D(L_11, L_12, List_1_get_Item_mF233DB242285CCE828CF82DFBB898B273476867D_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14 = L_13->___methodname_2;
		String_t* L_15 = ___methodname2;
		NullCheck(L_14);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0057;
		}
	}
	{
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_17 = __this->___addressList_4;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		List_1_RemoveAt_m51037E9957BA62033CF9CB8EFA5D4269E0131A09(L_17, L_18, List_1_RemoveAt_m51037E9957BA62033CF9CB8EFA5D4269E0131A09_RuntimeMethod_var);
		return;
	}

IL_0057:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005b:
	{
		int32_t L_20 = V_0;
		List_1_t6627E1E6B8E49623C2C3CDE601C076F7C522E6BB* L_21 = __this->___addressList_4;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_inline(L_21, List_1_get_Count_mC070ABDA04E073D1975F974ED468211040BC7800_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void ARS.OSC/OSCListener::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener_close_mDD9A0AFD35BDC6EBA8CC4CED06C901ECAD88C6CB (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7ADBF731FBB74EBF3937E24FF4665F3EEE584B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_0 = __this->___realListener_3;
		NullCheck(L_0);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_1 = L_0->___unityListeners_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = List_1_Remove_m7ADBF731FBB74EBF3937E24FF4665F3EEE584B28(L_1, __this, List_1_Remove_m7ADBF731FBB74EBF3937E24FF4665F3EEE584B28_RuntimeMethod_var);
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_3 = __this->___realListener_3;
		NullCheck(L_3);
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_4 = L_3->___unityListeners_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_inline(L_4, List_1_get_Count_mC04E692EEB0EB0F09D49CF61BDB883A701093277_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* L_6 = __this->___realListener_3;
		NullCheck(L_6);
		OSCRealListener_dispose_m7CD4762BF37B2587BAF4305C256578A44DDBEF43(L_6, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void ARS.OSC/OSCListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCListener__cctor_mC29AE15B12FE89C6278994AAF68C06F92A916222 (const RuntimeMethod* method) 
{
	{
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
// System.Void ARS.OSC/OSCListener/Entry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_mC3FBF2305DD1187D5C97B931C816E83402407CA2 (Entry_t4F53C44314AAA84FE6A2895AAD843943DBEC444D* __this, const RuntimeMethod* method) 
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
// System.Int32 ARS.OSC/OSCRealListener::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSCRealListener_get_Port_m1E7B4A27E1D36D552A5F11F861A696C553BC45AE (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, const RuntimeMethod* method) 
{
	{
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_0 = __this->___listener_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UDPListener_get_Port_m6FCF8E21E4254F16248E58087807E4C10C9D5D6B_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void ARS.OSC/OSCRealListener::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener__ctor_m0B0288D68171928D9BA162369205C9FFFEF705A0 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, int32_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF6D680909A3C09ACE8D20C79E47DF6945C09844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_0 = (List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B*)il2cpp_codegen_object_new(List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBF6D680909A3C09ACE8D20C79E47DF6945C09844(L_0, List_1__ctor_mBF6D680909A3C09ACE8D20C79E47DF6945C09844_RuntimeMethod_var);
		__this->___unityListeners_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityListeners_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___port0;
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_2 = (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3*)il2cpp_codegen_object_new(UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UDPListener__ctor_mA61CE4121BBD22C2D47A0B942968534A71969D21(L_2, L_1, NULL);
		__this->___listener_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_0), (void*)L_2);
		return;
	}
}
// System.Void ARS.OSC/OSCRealListener::dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_dispose_m7CD4762BF37B2587BAF4305C256578A44DDBEF43 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_0 = __this->___listener_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* L_1 = __this->___listener_0;
		NullCheck(L_1);
		UDPListener_Close_m9E3C2B14CF790565CA830CAC53798929E3C5B3C4(L_1, NULL);
	}

IL_0013:
	{
		__this->___listener_0 = (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_0), (void*)(UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3*)NULL);
		il2cpp_codegen_runtime_class_init_inline(OSC_tA37FC52C35D64F0FC39F1EB3BDA5404E06ACA7B0_il2cpp_TypeInfo_var);
		OSC_destroyListener_m480973A7566514801BC733AD56914C8070171105(__this, NULL);
		return;
	}
}
// System.Void ARS.OSC/OSCRealListener::processOscMessage(System.Object,System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_processOscMessage_m58DA00C2DCA36890E21BD6733B7357CF63E5B09D (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, RuntimeObject* ____msg0, bool ___comesFromBundle1, uint64_t ___timeTag2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m15B4FBAFA904767E112B9D22DD6B40F91DFD4417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* V_0 = NULL;
	OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* V_1 = NULL;
	int32_t V_2 = 0;
	OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* V_3 = NULL;
	{
		RuntimeObject* L_0 = ____msg0;
		V_0 = ((OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)IsInstClass((RuntimeObject*)L_0, OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var));
		List_1_tA04D22D6DCE7FFDA17759035050FA2526728773B* L_1 = __this->___unityListeners_1;
		NullCheck(L_1);
		OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* L_2;
		L_2 = List_1_ToArray_m15B4FBAFA904767E112B9D22DD6B40F91DFD4417(L_1, List_1_ToArray_m15B4FBAFA904767E112B9D22DD6B40F91DFD4417_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0042;
	}

IL_0017:
	{
		OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_7 = V_3;
		NullCheck(L_7);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8;
		L_8 = OSCListener_get_TargetUnityObject_mD57F86B54A7219A481C3A01F3A76173EB7AEACEE_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_10 = V_3;
		bool L_11 = ___comesFromBundle1;
		NullCheck(L_10);
		L_10->___ComesFromBundle_5 = L_11;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_12 = V_3;
		uint64_t L_13 = ___timeTag2;
		NullCheck(L_12);
		L_12->___BundleTimeTag_6 = L_13;
		OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* L_14 = V_3;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_15 = V_0;
		NullCheck(L_14);
		OSCListener_call_m391CAECD4F2C5734B366D1A682B9C34C2F1436D8(L_14, L_15, NULL);
	}

IL_003e:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0042:
	{
		int32_t L_17 = V_2;
		OSCListenerU5BU5D_t372CB1FECC63E369EE66A32D4B3CA3A5429EFB6A* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void ARS.OSC/OSCRealListener::processOscBundle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCRealListener_processOscBundle_m37B4F14830D02EED8EB1A1E964944B58022FD915 (OSCRealListener_tF78D69C8292763EF96B6028151EB8B21D3E7C25B* __this, RuntimeObject* ____bndl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m583D155C69F896180F2CA14109056BD841458333_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m80ADC2A577B00AE1F1F1A8ED4D11C57B7D9BF4BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ____bndl0;
		V_0 = ((OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944*)IsInstClass((RuntimeObject*)L_0, OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_1 = V_0;
		NullCheck(L_1);
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_2 = L_1->___Messages_1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_4;
		L_4 = List_1_get_Item_m80ADC2A577B00AE1F1F1A8ED4D11C57B7D9BF4BF(L_2, L_3, List_1_get_Item_m80ADC2A577B00AE1F1F1A8ED4D11C57B7D9BF4BF_RuntimeMethod_var);
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_5 = V_0;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = OscBundle_get_Timetag_m7E852E23A38FA8CDC435C9AF8683B3E09FCB76F2(L_5, NULL);
		OSCRealListener_processOscMessage_m58DA00C2DCA36890E21BD6733B7357CF63E5B09D(__this, L_4, (bool)1, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_9 = V_0;
		NullCheck(L_9);
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_10 = L_9->___Messages_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m583D155C69F896180F2CA14109056BD841458333_inline(L_10, List_1_get_Count_m583D155C69F896180F2CA14109056BD841458333_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
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
// System.Void ARS.OSC/OSCSender::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCSender__ctor_mE9ADDD74364F9660384B294C3E4731653CD1F568 (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* __this, String_t* ___address0, int32_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___address0;
		int32_t L_1 = ___port1;
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_2 = (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4*)il2cpp_codegen_object_new(UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UDPSender__ctor_m788AB554FA1C3C2B76CFCA34D53952CB0C14A298(L_2, L_0, L_1, NULL);
		__this->___sender_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sender_0), (void*)L_2);
		return;
	}
}
// System.Void ARS.OSC/OSCSender::send(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCSender_send_m41401949C9C4185A44A945230B5E2CD88B96E192 (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* __this, String_t* ___address0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_0 = __this->___sender_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_1 = __this->___sender_0;
		String_t* L_2 = ___address0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___p1;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_4 = (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)il2cpp_codegen_object_new(OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OscMessage__ctor_m95BE40F7B2EB50AA2659EA9B942D8E507816B19A(L_4, L_2, L_3, NULL);
		NullCheck(L_1);
		UDPSender_Send_mF3782E8B30C907FB420434989DC81220A07DD520(L_1, L_4, NULL);
		return;
	}
}
// System.Void ARS.OSC/OSCSender::send(ARS.OSC/OSCBundle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCSender_send_m450E4B8566AC4ECD14F5D2DEB3A0B723A1FB6850 (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* __this, OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* ___ob0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_0 = __this->___sender_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		OSCBundle_t37B8AD564588ABB6BEBE08AC93D03491F69AE1BF* L_1 = ___ob0;
		NullCheck(L_1);
		OSCBundle_queryInternals_m55C872DC5001866F314C7BE3AD8BA6D174F30FBD(L_1, (&V_1), (&V_0), NULL);
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_2 = __this->___sender_0;
		uint64_t L_3 = V_1;
		RuntimeObject* L_4 = V_0;
		NullCheck(((List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)IsInstClass((RuntimeObject*)L_4, List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var)));
		OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* L_5;
		L_5 = List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F(((List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)IsInstClass((RuntimeObject*)L_4, List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var)), List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F_RuntimeMethod_var);
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_6 = (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944*)il2cpp_codegen_object_new(OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OscBundle__ctor_mDAE5DC2E118036C4AFFC9CFC9601EEFA66B14701(L_6, L_3, L_5, NULL);
		NullCheck(L_2);
		UDPSender_Send_mF3782E8B30C907FB420434989DC81220A07DD520(L_2, L_6, NULL);
		return;
	}
}
// System.Void ARS.OSC/OSCSender::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCSender_close_m69F5BC65A68EDDBFD69112DB0FFA8FA86DE41AB3 (OSCSender_tEA33731B6F9195B8519ECA36F184BFB5B43AC31A* __this, const RuntimeMethod* method) 
{
	UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* V_0 = NULL;
	{
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_0 = __this->___sender_0;
		V_0 = L_0;
		__this->___sender_0 = (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sender_0), (void*)(UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4*)NULL);
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* L_2 = V_0;
		NullCheck(L_2);
		UDPSender_Close_m0A9E92D3139BB0BB8ED884A8C469AD37B60FACD8(L_2, NULL);
	}

IL_0017:
	{
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
// System.Void ARS.OSC/Midi::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Midi__ctor_m36E2D18301F86A832ED70A9D0CACC45DC4E20588 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, uint8_t ___port0, uint8_t ___status1, uint8_t ___data12, uint8_t ___data23, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___port0;
		__this->___Port_0 = L_0;
		uint8_t L_1 = ___status1;
		__this->___Status_1 = L_1;
		uint8_t L_2 = ___data12;
		__this->___Data1_2 = L_2;
		uint8_t L_3 = ___data23;
		__this->___Data2_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Midi__ctor_m36E2D18301F86A832ED70A9D0CACC45DC4E20588_AdjustorThunk (RuntimeObject* __this, uint8_t ___port0, uint8_t ___status1, uint8_t ___data12, uint8_t ___data23, const RuntimeMethod* method)
{
	Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*>(__this + _offset);
	Midi__ctor_m36E2D18301F86A832ED70A9D0CACC45DC4E20588(_thisAdjusted, ___port0, ___status1, ___data12, ___data23, method);
}
// System.Boolean ARS.OSC/Midi::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		uint8_t L_5 = __this->___Port_0;
		RuntimeObject* L_6 = ___obj0;
		uint8_t L_7 = ((Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)UnBox(L_6, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var))->___Port_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_8 = __this->___Status_1;
		RuntimeObject* L_9 = ___obj0;
		uint8_t L_10 = ((Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)UnBox(L_9, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var))->___Status_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_11 = __this->___Data1_2;
		RuntimeObject* L_12 = ___obj0;
		uint8_t L_13 = ((Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)UnBox(L_12, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var))->___Data1_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_14 = __this->___Data2_3;
		RuntimeObject* L_15 = ___obj0;
		uint8_t L_16 = ((Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)UnBox(L_15, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var))->___Data2_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)1;
	}

IL_0065:
	{
		return (bool)0;
	}

IL_0067:
	{
		RuntimeObject* L_17 = ___obj0;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		uint8_t L_22 = __this->___Port_0;
		RuntimeObject* L_23 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_24 = 0;
		uint8_t L_25 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_26 = __this->___Status_1;
		RuntimeObject* L_27 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_27, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_28 = 1;
		uint8_t L_29 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_27, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_30 = __this->___Data1_2;
		RuntimeObject* L_31 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_31, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_32 = 2;
		uint8_t L_33 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_31, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_34 = __this->___Data2_3;
		RuntimeObject* L_35 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_35, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_36 = 3;
		uint8_t L_37 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_35, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((!(((uint32_t)L_34) == ((uint32_t)L_37))))
		{
			goto IL_00c0;
		}
	}
	{
		return (bool)1;
	}

IL_00c0:
	{
		return (bool)0;
	}

IL_00c2:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*>(__this + _offset);
	bool _returnValue;
	_returnValue = Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean ARS.OSC/Midi::op_Equality(ARS.OSC/Midi,ARS.OSC/Midi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Midi_op_Equality_m1B389C64E779EC90974103008AC68F7BA4BF83A0 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___a0, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_0 = ___b1;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_1 = L_0;
		RuntimeObject* L_2 = Box(Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC((&___a0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean ARS.OSC/Midi::op_Inequality(ARS.OSC/Midi,ARS.OSC/Midi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Midi_op_Inequality_mD8434039F1B5863C0167CB831963CE9E3BAF0329 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___a0, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_0 = ___b1;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_1 = L_0;
		RuntimeObject* L_2 = Box(Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Midi_Equals_m1491B4F4669764F7241D536A9A7AC617235C03AC((&___a0), L_2, NULL);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Int32 ARS.OSC/Midi::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Midi_GetHashCode_mD576A28EEB090A4641272AF29C3F86D9003ED084 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___Port_0;
		uint8_t L_1 = __this->___Status_1;
		uint8_t L_2 = __this->___Data1_2;
		uint8_t L_3 = __this->___Data2_3;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<((int32_t)24))), ((int32_t)((int32_t)L_1<<((int32_t)16))))), ((int32_t)((int32_t)L_2<<8)))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Midi_GetHashCode_mD576A28EEB090A4641272AF29C3F86D9003ED084_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Midi_GetHashCode_mD576A28EEB090A4641272AF29C3F86D9003ED084(_thisAdjusted, method);
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
// System.Void ARS.OSC/RGBA::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBA__ctor_mFCEDC44FD08A0946F0E02E179F4B7673210DDA55 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, uint8_t ___red0, uint8_t ___green1, uint8_t ___blue2, uint8_t ___alpha3, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___red0;
		__this->___R_0 = L_0;
		uint8_t L_1 = ___green1;
		__this->___G_1 = L_1;
		uint8_t L_2 = ___blue2;
		__this->___B_2 = L_2;
		uint8_t L_3 = ___alpha3;
		__this->___A_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void RGBA__ctor_mFCEDC44FD08A0946F0E02E179F4B7673210DDA55_AdjustorThunk (RuntimeObject* __this, uint8_t ___red0, uint8_t ___green1, uint8_t ___blue2, uint8_t ___alpha3, const RuntimeMethod* method)
{
	RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*>(__this + _offset);
	RGBA__ctor_mFCEDC44FD08A0946F0E02E179F4B7673210DDA55(_thisAdjusted, ___red0, ___green1, ___blue2, ___alpha3, method);
}
// System.Boolean ARS.OSC/RGBA::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		uint8_t L_5 = __this->___R_0;
		RuntimeObject* L_6 = ___obj0;
		uint8_t L_7 = ((RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)UnBox(L_6, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var))->___R_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_8 = __this->___G_1;
		RuntimeObject* L_9 = ___obj0;
		uint8_t L_10 = ((RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)UnBox(L_9, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var))->___G_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_11 = __this->___B_2;
		RuntimeObject* L_12 = ___obj0;
		uint8_t L_13 = ((RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)UnBox(L_12, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var))->___B_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_14 = __this->___A_3;
		RuntimeObject* L_15 = ___obj0;
		uint8_t L_16 = ((RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)UnBox(L_15, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var))->___A_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)1;
	}

IL_0065:
	{
		return (bool)0;
	}

IL_0067:
	{
		RuntimeObject* L_17 = ___obj0;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		uint8_t L_22 = __this->___R_0;
		RuntimeObject* L_23 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_24 = 0;
		uint8_t L_25 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_26 = __this->___G_1;
		RuntimeObject* L_27 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_27, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_28 = 1;
		uint8_t L_29 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_27, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_30 = __this->___B_2;
		RuntimeObject* L_31 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_31, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_32 = 2;
		uint8_t L_33 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_31, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_34 = __this->___A_3;
		RuntimeObject* L_35 = ___obj0;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_35, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_36 = 3;
		uint8_t L_37 = (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_35, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((!(((uint32_t)L_34) == ((uint32_t)L_37))))
		{
			goto IL_00c0;
		}
	}
	{
		return (bool)1;
	}

IL_00c0:
	{
		return (bool)0;
	}

IL_00c2:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*>(__this + _offset);
	bool _returnValue;
	_returnValue = RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean ARS.OSC/RGBA::op_Equality(ARS.OSC/RGBA,ARS.OSC/RGBA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RGBA_op_Equality_mE9AEE9AA35E494C83F0C2B5415BC45E05F697BCF (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___a0, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_0 = ___b1;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_1 = L_0;
		RuntimeObject* L_2 = Box(RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B((&___a0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean ARS.OSC/RGBA::op_Inequality(ARS.OSC/RGBA,ARS.OSC/RGBA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RGBA_op_Inequality_mE6E7B2D52D8C1EB403D1E81420802C8F662CAC5B (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___a0, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_0 = ___b1;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_1 = L_0;
		RuntimeObject* L_2 = Box(RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = RGBA_Equals_mBB9A48DC8B450D5822E19CA7C6A545D23D9EA69B((&___a0), L_2, NULL);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Int32 ARS.OSC/RGBA::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBA_GetHashCode_m4F9B340441C6C7BEA02DA958D29EC3A89B10C686 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___R_0;
		uint8_t L_1 = __this->___G_1;
		uint8_t L_2 = __this->___B_2;
		uint8_t L_3 = __this->___A_3;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<((int32_t)24))), ((int32_t)((int32_t)L_1<<((int32_t)16))))), ((int32_t)((int32_t)L_2<<8)))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t RGBA_GetHashCode_m4F9B340441C6C7BEA02DA958D29EC3A89B10C686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RGBA_GetHashCode_m4F9B340441C6C7BEA02DA958D29EC3A89B10C686(_thisAdjusted, method);
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
// System.Void ARS.OSC/Symbol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Symbol__ctor_mFE5A5340A6E458F42DB5F4EC8A0F9F9BFFF43EDC (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___Value_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return;
	}
}
// System.Void ARS.OSC/Symbol::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Symbol__ctor_m371A441FFB155F8ED4E81A106F9FDC5EBC5AD149 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		return;
	}
}
// System.String ARS.OSC/Symbol::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Symbol_ToString_mE8789E060D19904552712E924AEED7740BD3DF62 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___Value_0;
		return L_0;
	}
}
// System.Boolean ARS.OSC/Symbol::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbol_Equals_mB88663E040227C33921F04F19232D508F872B670 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = __this->___Value_0;
		RuntimeObject* L_6 = ___obj0;
		NullCheck(((Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00*)CastclassClass((RuntimeObject*)L_6, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var)));
		String_t* L_7 = ((Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00*)CastclassClass((RuntimeObject*)L_6, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var))->___Value_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		return (bool)0;
	}

IL_0033:
	{
		RuntimeObject* L_9 = ___obj0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_14 = __this->___Value_0;
		RuntimeObject* L_15 = ___obj0;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), NULL);
		if (!L_16)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		return (bool)0;
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Boolean ARS.OSC/Symbol::op_Equality(ARS.OSC/Symbol,ARS.OSC/Symbol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbol_op_Equality_mB479F5EA52045DA5CAAD453DB2CF9A96CCD7E769 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* ___a0, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* ___b1, const RuntimeMethod* method) 
{
	{
		Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* L_0 = ___a0;
		Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* L_1 = ___b1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		return (bool)0;
	}
}
// System.Boolean ARS.OSC/Symbol::op_Inequality(ARS.OSC/Symbol,ARS.OSC/Symbol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbol_op_Inequality_m9D737D8D2D3835F47922A2C74D9137BF60A64C13 (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* ___a0, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* ___b1, const RuntimeMethod* method) 
{
	{
		Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* L_0 = ___a0;
		Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* L_1 = ___b1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		return (bool)0;
	}
}
// System.Int32 ARS.OSC/Symbol::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Symbol_GetHashCode_m147ACDF7B98302FC94B9D38969B38A20A80107FB (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___Value_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 ARS.SharpOSC.OscBundle::get_Timetag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OscBundle_get_Timetag_m7E852E23A38FA8CDC435C9AF8683B3E09FCB76F2 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, const RuntimeMethod* method) 
{
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* L_0 = (&__this->____timetag_0);
		uint64_t L_1 = L_0->___Tag_0;
		return L_1;
	}
}
// System.Void ARS.SharpOSC.OscBundle::set_Timetag(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscBundle_set_Timetag_mE02E2226A4739B6C960A576C90AE75447344807F (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* L_0 = (&__this->____timetag_0);
		uint64_t L_1 = ___value0;
		L_0->___Tag_0 = L_1;
		return;
	}
}
// System.DateTime ARS.SharpOSC.OscBundle::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D OscBundle_get_Timestamp_m5CC2FF6AA3FB620B32D04F85A78D02F1303BD620 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, const RuntimeMethod* method) 
{
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* L_0 = (&__this->____timetag_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Timetag_get_Timestamp_mBE9E99A5729A6EB32945B1F1BB341A75F65E2223(L_0, NULL);
		return L_1;
	}
}
// System.Void ARS.SharpOSC.OscBundle::set_Timestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscBundle_set_Timestamp_mBC27DFAD03D882D7AA9CBEB5A05D724F802325C6 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* L_0 = (&__this->____timetag_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value0;
		Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9(L_0, L_1, NULL);
		return;
	}
}
// System.Void ARS.SharpOSC.OscBundle::.ctor(System.UInt64,ARS.SharpOSC.OscMessage[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscBundle__ctor_mDAE5DC2E118036C4AFFC9CFC9601EEFA66B14701 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, uint64_t ___timetag0, OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFE77A45F5BE98B60DF5135B8409755F7E34F3AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OscPacket__ctor_m6BCCA24B6238608673F5C293FB753A47C4B46F3F(__this, NULL);
		uint64_t L_0 = ___timetag0;
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3_inline((&L_1), L_0, /*hidden argument*/NULL);
		__this->____timetag_0 = L_1;
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_2 = (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)il2cpp_codegen_object_new(List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54(L_2, List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		__this->___Messages_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Messages_1), (void*)L_2);
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_3 = __this->___Messages_1;
		OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* L_4 = ___args1;
		NullCheck(L_3);
		List_1_AddRange_mFE77A45F5BE98B60DF5135B8409755F7E34F3AD0(L_3, (RuntimeObject*)L_4, List_1_AddRange_mFE77A45F5BE98B60DF5135B8409755F7E34F3AD0_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] ARS.SharpOSC.OscBundle::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscBundle_GetBytes_m7572428CE776B210EF0F498A1CB8E44D10218CD4 (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB9C069C8367E15DCF6E8FAD626BE10CB6E025BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m981B28FE981E12E775363469AB424F83F97AF507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7611B1DDC761A32458AA0F96A4F8F1D533611D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5EBDC553E16B61B0F6F6A673142D4C6D056B47AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetBytesU3Eb__9_0_m160B0B019C0938F837BDFA7A3834938578EE3C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F9662AC67058AED0D7122A99991B3220ED038D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453 V_6;
	memset((&V_6), 0, sizeof(V_6));
	OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* V_7 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_8;
	memset((&V_8), 0, sizeof(V_8));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B8_0 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B7_0 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	{
		V_0 = _stringLiteral41F9662AC67058AED0D7122A99991B3220ED038D;
		String_t* L_0 = V_0;
		int32_t L_1;
		L_1 = Utils_AlignedStringLength_m7D98C6D29151DB4102D2698BB34E942B74550337(L_0, NULL);
		V_1 = L_1;
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* L_2 = (&__this->____timetag_0);
		uint64_t L_3 = L_2->___Tag_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = OscPacket_setULong_m21F71EDE18B475E628470ABFB98E589815BC7C0F(L_3, NULL);
		V_2 = L_4;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_3 = L_5;
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_6 = __this->___Messages_1;
		NullCheck(L_6);
		Enumerator_t30C9CE9EED0881384831BF8CD2B10B54DD27A453 L_7;
		L_7 = List_1_GetEnumerator_m5EBDC553E16B61B0F6F6A673142D4C6D056B47AA(L_6, List_1_GetEnumerator_m5EBDC553E16B61B0F6F6A673142D4C6D056B47AA_RuntimeMethod_var);
		V_6 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB9C069C8367E15DCF6E8FAD626BE10CB6E025BB2((&V_6), Enumerator_Dispose_mB9C069C8367E15DCF6E8FAD626BE10CB6E025BB2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0033_1:
			{
				OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_8;
				L_8 = Enumerator_get_Current_m7611B1DDC761A32458AA0F96A4F8F1D533611D6A_inline((&V_6), Enumerator_get_Current_m7611B1DDC761A32458AA0F96A4F8F1D533611D6A_RuntimeMethod_var);
				V_7 = L_8;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = V_3;
				OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_10 = V_7;
				NullCheck(L_10);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
				L_11 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] ARS.SharpOSC.OscPacket::GetBytes() */, L_10);
				NullCheck(L_9);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_9, L_11, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
			}

IL_0049_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m981B28FE981E12E775363469AB424F83F97AF507((&V_6), Enumerator_MoveNext_m981B28FE981E12E775363469AB424F83F97AF507_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_16 = ((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_17 = L_16;
		G_B7_0 = L_17;
		G_B7_1 = L_15;
		G_B7_2 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length))));
		if (L_17)
		{
			G_B8_0 = L_17;
			G_B8_1 = L_15;
			G_B8_2 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length))));
			goto IL_0087;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* L_18 = ((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_19 = (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*)il2cpp_codegen_object_new(Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m31977A36A1BABEF780AECDA194D4EC8863DC57CB(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CGetBytesU3Eb__9_0_m160B0B019C0938F837BDFA7A3834938578EE3C62_RuntimeMethod_var), NULL);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_20 = L_19;
		((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_20);
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0087:
	{
		int32_t L_21;
		L_21 = Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1(G_B8_1, G_B8_0, Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		V_4 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(G_B8_2, L_21)));
		V_5 = L_22;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_24 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		int32_t L_27 = V_4;
		NullCheck((RuntimeArray*)L_25);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_25, (RuntimeArray*)L_26, L_27, NULL);
		int32_t L_28 = V_4;
		int32_t L_29 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_5;
		int32_t L_32 = V_4;
		NullCheck((RuntimeArray*)L_30);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_30, (RuntimeArray*)L_31, L_32, NULL);
		int32_t L_33 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)(((RuntimeArray*)L_34)->max_length))));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_35 = V_3;
		NullCheck(L_35);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_36;
		L_36 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_35, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_8 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_8), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0109_1;
			}

IL_00cd_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
				L_37 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_8), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_9 = L_37;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_9;
				NullCheck(L_38);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
				L_39 = OscPacket_setInt_mFEE6BB6FF29C372316AC56A8F5A5C5C7D8F3E57A(((int32_t)(((RuntimeArray*)L_38)->max_length)), NULL);
				V_10 = L_39;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_5;
				int32_t L_42 = V_4;
				NullCheck((RuntimeArray*)L_40);
				Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_40, (RuntimeArray*)L_41, L_42, NULL);
				int32_t L_43 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_10;
				NullCheck(L_44);
				V_4 = ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)(((RuntimeArray*)L_44)->max_length))));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_5;
				int32_t L_47 = V_4;
				NullCheck((RuntimeArray*)L_45);
				Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_45, (RuntimeArray*)L_46, L_47, NULL);
				int32_t L_48 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_9;
				NullCheck(L_49);
				V_4 = ((int32_t)il2cpp_codegen_add(L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length))));
			}

IL_0109_1:
			{
				bool L_50;
				L_50 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_8), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_00cd_1;
				}
			}
			{
				goto IL_0122;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_5;
		return L_51;
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
// System.Void ARS.SharpOSC.OscBundle/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m201C5F3B7B54037A8ED9291F0E2D7C3AC5FACAD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* L_0 = (U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC*)il2cpp_codegen_object_new(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1A62094724C2130A1A3D99966FCBA95C1DA6C1E1(L_0, NULL);
		((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ARS.SharpOSC.OscBundle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1A62094724C2130A1A3D99966FCBA95C1DA6C1E1 (U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ARS.SharpOSC.OscBundle/<>c::<GetBytes>b__9_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetBytesU3Eb__9_0_m160B0B019C0938F837BDFA7A3834938578EE3C62 (U3CU3Ec_t3EBF5E89B9FD36F50BEE7974BEDBEDDD1D3842DC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		NullCheck(L_0);
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 4));
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
// System.Void ARS.SharpOSC.OscMessage::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscMessage__ctor_m95BE40F7B2EB50AA2659EA9B942D8E507816B19A (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* __this, String_t* ___address0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OscPacket__ctor_m6BCCA24B6238608673F5C293FB753A47C4B46F3F(__this, NULL);
		String_t* L_0 = ___address0;
		__this->___Address_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Address_0), (void*)L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_1, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		__this->___Arguments_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Arguments_1), (void*)L_1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = __this->___Arguments_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args1;
		NullCheck(L_2);
		List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17(L_2, (RuntimeObject*)L_3, List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] ARS.SharpOSC.OscMessage::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscMessage_GetBytes_m07B137D72B990453EC1763F2911B2000A20729D3 (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetBytesU3Eb__3_0_m1160B834ADAE7D04E9EAC932EE5D30760E3BE2A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08440D5D4C6716EB5A69FB4349AD1731E41170F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457BB9CC606AFD6B73B8BFB40AB0C962B88922BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C07C2923A97C4DCCA6D0DF9CBBB15079DB06F1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDFACECADD345F32614EC7CBBBA0B786E135F12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C365B7684444E68559B9B38BC65931D50F37E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB291D377E1C085F396956AE264D8F7AA68225B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	String_t* V_9 = NULL;
	uint32_t V_10 = 0;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_11;
	memset((&V_11), 0, sizeof(V_11));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B79_0 = NULL;
	String_t* G_B78_0 = NULL;
	String_t* G_B80_0 = NULL;
	String_t* G_B80_1 = NULL;
	int32_t G_B96_0 = 0;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B98_0 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* G_B98_1 = NULL;
	int32_t G_B98_2 = 0;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B97_0 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* G_B97_1 = NULL;
	int32_t G_B97_2 = 0;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = __this->___Arguments_1;
		V_1 = L_1;
		V_2 = 0;
		V_3 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		V_4 = 0;
		goto IL_0520;
	}

IL_001d:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = V_1;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_2, L_3, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		V_8 = L_4;
		RuntimeObject* L_5 = V_8;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		G_B4_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_003e;
	}

IL_0032:
	{
		RuntimeObject* L_6 = V_8;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		G_B4_0 = L_8;
	}

IL_003e:
	{
		V_9 = G_B4_0;
		String_t* L_9 = V_9;
		uint32_t L_10;
		L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB866B89B3B39789B6B4C8FAA26D83E059DF7C561(L_9, NULL);
		V_10 = L_10;
		uint32_t L_11 = V_10;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-2109583554)))))
		{
			goto IL_00c7;
		}
	}
	{
		uint32_t L_12 = V_10;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)875577056)))))
		{
			goto IL_0084;
		}
	}
	{
		uint32_t L_13 = V_10;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)347085918))))
		{
			goto IL_023f;
		}
	}
	{
		uint32_t L_14 = V_10;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)848225627))))
		{
			goto IL_01d1;
		}
	}
	{
		uint32_t L_15 = V_10;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)875577056))))
		{
			goto IL_01bb;
		}
	}
	{
		goto IL_04dd;
	}

IL_0084:
	{
		uint32_t L_16 = V_10;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1764058053)))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_17 = V_10;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1461188995))))
		{
			goto IL_0281;
		}
	}
	{
		uint32_t L_18 = V_10;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1764058053))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_04dd;
	}

IL_00aa:
	{
		uint32_t L_19 = V_10;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1996966820))))
		{
			goto IL_0255;
		}
	}
	{
		uint32_t L_20 = V_10;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2109583554))))
		{
			goto IL_0163;
		}
	}
	{
		goto IL_04dd;
	}

IL_00c7:
	{
		uint32_t L_21 = V_10;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-998987113)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_22 = V_10;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1553472747)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_23 = V_10;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-2045141542))))
		{
			goto IL_01fd;
		}
	}
	{
		uint32_t L_24 = V_10;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1553472747))))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_04dd;
	}

IL_00f6:
	{
		uint32_t L_25 = V_10;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1418452858))))
		{
			goto IL_0229;
		}
	}
	{
		uint32_t L_26 = V_10;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-998987113))))
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_04dd;
	}

IL_0113:
	{
		uint32_t L_27 = V_10;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-114490822)))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_28 = V_10;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-796636715))))
		{
			goto IL_026b;
		}
	}
	{
		uint32_t L_29 = V_10;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-114490822))))
		{
			goto IL_014d;
		}
	}
	{
		goto IL_04dd;
	}

IL_0136:
	{
		uint32_t L_30 = V_10;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-93602905))))
		{
			goto IL_0179;
		}
	}
	{
		uint32_t L_31 = V_10;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-38277272))))
		{
			goto IL_018f;
		}
	}
	{
		goto IL_04dd;
	}

IL_014d:
	{
		String_t* L_32 = V_9;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, NULL);
		if (L_33)
		{
			goto IL_0297;
		}
	}
	{
		goto IL_04dd;
	}

IL_0163:
	{
		String_t* L_34 = V_9;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, NULL);
		if (L_35)
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_04dd;
	}

IL_0179:
	{
		String_t* L_36 = V_9;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6, NULL);
		if (L_37)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_04dd;
	}

IL_018f:
	{
		String_t* L_38 = V_9;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral08440D5D4C6716EB5A69FB4349AD1731E41170F7, NULL);
		if (L_39)
		{
			goto IL_031f;
		}
	}
	{
		goto IL_04dd;
	}

IL_01a5:
	{
		String_t* L_40 = V_9;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028, NULL);
		if (L_41)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_04dd;
	}

IL_01bb:
	{
		String_t* L_42 = V_9;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6, NULL);
		if (L_43)
		{
			goto IL_0365;
		}
	}
	{
		goto IL_04dd;
	}

IL_01d1:
	{
		String_t* L_44 = V_9;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98, NULL);
		if (L_45)
		{
			goto IL_0388;
		}
	}
	{
		goto IL_04dd;
	}

IL_01e7:
	{
		String_t* L_46 = V_9;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral7C07C2923A97C4DCCA6D0DF9CBBB15079DB06F1C, NULL);
		if (L_47)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_04dd;
	}

IL_01fd:
	{
		String_t* L_48 = V_9;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5, NULL);
		if (L_49)
		{
			goto IL_03f2;
		}
	}
	{
		goto IL_04dd;
	}

IL_0213:
	{
		String_t* L_50 = V_9;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralFB291D377E1C085F396956AE264D8F7AA68225B9, NULL);
		if (L_51)
		{
			goto IL_0415;
		}
	}
	{
		goto IL_04dd;
	}

IL_0229:
	{
		String_t* L_52 = V_9;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral457BB9CC606AFD6B73B8BFB40AB0C962B88922BB, NULL);
		if (L_53)
		{
			goto IL_0438;
		}
	}
	{
		goto IL_04dd;
	}

IL_023f:
	{
		String_t* L_54 = V_9;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78, NULL);
		if (L_55)
		{
			goto IL_045b;
		}
	}
	{
		goto IL_04dd;
	}

IL_0255:
	{
		String_t* L_56 = V_9;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_57)
		{
			goto IL_0479;
		}
	}
	{
		goto IL_04dd;
	}

IL_026b:
	{
		String_t* L_58 = V_9;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralD3C365B7684444E68559B9B38BC65931D50F37E1, NULL);
		if (L_59)
		{
			goto IL_0487;
		}
	}
	{
		goto IL_04dd;
	}

IL_0281:
	{
		String_t* L_60 = V_9;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralCFDFACECADD345F32614EC7CBBBA0B786E135F12, NULL);
		if (L_61)
		{
			goto IL_0487;
		}
	}
	{
		goto IL_04dd;
	}

IL_0297:
	{
		String_t* L_62 = V_3;
		String_t* L_63;
		L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_62, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, NULL);
		V_3 = L_63;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_64 = V_0;
		RuntimeObject* L_65 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = OscPacket_setInt_mFEE6BB6FF29C372316AC56A8F5A5C5C7D8F3E57A(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_64);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_64, L_66, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_02ba:
	{
		RuntimeObject* L_67 = V_8;
		bool L_68;
		L_68 = Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline(((*(float*)((float*)(float*)UnBox(L_67, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		if (!L_68)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_69 = V_3;
		String_t* L_70;
		L_70 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_69, _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD, NULL);
		V_3 = L_70;
		goto IL_04ef;
	}

IL_02d9:
	{
		String_t* L_71 = V_3;
		String_t* L_72;
		L_72 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_71, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
		V_3 = L_72;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_73 = V_0;
		RuntimeObject* L_74 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75;
		L_75 = OscPacket_setFloat_mA6EA13F59BD6DFBD559795985F2F10CF5D505B58(((*(float*)((float*)(float*)UnBox(L_74, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_73);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_73, L_75, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_02fc:
	{
		String_t* L_76 = V_3;
		String_t* L_77;
		L_77 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_76, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		V_3 = L_77;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_78 = V_0;
		RuntimeObject* L_79 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = OscPacket_setString_mECBEE34B8E89E263B45DB2900A3C6C39362F8211(((String_t*)CastclassSealed((RuntimeObject*)L_79, String_t_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_78);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_78, L_80, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_031f:
	{
		String_t* L_81 = V_3;
		String_t* L_82;
		L_82 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_81, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		V_3 = L_82;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_83 = V_0;
		RuntimeObject* L_84 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85;
		L_85 = OscPacket_setBlob_m60CB13505D11E50EB75994E4D2144D58FF96AE3B(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_84, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_83);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_83, L_85, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_0342:
	{
		String_t* L_86 = V_3;
		String_t* L_87;
		L_87 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_86, _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872, NULL);
		V_3 = L_87;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_88 = V_0;
		RuntimeObject* L_89 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90;
		L_90 = OscPacket_setLong_mA9B273A52C6D2CAEEF3C12F921EF1CC51B09DF22(((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_89, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_88);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_88, L_90, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_0365:
	{
		String_t* L_91 = V_3;
		String_t* L_92;
		L_92 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_91, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		V_3 = L_92;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_93 = V_0;
		RuntimeObject* L_94 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95;
		L_95 = OscPacket_setULong_m21F71EDE18B475E628470ABFB98E589815BC7C0F(((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_94, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_93);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_93, L_95, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_0388:
	{
		RuntimeObject* L_96 = V_8;
		bool L_97;
		L_97 = Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline(((*(double*)((double*)(double*)UnBox(L_96, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		if (!L_97)
		{
			goto IL_03a7;
		}
	}
	{
		String_t* L_98 = V_3;
		String_t* L_99;
		L_99 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_98, _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD, NULL);
		V_3 = L_99;
		goto IL_04ef;
	}

IL_03a7:
	{
		String_t* L_100 = V_3;
		String_t* L_101;
		L_101 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_100, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		V_3 = L_101;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_102 = V_0;
		RuntimeObject* L_103 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104;
		L_104 = OscPacket_setDouble_m016FB9A112171FAF5192E6DACEE4E04A802C0E0D(((*(double*)((double*)(double*)UnBox(L_103, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_102);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_102, L_104, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_03ca:
	{
		String_t* L_105 = V_3;
		String_t* L_106;
		L_106 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_105, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, NULL);
		V_3 = L_106;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_107 = V_0;
		RuntimeObject* L_108 = V_8;
		NullCheck(((Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00*)CastclassClass((RuntimeObject*)L_108, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var)));
		String_t* L_109 = ((Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00*)CastclassClass((RuntimeObject*)L_108, Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var))->___Value_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110;
		L_110 = OscPacket_setString_mECBEE34B8E89E263B45DB2900A3C6C39362F8211(L_109, NULL);
		NullCheck(L_107);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_107, L_110, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_03f2:
	{
		String_t* L_111 = V_3;
		String_t* L_112;
		L_112 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_111, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		V_3 = L_112;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_113 = V_0;
		RuntimeObject* L_114 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115;
		L_115 = OscPacket_setChar_mDB56C8B476929BD42D93C6F6974A1F5EA8C04B09(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_114, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_113);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_113, L_115, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_0415:
	{
		String_t* L_116 = V_3;
		String_t* L_117;
		L_117 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_116, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, NULL);
		V_3 = L_117;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_118 = V_0;
		RuntimeObject* L_119 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120;
		L_120 = OscPacket_setRGBA_m55787FDF825BAA3C97927850331E1D5D12B58096(((*(RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)((RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)(RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743*)UnBox(L_119, RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_118);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_118, L_120, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_0438:
	{
		String_t* L_121 = V_3;
		String_t* L_122;
		L_122 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_121, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		V_3 = L_122;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_123 = V_0;
		RuntimeObject* L_124 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125;
		L_125 = OscPacket_setMidi_mCD0D518D0AABAF172E915FBE1169EE9470FC2865(((*(Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)((Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)(Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E*)UnBox(L_124, Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_123);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_123, L_125, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_04ef;
	}

IL_045b:
	{
		String_t* L_126 = V_3;
		RuntimeObject* L_127 = V_8;
		G_B78_0 = L_126;
		if (((*(bool*)((bool*)(bool*)UnBox(L_127, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B79_0 = L_126;
			goto IL_046c;
		}
	}
	{
		G_B80_0 = _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
		G_B80_1 = G_B78_0;
		goto IL_0471;
	}

IL_046c:
	{
		G_B80_0 = _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758;
		G_B80_1 = G_B79_0;
	}

IL_0471:
	{
		String_t* L_128;
		L_128 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B80_1, G_B80_0, NULL);
		V_3 = L_128;
		goto IL_04ef;
	}

IL_0479:
	{
		String_t* L_129 = V_3;
		String_t* L_130;
		L_130 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_129, _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		V_3 = L_130;
		goto IL_04ef;
	}

IL_0487:
	{
		RuntimeObject* L_131 = V_8;
		NullCheck(L_131);
		Type_t* L_132;
		L_132 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_131, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		bool L_135;
		L_135 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_132, L_134, NULL);
		if (!L_135)
		{
			goto IL_04ad;
		}
	}
	{
		RuntimeObject* L_136 = V_8;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_137;
		L_137 = Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE((RuntimeObject*)((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_136, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_RuntimeMethod_var);
		V_8 = L_137;
	}

IL_04ad:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_138 = __this->___Arguments_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_139 = V_1;
		if ((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_138) == ((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_139)))
		{
			goto IL_04c1;
		}
	}
	{
		Exception_t* L_140 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_140);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_140, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral029DC4FAF64E03C62AAE6872CA2C93D609D1DD09)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_140, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscMessage_GetBytes_m07B137D72B990453EC1763F2911B2000A20729D3_RuntimeMethod_var)));
	}

IL_04c1:
	{
		String_t* L_141 = V_3;
		String_t* L_142;
		L_142 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_141, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_3 = L_142;
		RuntimeObject* L_143 = V_8;
		V_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_143, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
		int32_t L_144 = V_4;
		V_2 = L_144;
		V_4 = 0;
		goto IL_0520;
	}

IL_04dd:
	{
		String_t* L_145 = V_9;
		String_t* L_146;
		L_146 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA62DD4C6D47A156ACB3B85711066223BD240E19)), L_145, NULL);
		Exception_t* L_147 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_147);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_147, L_146, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_147, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscMessage_GetBytes_m07B137D72B990453EC1763F2911B2000A20729D3_RuntimeMethod_var)));
	}

IL_04ef:
	{
		int32_t L_148 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_148, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_149 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_150 = __this->___Arguments_1;
		if ((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_149) == ((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_150)))
		{
			goto IL_0520;
		}
	}
	{
		int32_t L_151 = V_4;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_152 = V_1;
		NullCheck(L_152);
		int32_t L_153;
		L_153 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_152, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((!(((uint32_t)L_151) == ((uint32_t)L_153))))
		{
			goto IL_0520;
		}
	}
	{
		String_t* L_154 = V_3;
		String_t* L_155;
		L_155 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_154, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_3 = L_155;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_156 = __this->___Arguments_1;
		V_1 = L_156;
		int32_t L_157 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_0520:
	{
		int32_t L_158 = V_4;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_159 = V_1;
		NullCheck(L_159);
		int32_t L_160;
		L_160 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_159, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_161 = __this->___Address_0;
		NullCheck(L_161);
		int32_t L_162;
		L_162 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_161, NULL);
		if (!L_162)
		{
			goto IL_054f;
		}
	}
	{
		String_t* L_163 = __this->___Address_0;
		if (!L_163)
		{
			goto IL_054f;
		}
	}
	{
		String_t* L_164 = __this->___Address_0;
		int32_t L_165;
		L_165 = Utils_AlignedStringLength_m7D98C6D29151DB4102D2698BB34E942B74550337(L_164, NULL);
		G_B96_0 = L_165;
		goto IL_0550;
	}

IL_054f:
	{
		G_B96_0 = 0;
	}

IL_0550:
	{
		V_5 = G_B96_0;
		String_t* L_166 = V_3;
		int32_t L_167;
		L_167 = Utils_AlignedStringLength_m7D98C6D29151DB4102D2698BB34E942B74550337(L_166, NULL);
		V_6 = L_167;
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_170 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_171 = ((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_172 = L_171;
		G_B97_0 = L_172;
		G_B97_1 = L_170;
		G_B97_2 = ((int32_t)il2cpp_codegen_add(L_168, L_169));
		if (L_172)
		{
			G_B98_0 = L_172;
			G_B98_1 = L_170;
			G_B98_2 = ((int32_t)il2cpp_codegen_add(L_168, L_169));
			goto IL_057f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var);
		U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* L_173 = ((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_174 = (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*)il2cpp_codegen_object_new(Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		NullCheck(L_174);
		Func_2__ctor_m31977A36A1BABEF780AECDA194D4EC8863DC57CB(L_174, L_173, (intptr_t)((void*)U3CU3Ec_U3CGetBytesU3Eb__3_0_m1160B834ADAE7D04E9EAC932EE5D30760E3BE2A2_RuntimeMethod_var), NULL);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_175 = L_174;
		((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_175);
		G_B98_0 = L_175;
		G_B98_1 = G_B97_1;
		G_B98_2 = G_B97_2;
	}

IL_057f:
	{
		int32_t L_176;
		L_176 = Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1(G_B98_1, G_B98_0, Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(G_B98_2, L_176)));
		V_7 = L_177;
		V_4 = 0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_178;
		L_178 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_179 = __this->___Address_0;
		NullCheck(L_178);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_180;
		L_180 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_178, L_179);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = V_7;
		int32_t L_182 = V_4;
		NullCheck((RuntimeArray*)L_180);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_180, (RuntimeArray*)L_181, L_182, NULL);
		int32_t L_183 = V_4;
		int32_t L_184 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_183, L_184));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_185;
		L_185 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_186 = V_3;
		NullCheck(L_185);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187;
		L_187 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_185, L_186);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_188 = V_7;
		int32_t L_189 = V_4;
		NullCheck((RuntimeArray*)L_187);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_187, (RuntimeArray*)L_188, L_189, NULL);
		int32_t L_190 = V_4;
		int32_t L_191 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_190, L_191));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_192 = V_0;
		NullCheck(L_192);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_193;
		L_193 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_192, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_11 = L_193;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05fc:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_11), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_05f1_1;
			}

IL_05d4_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_194;
				L_194 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_11), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_12 = L_194;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_195 = V_12;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = V_7;
				int32_t L_197 = V_4;
				NullCheck((RuntimeArray*)L_195);
				Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_195, (RuntimeArray*)L_196, L_197, NULL);
				int32_t L_198 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_199 = V_12;
				NullCheck(L_199);
				V_4 = ((int32_t)il2cpp_codegen_add(L_198, ((int32_t)(((RuntimeArray*)L_199)->max_length))));
			}

IL_05f1_1:
			{
				bool L_200;
				L_200 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_11), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_200)
				{
					goto IL_05d4_1;
				}
			}
			{
				goto IL_060a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_060a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = V_7;
		return L_201;
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
// System.Void ARS.SharpOSC.OscMessage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m890691330ED684ADD4036F0F9CF1966EF91B8FB4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* L_0 = (U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC*)il2cpp_codegen_object_new(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2D063C33EBCBD27C6AD6AE7C2509BD63FCF0A33E(L_0, NULL);
		((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ARS.SharpOSC.OscMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D063C33EBCBD27C6AD6AE7C2509BD63FCF0A33E (U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ARS.SharpOSC.OscMessage/<>c::<GetBytes>b__3_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetBytesU3Eb__3_0_m1160B834ADAE7D04E9EAC932EE5D30760E3BE2A2 (U3CU3Ec_t2ED496B33F49C5018383E119FDF730F33630FFCC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
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
// ARS.SharpOSC.OscPacket ARS.SharpOSC.OscPacket::GetPacket(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* OscPacket_GetPacket_m8898FE996481C21347D420D8C91D57BE683E6E0A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OscData0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___OscData0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___OscData0;
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_4;
		L_4 = OscPacket_parseBundle_m5EC4BD221CFC382F6AAC6ACD6A071B34B097DB3F(L_3, NULL);
		return L_4;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___OscData0;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_6;
		L_6 = OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F(L_5, NULL);
		return L_6;
	}
}
// ARS.SharpOSC.OscMessage ARS.SharpOSC.OscPacket::parseMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CparseMessageU3Eb__2_0_mB8FF483437BEC53F249DAD0D41455236A13775B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_3 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_4 = NULL;
	bool V_5 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_6 = NULL;
	int32_t V_7 = 0;
	Il2CppChar V_8 = 0x0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	String_t* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int64_t V_13 = 0;
	uint64_t V_14 = 0;
	double V_15 = 0.0;
	String_t* V_16 = NULL;
	Il2CppChar V_17 = 0x0;
	RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E V_19;
	memset((&V_19), 0, sizeof(V_19));
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_2 = NULL;
	int32_t G_B2_3 = 0;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_2 = NULL;
	int32_t G_B1_3 = 0;
	{
		V_0 = 0;
		V_1 = (String_t*)NULL;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_1, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_3 = L_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = V_3;
		V_4 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___msg0;
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = OscPacket_getAddress_m19CD07CDCA4A3EB01074A47972DE9B985C134CA7(L_3, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msg0;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_10 = ((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_7;
		G_B1_3 = L_6;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_7;
			G_B2_3 = L_6;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var);
		U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* L_12 = ((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_13 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)il2cpp_codegen_object_new(Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CparseMessageU3Eb__2_0_mB8FF483437BEC53F249DAD0D41455236A13775B0_RuntimeMethod_var), NULL);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_14 = L_13;
		((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0043:
	{
		int32_t L_15;
		L_15 = Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E((RuntimeObject*)G_B2_2, G_B2_1, G_B2_0, Extensions_FirstIndexAfter_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m621D4C4BC1677F12A589E45B49CA860213648B1E_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(G_B2_3, L_15));
		int32_t L_16 = V_0;
		if (!((int32_t)(L_16%4)))
		{
			goto IL_005a;
		}
	}
	{
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8321B250975371D78EAF34224F896D74A105671)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F_RuntimeMethod_var)));
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___msg0;
		int32_t L_19 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20;
		L_20 = OscPacket_getTypes_mAA4AAD679F0311E5B9FD169EDFCBE7F36A652A5E(L_18, L_19, NULL);
		V_2 = L_20;
		int32_t L_21 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = V_2;
		NullCheck(L_22);
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length))));
		goto IL_006e;
	}

IL_006a:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006e:
	{
		int32_t L_24 = V_0;
		if (((int32_t)(L_24%4)))
		{
			goto IL_006a;
		}
	}
	{
		V_5 = (bool)0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = V_2;
		V_6 = L_25;
		V_7 = 0;
		goto IL_0340;
	}

IL_0081:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_6;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = L_29;
		Il2CppChar L_30 = V_8;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_009a;
		}
	}
	{
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_009a;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_033a;
	}

IL_009a:
	{
		Il2CppChar L_32 = V_8;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_00d2;
		}
	}
	{
		Il2CppChar L_33 = V_8;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)70)))))
		{
			goto IL_00bb;
		}
	}
	{
		Il2CppChar L_34 = V_8;
		if (!L_34)
		{
			goto IL_0335;
		}
	}
	{
		Il2CppChar L_35 = V_8;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)70))))
		{
			goto IL_02c3;
		}
	}
	{
		goto IL_0315;
	}

IL_00bb:
	{
		Il2CppChar L_36 = V_8;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)73))))
		{
			goto IL_02da;
		}
	}
	{
		Il2CppChar L_37 = V_8;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)78))))
		{
			goto IL_02d1;
		}
	}
	{
		goto IL_0315;
	}

IL_00d2:
	{
		Il2CppChar L_38 = V_8;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)84)))))
		{
			goto IL_00ef;
		}
	}
	{
		Il2CppChar L_39 = V_8;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)83))))
		{
			goto IL_0233;
		}
	}
	{
		Il2CppChar L_40 = V_8;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)84))))
		{
			goto IL_02b5;
		}
	}
	{
		goto IL_0315;
	}

IL_00ef:
	{
		Il2CppChar L_41 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_41, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_02f0;
			}
			case 1:
			{
				goto IL_0315;
			}
			case 2:
			{
				goto IL_0308;
			}
			case 3:
			{
				goto IL_0315;
			}
			case 4:
			{
				goto IL_0315;
			}
			case 5:
			{
				goto IL_0315;
			}
			case 6:
			{
				goto IL_0315;
			}
			case 7:
			{
				goto IL_01b7;
			}
			case 8:
			{
				goto IL_0258;
			}
			case 9:
			{
				goto IL_0214;
			}
			case 10:
			{
				goto IL_0315;
			}
			case 11:
			{
				goto IL_0178;
			}
			case 12:
			{
				goto IL_0315;
			}
			case 13:
			{
				goto IL_01d6;
			}
			case 14:
			{
				goto IL_0159;
			}
		}
	}
	{
		Il2CppChar L_42 = V_8;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)109))))
		{
			goto IL_0296;
		}
	}
	{
		Il2CppChar L_43 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0277;
			}
			case 1:
			{
				goto IL_0197;
			}
			case 2:
			{
				goto IL_01f5;
			}
		}
	}
	{
		goto IL_0315;
	}

IL_0159:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___msg0;
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = OscPacket_getInt_m0689EBE0CDD0B5802166C55FFF23244A3061E683(L_44, L_45, NULL);
		V_9 = L_46;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_47 = V_3;
		int32_t L_48 = V_9;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_47, L_50, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 4));
		goto IL_0335;
	}

IL_0178:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___msg0;
		int32_t L_53 = V_0;
		float L_54;
		L_54 = OscPacket_getFloat_mC0671765264F6717BF9C5F1979AA3C91F76614F5(L_52, L_53, NULL);
		V_10 = L_54;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_55 = V_3;
		float L_56 = V_10;
		float L_57 = L_56;
		RuntimeObject* L_58 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_55, L_58, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		goto IL_0335;
	}

IL_0197:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___msg0;
		int32_t L_61 = V_0;
		String_t* L_62;
		L_62 = OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C(L_60, L_61, NULL);
		V_11 = L_62;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_63 = V_3;
		String_t* L_64 = V_11;
		NullCheck(L_63);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_63, L_64, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_65 = V_0;
		String_t* L_66 = V_11;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_66, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, L_67));
		goto IL_0335;
	}

IL_01b7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___msg0;
		int32_t L_69 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = OscPacket_getBlob_m4A23AD82AF73E13B107573CB351404B2410973BB(L_68, L_69, NULL);
		V_12 = L_70;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_71 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_12;
		NullCheck(L_71);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_71, (RuntimeObject*)L_72, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_73 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_12;
		NullCheck(L_74);
		V_0 = ((int32_t)il2cpp_codegen_add(L_73, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_74)->max_length))))));
		goto IL_0335;
	}

IL_01d6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___msg0;
		int32_t L_76 = V_0;
		int64_t L_77;
		L_77 = OscPacket_getLong_m6B3EB58631A59AA40AC4ED6871A32D1D29AD79A1(L_75, L_76, NULL);
		V_13 = L_77;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_78 = V_3;
		int64_t L_79 = V_13;
		int64_t L_80 = L_79;
		RuntimeObject* L_81 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_78, L_81, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_82 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 8));
		goto IL_0335;
	}

IL_01f5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___msg0;
		int32_t L_84 = V_0;
		uint64_t L_85;
		L_85 = OscPacket_getULong_m7E54B6BA59E26A3194C4ACA3814D2502E52B7AAE(L_83, L_84, NULL);
		V_14 = L_85;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_86 = V_3;
		uint64_t L_87 = V_14;
		uint64_t L_88 = L_87;
		RuntimeObject* L_89 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_88);
		NullCheck(L_86);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_86, L_89, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_90 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_90, 8));
		goto IL_0335;
	}

IL_0214:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ___msg0;
		int32_t L_92 = V_0;
		double L_93;
		L_93 = OscPacket_getDouble_mCDCAB80FB80F49EBC8F6B3A131DF0E8876D3C4B2(L_91, L_92, NULL);
		V_15 = L_93;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_94 = V_3;
		double L_95 = V_15;
		double L_96 = L_95;
		RuntimeObject* L_97 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_96);
		NullCheck(L_94);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_94, L_97, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_98 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_98, 8));
		goto IL_0335;
	}

IL_0233:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___msg0;
		int32_t L_100 = V_0;
		String_t* L_101;
		L_101 = OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C(L_99, L_100, NULL);
		V_16 = L_101;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_102 = V_3;
		String_t* L_103 = V_16;
		Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00* L_104 = (Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00*)il2cpp_codegen_object_new(Symbol_t59760511B593AA4F6DAE68ACC281F00B36DE6A00_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		Symbol__ctor_m371A441FFB155F8ED4E81A106F9FDC5EBC5AD149(L_104, L_103, NULL);
		NullCheck(L_102);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_102, L_104, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_105 = V_0;
		String_t* L_106 = V_16;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_106, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_105, L_107));
		goto IL_0335;
	}

IL_0258:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ___msg0;
		int32_t L_109 = V_0;
		Il2CppChar L_110;
		L_110 = OscPacket_getChar_m3C5335A4B990135ADCAF42BDCEE3E29560B50B9D(L_108, L_109, NULL);
		V_17 = L_110;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_111 = V_3;
		Il2CppChar L_112 = V_17;
		Il2CppChar L_113 = L_112;
		RuntimeObject* L_114 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_113);
		NullCheck(L_111);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_111, L_114, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_115 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_115, 4));
		goto IL_0335;
	}

IL_0277:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = ___msg0;
		int32_t L_117 = V_0;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_118;
		L_118 = OscPacket_getRGBA_mBB030A7FDC0A8DC722B329D28CD0ABF2815A63B8(L_116, L_117, NULL);
		V_18 = L_118;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_119 = V_3;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_120 = V_18;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_121 = L_120;
		RuntimeObject* L_122 = Box(RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743_il2cpp_TypeInfo_var, &L_121);
		NullCheck(L_119);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_119, L_122, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_123 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_123, 4));
		goto IL_0335;
	}

IL_0296:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = ___msg0;
		int32_t L_125 = V_0;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_126;
		L_126 = OscPacket_getMidi_m793E98E6B84CE1B9D6A969CDC44496044137326A(L_124, L_125, NULL);
		V_19 = L_126;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_127 = V_3;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_128 = V_19;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_129 = L_128;
		RuntimeObject* L_130 = Box(Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_127);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_127, L_130, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_131 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_131, 4));
		goto IL_0335;
	}

IL_02b5:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_132 = V_3;
		bool L_133 = ((bool)1);
		RuntimeObject* L_134 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_133);
		NullCheck(L_132);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_132, L_134, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		goto IL_0335;
	}

IL_02c3:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_135 = V_3;
		bool L_136 = ((bool)0);
		RuntimeObject* L_137 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_136);
		NullCheck(L_135);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_135, L_137, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		goto IL_0335;
	}

IL_02d1:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_138 = V_3;
		NullCheck(L_138);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_138, NULL, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		goto IL_0335;
	}

IL_02da:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_139 = V_3;
		double L_140 = (std::numeric_limits<double>::infinity());
		RuntimeObject* L_141 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_140);
		NullCheck(L_139);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_139, L_141, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		goto IL_0335;
	}

IL_02f0:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_142 = V_3;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_143 = V_4;
		if ((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_142) == ((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_143)))
		{
			goto IL_0300;
		}
	}
	{
		Exception_t* L_144 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_144);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_144, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6C7952086E5CDBF827DC1B0F3B7FC0ECD3BAC61)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F_RuntimeMethod_var)));
	}

IL_0300:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_145 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_145, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_3 = L_145;
		goto IL_0335;
	}

IL_0308:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_146 = V_4;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_147 = V_3;
		NullCheck(L_146);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_146, L_147, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_148 = V_4;
		V_3 = L_148;
		goto IL_0335;
	}

IL_0315:
	{
		String_t* L_149;
		L_149 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_8), NULL);
		String_t* L_150;
		L_150 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88880EB2655C6232FF5B7E574115367FBC38FB80)), L_149, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74A421F26A14F973978128DB2DE707AF6A123850)), NULL);
		Exception_t* L_151 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_151);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_151, L_150, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_151, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F_RuntimeMethod_var)));
	}

IL_0331:
	{
		int32_t L_152 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_0335:
	{
		int32_t L_153 = V_0;
		if (((int32_t)(L_153%4)))
		{
			goto IL_0331;
		}
	}

IL_033a:
	{
		int32_t L_154 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_154, 1));
	}

IL_0340:
	{
		int32_t L_155 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_156 = V_6;
		NullCheck(L_156);
		if ((((int32_t)L_155) < ((int32_t)((int32_t)(((RuntimeArray*)L_156)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_157 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_158 = V_3;
		NullCheck(L_158);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_159;
		L_159 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_158, List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_160 = (OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C*)il2cpp_codegen_object_new(OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C_il2cpp_TypeInfo_var);
		NullCheck(L_160);
		OscMessage__ctor_m95BE40F7B2EB50AA2659EA9B942D8E507816B19A(L_160, L_157, L_159, NULL);
		return L_160;
	}
}
// ARS.SharpOSC.OscBundle ARS.SharpOSC.OscPacket::parseBundle(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* OscPacket_parseBundle_m5EC4BD221CFC382F6AAC6ACD6A071B34B097DB3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bundle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76304F27F341425195EB9B044C5255005458CD64);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* V_4 = NULL;
	{
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_0 = (List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D*)il2cpp_codegen_object_new(List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54(L_0, List_1__ctor_m15245D6007A64B85B99FAE54CD4795309D12EC54_RuntimeMethod_var);
		V_1 = L_0;
		V_2 = 0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bundle0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_2, 0, 8, Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_1, L_3);
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bundle0;
		int32_t L_7 = V_2;
		uint64_t L_8;
		L_8 = OscPacket_getULong_m7E54B6BA59E26A3194C4ACA3814D2502E52B7AAE(L_6, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		bool L_10;
		L_10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, _stringLiteral76304F27F341425195EB9B044C5255005458CD64, NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A0DB69E664288D7920AD26AE966F146A9CA59D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_parseBundle_m5EC4BD221CFC382F6AAC6ACD6A071B34B097DB3F_RuntimeMethod_var)));
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bundle0;
		int32_t L_13 = V_2;
		int32_t L_14;
		L_14 = OscPacket_getInt_m0689EBE0CDD0B5802166C55FFF23244A3061E683(L_12, L_13, NULL);
		V_3 = L_14;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bundle0;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_16, L_17, L_18, Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_20;
		L_20 = OscPacket_parseMessage_m2CD50E0A81A12435C8BDA1DA30A6AA0AC438D37F(L_19, NULL);
		V_4 = L_20;
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_21 = V_1;
		OscMessage_t0C93E4CAF8910BCC4794EF386802C19EDF3AAB8C* L_22 = V_4;
		NullCheck(L_21);
		List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_inline(L_21, L_22, List_1_Add_mC2DF2ED265383220356F81A9127C5AA93A7CC320_RuntimeMethod_var);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		goto IL_006e;
	}

IL_006a:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006e:
	{
		int32_t L_26 = V_2;
		if (((int32_t)(L_26%4)))
		{
			goto IL_006a;
		}
	}

IL_0073:
	{
		int32_t L_27 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___bundle0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0041;
		}
	}
	{
		uint64_t L_29 = V_0;
		List_1_t1D084EFF2868D4C45F0D2ECD7A8CA0F3B21D256D* L_30 = V_1;
		NullCheck(L_30);
		OscMessageU5BU5D_t848D32F043B39BA288E100E123BCB79FECC6E5B1* L_31;
		L_31 = List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F(L_30, List_1_ToArray_mF1CCB310F92D99CC512A5DC6EA4364B864AFB48F_RuntimeMethod_var);
		OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944* L_32 = (OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944*)il2cpp_codegen_object_new(OscBundle_tB5BEC7EA0BEE7284C4759A04032A78577243E944_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		OscBundle__ctor_mDAE5DC2E118036C4AFFC9CFC9601EEFA66B14701(L_32, L_29, L_31, NULL);
		return L_32;
	}
}
// System.String ARS.SharpOSC.OscPacket::getAddress(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OscPacket_getAddress_m19CD07CDCA4A3EB01074A47972DE9B985C134CA7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0035;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msg0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001a:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msg0;
		int32_t L_8 = ___index1;
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_10);
		V_1 = L_11;
		goto IL_003b;
	}

IL_0031:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 4));
	}

IL_0035:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___msg0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000a;
		}
	}

IL_003b:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___msg0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_17 = V_1;
		if (L_17)
		{
			goto IL_004f;
		}
	}
	{
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D06A18EC637629CD24F5F3AF83FCCD3D14ABFFA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_getAddress_m19CD07CDCA4A3EB01074A47972DE9B985C134CA7_RuntimeMethod_var)));
	}

IL_004f:
	{
		String_t* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_19, _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_20;
	}
}
// System.Char[] ARS.SharpOSC.OscPacket::getTypes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* OscPacket_getTypes_mAA4AAD679F0311E5B9FD169EDFCBE7F36A652A5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	{
		int32_t L_0 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 4));
		V_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		goto IL_002a;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msg0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___msg0;
		int32_t L_7 = ___index1;
		int32_t L_8 = V_0;
		int32_t L_9 = ___index1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		NullCheck(L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11;
		L_11 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(26 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_5, L_10);
		V_1 = L_11;
		goto IL_0030;
	}

IL_0026:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 4));
	}

IL_002a:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___msg0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___msg0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_1;
		if (L_17)
		{
			goto IL_0044;
		}
	}
	{
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F9557D4F85550E960D9FB4190E899AE8F24AC93)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_getTypes_mAA4AAD679F0311E5B9FD169EDFCBE7F36A652A5E_RuntimeMethod_var)));
	}

IL_0044:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_1;
		return L_19;
	}
}
// System.Int32 ARS.SharpOSC.OscPacket::getInt(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OscPacket_getInt_m0689EBE0CDD0B5802166C55FFF23244A3061E683 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msg0;
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___msg0;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<((int32_t)24))), ((int32_t)((int32_t)L_7<<((int32_t)16))))), ((int32_t)((int32_t)L_11<<8)))), (int32_t)L_15));
	}
}
// System.Single ARS.SharpOSC.OscPacket::getFloat(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OscPacket_getFloat_mC0671765264F6717BF9C5F1979AA3C91F76614F5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msg0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msg0;
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___msg0;
		int32_t L_18 = ___index1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_21;
		L_21 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_16, 0, NULL);
		return L_21;
	}
}
// System.String ARS.SharpOSC.OscPacket::getString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 4));
		goto IL_002a;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msg0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___msg0;
		int32_t L_7 = ___index1;
		int32_t L_8 = V_1;
		int32_t L_9 = ___index1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_10);
		V_0 = L_11;
		goto IL_0032;
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 4));
	}

IL_002a:
	{
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___msg0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0008;
		}
	}

IL_0032:
	{
		int32_t L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___msg0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_17 = V_0;
		if (L_17)
		{
			goto IL_0046;
		}
	}
	{
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F9557D4F85550E960D9FB4190E899AE8F24AC93)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OscPacket_getString_m99F65C64E36E8946C5A42BED79801DC8FAD9D56C_RuntimeMethod_var)));
	}

IL_0046:
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_19, _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_20;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::getBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_getBlob_m4A23AD82AF73E13B107573CB351404B2410973BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		int32_t L_2;
		L_2 = OscPacket_getInt_m0689EBE0CDD0B5802166C55FFF23244A3061E683(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___msg0;
		int32_t L_4 = ___index1;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), L_5, Extensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72FCDAC248CDCC380D2F84EBE418BB2DAC79FDB_RuntimeMethod_var);
		return L_6;
	}
}
// System.UInt64 ARS.SharpOSC.OscPacket::getULong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OscPacket_getULong_m7E54B6BA59E26A3194C4ACA3814D2502E52B7AAE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msg0;
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___msg0;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___msg0;
		int32_t L_17 = ___index1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___msg0;
		int32_t L_21 = ___index1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___msg0;
		int32_t L_25 = ___index1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___msg0;
		int32_t L_29 = ___index1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_3)<<((int32_t)56))), ((int64_t)(((int64_t)(uint64_t)L_7)<<((int32_t)48))))), ((int64_t)(((int64_t)(uint64_t)L_11)<<((int32_t)40))))), ((int64_t)(((int64_t)(uint64_t)L_15)<<((int32_t)32))))), ((int64_t)(((int64_t)(uint64_t)L_19)<<((int32_t)24))))), ((int64_t)(((int64_t)(uint64_t)L_23)<<((int32_t)16))))), ((int64_t)(((int64_t)(uint64_t)L_27)<<8)))), ((int64_t)(uint64_t)L_31)));
	}
}
// System.Int64 ARS.SharpOSC.OscPacket::getLong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t OscPacket_getLong_m6B3EB58631A59AA40AC4ED6871A32D1D29AD79A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msg0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msg0;
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___msg0;
		int32_t L_18 = ___index1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___msg0;
		int32_t L_23 = ___index1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 4));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___msg0;
		int32_t L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 5));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___msg0;
		int32_t L_33 = ___index1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 6));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___msg0;
		int32_t L_38 = ___index1;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 7));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_40);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_41;
		L_41 = BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0(L_36, 0, NULL);
		return L_41;
	}
}
// System.Double ARS.SharpOSC.OscPacket::getDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double OscPacket_getDouble_mCDCAB80FB80F49EBC8F6B3A131DF0E8876D3C4B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msg0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msg0;
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___msg0;
		int32_t L_18 = ___index1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___msg0;
		int32_t L_23 = ___index1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 4));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___msg0;
		int32_t L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 5));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___msg0;
		int32_t L_33 = ___index1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 6));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___msg0;
		int32_t L_38 = ___index1;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 7));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_40);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8(L_36, 0, NULL);
		return L_41;
	}
}
// System.Char ARS.SharpOSC.OscPacket::getChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OscPacket_getChar_m3C5335A4B990135ADCAF42BDCEE3E29560B50B9D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// ARS.OSC/RGBA ARS.SharpOSC.OscPacket::getRGBA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 OscPacket_getRGBA_mBB030A7FDC0A8DC722B329D28CD0ABF2815A63B8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msg0;
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___msg0;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_16;
		memset((&L_16), 0, sizeof(L_16));
		RGBA__ctor_mFCEDC44FD08A0946F0E02E179F4B7673210DDA55((&L_16), L_3, L_7, L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// ARS.OSC/Midi ARS.SharpOSC.OscPacket::getMidi(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E OscPacket_getMidi_m793E98E6B84CE1B9D6A969CDC44496044137326A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msg0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msg0;
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___msg0;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msg0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_16;
		memset((&L_16), 0, sizeof(L_16));
		Midi__ctor_m36E2D18301F86A832ED70A9D0CACC45DC4E20588((&L_16), L_3, L_7, L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setInt_mFEE6BB6FF29C372316AC56A8F5A5C5C7D8F3E57A (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 3;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_18);
		return L_15;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setFloat_mA6EA13F59BD6DFBD559795985F2F10CF5D505B58 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 3;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_18);
		return L_15;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setString_mECBEE34B8E89E263B45DB2900A3C6C39362F8211 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)(L_3%4))))));
		int32_t L_4 = V_0;
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_4) > ((int32_t)L_6)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_11 = ___value0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck((RuntimeArray*)L_12);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_12, (RuntimeArray*)L_13, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		return L_14;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setBlob_m60CB13505D11E50EB75994E4D2144D58FF96AE3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 4));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)(L_2%4))))));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = OscPacket_setInt_mFEE6BB6FF29C372316AC56A8F5A5C5C7D8F3E57A(((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck((RuntimeArray*)L_6);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck((RuntimeArray*)L_8);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_8, (RuntimeArray*)L_9, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		return L_10;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setLong_mA9B273A52C6D2CAEEF3C12F921EF1CC51B09DF22 (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 7;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 6;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 5;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 4;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 3;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_34);
		return L_31;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setULong_m21F71EDE18B475E628470ABFB98E589815BC7C0F (uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		uint64_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 7;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 6;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 5;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 4;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 3;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_34);
		return L_31;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setDouble_m016FB9A112171FAF5192E6DACEE4E04A802C0E0D (double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_mDFA957490F403B0A6F73768C710649AC18DA227C(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 7;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 6;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 5;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 4;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 3;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_34);
		return L_31;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setChar_mDB56C8B476929BD42D93C6F6974A1F5EA8C04B09 (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		Il2CppChar L_5 = ___value0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_5));
		return L_4;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setRGBA(ARS.OSC/RGBA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setRGBA_m55787FDF825BAA3C97927850331E1D5D12B58096 (RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_2 = ___value0;
		uint8_t L_3 = L_2.___R_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_1;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_5 = ___value0;
		uint8_t L_6 = L_5.___G_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_4;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_8 = ___value0;
		uint8_t L_9 = L_8.___B_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_7;
		RGBA_tC59D6925AA9404A95DF88745E2BA561C0A92D743 L_11 = ___value0;
		uint8_t L_12 = L_11.___A_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_12);
		return L_10;
	}
}
// System.Byte[] ARS.SharpOSC.OscPacket::setMidi(ARS.OSC/Midi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OscPacket_setMidi_mCD0D518D0AABAF172E915FBE1169EE9470FC2865 (Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_2 = ___value0;
		uint8_t L_3 = L_2.___Port_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_1;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_5 = ___value0;
		uint8_t L_6 = L_5.___Status_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_4;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_8 = ___value0;
		uint8_t L_9 = L_8.___Data1_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_7;
		Midi_t6326A3C1D058829BF3CCA9F11E9E3C0732637F3E L_11 = ___value0;
		uint8_t L_12 = L_11.___Data2_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_12);
		return L_10;
	}
}
// System.Void ARS.SharpOSC.OscPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OscPacket__ctor_m6BCCA24B6238608673F5C293FB753A47C4B46F3F (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* __this, const RuntimeMethod* method) 
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
// System.Void ARS.SharpOSC.OscPacket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1AFC879034DA38A3EBF7F72184268181FB74A33D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* L_0 = (U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160*)il2cpp_codegen_object_new(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCE321183B4DABA8E60790AAA6F8EAA51EDC3698A(L_0, NULL);
		((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ARS.SharpOSC.OscPacket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCE321183B4DABA8E60790AAA6F8EAA51EDC3698A (U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ARS.SharpOSC.OscPacket/<>c::<parseMessage>b__2_0(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CparseMessageU3Eb__2_0_mB8FF483437BEC53F249DAD0D41455236A13775B0 (U3CU3Ec_t5FDCACE1963C9AA21CE8903408E1D0D839DEF160* __this, uint8_t ___x0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___x0;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)44)))? 1 : 0);
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
// System.DateTime ARS.SharpOSC.Timetag::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timetag_get_Timestamp_mBE9E99A5729A6EB32945B1F1BB341A75F65E2223 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___Tag_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Utils_TimetagToDateTime_mAA74126FC74386CB4820686126699488F2373AE4(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timetag_get_Timestamp_mBE9E99A5729A6EB32945B1F1BB341A75F65E2223_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = Timetag_get_Timestamp_mBE9E99A5729A6EB32945B1F1BB341A75F65E2223(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ARS.SharpOSC.Timetag::set_Timestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		uint64_t L_1;
		L_1 = Utils_DateTimeToTimetag_m0D418E28410E846F4DCED0D42A8B6D74667CDEB3(L_0, NULL);
		__this->___Tag_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9(_thisAdjusted, ___value0, method);
}
// System.Double ARS.SharpOSC.Timetag::get_Fraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Timetag_get_Fraction_mFB2F5766F8D64EC6713FA21A6C7752C2524F1A56 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___Tag_0;
		double L_1;
		L_1 = Utils_TimetagToFraction_m15BE40D92939985FEFDD18FA3124760FF6ED48BB(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  double Timetag_get_Fraction_mFB2F5766F8D64EC6713FA21A6C7752C2524F1A56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	double _returnValue;
	_returnValue = Timetag_get_Fraction_mFB2F5766F8D64EC6713FA21A6C7752C2524F1A56(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ARS.SharpOSC.Timetag::set_Fraction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag_set_Fraction_mF53D244B7071F1566267155E8340DD341D447907 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___Tag_0;
		double L_1 = ___value0;
		__this->___Tag_0 = ((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_0&((int64_t)-4294967296LL))), ((int64_t)(uint64_t)((uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_1, (4294967295.0))))))));
		return;
	}
}
IL2CPP_EXTERN_C  void Timetag_set_Fraction_mF53D244B7071F1566267155E8340DD341D447907_AdjustorThunk (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	Timetag_set_Fraction_mF53D244B7071F1566267155E8340DD341D447907(_thisAdjusted, ___value0, method);
}
// System.Void ARS.SharpOSC.Timetag::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___Tag_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3_inline(_thisAdjusted, ___value0, method);
}
// System.Void ARS.SharpOSC.Timetag::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timetag__ctor_m112E94B8D4A34CA1E8D5D169F067891D6771374F (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		__this->___Tag_0 = ((int64_t)0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		Timetag_set_Timestamp_m8EA276C9169595F89E228A665B72CE6116C943D9(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Timetag__ctor_m112E94B8D4A34CA1E8D5D169F067891D6771374F_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	Timetag__ctor_m112E94B8D4A34CA1E8D5D169F067891D6771374F(_thisAdjusted, ___value0, method);
}
// System.Boolean ARS.SharpOSC.Timetag::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		uint64_t L_5 = __this->___Tag_0;
		RuntimeObject* L_6 = ___obj0;
		uint64_t L_7 = ((Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*)UnBox(L_6, Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var))->___Tag_0;
		if ((!(((uint64_t)L_5) == ((uint64_t)L_7))))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)1;
	}

IL_002c:
	{
		return (bool)0;
	}

IL_002e:
	{
		RuntimeObject* L_8 = ___obj0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		uint64_t L_13 = __this->___Tag_0;
		RuntimeObject* L_14 = ___obj0;
		if ((!(((uint64_t)L_13) == ((uint64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_14, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)1;
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	bool _returnValue;
	_returnValue = Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean ARS.SharpOSC.Timetag::op_Equality(ARS.SharpOSC.Timetag,ARS.SharpOSC.Timetag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timetag_op_Equality_m492EA521BE0E6B28D7C32838FB51B576295DAF57 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 ___a0, Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 L_0 = ___b1;
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 L_1 = L_0;
		RuntimeObject* L_2 = Box(Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626((&___a0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean ARS.SharpOSC.Timetag::op_Inequality(ARS.SharpOSC.Timetag,ARS.SharpOSC.Timetag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timetag_op_Inequality_m405500AD862A02215959D743FDF9295A743E9492 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 ___a0, Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 L_0 = ___b1;
		Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30 L_1 = L_0;
		RuntimeObject* L_2 = Box(Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Timetag_Equals_m8C92E54EFCF365F16D413AEC7A87A3ED209B5626((&___a0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Int32 ARS.SharpOSC.Timetag::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timetag_GetHashCode_m9615472E2A9417F56C676A828AA0861A77D818D8 (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___Tag_0;
		uint64_t L_1 = __this->___Tag_0;
		return ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32)))), ((int32_t)(uint32_t)((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1))))))))/(uint32_t)(int32_t)2));
	}
}
IL2CPP_EXTERN_C  int32_t Timetag_GetHashCode_m9615472E2A9417F56C676A828AA0861A77D818D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Timetag_GetHashCode_m9615472E2A9417F56C676A828AA0861A77D818D8(_thisAdjusted, method);
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
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_Multicast(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* currentDelegate = reinterpret_cast<HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenInst(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	typedef void (*FunctionPointerType) (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___packet0, method);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenStatic(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___packet0, method);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenStaticInvoker(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* >::Invoke(__this->___method_ptr_0, method, NULL, ___packet0);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_ClosedStaticInvoker(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___packet0);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenVirtual(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___packet0);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenInterface(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___packet0);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenGenericVirtual(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	GenericVirtualActionInvoker0::Invoke(method, ___packet0);
}
void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenGenericInterface(HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	GenericInterfaceActionInvoker0::Invoke(method, ___packet0);
}
// System.Void ARS.SharpOSC.HandleOscPacket::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleOscPacket__ctor_m5F803353A94B645E4E8B1875C908383613369D55 (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_Multicast;
}
// System.Void ARS.SharpOSC.HandleOscPacket::Invoke(ARS.SharpOSC.OscPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ARS.SharpOSC.HandleOscPacket::BeginInvoke(ARS.SharpOSC.OscPacket,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleOscPacket_BeginInvoke_m4385A2E2E955D1075E9C4554CA2BD872B9BC0F26 (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___packet0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ARS.SharpOSC.HandleOscPacket::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleOscPacket_EndInvoke_m2B62FE75CA115DA85F7127AC833F5654C6562172 (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_Multicast(HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* currentDelegate = reinterpret_cast<HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenInst(HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	NullCheck(___packet0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___packet0, method);
}
void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenStatic(HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___packet0, method);
}
void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenStaticInvoker(HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___packet0);
}
void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_ClosedStaticInvoker(HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___packet0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078 (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___packet0' to native representation
	uint8_t* ____packet0_marshaled = NULL;
	if (___packet0 != NULL)
	{
		____packet0_marshaled = reinterpret_cast<uint8_t*>((___packet0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____packet0_marshaled);

}
// System.Void ARS.SharpOSC.HandleBytePacket::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleBytePacket__ctor_m6EC7C762E5A48B757A1408D3983B8A28E2C4E02D (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_Multicast;
}
// System.Void ARS.SharpOSC.HandleBytePacket::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ARS.SharpOSC.HandleBytePacket::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleBytePacket_BeginInvoke_mCDC5B265AF108E2C27F7FC3674A5A539AF3B9B81 (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___packet0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ARS.SharpOSC.HandleBytePacket::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleBytePacket_EndInvoke_m2FB1600904C7B97393ED488428BC4E57310FB5FD (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Int32 ARS.SharpOSC.UDPListener::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPListener_get_Port_m6FCF8E21E4254F16248E58087807E4C10C9D5D6B (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPortU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ARS.SharpOSC.UDPListener::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener_set_Port_mEA6355C631C861AF107725D9D5F13342D1047A43 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPortU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener__ctor_mA61CE4121BBD22C2D47A0B942968534A71969D21 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___port0;
		UDPListener_set_Port_mEA6355C631C861AF107725D9D5F13342D1047A43_inline(__this, L_0, NULL);
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_1 = (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*)il2cpp_codegen_object_new(Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845(L_1, Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var);
		__this->___queue_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_6), (void*)L_1);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_2 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_2, (bool)0, NULL);
		__this->___ClosingEvent_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ClosingEvent_7), (void*)L_2);
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		__this->___callbackLock_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackLock_1), (void*)L_3);
		V_1 = 0;
		goto IL_0056;
	}

IL_0033:
	{
	}
	try
	{// begin try (depth: 1)
		int32_t L_4 = ___port0;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_5 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)il2cpp_codegen_object_new(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442(L_5, L_4, NULL);
		__this->___receivingUdpClient_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receivingUdpClient_2), (void*)L_5);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.Exception)
		{
			int32_t L_6 = V_1;
			if ((((int32_t)L_6) < ((int32_t)((int32_t)9))))
			{
				goto IL_004a;
			}
		}
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_004a:
		{
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(5, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0052:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0056:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)10))))
		{
			goto IL_0033;
		}
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_10 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_10, L_9, 0, NULL);
		__this->___RemoteIpEndPoint_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RemoteIpEndPoint_3), (void*)L_10);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_11 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_11, __this, (intptr_t)((void*)UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67_RuntimeMethod_var), NULL);
		V_0 = L_11;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_12 = __this->___receivingUdpClient_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_13 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = UdpClient_BeginReceive_m5B450DDB7B13BF24E52CD53FB2DF00CE410CC4E3(L_12, L_13, NULL, NULL);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::.ctor(System.Int32,ARS.SharpOSC.HandleOscPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener__ctor_m9EBE2904716BCB3DEFB81DC1F9DF5F7B5BAFEE4B (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___port0, HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* ___callback1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___port0;
		UDPListener__ctor_mA61CE4121BBD22C2D47A0B942968534A71969D21(__this, L_0, NULL);
		HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* L_1 = ___callback1;
		__this->___OscPacketCallback_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OscPacketCallback_5), (void*)L_1);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::.ctor(System.Int32,ARS.SharpOSC.HandleBytePacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener__ctor_m734EE52D8D4B0D40476396EBA3AAD6172B0C4FD8 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___port0, HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* ___callback1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___port0;
		UDPListener__ctor_mA61CE4121BBD22C2D47A0B942968534A71969D21(__this, L_0, NULL);
		HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* L_1 = ___callback1;
		__this->___BytePacketCallback_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BytePacketCallback_4), (void*)L_1);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* V_1 = NULL;
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_2 = NULL;
	bool V_3 = false;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___callbackLock_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_0, NULL);
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	try
	{// begin try (depth: 1)
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_1 = __this->___receivingUdpClient_2;
		RuntimeObject* L_2 = ___result0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** L_3 = (&__this->___RemoteIpEndPoint_3);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = UdpClient_EndReceive_m1BAA258139FD339A82F427A6D4049DF4A7A82B39(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0025;
	}// end catch (depth: 1)

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_008f;
		}
	}
	{
		HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* L_7 = __this->___BytePacketCallback_4;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* L_8 = __this->___BytePacketCallback_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_inline(L_8, L_9, NULL);
		goto IL_008f;
	}

IL_0042:
	{
		HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* L_10 = __this->___OscPacketCallback_5;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		V_1 = (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*)NULL;
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_12;
		L_12 = OscPacket_GetPacket_m8898FE996481C21347D420D8C91D57BE683E6E0A(L_11, NULL);
		V_1 = L_12;
		goto IL_0058;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0058;
	}// end catch (depth: 1)

IL_0058:
	{
		HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* L_13 = __this->___OscPacketCallback_5;
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_14 = V_1;
		NullCheck(L_13);
		HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_inline(L_13, L_14, NULL);
		goto IL_008f;
	}

IL_0066:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_15 = __this->___queue_6;
		V_2 = L_15;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				{
					bool L_16 = V_3;
					if (!L_16)
					{
						goto IL_008e;
					}
				}
				{
					Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_17 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_18 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_3), NULL);
			Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_19 = __this->___queue_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
			NullCheck(L_19);
			Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E(L_19, L_20, Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
			goto IL_008f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		bool L_21 = __this->___closing_8;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_22 = __this->___ClosingEvent_7;
		NullCheck(L_22);
		bool L_23;
		L_23 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_22, NULL);
		goto IL_00c2;
	}

IL_00a5:
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_24 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_24, __this, (intptr_t)((void*)UDPListener_ReceiveCallback_m0AAA6C8ED8E4FD648951385EFF1CE5B1EFED1A67_RuntimeMethod_var), NULL);
		V_4 = L_24;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_25 = __this->___receivingUdpClient_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = UdpClient_BeginReceive_m5B450DDB7B13BF24E52CD53FB2DF00CE410CC4E3(L_25, L_26, NULL, NULL);
	}

IL_00c2:
	{
		RuntimeObject* L_28 = __this->___callbackLock_1;
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_28, NULL);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener_Close_m9E3C2B14CF790565CA830CAC53798929E3C5B3C4 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___callbackLock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___ClosingEvent_7;
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_4, NULL);
			__this->___closing_8 = (bool)1;
			UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_6 = __this->___receivingUdpClient_2;
			NullCheck(L_6);
			UdpClient_Close_m5441019910E37A7F7B8610A46769004E614FF5B6(L_6, NULL);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_7 = __this->___ClosingEvent_7;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_7);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPListener_Dispose_m4BFCA65DF5C11D0B28A6A4242D6FEBB60E620346 (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	{
		UDPListener_Close_m9E3C2B14CF790565CA830CAC53798929E3C5B3C4(__this, NULL);
		return;
	}
}
// ARS.SharpOSC.OscPacket ARS.SharpOSC.UDPListener::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_0 = NULL;
	bool V_1 = false;
	OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* V_2 = NULL;
	{
		bool L_0 = __this->___closing_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral143D07DEDFD792D6E79F35B423ABCBE031A3F9B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UDPListener_Receive_mDF2C29456D594FD2F87F73F2F145042722073D0F_RuntimeMethod_var)));
	}

IL_0013:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_2 = __this->___queue_6;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_6 = __this->___queue_6;
				int32_t L_7;
				L_7 = Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B(L_6, Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B_RuntimeMethod_var);
				if ((((int32_t)L_7) <= ((int32_t)0)))
				{
					goto IL_0045_1;
				}
			}
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_8 = __this->___queue_6;
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0(L_8, Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
				OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_10;
				L_10 = OscPacket_GetPacket_m8898FE996481C21347D420D8C91D57BE683E6E0A(L_9, NULL);
				V_2 = L_10;
				goto IL_0053;
			}

IL_0045_1:
			{
				V_2 = (OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*)NULL;
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] ARS.SharpOSC.UDPListener::ReceiveBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UDPListener_ReceiveBytes_mD943FE37DBF2413DEC0E725ED6EBA385166BD67D (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		bool L_0 = __this->___closing_8;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral143D07DEDFD792D6E79F35B423ABCBE031A3F9B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UDPListener_ReceiveBytes_mD943FE37DBF2413DEC0E725ED6EBA385166BD67D_RuntimeMethod_var)));
	}

IL_0013:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_2 = __this->___queue_6;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_004d;
					}
				}
				{
					Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_6 = __this->___queue_6;
				int32_t L_7;
				L_7 = Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B(L_6, Enumerable_Count_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m36BDC06E802351C46A534FA929202BC7C88D038B_RuntimeMethod_var);
				if ((((int32_t)L_7) <= ((int32_t)0)))
				{
					goto IL_0040_1;
				}
			}
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_8 = __this->___queue_6;
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0(L_8, Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
				V_2 = L_9;
				goto IL_004e;
			}

IL_0040_1:
			{
				V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		return L_10;
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
// System.Int32 ARS.SharpOSC.UDPSender::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPSender_get_Port_m08FEFA80C664107BBFB35E5D2C0E93F13467DE15 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_0;
		return L_0;
	}
}
// System.String ARS.SharpOSC.UDPSender::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UDPSender_get_Address_m04DCDB5838435208099974220A3D95BF684E7DB0 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____address_1;
		return L_0;
	}
}
// System.Void ARS.SharpOSC.UDPSender::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender__ctor_m788AB554FA1C3C2B76CFCA34D53952CB0C14A298 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, String_t* ___address0, int32_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___port1;
		__this->____port_0 = L_0;
		String_t* L_1 = ___address0;
		__this->____address_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____address_1), (void*)L_1);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_2, 2, 2, ((int32_t)17), NULL);
		__this->___sock_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_3), (void*)L_2);
		String_t* L_3 = ___address0;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_4;
		L_4 = Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212(L_3, NULL);
		V_0 = L_4;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = ___address0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA073827D84E42E200779A9ABD3B23BD8D698E0E5)), L_6, NULL);
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UDPSender__ctor_m788AB554FA1C3C2B76CFCA34D53952CB0C14A298_RuntimeMethod_var)));
	}

IL_003f:
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ___port1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_13 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_13, L_11, L_12, NULL);
		__this->___RemoteIpEndPoint_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RemoteIpEndPoint_2), (void*)L_13);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPSender::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Send_m0C0EC20F68B912D6A21B351AABCF232F0188F93F (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___sock_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___message0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2 = __this->___RemoteIpEndPoint_2;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPSender::Send(ARS.SharpOSC.OscPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Send_mF3782E8B30C907FB420434989DC81220A07DD520 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* L_0 = ___packet0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] ARS.SharpOSC.OscPacket::GetBytes() */, L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		UDPSender_Send_m0C0EC20F68B912D6A21B351AABCF232F0188F93F(__this, L_2, NULL);
		return;
	}
}
// System.Void ARS.SharpOSC.UDPSender::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSender_Close_m0A9E92D3139BB0BB8ED884A8C469AD37B60FACD8 (UDPSender_tBF7F40E4329DC70416B35C0C6E94E6032BFCEDA4* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___sock_3;
		NullCheck(L_0);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_0, NULL);
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
// System.DateTime ARS.SharpOSC.Utils::TimetagToDateTime(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utils_TimetagToDateTime_mAA74126FC74386CB4820686126699488F2373AE4 (uint64_t ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9189B980B59718C86A3426319EBD31B3A74758CC);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	{
		uint64_t L_0 = ___val0;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		return L_1;
	}

IL_000b:
	{
		uint64_t L_2 = ___val0;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(_stringLiteral9189B980B59718C86A3426319EBD31B3A74758CC, NULL);
		V_1 = L_3;
		uint32_t L_4 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_1), ((double)((double)(uint32_t)L_4)), NULL);
		V_1 = L_5;
		uint64_t L_6 = ___val0;
		double L_7;
		L_7 = Utils_TimetagToFraction_m15BE40D92939985FEFDD18FA3124760FF6ED48BB(L_6, NULL);
		V_2 = L_7;
		double L_8 = V_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_1), L_8, NULL);
		V_1 = L_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10 = V_1;
		return L_10;
	}
}
// System.Double ARS.SharpOSC.Utils::TimetagToFraction(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_TimetagToFraction_m15BE40D92939985FEFDD18FA3124760FF6ED48BB (uint64_t ___val0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___val0;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0);
	}

IL_000f:
	{
		uint64_t L_1 = ___val0;
		return ((double)(((double)((double)(uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1))))))))/(4294967295.0)));
	}
}
// System.UInt64 ARS.SharpOSC.Utils::DateTimeToTimetag(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Utils_DateTimeToTimetag_m0D418E28410E846F4DCED0D42A8B6D74667CDEB3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B078198C79970EE8E8D053E2E477C1817670CA);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(_stringLiteralF2B078198C79970EE8E8D053E2E477C1817670CA, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_1 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		int32_t L_4;
		L_4 = DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878((&___value0), NULL);
		V_0 = ((int64_t)(uint64_t)((uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply((4294967295.0), ((double)(((double)L_4)/(1000.0))))))));
		uint64_t L_5 = V_0;
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(L_3)))<<((int32_t)32))), (int64_t)L_5));
	}
}
// System.Int32 ARS.SharpOSC.Utils::AlignedStringLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_AlignedStringLength_m7D98C6D29151DB4102D2698BB34E942B74550337 (String_t* ___val0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___val0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		String_t* L_2 = ___val0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)(L_3%4))))));
		int32_t L_4 = V_0;
		String_t* L_5 = ___val0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_4) > ((int32_t)L_6)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void ARS.SharpOSC.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mA3965B00B8187F1BE37C367BE286AC9580EC5BF6 (Utils_tEC045FE83E2E20C6394A355842BA8553D153A42D* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB866B89B3B39789B6B4C8FAA26D83E059DF7C561 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
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
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* OSCListener_get_TargetUnityObject_mD57F86B54A7219A481C3A01F3A76173EB7AEACEE_inline (OSCListener_t74FA8A344FBF25AD9F1FE53DC007FB1B372339B1* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___thiz_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UDPListener_get_Port_m6FCF8E21E4254F16248E58087807E4C10C9D5D6B_inline (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPortU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Timetag__ctor_m176C6823318CA92ECDEF52DA0F3C3C40E86029C3_inline (Timetag_t387B012950EBFBD4BAAC0ED1D119B142CF852F30* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___Tag_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline (float ___f0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___f0;
		return (bool)((((float)L_0) == ((float)(std::numeric_limits<float>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline (double ___d0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___d0;
		return (bool)((((double)L_0) == ((double)(std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UDPListener_set_Port_mEA6355C631C861AF107725D9D5F13342D1047A43_inline (UDPListener_t8061529D83578EF2663D61CB7E8D159E62DC3DC3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPortU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandleBytePacket_Invoke_m27E84AF5097765D092902ACB851D7E489EC6275B_inline (HandleBytePacket_t2B0D0A34425A73C7273359364F8B54C92A07C078* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___packet0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandleOscPacket_Invoke_m7498327988575F55F1A09E899349701894F06A9C_inline (HandleOscPacket_t70AA5929A880C4B9C8B3F0E8BDF1DC8379894433* __this, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD* ___packet0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OscPacket_t980422348C2C157FD21526085F7FF1FC1F388CCD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___packet0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
