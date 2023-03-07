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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Mirror.LatencySimulation
struct LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210;
// Mirror.QueuedMessage[]
struct QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701;
// Mirror.TelepathyTransport
struct TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B;
// Mirror.Transport
struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362;
// System.Action`1<System.Int32>
struct Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_tC299510424CD206373E7F2273FA3E955667F68FF;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_2_t72A600D61AFEA7AC309F144E7A730EAD383D3799;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C;
// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985;
// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_t04CED1CA5124497B90B450E6450FFB716C9C0339;
// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10;
// System.Action`2<kcp2k.ErrorCode,System.String>
struct Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6;
// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_3_t42FDEE7169AFCA16145669B33C0484253B7E80F1;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874;
// System.Action`3<System.Int32,System.ByteEnum,System.Object>
struct Action_3_tBA2E511B61A9DA1EB623780EBB6ED7D6A4B0E03E;
// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct Action_3_t7599E9710D626304E2296EBB31822273361CD8F9;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>
struct ConcurrentDictionary_2_tC4C5BE429E533D09C63B5A2726715DFCA8B6BB1B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,kcp2k.KcpServerConnection>[]
struct EntryU5BU5D_tBC90D38A5221732EE1DAEACD668B0D307B0FA68C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,kcp2k.KcpServerConnection>
struct KeyCollection_t222980F549974DC004B77AC18B51F67D5B086EA7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD;
// System.Collections.Generic.IEnumerable`1<kcp2k.KcpServerConnection>
struct IEnumerable_1_t4F4BA4C77B1B3FD6D3680ABFB3035432EB88270A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<Mirror.QueuedMessage>
struct List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`2<kcp2k.KcpServerConnection,System.Int32>
struct Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E;
// System.Func`2<kcp2k.KcpServerConnection,System.Int64>
struct Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpListener
struct TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriBuilder
struct UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Telepathy.Client
struct Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A;
// Telepathy.ClientConnectionState
struct ClientConnectionState_tCDF9C5E8D67A18CAAA840D2BC8A1A86699A639E4;
// Telepathy.MagnificentReceivePipe
struct MagnificentReceivePipe_tBBD0D3D1760C08EEA09B1802BE6EBD4AB4475EA1;
// Telepathy.Server
struct Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// kcp2k.Kcp
struct Kcp_t5223A666113114C6830CE3A272C9BC7E97510D71;
// kcp2k.KcpClient
struct KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109;
// kcp2k.KcpConfig
struct KcpConfig_tE783A348C689A35A776708156446D0B03F863803;
// kcp2k.KcpPeer
struct KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4;
// kcp2k.KcpServer
struct KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848;
// kcp2k.KcpTransport
struct KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C;
// kcp2k.KcpTransport/<>c
struct U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t7599E9710D626304E2296EBB31822273361CD8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorCode_t5B840E2B6C2811864B5995C8B3351A81FB8BB2E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpConfig_tE783A348C689A35A776708156446D0B03F863803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t49595309D8499C7E74BBE55B6003F217E8561F73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00918CBC35725A309FFE02431C77218238732188;
IL2CPP_EXTERN_C String_t* _stringLiteral016C0CDF513C536E7FDF069563900BD422BCBB8A;
IL2CPP_EXTERN_C String_t* _stringLiteral181565AEBE215D8DF479241FA6D7A2D757055708;
IL2CPP_EXTERN_C String_t* _stringLiteral198CEEA500A2E628ECEE2CBAE7DFA493069DC3B4;
IL2CPP_EXTERN_C String_t* _stringLiteral2BCBB85DE8B237880AD1014063A8751F3D5AFA74;
IL2CPP_EXTERN_C String_t* _stringLiteral2C6D680F5C570BA21D22697CD028F230E9F4CD56;
IL2CPP_EXTERN_C String_t* _stringLiteral33C7EC38BA8D7E29F5C7BDB9A05F75DE93FD0D4D;
IL2CPP_EXTERN_C String_t* _stringLiteral384CA255C41CFE1EA28DB6499335A51C5488DE34;
IL2CPP_EXTERN_C String_t* _stringLiteral47316692AA00E6249A8B62B17F0571A6C6B0E787;
IL2CPP_EXTERN_C String_t* _stringLiteral4DFF74DC4E9C9A949C725F9416BFBE04277A423F;
IL2CPP_EXTERN_C String_t* _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
IL2CPP_EXTERN_C String_t* _stringLiteral524BD842195E7D35B90E041007A6BCA7E6D86E95;
IL2CPP_EXTERN_C String_t* _stringLiteral5C4EA8C1EF3693FE256E7823BD101277224E9A31;
IL2CPP_EXTERN_C String_t* _stringLiteral62C920EB6AD4884B77B42E7C7E7436744D4B7234;
IL2CPP_EXTERN_C String_t* _stringLiteral69AF9ECCB14F987B78C5370CF2FC780803898E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral6A30C30A9E94477CB7C8B5090D5C87FB1ADCA307;
IL2CPP_EXTERN_C String_t* _stringLiteral6D43417A541E53961F3CDDB47B5C0ABAF518DBD2;
IL2CPP_EXTERN_C String_t* _stringLiteral737B4762E8BFE4D539AD3DC9D5353A05908A7018;
IL2CPP_EXTERN_C String_t* _stringLiteral76D77E1ED81EB2AF96C4306A205A5B5FC70F2250;
IL2CPP_EXTERN_C String_t* _stringLiteral86B36252304BCCEB4316C26A7D9CB17915E78998;
IL2CPP_EXTERN_C String_t* _stringLiteral8C93CD58C8D3C7993E273A91531A0F04B0B22CC0;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD1D7FC268EC1CA75F71DFDD4D0767826D12C73;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5FC774434F93F2D2FFC8F3FE0C20520E68470B;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB30C5D95722158445A39851B517F5FE9893EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A1C866C5D2F3E55B19C0BDF4C52BF34D873C41;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB189B41506D3689DFDDDC8BF72A2834165F0D9F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB245F58149930DBC70CF0AA7D270B51BF8AD5B2F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6AA6F75B112487F977583F55992E7D71A939A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0A6153E1F06CC6C537D31E60B4BA7EA0B82AE8;
IL2CPP_EXTERN_C String_t* _stringLiteralE87B78496AA11193426860E59B9F0A75ADAE6484;
IL2CPP_EXTERN_C String_t* _stringLiteralF265F1B18DC494BD58FA8B84D45E0F60C3F01FDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B66685790B9583E43AD2401C967FEA20476435;
IL2CPP_EXTERN_C String_t* _stringLiteralF68C30AAA62FA05070383ACD57B2E8B6BE965F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralFEEDC45D166F8E0364690EC42CF6DD7C2A985782;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mCC40875411D2FA0345600AD1CCA196E1F4F0BD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mBFE534FECF76381E5FF98BFE7E4D342B8BFCDEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF361E4D0BC01AD82D94C030F0630BFF125A14775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m4D4D60F525CC37B7127AA9322B489598F8872956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_m3694F974ACED1192DB653CAE643A0189E979A220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mBB75D2B20CBD3978EE7BEF45640D4A9692C45EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_ClientConnect_mE1B3230A63DDC31460E812123982AA2B7FBA3973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_1_mF5329E294A1AD1451758FBFF6E5858817D61D64C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_2_m71B394DC17E55DDB8D79C871E69A5881FED32131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_3_m2415761EB1EA930DFFB4A5EF050603A07C48B778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_4_m46CB28A712414DA35A478A6B806E696DABE800CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_5_m6941A645DDBB9D2DD6EB13554C9D9E7664EA3A46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_6_m0389A0C99F78F3FDD5840BE656820A34C3AF496D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_7_m0525DD9A812FC393BA6CDA4EA685817912685BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_8_m8F29A8F2B9CA0C9AC05570DC3D726860CB41A224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LatencySimulation_Awake_m51DFD267C3E0C8EB048F151C4488CE25B2D5BA53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_ClientConnect_mF1D8C832D99014ECF6F5D3CDA43FEC5BA68BF142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_0_m18D181B2585C0D2079918C52C029C9D899E1324B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_0_m2F5AB874557CDF1886808925B36845DED225670E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_1_m14F567F424983902AECEF98049AF9777F3FBE327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_2_mC0C306B321C577AADAF9BA25DA0680A366600963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_0_m0FFD77A93EE57F5B76D7E78BC05EF7FE15EC5A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_1_m38199210EA551C9C8DABE8316F42141B60B25E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_2_m4C97BBF4CA098D56672DD747E4BE592D0B7BB9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__23_0_mCB5F46BD5A11BCB9D6AAB46644D8FE23ED868C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m319C393DFF44224BA732E040B53D9C7322BF332C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_mCC9F1BE75B5EDA2A6CB02BBDD8A01A284AED9D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_mF0F09FD0DC64477E941033E6EC4B37DD38B1CFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m1913798882F93E7E04C977D5D97851B7D51CAAEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_mCFE819BC9269F68C2397AAEBDE32EC96CDC13961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_m6D4F1827FE51CDE9BB65E1546A0A4A31CA0F8653_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t KcpTransport_Awake_m14BDC6063843B47766694E233C5EE600D815E55E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ClientConnect_mE1B3230A63DDC31460E812123982AA2B7FBA3973_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ClientSend_m445EA703B6E83CBE992C1103C56C095764A8F802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetAverageMaxReceiveRate_m22E5746E6FB44ECF4C14357DB4058BA91E6B3F71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetAverageMaxSendRate_m5F1204AAC387654C91D38CB1F25AEDFE2EEC0A95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetTotalReceiveBuffer_mAB03EC6DEB2AF011B5B3F8C02485C9C324A7AA99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetTotalReceiveQueue_m07D5274AD0400A509C3D59DAAC1B1B6F14333E51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetTotalSendBuffer_m920A529FDF5DD709CED54134F9D1B6C568D8A16A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_GetTotalSendQueue_m732A16998CEBE55BF115BB29C2466927194EC34B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_OnLogStatistics_m9663F2E5351E14D0DCF760590BC228579DD38645_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ServerGetClientAddress_mC7C3DF4D0F2B308C304BC6BE524A49CB7CA5CF78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ServerSend_mC3B0DA29755192A238AD3B7126669F4081F87563_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ServerUri_m1A337A6680A4A74217B68F646658D22FD49605E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ToString_m81779DD42C9C30D482B23ED268159EA9A811B711_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_2_m71B394DC17E55DDB8D79C871E69A5881FED32131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_4_m46CB28A712414DA35A478A6B806E696DABE800CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_5_m6941A645DDBB9D2DD6EB13554C9D9E7664EA3A46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_6_m0389A0C99F78F3FDD5840BE656820A34C3AF496D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_7_m0525DD9A812FC393BA6CDA4EA685817912685BD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KcpTransport_U3CAwakeU3Eb__23_8_m8F29A8F2B9CA0C9AC05570DC3D726860CB41A224_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_Awake_m51DFD267C3E0C8EB048F151C4488CE25B2D5BA53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_ClientDisconnect_m4C58FA081A96F5B7EA2783B0F98736F0C16499C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_ClientLateUpdate_mA7E5FE8D5FFB680DD09DF019FD2A9A16C184F34B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_Noise_m74D000644B5365A5763470F8BC54D9958AA0E37E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_ServerLateUpdate_m9D87B15A037CE87D22BC17A0A385D717CC831692_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_ServerStop_m94F33D72D2EC51AF2CFAC68DC0912BE045692D93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation_ToString_m9F33E9C285031ED5CE7BE18E9A8098D14F358088_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LatencySimulation__ctor_mFBCFAECA2B4F70139DD73F7FB0A9B0E32289229B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_Awake_m772E8D34AB84D62A8A1418A554EE7FFC6DED21D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ClientConnect_mF1D8C832D99014ECF6F5D3CDA43FEC5BA68BF142_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ClientSend_m1D6240C6A6570F6340DEAFDD45695BA82FE22261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ServerGetClientAddress_m819B8444BC9A37B81C0763C35B64F8E5D1BFA029_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ServerSend_m60B409DA22923FC44486D0C2712F66F3EA79CB99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ServerStart_m4BE9F7B556F6801B5CF8E15B287E7B34EAD863EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ServerUri_m26D8F57BED358EC430E68632F4913C219B502954_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_Shutdown_mBBE5E163F7E031BDD99CE2DF20FB47F4F2408EB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_ToString_mF3A0DD1D191E2D4D5797E3228B203333A6DC9BCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_U3CCreateClientU3Eb__18_1_m14F567F424983902AECEF98049AF9777F3FBE327_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_U3CServerStartU3Eb__27_0_m0FFD77A93EE57F5B76D7E78BC05EF7FE15EC5A9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_U3CServerStartU3Eb__27_1_m38199210EA551C9C8DABE8316F42141B60B25E76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TelepathyTransport_U3CServerStartU3Eb__27_2_m4C97BBF4CA098D56672DD747E4BE592D0B7BB9EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m0128DDC4FA43740287ACF537829B20C33CA8B28D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE9E9A8D07AF80EF76C62BAD55E3D7C3980B98B74 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct  ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0, ___dictionary_0)); }
	inline Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct  Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBC90D38A5221732EE1DAEACD668B0D307B0FA68C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t222980F549974DC004B77AC18B51F67D5B086EA7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___entries_1)); }
	inline EntryU5BU5D_tBC90D38A5221732EE1DAEACD668B0D307B0FA68C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBC90D38A5221732EE1DAEACD668B0D307B0FA68C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBC90D38A5221732EE1DAEACD668B0D307B0FA68C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___keys_7)); }
	inline KeyCollection_t222980F549974DC004B77AC18B51F67D5B086EA7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t222980F549974DC004B77AC18B51F67D5B086EA7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t222980F549974DC004B77AC18B51F67D5B086EA7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ___values_8)); }
	inline ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mirror.QueuedMessage>
struct  List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823, ____items_1)); }
	inline QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* get__items_1() const { return ____items_1; }
	inline QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_StaticFields, ____emptyArray_5)); }
	inline QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.Sockets.TcpListener
struct  TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocket_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};


// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


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


// System.UriBuilder
struct  UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragment_1), (void*)value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_2), (void*)value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____query_6), (void*)value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scheme_7), (void*)value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemeDelimiter_8), (void*)value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____uri_9)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get__uri_9() const { return ____uri_9; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_9), (void*)value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____username_10), (void*)value);
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

// Telepathy.Common
struct  Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB  : public RuntimeObject
{
public:
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_0;
	// System.Int32 Telepathy.Common::MaxMessageSize
	int32_t ___MaxMessageSize_1;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_2;
	// System.Int32 Telepathy.Common::ReceiveTimeout
	int32_t ___ReceiveTimeout_3;

public:
	inline static int32_t get_offset_of_NoDelay_0() { return static_cast<int32_t>(offsetof(Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB, ___NoDelay_0)); }
	inline bool get_NoDelay_0() const { return ___NoDelay_0; }
	inline bool* get_address_of_NoDelay_0() { return &___NoDelay_0; }
	inline void set_NoDelay_0(bool value)
	{
		___NoDelay_0 = value;
	}

	inline static int32_t get_offset_of_MaxMessageSize_1() { return static_cast<int32_t>(offsetof(Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB, ___MaxMessageSize_1)); }
	inline int32_t get_MaxMessageSize_1() const { return ___MaxMessageSize_1; }
	inline int32_t* get_address_of_MaxMessageSize_1() { return &___MaxMessageSize_1; }
	inline void set_MaxMessageSize_1(int32_t value)
	{
		___MaxMessageSize_1 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_2() { return static_cast<int32_t>(offsetof(Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB, ___SendTimeout_2)); }
	inline int32_t get_SendTimeout_2() const { return ___SendTimeout_2; }
	inline int32_t* get_address_of_SendTimeout_2() { return &___SendTimeout_2; }
	inline void set_SendTimeout_2(int32_t value)
	{
		___SendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_ReceiveTimeout_3() { return static_cast<int32_t>(offsetof(Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB, ___ReceiveTimeout_3)); }
	inline int32_t get_ReceiveTimeout_3() const { return ___ReceiveTimeout_3; }
	inline int32_t* get_address_of_ReceiveTimeout_3() { return &___ReceiveTimeout_3; }
	inline void set_ReceiveTimeout_3(int32_t value)
	{
		___ReceiveTimeout_3 = value;
	}
};


// Telepathy.Log
struct  Log_t49595309D8499C7E74BBE55B6003F217E8561F73  : public RuntimeObject
{
public:

public:
};

struct Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields
{
public:
	// System.Action`1<System.String> Telepathy.Log::Info
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Info_0;
	// System.Action`1<System.String> Telepathy.Log::Warning
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Warning_1;
	// System.Action`1<System.String> Telepathy.Log::Error
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Error_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields, ___Info_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Info_0() const { return ___Info_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_Warning_1() { return static_cast<int32_t>(offsetof(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields, ___Warning_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Warning_1() const { return ___Warning_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Warning_1() { return &___Warning_1; }
	inline void set_Warning_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Warning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warning_1), (void*)value);
	}

	inline static int32_t get_offset_of_Error_2() { return static_cast<int32_t>(offsetof(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields, ___Error_2)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Error_2() const { return ___Error_2; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Error_2() { return &___Error_2; }
	inline void set_Error_2(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_2), (void*)value);
	}
};


// UnityEngine.Debug
struct  Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4  : public RuntimeObject
{
public:

public:
};

struct Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_0), (void*)value);
	}
};


// kcp2k.KcpClient
struct  KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109  : public RuntimeObject
{
public:
	// kcp2k.KcpPeer kcp2k.KcpClient::peer
	KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * ___peer_0;
	// System.Net.Sockets.Socket kcp2k.KcpClient::socket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket_1;
	// System.Net.EndPoint kcp2k.KcpClient::remoteEndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEndPoint_2;
	// System.Byte[] kcp2k.KcpClient::rawReceiveBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawReceiveBuffer_3;
	// System.Action kcp2k.KcpClient::OnConnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnConnected_4;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpClient::OnData
	Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * ___OnData_5;
	// System.Action kcp2k.KcpClient::OnDisconnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDisconnected_6;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpClient::OnError
	Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * ___OnError_7;
	// System.Boolean kcp2k.KcpClient::connected
	bool ___connected_8;

public:
	inline static int32_t get_offset_of_peer_0() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___peer_0)); }
	inline KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * get_peer_0() const { return ___peer_0; }
	inline KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 ** get_address_of_peer_0() { return &___peer_0; }
	inline void set_peer_0(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * value)
	{
		___peer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peer_0), (void*)value);
	}

	inline static int32_t get_offset_of_socket_1() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___socket_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_socket_1() const { return ___socket_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_socket_1() { return &___socket_1; }
	inline void set_socket_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___socket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndPoint_2() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___remoteEndPoint_2)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_remoteEndPoint_2() const { return ___remoteEndPoint_2; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_remoteEndPoint_2() { return &___remoteEndPoint_2; }
	inline void set_remoteEndPoint_2(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___remoteEndPoint_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndPoint_2), (void*)value);
	}

	inline static int32_t get_offset_of_rawReceiveBuffer_3() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___rawReceiveBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rawReceiveBuffer_3() const { return ___rawReceiveBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rawReceiveBuffer_3() { return &___rawReceiveBuffer_3; }
	inline void set_rawReceiveBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rawReceiveBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawReceiveBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnected_4() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___OnConnected_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnConnected_4() const { return ___OnConnected_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnConnected_4() { return &___OnConnected_4; }
	inline void set_OnConnected_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___OnData_5)); }
	inline Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * get_OnData_5() const { return ___OnData_5; }
	inline Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___OnDisconnected_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_7() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___OnError_7)); }
	inline Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * get_OnError_7() const { return ___OnError_7; }
	inline Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 ** get_address_of_OnError_7() { return &___OnError_7; }
	inline void set_OnError_7(Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * value)
	{
		___OnError_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_7), (void*)value);
	}

	inline static int32_t get_offset_of_connected_8() { return static_cast<int32_t>(offsetof(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109, ___connected_8)); }
	inline bool get_connected_8() const { return ___connected_8; }
	inline bool* get_address_of_connected_8() { return &___connected_8; }
	inline void set_connected_8(bool value)
	{
		___connected_8 = value;
	}
};


// kcp2k.KcpConfig
struct  KcpConfig_tE783A348C689A35A776708156446D0B03F863803  : public RuntimeObject
{
public:
	// System.Boolean kcp2k.KcpConfig::DualMode
	bool ___DualMode_0;
	// System.Boolean kcp2k.KcpConfig::MaximizeSocketBuffers
	bool ___MaximizeSocketBuffers_1;
	// System.Boolean kcp2k.KcpConfig::NoDelay
	bool ___NoDelay_2;
	// System.UInt32 kcp2k.KcpConfig::Interval
	uint32_t ___Interval_3;
	// System.Int32 kcp2k.KcpConfig::FastResend
	int32_t ___FastResend_4;
	// System.Boolean kcp2k.KcpConfig::CongestionWindow
	bool ___CongestionWindow_5;
	// System.UInt32 kcp2k.KcpConfig::SendWindowSize
	uint32_t ___SendWindowSize_6;
	// System.UInt32 kcp2k.KcpConfig::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_7;
	// System.Int32 kcp2k.KcpConfig::Timeout
	int32_t ___Timeout_8;
	// System.UInt32 kcp2k.KcpConfig::MaxRetransmits
	uint32_t ___MaxRetransmits_9;

public:
	inline static int32_t get_offset_of_DualMode_0() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___DualMode_0)); }
	inline bool get_DualMode_0() const { return ___DualMode_0; }
	inline bool* get_address_of_DualMode_0() { return &___DualMode_0; }
	inline void set_DualMode_0(bool value)
	{
		___DualMode_0 = value;
	}

	inline static int32_t get_offset_of_MaximizeSocketBuffers_1() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___MaximizeSocketBuffers_1)); }
	inline bool get_MaximizeSocketBuffers_1() const { return ___MaximizeSocketBuffers_1; }
	inline bool* get_address_of_MaximizeSocketBuffers_1() { return &___MaximizeSocketBuffers_1; }
	inline void set_MaximizeSocketBuffers_1(bool value)
	{
		___MaximizeSocketBuffers_1 = value;
	}

	inline static int32_t get_offset_of_NoDelay_2() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___NoDelay_2)); }
	inline bool get_NoDelay_2() const { return ___NoDelay_2; }
	inline bool* get_address_of_NoDelay_2() { return &___NoDelay_2; }
	inline void set_NoDelay_2(bool value)
	{
		___NoDelay_2 = value;
	}

	inline static int32_t get_offset_of_Interval_3() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___Interval_3)); }
	inline uint32_t get_Interval_3() const { return ___Interval_3; }
	inline uint32_t* get_address_of_Interval_3() { return &___Interval_3; }
	inline void set_Interval_3(uint32_t value)
	{
		___Interval_3 = value;
	}

	inline static int32_t get_offset_of_FastResend_4() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___FastResend_4)); }
	inline int32_t get_FastResend_4() const { return ___FastResend_4; }
	inline int32_t* get_address_of_FastResend_4() { return &___FastResend_4; }
	inline void set_FastResend_4(int32_t value)
	{
		___FastResend_4 = value;
	}

	inline static int32_t get_offset_of_CongestionWindow_5() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___CongestionWindow_5)); }
	inline bool get_CongestionWindow_5() const { return ___CongestionWindow_5; }
	inline bool* get_address_of_CongestionWindow_5() { return &___CongestionWindow_5; }
	inline void set_CongestionWindow_5(bool value)
	{
		___CongestionWindow_5 = value;
	}

	inline static int32_t get_offset_of_SendWindowSize_6() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___SendWindowSize_6)); }
	inline uint32_t get_SendWindowSize_6() const { return ___SendWindowSize_6; }
	inline uint32_t* get_address_of_SendWindowSize_6() { return &___SendWindowSize_6; }
	inline void set_SendWindowSize_6(uint32_t value)
	{
		___SendWindowSize_6 = value;
	}

	inline static int32_t get_offset_of_ReceiveWindowSize_7() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___ReceiveWindowSize_7)); }
	inline uint32_t get_ReceiveWindowSize_7() const { return ___ReceiveWindowSize_7; }
	inline uint32_t* get_address_of_ReceiveWindowSize_7() { return &___ReceiveWindowSize_7; }
	inline void set_ReceiveWindowSize_7(uint32_t value)
	{
		___ReceiveWindowSize_7 = value;
	}

	inline static int32_t get_offset_of_Timeout_8() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___Timeout_8)); }
	inline int32_t get_Timeout_8() const { return ___Timeout_8; }
	inline int32_t* get_address_of_Timeout_8() { return &___Timeout_8; }
	inline void set_Timeout_8(int32_t value)
	{
		___Timeout_8 = value;
	}

	inline static int32_t get_offset_of_MaxRetransmits_9() { return static_cast<int32_t>(offsetof(KcpConfig_tE783A348C689A35A776708156446D0B03F863803, ___MaxRetransmits_9)); }
	inline uint32_t get_MaxRetransmits_9() const { return ___MaxRetransmits_9; }
	inline uint32_t* get_address_of_MaxRetransmits_9() { return &___MaxRetransmits_9; }
	inline void set_MaxRetransmits_9(uint32_t value)
	{
		___MaxRetransmits_9 = value;
	}
};


// kcp2k.KcpServer
struct  KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848  : public RuntimeObject
{
public:
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnConnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnConnected_0;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpServer::OnData
	Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * ___OnData_1;
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnDisconnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnDisconnected_2;
	// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String> kcp2k.KcpServer::OnError
	Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * ___OnError_3;
	// kcp2k.KcpConfig kcp2k.KcpServer::config
	KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * ___config_4;
	// System.Net.Sockets.Socket kcp2k.KcpServer::socket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket_5;
	// System.Net.EndPoint kcp2k.KcpServer::newClientEP
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___newClientEP_6;
	// System.Byte[] kcp2k.KcpServer::rawReceiveBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawReceiveBuffer_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection> kcp2k.KcpServer::connections
	Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * ___connections_8;
	// System.Collections.Generic.HashSet`1<System.Int32> kcp2k.KcpServer::connectionsToRemove
	HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * ___connectionsToRemove_9;

public:
	inline static int32_t get_offset_of_OnConnected_0() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___OnConnected_0)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnConnected_0() const { return ___OnConnected_0; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnConnected_0() { return &___OnConnected_0; }
	inline void set_OnConnected_0(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnConnected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_1() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___OnData_1)); }
	inline Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * get_OnData_1() const { return ___OnData_1; }
	inline Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 ** get_address_of_OnData_1() { return &___OnData_1; }
	inline void set_OnData_1(Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * value)
	{
		___OnData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_2() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___OnDisconnected_2)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnDisconnected_2() const { return ___OnDisconnected_2; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnDisconnected_2() { return &___OnDisconnected_2; }
	inline void set_OnDisconnected_2(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnDisconnected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_3() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___OnError_3)); }
	inline Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * get_OnError_3() const { return ___OnError_3; }
	inline Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 ** get_address_of_OnError_3() { return &___OnError_3; }
	inline void set_OnError_3(Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * value)
	{
		___OnError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_3), (void*)value);
	}

	inline static int32_t get_offset_of_config_4() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___config_4)); }
	inline KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * get_config_4() const { return ___config_4; }
	inline KcpConfig_tE783A348C689A35A776708156446D0B03F863803 ** get_address_of_config_4() { return &___config_4; }
	inline void set_config_4(KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * value)
	{
		___config_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_4), (void*)value);
	}

	inline static int32_t get_offset_of_socket_5() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___socket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_socket_5() const { return ___socket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_socket_5() { return &___socket_5; }
	inline void set_socket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___socket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_5), (void*)value);
	}

	inline static int32_t get_offset_of_newClientEP_6() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___newClientEP_6)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_newClientEP_6() const { return ___newClientEP_6; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_newClientEP_6() { return &___newClientEP_6; }
	inline void set_newClientEP_6(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___newClientEP_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newClientEP_6), (void*)value);
	}

	inline static int32_t get_offset_of_rawReceiveBuffer_7() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___rawReceiveBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rawReceiveBuffer_7() const { return ___rawReceiveBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rawReceiveBuffer_7() { return &___rawReceiveBuffer_7; }
	inline void set_rawReceiveBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rawReceiveBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawReceiveBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of_connections_8() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___connections_8)); }
	inline Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * get_connections_8() const { return ___connections_8; }
	inline Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D ** get_address_of_connections_8() { return &___connections_8; }
	inline void set_connections_8(Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * value)
	{
		___connections_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_8), (void*)value);
	}

	inline static int32_t get_offset_of_connectionsToRemove_9() { return static_cast<int32_t>(offsetof(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848, ___connectionsToRemove_9)); }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * get_connectionsToRemove_9() const { return ___connectionsToRemove_9; }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD ** get_address_of_connectionsToRemove_9() { return &___connectionsToRemove_9; }
	inline void set_connectionsToRemove_9(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * value)
	{
		___connectionsToRemove_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionsToRemove_9), (void*)value);
	}
};


// kcp2k.KcpTransport_<>c
struct  U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields
{
public:
	// kcp2k.KcpTransport_<>c kcp2k.KcpTransport_<>c::<>9
	U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * ___U3CU3E9_0;
	// System.Action`1<System.String> kcp2k.KcpTransport_<>c::<>9__23_0
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___U3CU3E9__23_0_1;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int64> kcp2k.KcpTransport_<>c::<>9__45_0
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * ___U3CU3E9__45_0_2;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int64> kcp2k.KcpTransport_<>c::<>9__46_0
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * ___U3CU3E9__46_0_3;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport_<>c::<>9__47_0
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___U3CU3E9__47_0_4;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport_<>c::<>9__48_0
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___U3CU3E9__48_0_5;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport_<>c::<>9__49_0
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___U3CU3E9__49_0_6;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport_<>c::<>9__50_0
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___U3CU3E9__50_0_7;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__45_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__45_0_2)); }
	inline Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * get_U3CU3E9__45_0_2() const { return ___U3CU3E9__45_0_2; }
	inline Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE ** get_address_of_U3CU3E9__45_0_2() { return &___U3CU3E9__45_0_2; }
	inline void set_U3CU3E9__45_0_2(Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * value)
	{
		___U3CU3E9__45_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__45_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__46_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__46_0_3)); }
	inline Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * get_U3CU3E9__46_0_3() const { return ___U3CU3E9__46_0_3; }
	inline Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE ** get_address_of_U3CU3E9__46_0_3() { return &___U3CU3E9__46_0_3; }
	inline void set_U3CU3E9__46_0_3(Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * value)
	{
		___U3CU3E9__46_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__46_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__47_0_4)); }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * get_U3CU3E9__47_0_4() const { return ___U3CU3E9__47_0_4; }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E ** get_address_of_U3CU3E9__47_0_4() { return &___U3CU3E9__47_0_4; }
	inline void set_U3CU3E9__47_0_4(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * value)
	{
		___U3CU3E9__47_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__48_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__48_0_5)); }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * get_U3CU3E9__48_0_5() const { return ___U3CU3E9__48_0_5; }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E ** get_address_of_U3CU3E9__48_0_5() { return &___U3CU3E9__48_0_5; }
	inline void set_U3CU3E9__48_0_5(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * value)
	{
		___U3CU3E9__48_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__48_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__49_0_6)); }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * get_U3CU3E9__49_0_6() const { return ___U3CU3E9__49_0_6; }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E ** get_address_of_U3CU3E9__49_0_6() { return &___U3CU3E9__49_0_6; }
	inline void set_U3CU3E9__49_0_6(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * value)
	{
		___U3CU3E9__49_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__50_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields, ___U3CU3E9__50_0_7)); }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * get_U3CU3E9__50_0_7() const { return ___U3CU3E9__50_0_7; }
	inline Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E ** get_address_of_U3CU3E9__50_0_7() { return &___U3CU3E9__50_0_7; }
	inline void set_U3CU3E9__50_0_7(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * value)
	{
		___U3CU3E9__50_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__50_0_7), (void*)value);
	}
};


// kcp2k.Log
struct  Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB  : public RuntimeObject
{
public:

public:
};

struct Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields
{
public:
	// System.Action`1<System.String> kcp2k.Log::Info
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Info_0;
	// System.Action`1<System.String> kcp2k.Log::Warning
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Warning_1;
	// System.Action`1<System.String> kcp2k.Log::Error
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___Error_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields, ___Info_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Info_0() const { return ___Info_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_Warning_1() { return static_cast<int32_t>(offsetof(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields, ___Warning_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Warning_1() const { return ___Warning_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Warning_1() { return &___Warning_1; }
	inline void set_Warning_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Warning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warning_1), (void*)value);
	}

	inline static int32_t get_offset_of_Error_2() { return static_cast<int32_t>(offsetof(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields, ___Error_2)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_Error_2() const { return ___Error_2; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_Error_2() { return &___Error_2; }
	inline void set_Error_2(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_2), (void*)value);
	}
};


// Mirror.QueuedMessage
struct  QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 
{
public:
	// System.Int32 Mirror.QueuedMessage::connectionId
	int32_t ___connectionId_0;
	// System.Byte[] Mirror.QueuedMessage::bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes_1;
	// System.Double Mirror.QueuedMessage::time
	double ___time_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783, ___bytes_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783, ___time_2)); }
	inline double get_time_2() const { return ___time_2; }
	inline double* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(double value)
	{
		___time_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.QueuedMessage
struct QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_pinvoke
{
	int32_t ___connectionId_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
	double ___time_2;
};
// Native definition for COM marshalling of Mirror.QueuedMessage
struct QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_com
{
	int32_t ___connectionId_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
	double ___time_2;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// Telepathy.Client
struct  Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A  : public Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB
{
public:
	// System.Action Telepathy.Client::OnConnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnConnected_4;
	// System.Action`1<System.ArraySegment`1<System.Byte>> Telepathy.Client::OnData
	Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * ___OnData_5;
	// System.Action Telepathy.Client::OnDisconnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDisconnected_6;
	// System.Int32 Telepathy.Client::SendQueueLimit
	int32_t ___SendQueueLimit_7;
	// System.Int32 Telepathy.Client::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_8;
	// Telepathy.ClientConnectionState Telepathy.Client::state
	ClientConnectionState_tCDF9C5E8D67A18CAAA840D2BC8A1A86699A639E4 * ___state_9;

public:
	inline static int32_t get_offset_of_OnConnected_4() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___OnConnected_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnConnected_4() const { return ___OnConnected_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnConnected_4() { return &___OnConnected_4; }
	inline void set_OnConnected_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___OnData_5)); }
	inline Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * get_OnData_5() const { return ___OnData_5; }
	inline Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___OnDisconnected_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_SendQueueLimit_7() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___SendQueueLimit_7)); }
	inline int32_t get_SendQueueLimit_7() const { return ___SendQueueLimit_7; }
	inline int32_t* get_address_of_SendQueueLimit_7() { return &___SendQueueLimit_7; }
	inline void set_SendQueueLimit_7(int32_t value)
	{
		___SendQueueLimit_7 = value;
	}

	inline static int32_t get_offset_of_ReceiveQueueLimit_8() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___ReceiveQueueLimit_8)); }
	inline int32_t get_ReceiveQueueLimit_8() const { return ___ReceiveQueueLimit_8; }
	inline int32_t* get_address_of_ReceiveQueueLimit_8() { return &___ReceiveQueueLimit_8; }
	inline void set_ReceiveQueueLimit_8(int32_t value)
	{
		___ReceiveQueueLimit_8 = value;
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A, ___state_9)); }
	inline ClientConnectionState_tCDF9C5E8D67A18CAAA840D2BC8A1A86699A639E4 * get_state_9() const { return ___state_9; }
	inline ClientConnectionState_tCDF9C5E8D67A18CAAA840D2BC8A1A86699A639E4 ** get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(ClientConnectionState_tCDF9C5E8D67A18CAAA840D2BC8A1A86699A639E4 * value)
	{
		___state_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_9), (void*)value);
	}
};


// Telepathy.Server
struct  Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE  : public Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB
{
public:
	// System.Action`1<System.Int32> Telepathy.Server::OnConnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnConnected_4;
	// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>> Telepathy.Server::OnData
	Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * ___OnData_5;
	// System.Action`1<System.Int32> Telepathy.Server::OnDisconnected
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnDisconnected_6;
	// System.Net.Sockets.TcpListener Telepathy.Server::listener
	TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * ___listener_7;
	// System.Threading.Thread Telepathy.Server::listenerThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___listenerThread_8;
	// System.Int32 Telepathy.Server::SendQueueLimit
	int32_t ___SendQueueLimit_9;
	// System.Int32 Telepathy.Server::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_10;
	// Telepathy.MagnificentReceivePipe Telepathy.Server::receivePipe
	MagnificentReceivePipe_tBBD0D3D1760C08EEA09B1802BE6EBD4AB4475EA1 * ___receivePipe_11;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState> Telepathy.Server::clients
	ConcurrentDictionary_2_tC4C5BE429E533D09C63B5A2726715DFCA8B6BB1B * ___clients_12;
	// System.Int32 Telepathy.Server::counter
	int32_t ___counter_13;

public:
	inline static int32_t get_offset_of_OnConnected_4() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___OnConnected_4)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnConnected_4() const { return ___OnConnected_4; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnConnected_4() { return &___OnConnected_4; }
	inline void set_OnConnected_4(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___OnData_5)); }
	inline Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * get_OnData_5() const { return ___OnData_5; }
	inline Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___OnDisconnected_6)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_listener_7() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___listener_7)); }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * get_listener_7() const { return ___listener_7; }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE ** get_address_of_listener_7() { return &___listener_7; }
	inline void set_listener_7(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * value)
	{
		___listener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_7), (void*)value);
	}

	inline static int32_t get_offset_of_listenerThread_8() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___listenerThread_8)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_listenerThread_8() const { return ___listenerThread_8; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_listenerThread_8() { return &___listenerThread_8; }
	inline void set_listenerThread_8(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___listenerThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenerThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_SendQueueLimit_9() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___SendQueueLimit_9)); }
	inline int32_t get_SendQueueLimit_9() const { return ___SendQueueLimit_9; }
	inline int32_t* get_address_of_SendQueueLimit_9() { return &___SendQueueLimit_9; }
	inline void set_SendQueueLimit_9(int32_t value)
	{
		___SendQueueLimit_9 = value;
	}

	inline static int32_t get_offset_of_ReceiveQueueLimit_10() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___ReceiveQueueLimit_10)); }
	inline int32_t get_ReceiveQueueLimit_10() const { return ___ReceiveQueueLimit_10; }
	inline int32_t* get_address_of_ReceiveQueueLimit_10() { return &___ReceiveQueueLimit_10; }
	inline void set_ReceiveQueueLimit_10(int32_t value)
	{
		___ReceiveQueueLimit_10 = value;
	}

	inline static int32_t get_offset_of_receivePipe_11() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___receivePipe_11)); }
	inline MagnificentReceivePipe_tBBD0D3D1760C08EEA09B1802BE6EBD4AB4475EA1 * get_receivePipe_11() const { return ___receivePipe_11; }
	inline MagnificentReceivePipe_tBBD0D3D1760C08EEA09B1802BE6EBD4AB4475EA1 ** get_address_of_receivePipe_11() { return &___receivePipe_11; }
	inline void set_receivePipe_11(MagnificentReceivePipe_tBBD0D3D1760C08EEA09B1802BE6EBD4AB4475EA1 * value)
	{
		___receivePipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivePipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_clients_12() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___clients_12)); }
	inline ConcurrentDictionary_2_tC4C5BE429E533D09C63B5A2726715DFCA8B6BB1B * get_clients_12() const { return ___clients_12; }
	inline ConcurrentDictionary_2_tC4C5BE429E533D09C63B5A2726715DFCA8B6BB1B ** get_address_of_clients_12() { return &___clients_12; }
	inline void set_clients_12(ConcurrentDictionary_2_tC4C5BE429E533D09C63B5A2726715DFCA8B6BB1B * value)
	{
		___clients_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clients_12), (void*)value);
	}

	inline static int32_t get_offset_of_counter_13() { return static_cast<int32_t>(offsetof(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE, ___counter_13)); }
	inline int32_t get_counter_13() const { return ___counter_13; }
	inline int32_t* get_address_of_counter_13() { return &___counter_13; }
	inline void set_counter_13(int32_t value)
	{
		___counter_13 = value;
	}
};


// kcp2k.KcpServerConnection
struct  KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C 
{
public:
	// kcp2k.KcpPeer kcp2k.KcpServerConnection::peer
	KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * ___peer_0;
	// System.Net.EndPoint kcp2k.KcpServerConnection::remoteEndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEndPoint_1;

public:
	inline static int32_t get_offset_of_peer_0() { return static_cast<int32_t>(offsetof(KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C, ___peer_0)); }
	inline KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * get_peer_0() const { return ___peer_0; }
	inline KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 ** get_address_of_peer_0() { return &___peer_0; }
	inline void set_peer_0(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * value)
	{
		___peer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peer_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndPoint_1() { return static_cast<int32_t>(offsetof(KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C, ___remoteEndPoint_1)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_remoteEndPoint_1() const { return ___remoteEndPoint_1; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_remoteEndPoint_1() { return &___remoteEndPoint_1; }
	inline void set_remoteEndPoint_1(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___remoteEndPoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndPoint_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of kcp2k.KcpServerConnection
struct KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_marshaled_pinvoke
{
	KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * ___peer_0;
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEndPoint_1;
};
// Native definition for COM marshalling of kcp2k.KcpServerConnection
struct KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_marshaled_com
{
	KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * ___peer_0;
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEndPoint_1;
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


// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// kcp2k.ErrorCode
struct  ErrorCode_t5B840E2B6C2811864B5995C8B3351A81FB8BB2E8 
{
public:
	// System.Byte kcp2k.ErrorCode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_t5B840E2B6C2811864B5995C8B3351A81FB8BB2E8, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// kcp2k.KcpChannel
struct  KcpChannel_t844B29142C9628203C26CBF35F77E0F17CB2276E 
{
public:
	// System.Byte kcp2k.KcpChannel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpChannel_t844B29142C9628203C26CBF35F77E0F17CB2276E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// kcp2k.KcpState
struct  KcpState_t7E5EA7A88A818F1CF0FADD12BA7463F3820C32EE 
{
public:
	// System.Int32 kcp2k.KcpState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpState_t7E5EA7A88A818F1CF0FADD12BA7463F3820C32EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// kcp2k.KcpPeer
struct  KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4  : public RuntimeObject
{
public:
	// kcp2k.Kcp kcp2k.KcpPeer::kcp
	Kcp_t5223A666113114C6830CE3A272C9BC7E97510D71 * ___kcp_0;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpPeer::RawSend
	Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * ___RawSend_1;
	// kcp2k.KcpState kcp2k.KcpPeer::state
	int32_t ___state_2;
	// System.Action kcp2k.KcpPeer::OnAuthenticated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnAuthenticated_3;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpPeer::OnData
	Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * ___OnData_4;
	// System.Action kcp2k.KcpPeer::OnDisconnected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDisconnected_5;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpPeer::OnError
	Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * ___OnError_6;
	// System.Int32 kcp2k.KcpPeer::timeout
	int32_t ___timeout_8;
	// System.UInt32 kcp2k.KcpPeer::lastReceiveTime
	uint32_t ___lastReceiveTime_9;
	// System.Diagnostics.Stopwatch kcp2k.KcpPeer::watch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___watch_10;
	// System.Byte[] kcp2k.KcpPeer::kcpMessageBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___kcpMessageBuffer_13;
	// System.Byte[] kcp2k.KcpPeer::kcpSendBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___kcpSendBuffer_14;
	// System.Byte[] kcp2k.KcpPeer::rawSendBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawSendBuffer_15;
	// System.UInt32 kcp2k.KcpPeer::lastPingTime
	uint32_t ___lastPingTime_17;

public:
	inline static int32_t get_offset_of_kcp_0() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___kcp_0)); }
	inline Kcp_t5223A666113114C6830CE3A272C9BC7E97510D71 * get_kcp_0() const { return ___kcp_0; }
	inline Kcp_t5223A666113114C6830CE3A272C9BC7E97510D71 ** get_address_of_kcp_0() { return &___kcp_0; }
	inline void set_kcp_0(Kcp_t5223A666113114C6830CE3A272C9BC7E97510D71 * value)
	{
		___kcp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcp_0), (void*)value);
	}

	inline static int32_t get_offset_of_RawSend_1() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___RawSend_1)); }
	inline Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * get_RawSend_1() const { return ___RawSend_1; }
	inline Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 ** get_address_of_RawSend_1() { return &___RawSend_1; }
	inline void set_RawSend_1(Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * value)
	{
		___RawSend_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawSend_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_OnAuthenticated_3() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___OnAuthenticated_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnAuthenticated_3() const { return ___OnAuthenticated_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnAuthenticated_3() { return &___OnAuthenticated_3; }
	inline void set_OnAuthenticated_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnAuthenticated_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthenticated_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_4() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___OnData_4)); }
	inline Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * get_OnData_4() const { return ___OnData_4; }
	inline Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 ** get_address_of_OnData_4() { return &___OnData_4; }
	inline void set_OnData_4(Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * value)
	{
		___OnData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_5() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___OnDisconnected_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDisconnected_5() const { return ___OnDisconnected_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDisconnected_5() { return &___OnDisconnected_5; }
	inline void set_OnDisconnected_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDisconnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_6() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___OnError_6)); }
	inline Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * get_OnError_6() const { return ___OnError_6; }
	inline Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 ** get_address_of_OnError_6() { return &___OnError_6; }
	inline void set_OnError_6(Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * value)
	{
		___OnError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___timeout_8)); }
	inline int32_t get_timeout_8() const { return ___timeout_8; }
	inline int32_t* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(int32_t value)
	{
		___timeout_8 = value;
	}

	inline static int32_t get_offset_of_lastReceiveTime_9() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___lastReceiveTime_9)); }
	inline uint32_t get_lastReceiveTime_9() const { return ___lastReceiveTime_9; }
	inline uint32_t* get_address_of_lastReceiveTime_9() { return &___lastReceiveTime_9; }
	inline void set_lastReceiveTime_9(uint32_t value)
	{
		___lastReceiveTime_9 = value;
	}

	inline static int32_t get_offset_of_watch_10() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___watch_10)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_watch_10() const { return ___watch_10; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_watch_10() { return &___watch_10; }
	inline void set_watch_10(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___watch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watch_10), (void*)value);
	}

	inline static int32_t get_offset_of_kcpMessageBuffer_13() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___kcpMessageBuffer_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_kcpMessageBuffer_13() const { return ___kcpMessageBuffer_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_kcpMessageBuffer_13() { return &___kcpMessageBuffer_13; }
	inline void set_kcpMessageBuffer_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___kcpMessageBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpMessageBuffer_13), (void*)value);
	}

	inline static int32_t get_offset_of_kcpSendBuffer_14() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___kcpSendBuffer_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_kcpSendBuffer_14() const { return ___kcpSendBuffer_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_kcpSendBuffer_14() { return &___kcpSendBuffer_14; }
	inline void set_kcpSendBuffer_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___kcpSendBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpSendBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_rawSendBuffer_15() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___rawSendBuffer_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rawSendBuffer_15() const { return ___rawSendBuffer_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rawSendBuffer_15() { return &___rawSendBuffer_15; }
	inline void set_rawSendBuffer_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rawSendBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawSendBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingTime_17() { return static_cast<int32_t>(offsetof(KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4, ___lastPingTime_17)); }
	inline uint32_t get_lastPingTime_17() const { return ___lastPingTime_17; }
	inline uint32_t* get_address_of_lastPingTime_17() { return &___lastPingTime_17; }
	inline void set_lastPingTime_17(uint32_t value)
	{
		___lastPingTime_17 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.ArraySegment`1<System.Byte>>
struct  Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362  : public MulticastDelegate_t
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


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
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


// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct  Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct  Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<kcp2k.ErrorCode,System.String>
struct  Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6  : public MulticastDelegate_t
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


// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct  Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct  Action_3_t7599E9710D626304E2296EBB31822273361CD8F9  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<kcp2k.KcpServerConnection,System.Int32>
struct  Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<kcp2k.KcpServerConnection,System.Int64>
struct  Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
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


// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};


// Mirror.LatencySimulation
struct  LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210  : public Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195
{
public:
	// Mirror.Transport Mirror.LatencySimulation::wrap
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___wrap_15;
	// System.Single Mirror.LatencySimulation::jitter
	float ___jitter_16;
	// System.Single Mirror.LatencySimulation::jitterSpeed
	float ___jitterSpeed_17;
	// System.Single Mirror.LatencySimulation::reliableLatency
	float ___reliableLatency_18;
	// System.Single Mirror.LatencySimulation::unreliableLoss
	float ___unreliableLoss_19;
	// System.Single Mirror.LatencySimulation::unreliableLatency
	float ___unreliableLatency_20;
	// System.Single Mirror.LatencySimulation::unreliableScramble
	float ___unreliableScramble_21;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::reliableClientToServer
	List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___reliableClientToServer_22;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::reliableServerToClient
	List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___reliableServerToClient_23;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::unreliableClientToServer
	List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___unreliableClientToServer_24;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::unreliableServerToClient
	List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___unreliableServerToClient_25;
	// System.Random Mirror.LatencySimulation::random
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___random_26;

public:
	inline static int32_t get_offset_of_wrap_15() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___wrap_15)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_wrap_15() const { return ___wrap_15; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_wrap_15() { return &___wrap_15; }
	inline void set_wrap_15(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___wrap_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrap_15), (void*)value);
	}

	inline static int32_t get_offset_of_jitter_16() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___jitter_16)); }
	inline float get_jitter_16() const { return ___jitter_16; }
	inline float* get_address_of_jitter_16() { return &___jitter_16; }
	inline void set_jitter_16(float value)
	{
		___jitter_16 = value;
	}

	inline static int32_t get_offset_of_jitterSpeed_17() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___jitterSpeed_17)); }
	inline float get_jitterSpeed_17() const { return ___jitterSpeed_17; }
	inline float* get_address_of_jitterSpeed_17() { return &___jitterSpeed_17; }
	inline void set_jitterSpeed_17(float value)
	{
		___jitterSpeed_17 = value;
	}

	inline static int32_t get_offset_of_reliableLatency_18() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___reliableLatency_18)); }
	inline float get_reliableLatency_18() const { return ___reliableLatency_18; }
	inline float* get_address_of_reliableLatency_18() { return &___reliableLatency_18; }
	inline void set_reliableLatency_18(float value)
	{
		___reliableLatency_18 = value;
	}

	inline static int32_t get_offset_of_unreliableLoss_19() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___unreliableLoss_19)); }
	inline float get_unreliableLoss_19() const { return ___unreliableLoss_19; }
	inline float* get_address_of_unreliableLoss_19() { return &___unreliableLoss_19; }
	inline void set_unreliableLoss_19(float value)
	{
		___unreliableLoss_19 = value;
	}

	inline static int32_t get_offset_of_unreliableLatency_20() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___unreliableLatency_20)); }
	inline float get_unreliableLatency_20() const { return ___unreliableLatency_20; }
	inline float* get_address_of_unreliableLatency_20() { return &___unreliableLatency_20; }
	inline void set_unreliableLatency_20(float value)
	{
		___unreliableLatency_20 = value;
	}

	inline static int32_t get_offset_of_unreliableScramble_21() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___unreliableScramble_21)); }
	inline float get_unreliableScramble_21() const { return ___unreliableScramble_21; }
	inline float* get_address_of_unreliableScramble_21() { return &___unreliableScramble_21; }
	inline void set_unreliableScramble_21(float value)
	{
		___unreliableScramble_21 = value;
	}

	inline static int32_t get_offset_of_reliableClientToServer_22() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___reliableClientToServer_22)); }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * get_reliableClientToServer_22() const { return ___reliableClientToServer_22; }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 ** get_address_of_reliableClientToServer_22() { return &___reliableClientToServer_22; }
	inline void set_reliableClientToServer_22(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * value)
	{
		___reliableClientToServer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reliableClientToServer_22), (void*)value);
	}

	inline static int32_t get_offset_of_reliableServerToClient_23() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___reliableServerToClient_23)); }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * get_reliableServerToClient_23() const { return ___reliableServerToClient_23; }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 ** get_address_of_reliableServerToClient_23() { return &___reliableServerToClient_23; }
	inline void set_reliableServerToClient_23(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * value)
	{
		___reliableServerToClient_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reliableServerToClient_23), (void*)value);
	}

	inline static int32_t get_offset_of_unreliableClientToServer_24() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___unreliableClientToServer_24)); }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * get_unreliableClientToServer_24() const { return ___unreliableClientToServer_24; }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 ** get_address_of_unreliableClientToServer_24() { return &___unreliableClientToServer_24; }
	inline void set_unreliableClientToServer_24(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * value)
	{
		___unreliableClientToServer_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unreliableClientToServer_24), (void*)value);
	}

	inline static int32_t get_offset_of_unreliableServerToClient_25() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___unreliableServerToClient_25)); }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * get_unreliableServerToClient_25() const { return ___unreliableServerToClient_25; }
	inline List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 ** get_address_of_unreliableServerToClient_25() { return &___unreliableServerToClient_25; }
	inline void set_unreliableServerToClient_25(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * value)
	{
		___unreliableServerToClient_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unreliableServerToClient_25), (void*)value);
	}

	inline static int32_t get_offset_of_random_26() { return static_cast<int32_t>(offsetof(LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210, ___random_26)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_random_26() const { return ___random_26; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_random_26() { return &___random_26; }
	inline void set_random_26(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___random_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_26), (void*)value);
	}
};


// Mirror.TelepathyTransport
struct  TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B  : public Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195
{
public:
	// System.UInt16 Mirror.TelepathyTransport::port
	uint16_t ___port_16;
	// System.Boolean Mirror.TelepathyTransport::NoDelay
	bool ___NoDelay_17;
	// System.Int32 Mirror.TelepathyTransport::SendTimeout
	int32_t ___SendTimeout_18;
	// System.Int32 Mirror.TelepathyTransport::ReceiveTimeout
	int32_t ___ReceiveTimeout_19;
	// System.Int32 Mirror.TelepathyTransport::serverMaxMessageSize
	int32_t ___serverMaxMessageSize_20;
	// System.Int32 Mirror.TelepathyTransport::serverMaxReceivesPerTick
	int32_t ___serverMaxReceivesPerTick_21;
	// System.Int32 Mirror.TelepathyTransport::serverSendQueueLimitPerConnection
	int32_t ___serverSendQueueLimitPerConnection_22;
	// System.Int32 Mirror.TelepathyTransport::serverReceiveQueueLimitPerConnection
	int32_t ___serverReceiveQueueLimitPerConnection_23;
	// System.Int32 Mirror.TelepathyTransport::clientMaxMessageSize
	int32_t ___clientMaxMessageSize_24;
	// System.Int32 Mirror.TelepathyTransport::clientMaxReceivesPerTick
	int32_t ___clientMaxReceivesPerTick_25;
	// System.Int32 Mirror.TelepathyTransport::clientSendQueueLimit
	int32_t ___clientSendQueueLimit_26;
	// System.Int32 Mirror.TelepathyTransport::clientReceiveQueueLimit
	int32_t ___clientReceiveQueueLimit_27;
	// Telepathy.Client Mirror.TelepathyTransport::client
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * ___client_28;
	// Telepathy.Server Mirror.TelepathyTransport::server
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * ___server_29;
	// System.Func`1<System.Boolean> Mirror.TelepathyTransport::enabledCheck
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___enabledCheck_30;

public:
	inline static int32_t get_offset_of_port_16() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___port_16)); }
	inline uint16_t get_port_16() const { return ___port_16; }
	inline uint16_t* get_address_of_port_16() { return &___port_16; }
	inline void set_port_16(uint16_t value)
	{
		___port_16 = value;
	}

	inline static int32_t get_offset_of_NoDelay_17() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___NoDelay_17)); }
	inline bool get_NoDelay_17() const { return ___NoDelay_17; }
	inline bool* get_address_of_NoDelay_17() { return &___NoDelay_17; }
	inline void set_NoDelay_17(bool value)
	{
		___NoDelay_17 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_18() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___SendTimeout_18)); }
	inline int32_t get_SendTimeout_18() const { return ___SendTimeout_18; }
	inline int32_t* get_address_of_SendTimeout_18() { return &___SendTimeout_18; }
	inline void set_SendTimeout_18(int32_t value)
	{
		___SendTimeout_18 = value;
	}

	inline static int32_t get_offset_of_ReceiveTimeout_19() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___ReceiveTimeout_19)); }
	inline int32_t get_ReceiveTimeout_19() const { return ___ReceiveTimeout_19; }
	inline int32_t* get_address_of_ReceiveTimeout_19() { return &___ReceiveTimeout_19; }
	inline void set_ReceiveTimeout_19(int32_t value)
	{
		___ReceiveTimeout_19 = value;
	}

	inline static int32_t get_offset_of_serverMaxMessageSize_20() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___serverMaxMessageSize_20)); }
	inline int32_t get_serverMaxMessageSize_20() const { return ___serverMaxMessageSize_20; }
	inline int32_t* get_address_of_serverMaxMessageSize_20() { return &___serverMaxMessageSize_20; }
	inline void set_serverMaxMessageSize_20(int32_t value)
	{
		___serverMaxMessageSize_20 = value;
	}

	inline static int32_t get_offset_of_serverMaxReceivesPerTick_21() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___serverMaxReceivesPerTick_21)); }
	inline int32_t get_serverMaxReceivesPerTick_21() const { return ___serverMaxReceivesPerTick_21; }
	inline int32_t* get_address_of_serverMaxReceivesPerTick_21() { return &___serverMaxReceivesPerTick_21; }
	inline void set_serverMaxReceivesPerTick_21(int32_t value)
	{
		___serverMaxReceivesPerTick_21 = value;
	}

	inline static int32_t get_offset_of_serverSendQueueLimitPerConnection_22() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___serverSendQueueLimitPerConnection_22)); }
	inline int32_t get_serverSendQueueLimitPerConnection_22() const { return ___serverSendQueueLimitPerConnection_22; }
	inline int32_t* get_address_of_serverSendQueueLimitPerConnection_22() { return &___serverSendQueueLimitPerConnection_22; }
	inline void set_serverSendQueueLimitPerConnection_22(int32_t value)
	{
		___serverSendQueueLimitPerConnection_22 = value;
	}

	inline static int32_t get_offset_of_serverReceiveQueueLimitPerConnection_23() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___serverReceiveQueueLimitPerConnection_23)); }
	inline int32_t get_serverReceiveQueueLimitPerConnection_23() const { return ___serverReceiveQueueLimitPerConnection_23; }
	inline int32_t* get_address_of_serverReceiveQueueLimitPerConnection_23() { return &___serverReceiveQueueLimitPerConnection_23; }
	inline void set_serverReceiveQueueLimitPerConnection_23(int32_t value)
	{
		___serverReceiveQueueLimitPerConnection_23 = value;
	}

	inline static int32_t get_offset_of_clientMaxMessageSize_24() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___clientMaxMessageSize_24)); }
	inline int32_t get_clientMaxMessageSize_24() const { return ___clientMaxMessageSize_24; }
	inline int32_t* get_address_of_clientMaxMessageSize_24() { return &___clientMaxMessageSize_24; }
	inline void set_clientMaxMessageSize_24(int32_t value)
	{
		___clientMaxMessageSize_24 = value;
	}

	inline static int32_t get_offset_of_clientMaxReceivesPerTick_25() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___clientMaxReceivesPerTick_25)); }
	inline int32_t get_clientMaxReceivesPerTick_25() const { return ___clientMaxReceivesPerTick_25; }
	inline int32_t* get_address_of_clientMaxReceivesPerTick_25() { return &___clientMaxReceivesPerTick_25; }
	inline void set_clientMaxReceivesPerTick_25(int32_t value)
	{
		___clientMaxReceivesPerTick_25 = value;
	}

	inline static int32_t get_offset_of_clientSendQueueLimit_26() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___clientSendQueueLimit_26)); }
	inline int32_t get_clientSendQueueLimit_26() const { return ___clientSendQueueLimit_26; }
	inline int32_t* get_address_of_clientSendQueueLimit_26() { return &___clientSendQueueLimit_26; }
	inline void set_clientSendQueueLimit_26(int32_t value)
	{
		___clientSendQueueLimit_26 = value;
	}

	inline static int32_t get_offset_of_clientReceiveQueueLimit_27() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___clientReceiveQueueLimit_27)); }
	inline int32_t get_clientReceiveQueueLimit_27() const { return ___clientReceiveQueueLimit_27; }
	inline int32_t* get_address_of_clientReceiveQueueLimit_27() { return &___clientReceiveQueueLimit_27; }
	inline void set_clientReceiveQueueLimit_27(int32_t value)
	{
		___clientReceiveQueueLimit_27 = value;
	}

	inline static int32_t get_offset_of_client_28() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___client_28)); }
	inline Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * get_client_28() const { return ___client_28; }
	inline Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A ** get_address_of_client_28() { return &___client_28; }
	inline void set_client_28(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * value)
	{
		___client_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_28), (void*)value);
	}

	inline static int32_t get_offset_of_server_29() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___server_29)); }
	inline Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * get_server_29() const { return ___server_29; }
	inline Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE ** get_address_of_server_29() { return &___server_29; }
	inline void set_server_29(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * value)
	{
		___server_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_29), (void*)value);
	}

	inline static int32_t get_offset_of_enabledCheck_30() { return static_cast<int32_t>(offsetof(TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B, ___enabledCheck_30)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_enabledCheck_30() const { return ___enabledCheck_30; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_enabledCheck_30() { return &___enabledCheck_30; }
	inline void set_enabledCheck_30(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___enabledCheck_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabledCheck_30), (void*)value);
	}
};


// kcp2k.KcpTransport
struct  KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C  : public Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195
{
public:
	// System.UInt16 kcp2k.KcpTransport::Port
	uint16_t ___Port_16;
	// System.Boolean kcp2k.KcpTransport::DualMode
	bool ___DualMode_17;
	// System.Boolean kcp2k.KcpTransport::NoDelay
	bool ___NoDelay_18;
	// System.UInt32 kcp2k.KcpTransport::Interval
	uint32_t ___Interval_19;
	// System.Int32 kcp2k.KcpTransport::Timeout
	int32_t ___Timeout_20;
	// System.Int32 kcp2k.KcpTransport::FastResend
	int32_t ___FastResend_21;
	// System.Boolean kcp2k.KcpTransport::CongestionWindow
	bool ___CongestionWindow_22;
	// System.UInt32 kcp2k.KcpTransport::SendWindowSize
	uint32_t ___SendWindowSize_23;
	// System.UInt32 kcp2k.KcpTransport::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_24;
	// System.UInt32 kcp2k.KcpTransport::MaxRetransmit
	uint32_t ___MaxRetransmit_25;
	// System.Boolean kcp2k.KcpTransport::MaximizeSocketBuffers
	bool ___MaximizeSocketBuffers_26;
	// System.Int32 kcp2k.KcpTransport::ReliableMaxMessageSize
	int32_t ___ReliableMaxMessageSize_27;
	// System.Int32 kcp2k.KcpTransport::UnreliableMaxMessageSize
	int32_t ___UnreliableMaxMessageSize_28;
	// kcp2k.KcpConfig kcp2k.KcpTransport::config
	KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * ___config_29;
	// kcp2k.KcpServer kcp2k.KcpTransport::server
	KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * ___server_30;
	// kcp2k.KcpClient kcp2k.KcpTransport::client
	KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * ___client_31;
	// System.Boolean kcp2k.KcpTransport::debugLog
	bool ___debugLog_32;
	// System.Boolean kcp2k.KcpTransport::statisticsGUI
	bool ___statisticsGUI_33;
	// System.Boolean kcp2k.KcpTransport::statisticsLog
	bool ___statisticsLog_34;

public:
	inline static int32_t get_offset_of_Port_16() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___Port_16)); }
	inline uint16_t get_Port_16() const { return ___Port_16; }
	inline uint16_t* get_address_of_Port_16() { return &___Port_16; }
	inline void set_Port_16(uint16_t value)
	{
		___Port_16 = value;
	}

	inline static int32_t get_offset_of_DualMode_17() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___DualMode_17)); }
	inline bool get_DualMode_17() const { return ___DualMode_17; }
	inline bool* get_address_of_DualMode_17() { return &___DualMode_17; }
	inline void set_DualMode_17(bool value)
	{
		___DualMode_17 = value;
	}

	inline static int32_t get_offset_of_NoDelay_18() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___NoDelay_18)); }
	inline bool get_NoDelay_18() const { return ___NoDelay_18; }
	inline bool* get_address_of_NoDelay_18() { return &___NoDelay_18; }
	inline void set_NoDelay_18(bool value)
	{
		___NoDelay_18 = value;
	}

	inline static int32_t get_offset_of_Interval_19() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___Interval_19)); }
	inline uint32_t get_Interval_19() const { return ___Interval_19; }
	inline uint32_t* get_address_of_Interval_19() { return &___Interval_19; }
	inline void set_Interval_19(uint32_t value)
	{
		___Interval_19 = value;
	}

	inline static int32_t get_offset_of_Timeout_20() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___Timeout_20)); }
	inline int32_t get_Timeout_20() const { return ___Timeout_20; }
	inline int32_t* get_address_of_Timeout_20() { return &___Timeout_20; }
	inline void set_Timeout_20(int32_t value)
	{
		___Timeout_20 = value;
	}

	inline static int32_t get_offset_of_FastResend_21() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___FastResend_21)); }
	inline int32_t get_FastResend_21() const { return ___FastResend_21; }
	inline int32_t* get_address_of_FastResend_21() { return &___FastResend_21; }
	inline void set_FastResend_21(int32_t value)
	{
		___FastResend_21 = value;
	}

	inline static int32_t get_offset_of_CongestionWindow_22() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___CongestionWindow_22)); }
	inline bool get_CongestionWindow_22() const { return ___CongestionWindow_22; }
	inline bool* get_address_of_CongestionWindow_22() { return &___CongestionWindow_22; }
	inline void set_CongestionWindow_22(bool value)
	{
		___CongestionWindow_22 = value;
	}

	inline static int32_t get_offset_of_SendWindowSize_23() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___SendWindowSize_23)); }
	inline uint32_t get_SendWindowSize_23() const { return ___SendWindowSize_23; }
	inline uint32_t* get_address_of_SendWindowSize_23() { return &___SendWindowSize_23; }
	inline void set_SendWindowSize_23(uint32_t value)
	{
		___SendWindowSize_23 = value;
	}

	inline static int32_t get_offset_of_ReceiveWindowSize_24() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___ReceiveWindowSize_24)); }
	inline uint32_t get_ReceiveWindowSize_24() const { return ___ReceiveWindowSize_24; }
	inline uint32_t* get_address_of_ReceiveWindowSize_24() { return &___ReceiveWindowSize_24; }
	inline void set_ReceiveWindowSize_24(uint32_t value)
	{
		___ReceiveWindowSize_24 = value;
	}

	inline static int32_t get_offset_of_MaxRetransmit_25() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___MaxRetransmit_25)); }
	inline uint32_t get_MaxRetransmit_25() const { return ___MaxRetransmit_25; }
	inline uint32_t* get_address_of_MaxRetransmit_25() { return &___MaxRetransmit_25; }
	inline void set_MaxRetransmit_25(uint32_t value)
	{
		___MaxRetransmit_25 = value;
	}

	inline static int32_t get_offset_of_MaximizeSocketBuffers_26() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___MaximizeSocketBuffers_26)); }
	inline bool get_MaximizeSocketBuffers_26() const { return ___MaximizeSocketBuffers_26; }
	inline bool* get_address_of_MaximizeSocketBuffers_26() { return &___MaximizeSocketBuffers_26; }
	inline void set_MaximizeSocketBuffers_26(bool value)
	{
		___MaximizeSocketBuffers_26 = value;
	}

	inline static int32_t get_offset_of_ReliableMaxMessageSize_27() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___ReliableMaxMessageSize_27)); }
	inline int32_t get_ReliableMaxMessageSize_27() const { return ___ReliableMaxMessageSize_27; }
	inline int32_t* get_address_of_ReliableMaxMessageSize_27() { return &___ReliableMaxMessageSize_27; }
	inline void set_ReliableMaxMessageSize_27(int32_t value)
	{
		___ReliableMaxMessageSize_27 = value;
	}

	inline static int32_t get_offset_of_UnreliableMaxMessageSize_28() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___UnreliableMaxMessageSize_28)); }
	inline int32_t get_UnreliableMaxMessageSize_28() const { return ___UnreliableMaxMessageSize_28; }
	inline int32_t* get_address_of_UnreliableMaxMessageSize_28() { return &___UnreliableMaxMessageSize_28; }
	inline void set_UnreliableMaxMessageSize_28(int32_t value)
	{
		___UnreliableMaxMessageSize_28 = value;
	}

	inline static int32_t get_offset_of_config_29() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___config_29)); }
	inline KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * get_config_29() const { return ___config_29; }
	inline KcpConfig_tE783A348C689A35A776708156446D0B03F863803 ** get_address_of_config_29() { return &___config_29; }
	inline void set_config_29(KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * value)
	{
		___config_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_29), (void*)value);
	}

	inline static int32_t get_offset_of_server_30() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___server_30)); }
	inline KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * get_server_30() const { return ___server_30; }
	inline KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 ** get_address_of_server_30() { return &___server_30; }
	inline void set_server_30(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * value)
	{
		___server_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_30), (void*)value);
	}

	inline static int32_t get_offset_of_client_31() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___client_31)); }
	inline KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * get_client_31() const { return ___client_31; }
	inline KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 ** get_address_of_client_31() { return &___client_31; }
	inline void set_client_31(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * value)
	{
		___client_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_31), (void*)value);
	}

	inline static int32_t get_offset_of_debugLog_32() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___debugLog_32)); }
	inline bool get_debugLog_32() const { return ___debugLog_32; }
	inline bool* get_address_of_debugLog_32() { return &___debugLog_32; }
	inline void set_debugLog_32(bool value)
	{
		___debugLog_32 = value;
	}

	inline static int32_t get_offset_of_statisticsGUI_33() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___statisticsGUI_33)); }
	inline bool get_statisticsGUI_33() const { return ___statisticsGUI_33; }
	inline bool* get_address_of_statisticsGUI_33() { return &___statisticsGUI_33; }
	inline void set_statisticsGUI_33(bool value)
	{
		___statisticsGUI_33 = value;
	}

	inline static int32_t get_offset_of_statisticsLog_34() { return static_cast<int32_t>(offsetof(KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C, ___statisticsLog_34)); }
	inline bool get_statisticsLog_34() const { return ___statisticsLog_34; }
	inline bool* get_address_of_statisticsLog_34() { return &___statisticsLog_34; }
	inline void set_statisticsLog_34(bool value)
	{
		___statisticsLog_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// Mirror.QueuedMessage[]
struct QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  m_Items[1];

public:
	inline QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bytes_1), (void*)NULL);
	}
	inline QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bytes_1), (void*)NULL);
	}
};


// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0_gshared (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_gshared_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C_gshared (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  ___item1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_gshared (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_gshared_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_gshared (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_gshared (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_gshared (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B_gshared (Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_gshared (Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_gshared (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917_gshared (Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_gshared (Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * __this, int32_t ___arg10, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___arg21, int32_t ___arg32, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_gshared (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m2ED0AE6624225584F893E967295C4DDCCB5CF2A0_gshared (Action_2_t72A600D61AFEA7AC309F144E7A730EAD383D3799 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m19608666F6671A3FD269E148BA3839C254DFCAB8_gshared (Action_2_t04CED1CA5124497B90B450E6450FFB716C9C0339 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m2E2AF6A7B11A5897395A2AF3D3078BD788DB48DD_gshared (Action_3_t42FDEE7169AFCA16145669B33C0484253B7E80F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m175E1C7CFAA73FE8C86703BCC0E8177E362027A3_gshared (Action_3_tBA2E511B61A9DA1EB623780EBB6ED7D6A4B0E03E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_gshared (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_gshared (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * __this, const RuntimeMethod* method);
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A_gshared (Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int64 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB_gshared (RuntimeObject* ___source0, Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_gshared (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_gshared (RuntimeObject* ___source0, Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___selector1, const RuntimeMethod* method);
// System.Void System.Action`2<System.ByteEnum,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m761CF40E2B246A8E34FBCEE7F0E6A0D77AAEB0DA_gshared (Action_2_t04CED1CA5124497B90B450E6450FFB716C9C0339 * __this, uint8_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ByteEnum,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_mD572F9B5ED9024292EA007E16CC50ED7044BEE6D_gshared (Action_3_tBA2E511B61A9DA1EB623780EBB6ED7D6A4B0E03E * __this, int32_t ___arg10, uint8_t ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Double Mirror.NetworkTime::get_localTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE (const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, const RuntimeMethod*))ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_gshared_inline)(__this, method);
}
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, const RuntimeMethod*))ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, const RuntimeMethod*))ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_gshared_inline)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Add(!0)
inline void List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0 (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 , const RuntimeMethod*))List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Count()
inline int32_t List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, const RuntimeMethod*))List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Insert(System.Int32,!0)
inline void List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, int32_t, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 , const RuntimeMethod*))List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C_gshared)(__this, ___index0, ___item1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Clear()
inline void List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527 (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, const RuntimeMethod*))List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_gshared)(__this, method);
}
// System.Single Mirror.LatencySimulation::SimulateLatency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___channeldId0, const RuntimeMethod* method);
// System.Void Mirror.LatencySimulation::SimulateSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32,System.Single,System.Collections.Generic.List`1<Mirror.QueuedMessage>,System.Collections.Generic.List`1<Mirror.QueuedMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, float ___latency3, List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___reliableQueue4, List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___unreliableQueue5, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Item(System.Int32)
inline QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_gshared_inline)(__this, ___index0, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
inline void ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382 (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_gshared)(__this, ___array0, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420 (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::.ctor()
inline void List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155 (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *, const RuntimeMethod*))List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE (Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void Telepathy.Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m7CAB0D25479FF61B2727DEB917B8DE0D915471EE (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B (Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_m93BE4684C1C414B153571AEB8DDCC10842F3170A (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, const RuntimeMethod* method);
// System.Void Mirror.TelepathyTransport::CreateClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_m74B9ABDE94E585341560A558BD7ACA4FD029E509 (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsDefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m4DC740FABD8046FA859BBF4D4FABADF4F4EBBC57 (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___message0, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A (Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C *, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t, const RuntimeMethod*))Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m3B6CA6FCAE1B7E39AF960F624046244CE1AA2082 (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Client::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Client_Tick_mDF4F4100A571EDEA15414FCE8DF5AA13D4904F56 (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, int32_t ___processLimit0, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___checkEnabled1, const RuntimeMethod* method);
// System.Void System.UriBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_mFC8729DAB4291B5B6500207C85DCB3985B46BB52 (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * __this, const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Scheme_mD20C10C2D43C0C2C96D9098BE4331D46FCC45921 (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2 (const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Host(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Host_m7213BE98F62DE6A099EA8EEFF479949C5F1EA680 (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.UriBuilder::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Port_m14DBA6E597BED983B73F4AD7F1215C6E474DB6F3 (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Uri System.UriBuilder::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * UriBuilder_get_Uri_mDCABA4CD1D05D4B9C4CBA063BC7CA94EE6CCC631 (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_m3E4A431E22B0A7332DF433F9FAB891B8BFEC2660 (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_mFF001B038803986673195A40AF424E33DF480E5C (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917 (Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_m8D09E044F74928D69428486A8BF57F9E70A9F7BD (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___port0, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::Send(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_mE7FD50542929A2389A04CD3945469E27EABC2213 (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___message1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127 (Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * __this, int32_t ___arg10, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 *, int32_t, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t, const RuntimeMethod*))Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_mA71ED71953FCF8B922D261DABA0573DA7E16472F (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m4393BA3C631C267102CF6FD13039BA74D37FC291 (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_m63B9CDED2E77F82E91AFB19BB6E862A4558395D0 (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Server::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_Tick_m8690C1FFEE57B89BAF57DD789B3CBACEE5A2A25C (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * __this, int32_t ___processLimit0, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___checkEnabled1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m52EC05B18F23FAD4C86E8A468867EBEE26F3B7F0 (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500 (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *, int32_t, const RuntimeMethod*))Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_gshared)(__this, ___obj0, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void kcp2k.KcpConfig::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConfig__ctor_m18BE7C053400E2C5953CD7778981F18F820A3A59 (KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * __this, bool ___DualMode0, bool ___MaximizeSocketBuffers1, bool ___NoDelay2, uint32_t ___Interval3, int32_t ___FastResend4, bool ___CongestionWindow5, uint32_t ___SendWindowSize6, uint32_t ___ReceiveWindowSize7, int32_t ___Timeout8, uint32_t ___MaxRetransmits9, const RuntimeMethod* method);
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF361E4D0BC01AD82D94C030F0630BFF125A14775 (Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m2ED0AE6624225584F893E967295C4DDCCB5CF2A0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<kcp2k.ErrorCode,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBFE534FECF76381E5FF98BFE7E4D342B8BFCDEE5 (Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m19608666F6671A3FD269E148BA3839C254DFCAB8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient__ctor_mD13843CC781197DA0BA995C924C6E6C328414B7F (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnConnected0, Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * ___OnData1, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDisconnected2, Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * ___OnError3, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mBB75D2B20CBD3978EE7BEF45640D4A9692C45EBE (Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m2E2AF6A7B11A5897395A2AF3D3078BD788DB48DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m3694F974ACED1192DB653CAE643A0189E979A220 (Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m175E1C7CFAA73FE8C86703BCC0E8177E362027A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,kcp2k.KcpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer__ctor_mDD2062A5FBEEDD1F418D02B153EB02BE6170E8A7 (KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * __this, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnConnected0, Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * ___OnData1, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___OnDisconnected2, Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * ___OnError3, KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * ___config4, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpPeer::ReliableMaxMessageSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_ReliableMaxMessageSize_mCF20E0D42838FE69A119200DBE2BCF30122A37FD (uint32_t ___rcv_wnd0, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::Connect(System.String,System.UInt16,kcp2k.KcpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Connect_m43C935E7D53B42924700F64F3109C026E5379E4E (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, String_t* ___address0, uint16_t ___port1, KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * ___config2, const RuntimeMethod* method);
// kcp2k.KcpChannel kcp2k.KcpTransport::ToKcpChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToKcpChannel_mCE06CEDA399AB261EC956D5B3D8F3C455BAA2600 (int32_t ___channel0, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::Send(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Send_mDA51C16EEE71DCF6897F68B4C7580BE5D91DD033 (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, uint8_t ___channel1, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Disconnect_mACFE10C32D20C69FDCB1511B2C483B37D858B413 (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_m78FE55A6A0CBFDF05D3ABF5BF07459C06C0B2569 (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_mC6A7FE51C4CFA649FEC3977352919DFE63398980 (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer::Send(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Send_mE34F3FA461F461C81870B8188B05BE25C1577D2B (KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, uint8_t ___channel2, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_m6F429456BA510512A0DA35FEA3F23B6C867D6F43 (KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Net.IPEndPoint kcp2k.KcpServer::GetClientEndPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * KcpServer_GetClientEndPoint_m73D920E76AFFAC748CC52EE9495D314AA83B149D (KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Count()
inline int32_t Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1 (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D *, const RuntimeMethod*))Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
inline ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1 (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * (*) (Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D *, const RuntimeMethod*))Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_gshared)(__this, method);
}
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A (Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A_gshared)(__this, ___object0, ___method1, method);
}
// System.Int64 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int64>)
inline int64_t Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB (RuntimeObject* ___source0, Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * ___selector1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (RuntimeObject*, Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE *, const RuntimeMethod*))Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int32>)
inline int32_t Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817 (RuntimeObject* ___source0, Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * ___selector1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *, const RuntimeMethod*))Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetAverageMaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxSendRate_m5F1204AAC387654C91D38CB1F25AEDFE2EEC0A95 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.String kcp2k.KcpTransport::PrettyBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8 (int64_t ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetAverageMaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxReceiveRate_m22E5746E6FB44ECF4C14357DB4058BA91E6B3F71 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetTotalSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendQueue_m732A16998CEBE55BF115BB29C2466927194EC34B (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveQueue_m07D5274AD0400A509C3D59DAAC1B1B6F14333E51 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetTotalSendBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendBuffer_m920A529FDF5DD709CED54134F9D1B6C568D8A16A (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveBuffer_mAB03EC6DEB2AF011B5B3F8C02485C9C324A7AA99 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method);
// System.UInt32 kcp2k.KcpPeer::get_MaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpPeer_get_MaxSendRate_m07A29F561A5C003C4C11FC7C191C205AF4283887 (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.UInt32 kcp2k.KcpPeer::get_MaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpPeer_get_MaxReceiveRate_m05CFE37AEC9AB9E2CE57507AE136D88D4E6769FC (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpPeer::get_SendQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_SendQueueCount_mDEDA224CD3F1E6FA3CC688F6041BAE9981F1C758 (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpPeer::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_ReceiveQueueCount_m0EE2EC80217E5AC592D531D43EC179D8D4D4AAE9 (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpPeer::get_SendBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_SendBufferCount_m31709A91E7EA197697931B424D2E1A8D7247B8B5 (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpPeer::get_ReceiveBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_ReceiveBufferCount_m772F67AB01E1C2FAAC044F59229FD6E032CA787B (KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * __this, const RuntimeMethod* method);
// System.Int32 kcp2k.KcpTransport::FromKcpChannel(kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_FromKcpChannel_mE654FCC36E0125AF8313B95E73CCE8276B0FDAEA (uint8_t ___channel0, const RuntimeMethod* method);
// Mirror.TransportError kcp2k.KcpTransport::ToTransportError(kcp2k.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477 (uint8_t ___error0, const RuntimeMethod* method);
// System.Void System.Action`2<Mirror.TransportError,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mCC40875411D2FA0345600AD1CCA196E1F4F0BD29 (Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * __this, uint8_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC299510424CD206373E7F2273FA3E955667F68FF *, uint8_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m761CF40E2B246A8E34FBCEE7F0E6A0D77AAEB0DA_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`3<System.Int32,Mirror.TransportError,System.String>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m4D4D60F525CC37B7127AA9322B489598F8872956 (Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * __this, int32_t ___arg10, uint8_t ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B *, int32_t, uint8_t, String_t*, const RuntimeMethod*))Action_3_Invoke_mD572F9B5ED9024292EA007E16CC50ED7044BEE6D_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void kcp2k.KcpTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m91CB8D2999DD3AE8223B00C0D7BBBD505618702A (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Mirror.LatencySimulation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_Awake_m51DFD267C3E0C8EB048F151C4488CE25B2D5BA53 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_Awake_m51DFD267C3E0C8EB048F151C4488CE25B2D5BA53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (wrap == null)
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new Exception("LatencySimulationTransport requires an underlying transport to wrap around.");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteral8C93CD58C8D3C7993E273A91531A0F04B0B22CC0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, LatencySimulation_Awake_m51DFD267C3E0C8EB048F151C4488CE25B2D5BA53_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_OnEnable_m2D876C618DCBF545552BB0E2107EB7B5423D1322 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// void OnEnable() { wrap.enabled = true; }
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_0, (bool)1, /*hidden argument*/NULL);
		// void OnEnable() { wrap.enabled = true; }
		return;
	}
}
// System.Void Mirror.LatencySimulation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_OnDisable_m3D049F7647658CA5B3153AC01F6D21889EFB4BD9 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// void OnDisable() { wrap.enabled = false; }
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_0, (bool)0, /*hidden argument*/NULL);
		// void OnDisable() { wrap.enabled = false; }
		return;
	}
}
// System.Single Mirror.LatencySimulation::Noise(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_Noise_m74D000644B5365A5763470F8BC54D9958AA0E37E (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_Noise_m74D000644B5365A5763470F8BC54D9958AA0E37E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected virtual float Noise(float time) => Mathf.PerlinNoise(time, time);
		float L_0 = ___time0;
		float L_1 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Mirror.LatencySimulation::SimulateLatency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___channeldId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float spike = Noise((float)NetworkTime.localTime * jitterSpeed) * jitter;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_0 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		float L_1 = __this->get_jitterSpeed_17();
		float L_2 = VirtFuncInvoker1< float, float >::Invoke(25 /* System.Single Mirror.LatencySimulation::Noise(System.Single) */, __this, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)L_1)));
		float L_3 = __this->get_jitter_16();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// switch (channeldId)
		int32_t L_4 = ___channeldId0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___channeldId0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0042;
	}

IL_0024:
	{
		// return reliableLatency/1000 + spike;
		float L_6 = __this->get_reliableLatency_18();
		float L_7 = V_0;
		return ((float)il2cpp_codegen_add((float)((float)((float)L_6/(float)(1000.0f))), (float)L_7));
	}

IL_0033:
	{
		// return unreliableLatency/1000 + spike;
		float L_8 = __this->get_unreliableLatency_20();
		float L_9 = V_0;
		return ((float)il2cpp_codegen_add((float)((float)((float)L_8/(float)(1000.0f))), (float)L_9));
	}

IL_0042:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Mirror.LatencySimulation::SimulateSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32,System.Single,System.Collections.Generic.List`1<Mirror.QueuedMessage>,System.Collections.Generic.List`1<Mirror.QueuedMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, float ___latency3, List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___reliableQueue4, List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * ___unreliableQueue5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_1;
	memset((&V_1), 0, sizeof(V_1));
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		// byte[] bytes = new byte[segment.Count];
		int32_t L_0 = ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_inline((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&___segment1), /*hidden argument*/ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(segment.Array, segment.Offset, bytes, 0, segment.Count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_inline((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&___segment1), /*hidden argument*/ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_RuntimeMethod_var);
		int32_t L_3 = ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_inline((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&___segment1), /*hidden argument*/ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		int32_t L_5 = ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_inline((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&___segment1), /*hidden argument*/ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_RuntimeMethod_var);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_2, L_3, (RuntimeArray *)(RuntimeArray *)L_4, 0, L_5, /*hidden argument*/NULL);
		//             QueuedMessage message = new QueuedMessage
		//             {
		//                 connectionId = connectionId,
		//                 bytes = bytes,
		// #if !UNITY_2020_3_OR_NEWER
		//                 time = NetworkTime.localTime + latency
		// #else
		//                 time = Time.unscaledTimeAsDouble + latency
		// #endif
		//             };
		il2cpp_codegen_initobj((&V_2), sizeof(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 ));
		int32_t L_6 = ___connectionId0;
		(&V_2)->set_connectionId_0(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		(&V_2)->set_bytes_1(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_8 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		float L_9 = ___latency3;
		(&V_2)->set_time_2(((double)il2cpp_codegen_add((double)L_8, (double)(((double)((double)L_9))))));
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_10 = V_2;
		V_1 = L_10;
		// switch (channelId)
		int32_t L_11 = ___channelId2;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_12 = ___channelId2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00c4;
	}

IL_005c:
	{
		// reliableQueue.Add(message);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_13 = ___reliableQueue4;
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0(L_13, L_14, /*hidden argument*/List_1_Add_m09E1AFD6BB991D8530A14E69566B23A01A0E17C0_RuntimeMethod_var);
		// break;
		return;
	}

IL_0065:
	{
		// bool drop = random.NextDouble() < unreliableLoss/100;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_15 = __this->get_random_26();
		NullCheck(L_15);
		double L_16 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_15);
		float L_17 = __this->get_unreliableLoss_19();
		// if (!drop)
		if (((((double)L_16) < ((double)(((double)((double)((float)((float)L_17/(float)(100.0f))))))))? 1 : 0))
		{
			goto IL_00de;
		}
	}
	{
		// bool scramble = random.NextDouble() < unreliableScramble/100;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_18 = __this->get_random_26();
		NullCheck(L_18);
		double L_19 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_18);
		float L_20 = __this->get_unreliableScramble_21();
		// int last = unreliableQueue.Count;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_21 = ___unreliableQueue5;
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline(L_21, /*hidden argument*/List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var);
		V_3 = L_22;
		// int index = scramble ? random.Next(0, last + 1) : last;
		if (((((double)L_19) < ((double)(((double)((double)((float)((float)L_20/(float)(100.0f))))))))? 1 : 0))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = L_23;
		goto IL_00b7;
	}

IL_00a8:
	{
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_24 = __this->get_random_26();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_24, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		G_B8_0 = L_26;
	}

IL_00b7:
	{
		V_4 = G_B8_0;
		// unreliableQueue.Insert(index, message);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_27 = ___unreliableQueue5;
		int32_t L_28 = V_4;
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_29 = V_1;
		NullCheck(L_27);
		List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C(L_27, L_28, L_29, /*hidden argument*/List_1_Insert_mE3C6FB1DB187A255EA874DE5E40805B4A58B017C_RuntimeMethod_var);
		// break;
		return;
	}

IL_00c4:
	{
		// Debug.LogError($"{nameof(LatencySimulation)} unexpected channelId: {channelId}");
		int32_t L_30 = ___channelId2;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral00918CBC35725A309FFE02431C77218238732188, _stringLiteralF265F1B18DC494BD58FA8B84D45E0F60C3F01FDC, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_33, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Boolean Mirror.LatencySimulation::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_Available_mD9E3C7C69295EE55B5EA1C4665B08DE98D316C05 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override bool Available() => wrap.Available();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Mirror.Transport::Available() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientConnect_m9EFEECEF2E79143991E3BD00855E2839466F3326 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// wrap.OnClientConnected    = OnClientConnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		L_0->set_OnClientConnected_5(L_1);
		// wrap.OnClientDataReceived = OnClientDataReceived;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_2 = __this->get_wrap_15();
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		NullCheck(L_2);
		L_2->set_OnClientDataReceived_6(L_3);
		// wrap.OnClientError        = OnClientError;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_4 = __this->get_wrap_15();
		Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientError_8();
		NullCheck(L_4);
		L_4->set_OnClientError_8(L_5);
		// wrap.OnClientDisconnected = OnClientDisconnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_wrap_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		NullCheck(L_6);
		L_6->set_OnClientDisconnected_9(L_7);
		// wrap.ClientConnect(address);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_8 = __this->get_wrap_15();
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientConnect_m9D655544A6D7B66F045F4F47FA3113F7E982AF33 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method)
{
	{
		// wrap.OnClientConnected    = OnClientConnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		L_0->set_OnClientConnected_5(L_1);
		// wrap.OnClientDataReceived = OnClientDataReceived;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_2 = __this->get_wrap_15();
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		NullCheck(L_2);
		L_2->set_OnClientDataReceived_6(L_3);
		// wrap.OnClientError        = OnClientError;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_4 = __this->get_wrap_15();
		Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientError_8();
		NullCheck(L_4);
		L_4->set_OnClientError_8(L_5);
		// wrap.OnClientDisconnected = OnClientDisconnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_wrap_15();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		NullCheck(L_6);
		L_6->set_OnClientDisconnected_9(L_7);
		// wrap.ClientConnect(uri);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_8 = __this->get_wrap_15();
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_9 = ___uri0;
		NullCheck(L_8);
		VirtActionInvoker1< Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * >::Invoke(7 /* System.Void Mirror.Transport::ClientConnect(System.Uri) */, L_8, L_9);
		// }
		return;
	}
}
// System.Boolean Mirror.LatencySimulation::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_ClientConnected_m34B28B7ABF4C53C7A867AE3BCA2F35FA99BBA5D9 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => wrap.ClientConnected();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientDisconnect_m4C58FA081A96F5B7EA2783B0F98736F0C16499C5 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_ClientDisconnect_m4C58FA081A96F5B7EA2783B0F98736F0C16499C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrap.ClientDisconnect();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void Mirror.Transport::ClientDisconnect() */, L_0);
		// reliableClientToServer.Clear();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_1 = __this->get_reliableClientToServer_22();
		NullCheck(L_1);
		List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527(L_1, /*hidden argument*/List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_RuntimeMethod_var);
		// unreliableClientToServer.Clear();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_2 = __this->get_unreliableClientToServer_24();
		NullCheck(L_2);
		List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527(L_2, /*hidden argument*/List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientSend_m32F87CDD7D14563647B74575CD703ED1BF3F9380 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, int32_t ___channelId1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float latency = SimulateLatency(channelId);
		int32_t L_0 = ___channelId1;
		float L_1 = LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// SimulateSend(0, segment, channelId, latency, reliableClientToServer, unreliableClientToServer);
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___segment0;
		int32_t L_3 = ___channelId1;
		float L_4 = V_0;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_5 = __this->get_reliableClientToServer_22();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_6 = __this->get_unreliableClientToServer_24();
		LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1(__this, 0, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Uri Mirror.LatencySimulation::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * LatencySimulation_ServerUri_m55946A08686B7B9AD97A251D44149D66FDE45DE4 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override Uri ServerUri() => wrap.ServerUri();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = VirtFuncInvoker0< Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		return L_1;
	}
}
// System.Boolean Mirror.LatencySimulation::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_ServerActive_m109CE4E936CA32AF8C08B8217D3E3F8B51E1DD4A (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => wrap.ServerActive();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, L_0);
		return L_1;
	}
}
// System.String Mirror.LatencySimulation::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LatencySimulation_ServerGetClientAddress_m77297BAB1D74EB75A4F97A1AFA238C5718E1CC82 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override string ServerGetClientAddress(int connectionId) => wrap.ServerGetClientAddress(connectionId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(15 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.LatencySimulation::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerDisconnect_mED8DE580A8DC6B476EAFE30075400E9662E1A090 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override void ServerDisconnect(int connectionId) => wrap.ServerDisconnect(connectionId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void Mirror.Transport::ServerDisconnect(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerSend_m2BC62C85D09A5317216EBD83FA3A87EA75B9EABA (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float latency = SimulateLatency(channelId);
		int32_t L_0 = ___channelId2;
		float L_1 = LatencySimulation_SimulateLatency_m8319726056F88AC322252A950FE50A5E2509AF17(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// SimulateSend(connectionId, segment, channelId, latency, reliableServerToClient, unreliableServerToClient);
		int32_t L_2 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_3 = ___segment1;
		int32_t L_4 = ___channelId2;
		float L_5 = V_0;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_6 = __this->get_reliableServerToClient_23();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_7 = __this->get_unreliableServerToClient_25();
		LatencySimulation_SimulateSend_mC9B0186FBE4236FBE3058DE6CAB9DAFA169845C1(__this, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerStart_m36BE05D808ADFA668AAAE809E460CA9D9CBAAC34 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// wrap.OnServerConnected = OnServerConnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_1 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerConnected_10();
		NullCheck(L_0);
		L_0->set_OnServerConnected_10(L_1);
		// wrap.OnServerDataReceived = OnServerDataReceived;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_2 = __this->get_wrap_15();
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataReceived_11();
		NullCheck(L_2);
		L_2->set_OnServerDataReceived_11(L_3);
		// wrap.OnServerError = OnServerError;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_4 = __this->get_wrap_15();
		Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerError_13();
		NullCheck(L_4);
		L_4->set_OnServerError_13(L_5);
		// wrap.OnServerDisconnected = OnServerDisconnected;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_wrap_15();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_7 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_14();
		NullCheck(L_6);
		L_6->set_OnServerDisconnected_14(L_7);
		// wrap.ServerStart();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_8 = __this->get_wrap_15();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void Mirror.Transport::ServerStart() */, L_8);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerStop_m94F33D72D2EC51AF2CFAC68DC0912BE045692D93 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_ServerStop_m94F33D72D2EC51AF2CFAC68DC0912BE045692D93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrap.ServerStop();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(16 /* System.Void Mirror.Transport::ServerStop() */, L_0);
		// reliableServerToClient.Clear();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_1 = __this->get_reliableServerToClient_23();
		NullCheck(L_1);
		List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527(L_1, /*hidden argument*/List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_RuntimeMethod_var);
		// unreliableServerToClient.Clear();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_2 = __this->get_unreliableServerToClient_25();
		NullCheck(L_2);
		List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527(L_2, /*hidden argument*/List_1_Clear_m8B70C3B64F76DE8EA5D4FA30BDF0B143D457D527_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientEarlyUpdate_mDFDABBB2C379E1B993DA0BC99C7D86B4CCE91BD9 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientEarlyUpdate() => wrap.ClientEarlyUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(19 /* System.Void Mirror.Transport::ClientEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerEarlyUpdate_m8B0B246FE8D969185A58C339E218946D6206AB3F (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerEarlyUpdate() => wrap.ServerEarlyUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void Mirror.Transport::ServerEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientLateUpdate_mA7E5FE8D5FFB680DD09DF019FD2A9A16C184F34B (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_ClientLateUpdate_mA7E5FE8D5FFB680DD09DF019FD2A9A16C184F34B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		V_0 = 0;
		goto IL_0049;
	}

IL_0004:
	{
		// QueuedMessage message = reliableClientToServer[i];
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_0 = __this->get_reliableClientToServer_22();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_2 = List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_RuntimeMethod_var);
		V_1 = L_2;
		// if (message.time <= NetworkTime.localTime)
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_3 = V_1;
		double L_4 = L_3.get_time_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_5 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_0045;
		}
	}
	{
		// wrap.ClientSend(new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_wrap_15();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = L_7.get_bytes_1();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382((&L_9), L_8, /*hidden argument*/ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_RuntimeMethod_var);
		NullCheck(L_6);
		VirtActionInvoker2< ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_6, L_9, 0);
		// reliableClientToServer.RemoveAt(i);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_10 = __this->get_reliableClientToServer_22();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420(L_10, L_11, /*hidden argument*/List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_RuntimeMethod_var);
		// --i;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		int32_t L_14 = V_0;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_15 = __this->get_reliableClientToServer_22();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline(L_15, /*hidden argument*/List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		V_2 = 0;
		goto IL_00a0;
	}

IL_005b:
	{
		// QueuedMessage message = unreliableClientToServer[i];
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_17 = __this->get_unreliableClientToServer_24();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_19 = List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_RuntimeMethod_var);
		V_3 = L_19;
		// if (message.time <= NetworkTime.localTime)
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_20 = V_3;
		double L_21 = L_20.get_time_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_22 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		if ((!(((double)L_21) <= ((double)L_22))))
		{
			goto IL_009c;
		}
	}
	{
		// wrap.ClientSend(new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_23 = __this->get_wrap_15();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_24 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = L_24.get_bytes_1();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_26;
		memset((&L_26), 0, sizeof(L_26));
		ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382((&L_26), L_25, /*hidden argument*/ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_RuntimeMethod_var);
		NullCheck(L_23);
		VirtActionInvoker2< ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_23, L_26, 0);
		// unreliableClientToServer.RemoveAt(i);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_27 = __this->get_unreliableClientToServer_24();
		int32_t L_28 = V_2;
		NullCheck(L_27);
		List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420(L_27, L_28, /*hidden argument*/List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_RuntimeMethod_var);
		// --i;
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
	}

IL_009c:
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a0:
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		int32_t L_31 = V_2;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_32 = __this->get_unreliableClientToServer_24();
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline(L_32, /*hidden argument*/List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_005b;
		}
	}
	{
		// wrap.ClientLateUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_34 = __this->get_wrap_15();
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(21 /* System.Void Mirror.Transport::ClientLateUpdate() */, L_34);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerLateUpdate_m9D87B15A037CE87D22BC17A0A385D717CC831692 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_ServerLateUpdate_m9D87B15A037CE87D22BC17A0A385D717CC831692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		V_0 = 0;
		goto IL_004f;
	}

IL_0004:
	{
		// QueuedMessage message = reliableServerToClient[i];
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_0 = __this->get_reliableServerToClient_23();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_2 = List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_RuntimeMethod_var);
		V_1 = L_2;
		// if (message.time <= NetworkTime.localTime)
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_3 = V_1;
		double L_4 = L_3.get_time_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_5 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		// wrap.ServerSend(message.connectionId, new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_6 = __this->get_wrap_15();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_7 = V_1;
		int32_t L_8 = L_7.get_connectionId_0();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_9 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9.get_bytes_1();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382((&L_11), L_10, /*hidden argument*/ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_RuntimeMethod_var);
		NullCheck(L_6);
		VirtActionInvoker3< int32_t, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_6, L_8, L_11, 0);
		// reliableServerToClient.RemoveAt(i);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_12 = __this->get_reliableServerToClient_23();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420(L_12, L_13, /*hidden argument*/List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_RuntimeMethod_var);
		// --i;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_004b:
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		int32_t L_16 = V_0;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_17 = __this->get_reliableServerToClient_23();
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline(L_17, /*hidden argument*/List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		V_2 = 0;
		goto IL_00ac;
	}

IL_0061:
	{
		// QueuedMessage message = unreliableServerToClient[i];
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_19 = __this->get_unreliableServerToClient_25();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_21 = List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_RuntimeMethod_var);
		V_3 = L_21;
		// if (message.time <= NetworkTime.localTime)
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_22 = V_3;
		double L_23 = L_22.get_time_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_24 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		if ((!(((double)L_23) <= ((double)L_24))))
		{
			goto IL_00a8;
		}
	}
	{
		// wrap.ServerSend(message.connectionId, new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_25 = __this->get_wrap_15();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_26 = V_3;
		int32_t L_27 = L_26.get_connectionId_0();
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_28 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = L_28.get_bytes_1();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_30;
		memset((&L_30), 0, sizeof(L_30));
		ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382((&L_30), L_29, /*hidden argument*/ArraySegment_1__ctor_mC699D21C137279D4D9A501143A898CCB0971D382_RuntimeMethod_var);
		NullCheck(L_25);
		VirtActionInvoker3< int32_t, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA , int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_25, L_27, L_30, 0);
		// unreliableServerToClient.RemoveAt(i);
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_31 = __this->get_unreliableServerToClient_25();
		int32_t L_32 = V_2;
		NullCheck(L_31);
		List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420(L_31, L_32, /*hidden argument*/List_1_RemoveAt_m0B3EA22DD1206BDA964C55E972D0AFB3DFC8B420_RuntimeMethod_var);
		// --i;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
	}

IL_00a8:
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ac:
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		int32_t L_35 = V_2;
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_36 = __this->get_unreliableServerToClient_25();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_inline(L_36, /*hidden argument*/List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0061;
		}
	}
	{
		// wrap.ServerLateUpdate();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_38 = __this->get_wrap_15();
		NullCheck(L_38);
		VirtActionInvoker0::Invoke(22 /* System.Void Mirror.Transport::ServerLateUpdate() */, L_38);
		// }
		return;
	}
}
// System.Int32 Mirror.LatencySimulation::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LatencySimulation_GetBatchThreshold_m7B7A0809F5C9BAAA028114E4CAA8038532F9B75F (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetBatchThreshold(int channelId) => wrap.GetBatchThreshold(channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(18 /* System.Int32 Mirror.Transport::GetBatchThreshold(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Mirror.LatencySimulation::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LatencySimulation_GetMaxPacketSize_mB69B519398E2636F5FE4CA5BECDA8BAB1DD5E9FF (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetMaxPacketSize(int channelId = 0) => wrap.GetMaxPacketSize(channelId);
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.LatencySimulation::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_Shutdown_m816F65EF650A0732F48ABE6EB0479AE585EAB477 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	{
		// public override void Shutdown() => wrap.Shutdown();
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, L_0);
		return;
	}
}
// System.String Mirror.LatencySimulation::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LatencySimulation_ToString_m9F33E9C285031ED5CE7BE18E9A8098D14F358088 (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation_ToString_m9F33E9C285031ED5CE7BE18E9A8098D14F358088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{nameof(LatencySimulation)} {wrap}";
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = __this->get_wrap_15();
		String_t* L_1 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralB245F58149930DBC70CF0AA7D270B51BF8AD5B2F, _stringLiteralF265F1B18DC494BD58FA8B84D45E0F60C3F01FDC, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation__ctor_mFBCFAECA2B4F70139DD73F7FB0A9B0E32289229B (LatencySimulation_tAD5D54C4F6455D93BFAD5BFCAC595D5C7A8D7210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatencySimulation__ctor_mFBCFAECA2B4F70139DD73F7FB0A9B0E32289229B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0, 1)] public float jitter = 0.02f;
		__this->set_jitter_16((0.02f));
		// public float jitterSpeed = 1;
		__this->set_jitterSpeed_17((1.0f));
		// [Range(0, 10000)] public float reliableLatency = 100;
		__this->set_reliableLatency_18((100.0f));
		// [Range(0, 100)] public float unreliableLoss = 2;
		__this->set_unreliableLoss_19((2.0f));
		// [Range(0, 10000)] public float unreliableLatency = 100;
		__this->set_unreliableLatency_20((100.0f));
		// [Range(0, 100)] public float unreliableScramble = 2;
		__this->set_unreliableScramble_21((2.0f));
		// List<QueuedMessage> reliableClientToServer = new List<QueuedMessage>();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_0 = (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *)il2cpp_codegen_object_new(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_il2cpp_TypeInfo_var);
		List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155(L_0, /*hidden argument*/List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_RuntimeMethod_var);
		__this->set_reliableClientToServer_22(L_0);
		// List<QueuedMessage> reliableServerToClient = new List<QueuedMessage>();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_1 = (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *)il2cpp_codegen_object_new(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_il2cpp_TypeInfo_var);
		List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155(L_1, /*hidden argument*/List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_RuntimeMethod_var);
		__this->set_reliableServerToClient_23(L_1);
		// List<QueuedMessage> unreliableClientToServer = new List<QueuedMessage>();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_2 = (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *)il2cpp_codegen_object_new(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_il2cpp_TypeInfo_var);
		List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155(L_2, /*hidden argument*/List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_RuntimeMethod_var);
		__this->set_unreliableClientToServer_24(L_2);
		// List<QueuedMessage> unreliableServerToClient = new List<QueuedMessage>();
		List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * L_3 = (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 *)il2cpp_codegen_object_new(List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823_il2cpp_TypeInfo_var);
		List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155(L_3, /*hidden argument*/List_1__ctor_mB2B6D7E418B247E85BD7A1F550D4756225397155_RuntimeMethod_var);
		__this->set_unreliableServerToClient_25(L_3);
		// System.Random random = new System.Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_4 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_4, /*hidden argument*/NULL);
		__this->set_random_26(L_4);
		Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_pinvoke(const QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783& unmarshaled, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_pinvoke& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___bytes_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_bytes_1());
	marshaled.___time_2 = unmarshaled.get_time_2();
}
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_pinvoke_back(const QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_pinvoke& marshaled, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	unmarshaled.set_bytes_1((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___bytes_1));
	double unmarshaled_time_temp_2 = 0.0;
	unmarshaled_time_temp_2 = marshaled.___time_2;
	unmarshaled.set_time_2(unmarshaled_time_temp_2);
}
// Conversion method for clean up from marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_pinvoke_cleanup(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___bytes_1);
	marshaled.___bytes_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_com(const QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783& unmarshaled, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_com& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___bytes_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_bytes_1());
	marshaled.___time_2 = unmarshaled.get_time_2();
}
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_com_back(const QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_com& marshaled, QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	unmarshaled.set_bytes_1((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___bytes_1));
	double unmarshaled_time_temp_2 = 0.0;
	unmarshaled_time_temp_2 = marshaled.___time_2;
	unmarshaled.set_time_2(unmarshaled_time_temp_2);
}
// Conversion method for clean up from marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshal_com_cleanup(QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___bytes_1);
	marshaled.___bytes_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.TelepathyTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Awake_m772E8D34AB84D62A8A1418A554EE7FFC6DED21D0 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_Awake_m772E8D34AB84D62A8A1418A554EE7FFC6DED21D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Telepathy.Log.Info = Debug.Log;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_0, NULL, (intptr_t)((intptr_t)Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_il2cpp_TypeInfo_var);
		((Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields*)il2cpp_codegen_static_fields_for(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_il2cpp_TypeInfo_var))->set_Info_0(L_0);
		// Telepathy.Log.Warning = Debug.LogWarning;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, NULL, (intptr_t)((intptr_t)Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields*)il2cpp_codegen_static_fields_for(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_il2cpp_TypeInfo_var))->set_Warning_1(L_1);
		// Telepathy.Log.Error = Debug.LogError;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_2, NULL, (intptr_t)((intptr_t)Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Log_t49595309D8499C7E74BBE55B6003F217E8561F73_StaticFields*)il2cpp_codegen_static_fields_for(Log_t49595309D8499C7E74BBE55B6003F217E8561F73_il2cpp_TypeInfo_var))->set_Error_2(L_2);
		// enabledCheck = () => enabled;
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_3 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_3, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CAwakeU3Eb__16_0_m18D181B2585C0D2079918C52C029C9D899E1324B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		__this->set_enabledCheck_30(L_3);
		// Debug.Log("TelepathyTransport initialized!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral47316692AA00E6249A8B62B17F0571A6C6B0E787, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_Available_m09124CD57778936FABE639A6AE2C50EEB52FDE5D (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// return Application.platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mirror.TelepathyTransport::CreateClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client = new Telepathy.Client(clientMaxMessageSize);
		int32_t L_0 = __this->get_clientMaxMessageSize_24();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = (Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A *)il2cpp_codegen_object_new(Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A_il2cpp_TypeInfo_var);
		Client__ctor_m7CAB0D25479FF61B2727DEB917B8DE0D915471EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_client_28(L_1);
		// client.OnConnected = () => OnClientConnected.Invoke();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_2 = __this->get_client_28();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_3, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CCreateClientU3Eb__18_0_m2F5AB874557CDF1886808925B36845DED225670E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_OnConnected_4(L_3);
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.Reliable);
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_4 = __this->get_client_28();
		Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 * L_5 = (Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362 *)il2cpp_codegen_object_new(Action_1_t9527E54DC6850FB5DA677A08928A502476BBB362_il2cpp_TypeInfo_var);
		Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B(L_5, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CCreateClientU3Eb__18_1_m14F567F424983902AECEF98049AF9777F3FBE327_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m084B9CDB8939D528E9EBF68981DF6103F226F10B_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_OnData_5(L_5);
		// client.OnDisconnected = () => OnClientDisconnected?.Invoke();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_6 = __this->get_client_28();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_7, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CCreateClientU3Eb__18_2_mC0C306B321C577AADAF9BA25DA0680A366600963_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_OnDisconnected_6(L_7);
		// client.NoDelay = NoDelay;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_8 = __this->get_client_28();
		bool L_9 = __this->get_NoDelay_17();
		NullCheck(L_8);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_8)->set_NoDelay_0(L_9);
		// client.SendTimeout = SendTimeout;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_10 = __this->get_client_28();
		int32_t L_11 = __this->get_SendTimeout_18();
		NullCheck(L_10);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_10)->set_SendTimeout_2(L_11);
		// client.ReceiveTimeout = ReceiveTimeout;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_12 = __this->get_client_28();
		int32_t L_13 = __this->get_ReceiveTimeout_19();
		NullCheck(L_12);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_12)->set_ReceiveTimeout_3(L_13);
		// client.SendQueueLimit = clientSendQueueLimit;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_14 = __this->get_client_28();
		int32_t L_15 = __this->get_clientSendQueueLimit_26();
		NullCheck(L_14);
		L_14->set_SendQueueLimit_7(L_15);
		// client.ReceiveQueueLimit = clientReceiveQueueLimit;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_16 = __this->get_client_28();
		int32_t L_17 = __this->get_clientReceiveQueueLimit_27();
		NullCheck(L_16);
		L_16->set_ReceiveQueueLimit_8(L_17);
		// }
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ClientConnected_m422A20FF39BE36E6435BB862C34B9657A87929A7 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => client != null && client.Connected;
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_0 = __this->get_client_28();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = __this->get_client_28();
		NullCheck(L_1);
		bool L_2 = Client_get_Connected_m93BE4684C1C414B153571AEB8DDCC10842F3170A(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_mADFFCB785BDEB310D4359D611EED651E170E79C8 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// CreateClient();
		TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1(__this, /*hidden argument*/NULL);
		// client.Connect(address, port);
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_0 = __this->get_client_28();
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->get_port_16();
		NullCheck(L_0);
		Client_Connect_m74B9ABDE94E585341560A558BD7ACA4FD029E509(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_mF1D8C832D99014ECF6F5D3CDA43FEC5BA68BF142 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ClientConnect_mF1D8C832D99014ECF6F5D3CDA43FEC5BA68BF142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// CreateClient();
		TelepathyTransport_CreateClient_m4E6D661721194639EBB9D30165BC5709ABAB62D1(__this, /*hidden argument*/NULL);
		// if (uri.Scheme != Scheme)
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_1, _stringLiteralB189B41506D3689DFDDDC8BF72A2834165F0D9F1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException($"Invalid url {uri}, use {Scheme}:
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = ___uri0;
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral86B36252304BCCEB4316C26A7D9CB17915E78998, L_3, _stringLiteralB189B41506D3689DFDDDC8BF72A2834165F0D9F1, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_5, L_4, _stringLiteral2C6D680F5C570BA21D22697CD028F230E9F4CD56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, TelepathyTransport_ClientConnect_mF1D8C832D99014ECF6F5D3CDA43FEC5BA68BF142_RuntimeMethod_var);
	}

IL_0033:
	{
		// int serverPort = uri.IsDefaultPort ? port : uri.Port;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_6 = ___uri0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9 = Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C(L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		goto IL_0049;
	}

IL_0043:
	{
		uint16_t L_10 = __this->get_port_16();
		G_B5_0 = ((int32_t)(L_10));
	}

IL_0049:
	{
		V_0 = G_B5_0;
		// client.Connect(uri.Host, serverPort);
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_11 = __this->get_client_28();
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13 = Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		NullCheck(L_11);
		Client_Connect_m74B9ABDE94E585341560A558BD7ACA4FD029E509(L_11, L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientSend_m1D6240C6A6570F6340DEAFDD45695BA82FE22261 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, int32_t ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ClientSend_m1D6240C6A6570F6340DEAFDD45695BA82FE22261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B2_0 = NULL;
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B1_0 = NULL;
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * G_B5_0 = NULL;
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * G_B4_0 = NULL;
	{
		// client?.Send(segment);
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_0 = __this->get_client_28();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = L_0;
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
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___segment0;
		NullCheck(G_B2_0);
		Client_Send_m4DC740FABD8046FA859BBF4D4FABADF4F4EBBC57(G_B2_0, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// OnClientDataSent?.Invoke(segment, Channels.Reliable);
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_3 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataSent_7();
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_5 = ___segment0;
		NullCheck(G_B5_0);
		Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A(G_B5_0, L_5, 0, /*hidden argument*/Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientDisconnect_mF07B47C7F6ADD9ADA0713A5FCEE123745B7CA014 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B2_0 = NULL;
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B1_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B5_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B4_0 = NULL;
	{
		// client?.Disconnect();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_0 = __this->get_client_28();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Client_Disconnect_m3B6CA6FCAE1B7E39AF960F624046244CE1AA2082(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// client = null;
		__this->set_client_28((Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A *)NULL);
		// OnClientDisconnected?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		NullCheck(G_B5_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientEarlyUpdate_mE3B699972DD54256096BB7C3B692A0054D6320A1 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B4_0 = NULL;
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B3_0 = NULL;
	{
		// if (!enabled) return;
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// client?.Tick(clientMaxReceivesPerTick, enabledCheck);
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = __this->get_client_28();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_3 = __this->get_clientMaxReceivesPerTick_25();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = __this->get_enabledCheck_30();
		NullCheck(G_B4_0);
		Client_Tick_mDF4F4100A571EDEA15414FCE8DF5AA13D4904F56(G_B4_0, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Uri Mirror.TelepathyTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * TelepathyTransport_ServerUri_m26D8F57BED358EC430E68632F4913C219B502954 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ServerUri_m26D8F57BED358EC430E68632F4913C219B502954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UriBuilder builder = new UriBuilder();
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_0 = (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 *)il2cpp_codegen_object_new(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905_il2cpp_TypeInfo_var);
		UriBuilder__ctor_mFC8729DAB4291B5B6500207C85DCB3985B46BB52(L_0, /*hidden argument*/NULL);
		// builder.Scheme = Scheme;
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_1 = L_0;
		NullCheck(L_1);
		UriBuilder_set_Scheme_mD20C10C2D43C0C2C96D9098BE4331D46FCC45921(L_1, _stringLiteralB189B41506D3689DFDDDC8BF72A2834165F0D9F1, /*hidden argument*/NULL);
		// builder.Host = Dns.GetHostName();
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_2 = L_1;
		String_t* L_3 = Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2(/*hidden argument*/NULL);
		NullCheck(L_2);
		UriBuilder_set_Host_m7213BE98F62DE6A099EA8EEFF479949C5F1EA680(L_2, L_3, /*hidden argument*/NULL);
		// builder.Port = port;
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_4 = L_2;
		uint16_t L_5 = __this->get_port_16();
		NullCheck(L_4);
		UriBuilder_set_Port_m14DBA6E597BED983B73F4AD7F1215C6E474DB6F3(L_4, L_5, /*hidden argument*/NULL);
		// return builder.Uri;
		NullCheck(L_4);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_6 = UriBuilder_get_Uri_mDCABA4CD1D05D4B9C4CBA063BC7CA94EE6CCC631(L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerActive_m38ADDB011DE60006900A48B60FD13372BF22F8B4 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => server != null && server.Active;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = __this->get_server_29();
		NullCheck(L_1);
		bool L_2 = Server_get_Active_m3E4A431E22B0A7332DF433F9FAB891B8BFEC2660(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStart_m4BE9F7B556F6801B5CF8E15B287E7B34EAD863EB (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ServerStart_m4BE9F7B556F6801B5CF8E15B287E7B34EAD863EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server = new Telepathy.Server(serverMaxMessageSize);
		int32_t L_0 = __this->get_serverMaxMessageSize_20();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = (Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE *)il2cpp_codegen_object_new(Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE_il2cpp_TypeInfo_var);
		Server__ctor_mFF001B038803986673195A40AF424E33DF480E5C(L_1, L_0, /*hidden argument*/NULL);
		__this->set_server_29(L_1);
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_2 = __this->get_server_29();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_3 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_3, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CServerStartU3Eb__27_0_m0FFD77A93EE57F5B76D7E78BC05EF7FE15EC5A9C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_OnConnected_4(L_3);
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.Reliable);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_4 = __this->get_server_29();
		Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 * L_5 = (Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10 *)il2cpp_codegen_object_new(Action_2_t373A19F72E19058B396DBE160F4FDB292CD9DC10_il2cpp_TypeInfo_var);
		Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917(L_5, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CServerStartU3Eb__27_1_m38199210EA551C9C8DABE8316F42141B60B25E76_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mBC084FE7B4174509AFF7F03F987AD0074E0FC917_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_OnData_5(L_5);
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_6 = __this->get_server_29();
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_7 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_7, __this, (intptr_t)((intptr_t)TelepathyTransport_U3CServerStartU3Eb__27_2_m4C97BBF4CA098D56672DD747E4BE592D0B7BB9EC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_OnDisconnected_6(L_7);
		// server.NoDelay = NoDelay;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_8 = __this->get_server_29();
		bool L_9 = __this->get_NoDelay_17();
		NullCheck(L_8);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_8)->set_NoDelay_0(L_9);
		// server.SendTimeout = SendTimeout;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_10 = __this->get_server_29();
		int32_t L_11 = __this->get_SendTimeout_18();
		NullCheck(L_10);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_10)->set_SendTimeout_2(L_11);
		// server.ReceiveTimeout = ReceiveTimeout;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_12 = __this->get_server_29();
		int32_t L_13 = __this->get_ReceiveTimeout_19();
		NullCheck(L_12);
		((Common_tAB1BB3E5368B672D5C6578DE08219C81BC5272EB *)L_12)->set_ReceiveTimeout_3(L_13);
		// server.SendQueueLimit = serverSendQueueLimitPerConnection;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_14 = __this->get_server_29();
		int32_t L_15 = __this->get_serverSendQueueLimitPerConnection_22();
		NullCheck(L_14);
		L_14->set_SendQueueLimit_9(L_15);
		// server.ReceiveQueueLimit = serverReceiveQueueLimitPerConnection;
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_16 = __this->get_server_29();
		int32_t L_17 = __this->get_serverReceiveQueueLimitPerConnection_23();
		NullCheck(L_16);
		L_16->set_ReceiveQueueLimit_10(L_17);
		// server.Start(port);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_18 = __this->get_server_29();
		uint16_t L_19 = __this->get_port_16();
		NullCheck(L_18);
		Server_Start_m8D09E044F74928D69428486A8BF57F9E70A9F7BD(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerSend_m60B409DA22923FC44486D0C2712F66F3EA79CB99 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ServerSend_m60B409DA22923FC44486D0C2712F66F3EA79CB99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B2_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B1_0 = NULL;
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * G_B5_0 = NULL;
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * G_B4_0 = NULL;
	{
		// server?.Send(connectionId, segment);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		int32_t L_2 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_3 = ___segment1;
		NullCheck(G_B2_0);
		Server_Send_mE7FD50542929A2389A04CD3945469E27EABC2213(G_B2_0, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// OnServerDataSent?.Invoke(connectionId, segment, Channels.Reliable);
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_4 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataSent_12();
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_6 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_7 = ___segment1;
		NullCheck(G_B5_0);
		Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127(G_B5_0, L_6, L_7, 0, /*hidden argument*/Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerDisconnect_m6C61F64E23733362652D165BFEAB72049F831663 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B2_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B1_0 = NULL;
	{
		// public override void ServerDisconnect(int connectionId) => server?.Disconnect(connectionId);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___connectionId0;
		NullCheck(G_B2_0);
		Server_Disconnect_mA71ED71953FCF8B922D261DABA0573DA7E16472F(G_B2_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mirror.TelepathyTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ServerGetClientAddress_m819B8444BC9A37B81C0763C35B64F8E5D1BFA029 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ServerGetClientAddress_m819B8444BC9A37B81C0763C35B64F8E5D1BFA029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B2_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return server?.GetClientAddress(connectionId);
			Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
			Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = L_0;
			G_B1_0 = L_1;
			if (L_1)
			{
				G_B2_0 = L_1;
				goto IL_000d;
			}
		}

IL_0009:
		{
			G_B3_0 = ((String_t*)(NULL));
			goto IL_0013;
		}

IL_000d:
		{
			int32_t L_2 = ___connectionId0;
			NullCheck(G_B2_0);
			String_t* L_3 = Server_GetClientAddress_m4393BA3C631C267102CF6FD13039BA74D37FC291(G_B2_0, L_2, /*hidden argument*/NULL);
			G_B3_0 = L_3;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0016;
		throw e;
	}

CATCH_0016:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		// return "unknown";
		V_0 = _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStop_m9DD353FB7C1163396D74AF45C715B1CDBA454BDD (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B2_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B1_0 = NULL;
	{
		// server?.Stop();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Server_Stop_m63B9CDED2E77F82E91AFB19BB6E862A4558395D0(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// server = null;
		__this->set_server_29((Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE *)NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerEarlyUpdate_m19BB4F8BBBC0C31D555955F7A997D560710DF084 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B4_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B3_0 = NULL;
	{
		// if (!enabled) return;
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// server?.Tick(serverMaxReceivesPerTick, enabledCheck);
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = __this->get_server_29();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_3 = __this->get_serverMaxReceivesPerTick_21();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = __this->get_enabledCheck_30();
		NullCheck(G_B4_0);
		Server_Tick_m8690C1FFEE57B89BAF57DD789B3CBACEE5A2A25C(G_B4_0, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Shutdown_mBBE5E163F7E031BDD99CE2DF20FB47F4F2408EB1 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_Shutdown_mBBE5E163F7E031BDD99CE2DF20FB47F4F2408EB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B2_0 = NULL;
	Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * G_B1_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B5_0 = NULL;
	Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * G_B4_0 = NULL;
	{
		// Debug.Log("TelepathyTransport Shutdown()");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6D43417A541E53961F3CDDB47B5C0ABAF518DBD2, /*hidden argument*/NULL);
		// client?.Disconnect();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_0 = __this->get_client_28();
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		goto IL_001b;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		Client_Disconnect_m3B6CA6FCAE1B7E39AF960F624046244CE1AA2082(G_B2_0, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// client = null;
		__this->set_client_28((Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A *)NULL);
		// server?.Stop();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_2 = __this->get_server_29();
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002e;
		}
	}
	{
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck(G_B5_0);
		Server_Stop_m63B9CDED2E77F82E91AFB19BB6E862A4558395D0(G_B5_0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// server = null;
		__this->set_server_29((Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE *)NULL);
		// }
		return;
	}
}
// System.Int32 Mirror.TelepathyTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TelepathyTransport_GetMaxPacketSize_m7720AD4C7F10393EF1E1FA0A30D73DE187C12085 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// return serverMaxMessageSize;
		int32_t L_0 = __this->get_serverMaxMessageSize_20();
		return L_0;
	}
}
// System.String Mirror.TelepathyTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ToString_mF3A0DD1D191E2D4D5797E3228B203333A6DC9BCC (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_ToString_mF3A0DD1D191E2D4D5797E3228B203333A6DC9BCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (server != null && server.Active && server.listener != null)
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_0 = __this->get_server_29();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_1 = __this->get_server_29();
		NullCheck(L_1);
		bool L_2 = Server_get_Active_m3E4A431E22B0A7332DF433F9FAB891B8BFEC2660(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Server_tA1C63181BD424361B13A0CA0B9B92F810A589ADE * L_3 = __this->get_server_29();
		NullCheck(L_3);
		TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_4 = L_3->get_listener_7();
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// return $"Telepathy Server port: {port}";
		uint16_t L_5 = __this->get_port_16();
		uint16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralA7A1C866C5D2F3E55B19C0BDF4C52BF34D873C41, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0038:
	{
		// else if (client != null && (client.Connecting || client.Connected))
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_9 = __this->get_client_28();
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_10 = __this->get_client_28();
		NullCheck(L_10);
		bool L_11 = Client_get_Connecting_m52EC05B18F23FAD4C86E8A468867EBEE26F3B7F0(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		Client_tFAA5267A0AE747A67CCE85245F71FCD68308B09A * L_12 = __this->get_client_28();
		NullCheck(L_12);
		bool L_13 = Client_get_Connected_m93BE4684C1C414B153571AEB8DDCC10842F3170A(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}

IL_005a:
	{
		// return $"Telepathy Client port: {port}";
		uint16_t L_14 = __this->get_port_16();
		uint16_t L_15 = L_14;
		RuntimeObject * L_16 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral69AF9ECCB14F987B78C5370CF2FC780803898E1F, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0070:
	{
		// return "Telepathy (inactive/disconnected)";
		return _stringLiteral737B4762E8BFE4D539AD3DC9D5353A05908A7018;
	}
}
// System.Void Mirror.TelepathyTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport__ctor_mDA038352FC937EEC42DC75F34BE2AD84990280B3 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// public ushort port = 7777;
		__this->set_port_16((uint16_t)((int32_t)7777));
		// public bool NoDelay = true;
		__this->set_NoDelay_17((bool)1);
		// public int SendTimeout = 5000;
		__this->set_SendTimeout_18(((int32_t)5000));
		// public int ReceiveTimeout = 30000;
		__this->set_ReceiveTimeout_19(((int32_t)30000));
		// public int serverMaxMessageSize = 16 * 1024;
		__this->set_serverMaxMessageSize_20(((int32_t)16384));
		// public int serverMaxReceivesPerTick = 10000;
		__this->set_serverMaxReceivesPerTick_21(((int32_t)10000));
		// public int serverSendQueueLimitPerConnection = 10000;
		__this->set_serverSendQueueLimitPerConnection_22(((int32_t)10000));
		// public int serverReceiveQueueLimitPerConnection = 10000;
		__this->set_serverReceiveQueueLimitPerConnection_23(((int32_t)10000));
		// public int clientMaxMessageSize = 16 * 1024;
		__this->set_clientMaxMessageSize_24(((int32_t)16384));
		// public int clientMaxReceivesPerTick = 1000;
		__this->set_clientMaxReceivesPerTick_25(((int32_t)1000));
		// public int clientSendQueueLimit = 10000;
		__this->set_clientSendQueueLimit_26(((int32_t)10000));
		// public int clientReceiveQueueLimit = 10000;
		__this->set_clientReceiveQueueLimit_27(((int32_t)10000));
		Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::<Awake>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_U3CAwakeU3Eb__16_0_m18D181B2585C0D2079918C52C029C9D899E1324B (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// enabledCheck = () => enabled;
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_0_m2F5AB874557CDF1886808925B36845DED225670E (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	{
		// client.OnConnected = () => OnClientConnected.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_1(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_1_m14F567F424983902AECEF98049AF9777F3FBE327 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_U3CCreateClientU3Eb__18_1_m14F567F424983902AECEF98049AF9777F3FBE327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.Reliable);
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_1 = ___segment0;
		NullCheck(L_0);
		Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A(L_0, L_1, 0, /*hidden argument*/Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_2_mC0C306B321C577AADAF9BA25DA0680A366600963 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// client.OnDisconnected = () => OnClientDisconnected?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_0_m0FFD77A93EE57F5B76D7E78BC05EF7FE15EC5A9C (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_U3CServerStartU3Eb__27_0_m0FFD77A93EE57F5B76D7E78BC05EF7FE15EC5A9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerConnected_10();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500(L_0, L_1, /*hidden argument*/Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_1(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_1_m38199210EA551C9C8DABE8316F42141B60B25E76 (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_U3CServerStartU3Eb__27_1_m38199210EA551C9C8DABE8316F42141B60B25E76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.Reliable);
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataReceived_11();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___segment1;
		NullCheck(L_0);
		Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127(L_0, L_1, L_2, 0, /*hidden argument*/Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_2_m4C97BBF4CA098D56672DD747E4BE592D0B7BB9EC (TelepathyTransport_t0AE182F6D8B42734C67CD1CF41FCC6B235159B3B * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TelepathyTransport_U3CServerStartU3Eb__27_2_m4C97BBF4CA098D56672DD747E4BE592D0B7BB9EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_14();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500(L_0, L_1, /*hidden argument*/Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var);
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
// System.Int32 kcp2k.KcpTransport::FromKcpChannel(kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_FromKcpChannel_mE654FCC36E0125AF8313B95E73CCE8276B0FDAEA (uint8_t ___channel0, const RuntimeMethod* method)
{
	{
		// channel == KcpChannel.Reliable ? Channels.Reliable : Channels.Unreliable;
		uint8_t L_0 = ___channel0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		return 0;
	}
}
// kcp2k.KcpChannel kcp2k.KcpTransport::ToKcpChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToKcpChannel_mCE06CEDA399AB261EC956D5B3D8F3C455BAA2600 (int32_t ___channel0, const RuntimeMethod* method)
{
	{
		// channel == Channels.Reliable ? KcpChannel.Reliable : KcpChannel.Unreliable;
		int32_t L_0 = ___channel0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint8_t)(2);
	}

IL_0005:
	{
		return (uint8_t)(1);
	}
}
// Mirror.TransportError kcp2k.KcpTransport::ToTransportError(kcp2k.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477 (uint8_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch(error)
		uint8_t L_0 = ___error0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_0024:
	{
		// case ErrorCode.DnsResolve: return TransportError.DnsResolve;
		return (uint8_t)(0);
	}

IL_0026:
	{
		// case ErrorCode.Timeout: return TransportError.Timeout;
		return (uint8_t)(2);
	}

IL_0028:
	{
		// case ErrorCode.Congestion: return TransportError.Congestion;
		return (uint8_t)(3);
	}

IL_002a:
	{
		// case ErrorCode.InvalidReceive: return TransportError.InvalidReceive;
		return (uint8_t)(4);
	}

IL_002c:
	{
		// case ErrorCode.InvalidSend: return TransportError.InvalidSend;
		return (uint8_t)(5);
	}

IL_002e:
	{
		// case ErrorCode.ConnectionClosed: return TransportError.ConnectionClosed;
		return (uint8_t)(6);
	}

IL_0030:
	{
		// case ErrorCode.Unexpected: return TransportError.Unexpected;
		return (uint8_t)(7);
	}

IL_0032:
	{
		// default: throw new InvalidCastException($"KCP: missing error translation for {error}");
		uint8_t L_1 = ___error0;
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ErrorCode_t5B840E2B6C2811864B5995C8B3351A81FB8BB2E8_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF68C30AAA62FA05070383ACD57B2E8B6BE965F6F, L_3, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_5 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477_RuntimeMethod_var);
	}
}
// System.Void kcp2k.KcpTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_Awake_m14BDC6063843B47766694E233C5EE600D815E55E (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_Awake_m14BDC6063843B47766694E233C5EE600D815E55E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B4_0 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B3_0 = NULL;
	{
		// if (debugLog)
		bool L_0 = __this->get_debugLog_32();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Log.Info = Debug.Log;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, NULL, (intptr_t)((intptr_t)Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var);
		((Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields*)il2cpp_codegen_static_fields_for(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var))->set_Info_0(L_1);
		goto IL_003f;
	}

IL_001b:
	{
		// Log.Info = _ => {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__23_0_1();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_4 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_5 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__23_0_mCB5F46BD5A11BCB9D6AAB46644D8FE23ED868C90_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_6 = L_5;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__23_0_1(L_6);
		G_B4_0 = L_6;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var);
		((Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields*)il2cpp_codegen_static_fields_for(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var))->set_Info_0(G_B4_0);
	}

IL_003f:
	{
		// Log.Warning = Debug.LogWarning;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_7 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_7, NULL, (intptr_t)((intptr_t)Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var);
		((Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields*)il2cpp_codegen_static_fields_for(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var))->set_Warning_1(L_7);
		// Log.Error = Debug.LogError;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_8 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_8, NULL, (intptr_t)((intptr_t)Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		((Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_StaticFields*)il2cpp_codegen_static_fields_for(Log_t38DA77FBED491F67C61973E0BBFBE4FCF92E21CB_il2cpp_TypeInfo_var))->set_Error_2(L_8);
		// config = new KcpConfig(DualMode, MaximizeSocketBuffers, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmit);
		bool L_9 = __this->get_DualMode_17();
		bool L_10 = __this->get_MaximizeSocketBuffers_26();
		bool L_11 = __this->get_NoDelay_18();
		uint32_t L_12 = __this->get_Interval_19();
		int32_t L_13 = __this->get_FastResend_21();
		bool L_14 = __this->get_CongestionWindow_22();
		uint32_t L_15 = __this->get_SendWindowSize_23();
		uint32_t L_16 = __this->get_ReceiveWindowSize_24();
		int32_t L_17 = __this->get_Timeout_20();
		uint32_t L_18 = __this->get_MaxRetransmit_25();
		KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * L_19 = (KcpConfig_tE783A348C689A35A776708156446D0B03F863803 *)il2cpp_codegen_object_new(KcpConfig_tE783A348C689A35A776708156446D0B03F863803_il2cpp_TypeInfo_var);
		KcpConfig__ctor_m18BE7C053400E2C5953CD7778981F18F820A3A59(L_19, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		__this->set_config_29(L_19);
		// client = new KcpClient(
		//     () => OnClientConnected.Invoke(),
		//     (message, channel) => OnClientDataReceived.Invoke(message, FromKcpChannel(channel)),
		//     () => OnClientDisconnected.Invoke(),
		//     (error, reason) => OnClientError.Invoke(ToTransportError(error), reason)
		// );
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_20 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_20, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_1_mF5329E294A1AD1451758FBFF6E5858817D61D64C_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 * L_21 = (Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985 *)il2cpp_codegen_object_new(Action_2_t362896E992E52B3D0C4D07E2C91F6E3D72ACF985_il2cpp_TypeInfo_var);
		Action_2__ctor_mF361E4D0BC01AD82D94C030F0630BFF125A14775(L_21, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_2_m71B394DC17E55DDB8D79C871E69A5881FED32131_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF361E4D0BC01AD82D94C030F0630BFF125A14775_RuntimeMethod_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_22 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_22, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_3_m2415761EB1EA930DFFB4A5EF050603A07C48B778_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 * L_23 = (Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6 *)il2cpp_codegen_object_new(Action_2_t57D708BC810CB50EB2F322E06ED42CE12517D3E6_il2cpp_TypeInfo_var);
		Action_2__ctor_mBFE534FECF76381E5FF98BFE7E4D342B8BFCDEE5(L_23, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_4_m46CB28A712414DA35A478A6B806E696DABE800CC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mBFE534FECF76381E5FF98BFE7E4D342B8BFCDEE5_RuntimeMethod_var);
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_24 = (KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 *)il2cpp_codegen_object_new(KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109_il2cpp_TypeInfo_var);
		KcpClient__ctor_mD13843CC781197DA0BA995C924C6E6C328414B7F(L_24, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->set_client_31(L_24);
		// server = new KcpServer(
		//           (connectionId) => OnServerConnected.Invoke(connectionId),
		//           (connectionId, message, channel) => OnServerDataReceived.Invoke(connectionId, message, FromKcpChannel(channel)),
		//           (connectionId) => OnServerDisconnected.Invoke(connectionId),
		//           (connectionId, error, reason) => OnServerError.Invoke(connectionId, ToTransportError(error), reason),
		//           config
		// );
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_25 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_25, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_5_m6941A645DDBB9D2DD6EB13554C9D9E7664EA3A46_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 * L_26 = (Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874 *)il2cpp_codegen_object_new(Action_3_t42AB2A639891B2EF81D0CBC8573B64E8238DB874_il2cpp_TypeInfo_var);
		Action_3__ctor_mBB75D2B20CBD3978EE7BEF45640D4A9692C45EBE(L_26, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_6_m0389A0C99F78F3FDD5840BE656820A34C3AF496D_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mBB75D2B20CBD3978EE7BEF45640D4A9692C45EBE_RuntimeMethod_var);
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_27 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_27, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_7_m0525DD9A812FC393BA6CDA4EA685817912685BD1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 * L_28 = (Action_3_t7599E9710D626304E2296EBB31822273361CD8F9 *)il2cpp_codegen_object_new(Action_3_t7599E9710D626304E2296EBB31822273361CD8F9_il2cpp_TypeInfo_var);
		Action_3__ctor_m3694F974ACED1192DB653CAE643A0189E979A220(L_28, __this, (intptr_t)((intptr_t)KcpTransport_U3CAwakeU3Eb__23_8_m8F29A8F2B9CA0C9AC05570DC3D726860CB41A224_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m3694F974ACED1192DB653CAE643A0189E979A220_RuntimeMethod_var);
		KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * L_29 = __this->get_config_29();
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_30 = (KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 *)il2cpp_codegen_object_new(KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848_il2cpp_TypeInfo_var);
		KcpServer__ctor_mDD2062A5FBEEDD1F418D02B153EB02BE6170E8A7(L_30, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		__this->set_server_30(L_30);
		// if (statisticsLog)
		bool L_31 = __this->get_statisticsLog_34();
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		// InvokeRepeating(nameof(OnLogStatistics), 1, 1);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteralC6AA6F75B112487F977583F55992E7D71A939A1A, (1.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_0141:
	{
		// Debug.Log("KcpTransport initialized!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral181565AEBE215D8DF479241FA6D7A2D757055708, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_OnValidate_m522D0F7EF9A489AA42CD0EEDD11352E111253712 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// ReliableMaxMessageSize = KcpPeer.ReliableMaxMessageSize(ReceiveWindowSize);
		uint32_t L_0 = __this->get_ReceiveWindowSize_24();
		int32_t L_1 = KcpPeer_ReliableMaxMessageSize_mCF20E0D42838FE69A119200DBE2BCF30122A37FD(L_0, /*hidden argument*/NULL);
		__this->set_ReliableMaxMessageSize_27(L_1);
		// UnreliableMaxMessageSize = KcpPeer.UnreliableMaxMessageSize;
		__this->set_UnreliableMaxMessageSize_28(((int32_t)1199));
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_Available_m900003A608E3511911012902768442513C416A42 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// Application.platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean kcp2k.KcpTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_ClientConnected_mE91A4B7F7C44F42106364FA680F0F2A854B7CE86 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => client.connected;
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_0 = __this->get_client_31();
		NullCheck(L_0);
		bool L_1 = L_0->get_connected_8();
		return L_1;
	}
}
// System.Void kcp2k.KcpTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientConnect_m47611F946758B72D8AE4A448900BB422FAEDA5BA (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// client.Connect(address, Port, config);
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_0 = __this->get_client_31();
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->get_Port_16();
		KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * L_3 = __this->get_config_29();
		NullCheck(L_0);
		KcpClient_Connect_m43C935E7D53B42924700F64F3109C026E5379E4E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientConnect_mE1B3230A63DDC31460E812123982AA2B7FBA3973 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ClientConnect_mE1B3230A63DDC31460E812123982AA2B7FBA3973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (uri.Scheme != Scheme)
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_1, _stringLiteral4DFF74DC4E9C9A949C725F9416BFBE04277A423F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// throw new ArgumentException($"Invalid url {uri}, use {Scheme}:
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = ___uri0;
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral86B36252304BCCEB4316C26A7D9CB17915E78998, L_3, _stringLiteral4DFF74DC4E9C9A949C725F9416BFBE04277A423F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_5, L_4, _stringLiteral2C6D680F5C570BA21D22697CD028F230E9F4CD56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, KcpTransport_ClientConnect_mE1B3230A63DDC31460E812123982AA2B7FBA3973_RuntimeMethod_var);
	}

IL_002d:
	{
		// int serverPort = uri.IsDefaultPort ? Port : uri.Port;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_6 = ___uri0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9 = Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C(L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		goto IL_0043;
	}

IL_003d:
	{
		uint16_t L_10 = __this->get_Port_16();
		G_B5_0 = ((int32_t)(L_10));
	}

IL_0043:
	{
		V_0 = G_B5_0;
		// client.Connect(uri.Host, (ushort)serverPort, config);
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_11 = __this->get_client_31();
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13 = Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		KcpConfig_tE783A348C689A35A776708156446D0B03F863803 * L_15 = __this->get_config_29();
		NullCheck(L_11);
		KcpClient_Connect_m43C935E7D53B42924700F64F3109C026E5379E4E(L_11, L_13, (uint16_t)(((int32_t)((uint16_t)L_14))), L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientSend_m445EA703B6E83CBE992C1103C56C095764A8F802 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, int32_t ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ClientSend_m445EA703B6E83CBE992C1103C56C095764A8F802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * G_B2_0 = NULL;
	Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * G_B1_0 = NULL;
	{
		// client.Send(segment, ToKcpChannel(channelId));
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_0 = __this->get_client_31();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_1 = ___segment0;
		int32_t L_2 = ___channelId1;
		uint8_t L_3 = KcpTransport_ToKcpChannel_mCE06CEDA399AB261EC956D5B3D8F3C455BAA2600(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		KcpClient_Send_mDA51C16EEE71DCF6897F68B4C7580BE5D91DD033(L_0, L_1, L_3, /*hidden argument*/NULL);
		// OnClientDataSent?.Invoke(segment, channelId);
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_4 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataSent_7();
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_6 = ___segment0;
		int32_t L_7 = ___channelId1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A(G_B2_0, L_6, L_7, /*hidden argument*/Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientDisconnect_m2E9CB4D9150180DB8AE84C4835433301B7DFE509 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientDisconnect() => client.Disconnect();
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_0 = __this->get_client_31();
		NullCheck(L_0);
		KcpClient_Disconnect_mACFE10C32D20C69FDCB1511B2C483B37D858B413(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientEarlyUpdate_m1F1814F71070F26B5D31384E5E9C150A56013E16 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// if (enabled) client.TickIncoming();
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (enabled) client.TickIncoming();
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_1 = __this->get_client_31();
		NullCheck(L_1);
		KcpClient_TickIncoming_m78FE55A6A0CBFDF05D3ABF5BF07459C06C0B2569(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientLateUpdate_mCA00A301D14B971751A69704E0399CCF0A392995 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientLateUpdate() => client.TickOutgoing();
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_0 = __this->get_client_31();
		NullCheck(L_0);
		KcpClient_TickOutgoing_mC6A7FE51C4CFA649FEC3977352919DFE63398980(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri kcp2k.KcpTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * KcpTransport_ServerUri_m1A337A6680A4A74217B68F646658D22FD49605E5 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ServerUri_m1A337A6680A4A74217B68F646658D22FD49605E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UriBuilder builder = new UriBuilder();
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_0 = (UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 *)il2cpp_codegen_object_new(UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905_il2cpp_TypeInfo_var);
		UriBuilder__ctor_mFC8729DAB4291B5B6500207C85DCB3985B46BB52(L_0, /*hidden argument*/NULL);
		// builder.Scheme = Scheme;
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_1 = L_0;
		NullCheck(L_1);
		UriBuilder_set_Scheme_mD20C10C2D43C0C2C96D9098BE4331D46FCC45921(L_1, _stringLiteral4DFF74DC4E9C9A949C725F9416BFBE04277A423F, /*hidden argument*/NULL);
		// builder.Host = Dns.GetHostName();
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_2 = L_1;
		String_t* L_3 = Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2(/*hidden argument*/NULL);
		NullCheck(L_2);
		UriBuilder_set_Host_m7213BE98F62DE6A099EA8EEFF479949C5F1EA680(L_2, L_3, /*hidden argument*/NULL);
		// builder.Port = Port;
		UriBuilder_t5823C3516668F40DA57B8F41E2AF01261B988905 * L_4 = L_2;
		uint16_t L_5 = __this->get_Port_16();
		NullCheck(L_4);
		UriBuilder_set_Port_m14DBA6E597BED983B73F4AD7F1215C6E474DB6F3(L_4, L_5, /*hidden argument*/NULL);
		// return builder.Uri;
		NullCheck(L_4);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_6 = UriBuilder_get_Uri_mDCABA4CD1D05D4B9C4CBA063BC7CA94EE6CCC631(L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean kcp2k.KcpTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_ServerActive_m512F0CF6B2015474E534BCF9CEBA889B5DEA286C (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => server.IsActive();
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean kcp2k.KcpServer::IsActive() */, L_0);
		return L_1;
	}
}
// System.Void kcp2k.KcpTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerStart_m5F6A819E5FE47659E2D4932DAFB0A27D3C3AE212 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStart() => server.Start(Port);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		uint16_t L_1 = __this->get_Port_16();
		NullCheck(L_0);
		VirtActionInvoker1< uint16_t >::Invoke(5 /* System.Void kcp2k.KcpServer::Start(System.UInt16) */, L_0, L_1);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerSend_mC3B0DA29755192A238AD3B7126669F4081F87563 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment1, int32_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ServerSend_mC3B0DA29755192A238AD3B7126669F4081F87563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * G_B2_0 = NULL;
	Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * G_B1_0 = NULL;
	{
		// server.Send(connectionId, segment, ToKcpChannel(channelId));
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___segment1;
		int32_t L_3 = ___channelId2;
		uint8_t L_4 = KcpTransport_ToKcpChannel_mCE06CEDA399AB261EC956D5B3D8F3C455BAA2600(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		KcpServer_Send_mE34F3FA461F461C81870B8188B05BE25C1577D2B(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		// OnServerDataSent?.Invoke(connectionId, segment, channelId);
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_5 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataSent_12();
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_7 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_8 = ___segment1;
		int32_t L_9 = ___channelId2;
		NullCheck(G_B2_0);
		Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127(G_B2_0, L_7, L_8, L_9, /*hidden argument*/Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerDisconnect_m8B816F012D747F90BA14B7803EC45C3E5D7C03D4 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override void ServerDisconnect(int connectionId) =>  server.Disconnect(connectionId);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		KcpServer_Disconnect_m6F429456BA510512A0DA35FEA3F23B6C867D6F43(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String kcp2k.KcpTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_ServerGetClientAddress_mC7C3DF4D0F2B308C304BC6BE524A49CB7CA5CF78 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ServerGetClientAddress_mC7C3DF4D0F2B308C304BC6BE524A49CB7CA5CF78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_0 = NULL;
	{
		// IPEndPoint endPoint = server.GetClientEndPoint(connectionId);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_2 = KcpServer_GetClientEndPoint_m73D920E76AFFAC748CC52EE9495D314AA83B149D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return endPoint != null ? endPoint.Address.ToString() : "";
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = V_0;
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0016:
	{
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_4 = V_0;
		NullCheck(L_4);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_5 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Void kcp2k.KcpTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerStop_m66A91EA24677707AD0B917AEAB67E0549871E70A (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStop() => server.Stop();
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void kcp2k.KcpServer::Stop() */, L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerEarlyUpdate_mB13FE485740ED72B2CD508FF739544C9FDA5F06F (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// if (enabled) server.TickIncoming();
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (enabled) server.TickIncoming();
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_1 = __this->get_server_30();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void kcp2k.KcpServer::TickIncoming() */, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerLateUpdate_m94CD4917B867AB7CA739C56469560AAAD5DAF5C9 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerLateUpdate() => server.TickOutgoing();
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void kcp2k.KcpServer::TickOutgoing() */, L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_Shutdown_m6FA4B372EAC229E4B583AA27BA1AB7451B76BB59 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public override void Shutdown() {}
		return;
	}
}
// System.Int32 kcp2k.KcpTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_GetMaxPacketSize_mF0E92FEBF99D4A38A77A66EF4836ECCB7D931C61 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// switch (channelId)
		int32_t L_0 = ___channelId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return KcpPeer.UnreliableMaxMessageSize;
		return ((int32_t)1199);
	}

IL_000a:
	{
		// return KcpPeer.ReliableMaxMessageSize(ReceiveWindowSize);
		uint32_t L_1 = __this->get_ReceiveWindowSize_24();
		int32_t L_2 = KcpPeer_ReliableMaxMessageSize_mCF20E0D42838FE69A119200DBE2BCF30122A37FD(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_GetBatchThreshold_m161B51A3BB6F46C7297D2B3D627F3620F13259D6 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// KcpPeer.UnreliableMaxMessageSize;
		return ((int32_t)1199);
	}
}
// System.Int64 kcp2k.KcpTransport::GetAverageMaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxSendRate_m5F1204AAC387654C91D38CB1F25AEDFE2EEC0A95 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetAverageMaxSendRate_m5F1204AAC387654C91D38CB1F25AEDFE2EEC0A95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * G_B4_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B4_1 = NULL;
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * G_B3_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B3_1 = NULL;
	{
		// server.connections.Count > 0
		//     ? server.connections.Values.Sum(conn => (long)conn.peer.MaxSendRate) / server.connections.Count
		//     : 0;
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1(L_1, /*hidden argument*/Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (((int64_t)((int64_t)0)));
	}

IL_0016:
	{
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_3 = __this->get_server_30();
		NullCheck(L_3);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_4 = L_3->get_connections_8();
		NullCheck(L_4);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_5 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_4, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_6 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__45_0_2();
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_8 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_9 = (Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE *)il2cpp_codegen_object_new(Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE_il2cpp_TypeInfo_var);
		Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_mCC9F1BE75B5EDA2A6CB02BBDD8A01A284AED9D6C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A_RuntimeMethod_var);
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_10 = L_9;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__45_0_2(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		int64_t L_11 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB_RuntimeMethod_var);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_12 = __this->get_server_30();
		NullCheck(L_12);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_13 = L_12->get_connections_8();
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1(L_13, /*hidden argument*/Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var);
		return ((int64_t)((int64_t)L_11/(int64_t)(((int64_t)((int64_t)L_14)))));
	}
}
// System.Int64 kcp2k.KcpTransport::GetAverageMaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxReceiveRate_m22E5746E6FB44ECF4C14357DB4058BA91E6B3F71 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetAverageMaxReceiveRate_m22E5746E6FB44ECF4C14357DB4058BA91E6B3F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * G_B4_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B4_1 = NULL;
	Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * G_B3_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B3_1 = NULL;
	{
		// server.connections.Count > 0
		//     ? server.connections.Values.Sum(conn => (long)conn.peer.MaxReceiveRate) / server.connections.Count
		//     : 0;
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1(L_1, /*hidden argument*/Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (((int64_t)((int64_t)0)));
	}

IL_0016:
	{
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_3 = __this->get_server_30();
		NullCheck(L_3);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_4 = L_3->get_connections_8();
		NullCheck(L_4);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_5 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_4, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_6 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__46_0_3();
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_8 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_9 = (Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE *)il2cpp_codegen_object_new(Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE_il2cpp_TypeInfo_var);
		Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m319C393DFF44224BA732E040B53D9C7322BF332C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1DAF75D0D2338F68D06A1C02AC873310D266F85A_RuntimeMethod_var);
		Func_2_t47F6BCA43CB1636244F4BF559F961E27FABF13AE * L_10 = L_9;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__46_0_3(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		int64_t L_11 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m391269BA74F8084242EEE1FF0E1A0041B9EE43AB_RuntimeMethod_var);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_12 = __this->get_server_30();
		NullCheck(L_12);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_13 = L_12->get_connections_8();
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1(L_13, /*hidden argument*/Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var);
		return ((int64_t)((int64_t)L_11/(int64_t)(((int64_t)((int64_t)L_14)))));
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendQueue_m732A16998CEBE55BF115BB29C2466927194EC34B (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetTotalSendQueue_m732A16998CEBE55BF115BB29C2466927194EC34B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B2_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B2_1 = NULL;
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B1_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.SendQueueCount);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_2 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_1, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_3 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__47_0_4();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_5 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_6 = (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *)il2cpp_codegen_object_new(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E_il2cpp_TypeInfo_var);
		Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_m6D4F1827FE51CDE9BB65E1546A0A4A31CA0F8653_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_RuntimeMethod_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_7 = L_6;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__47_0_4(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_RuntimeMethod_var);
		return (((int64_t)((int64_t)L_8)));
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveQueue_m07D5274AD0400A509C3D59DAAC1B1B6F14333E51 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetTotalReceiveQueue_m07D5274AD0400A509C3D59DAAC1B1B6F14333E51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B2_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B2_1 = NULL;
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B1_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveQueueCount);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_2 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_1, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_3 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__48_0_5();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_5 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_6 = (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *)il2cpp_codegen_object_new(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E_il2cpp_TypeInfo_var);
		Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m1913798882F93E7E04C977D5D97851B7D51CAAEA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_RuntimeMethod_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_7 = L_6;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__48_0_5(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_RuntimeMethod_var);
		return (((int64_t)((int64_t)L_8)));
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalSendBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendBuffer_m920A529FDF5DD709CED54134F9D1B6C568D8A16A (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetTotalSendBuffer_m920A529FDF5DD709CED54134F9D1B6C568D8A16A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B2_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B2_1 = NULL;
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B1_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.SendBufferCount);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_2 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_1, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_3 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__49_0_6();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_5 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_6 = (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *)il2cpp_codegen_object_new(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E_il2cpp_TypeInfo_var);
		Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_mCFE819BC9269F68C2397AAEBDE32EC96CDC13961_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_RuntimeMethod_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_7 = L_6;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__49_0_6(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_RuntimeMethod_var);
		return (((int64_t)((int64_t)L_8)));
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveBuffer_mAB03EC6DEB2AF011B5B3F8C02485C9C324A7AA99 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_GetTotalReceiveBuffer_mAB03EC6DEB2AF011B5B3F8C02485C9C324A7AA99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B2_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B2_1 = NULL;
	Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * G_B1_0 = NULL;
	ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveBufferCount);
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_0 = __this->get_server_30();
		NullCheck(L_0);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_1 = L_0->get_connections_8();
		NullCheck(L_1);
		ValueCollection_t2F929BBBE85150F91B708B7AE1E2905B060C55B0 * L_2 = Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1(L_1, /*hidden argument*/Dictionary_2_get_Values_m13CF6CE62BBFBE38706C3B54FC974CBF85CEFCA1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_3 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9__50_0_7();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_5 = ((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_6 = (Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E *)il2cpp_codegen_object_new(Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E_il2cpp_TypeInfo_var);
		Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_mF0F09FD0DC64477E941033E6EC4B37DD38B1CFC8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m39E5DFD448875EEA3A739CF785D73C3867A41EEF_RuntimeMethod_var);
		Func_2_t953CC858CF79DFF74C32669745D5B63BB9A50E3E * L_7 = L_6;
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9__50_0_7(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8 = Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Sum_TisKcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C_m99E318F39F4FC682FCD3E2A5516FBE8B74518817_RuntimeMethod_var);
		return (((int64_t)((int64_t)L_8)));
	}
}
// System.String kcp2k.KcpTransport::PrettyBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8 (int64_t ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bytes < 1024)
		int64_t L_0 = ___bytes0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)((int32_t)1024)))))))
		{
			goto IL_001a;
		}
	}
	{
		// return $"{bytes} B";
		int64_t L_1 = ___bytes0;
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral524BD842195E7D35B90E041007A6BCA7E6D86E95, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		// else if (bytes < 1024L * 1024L)
		int64_t L_5 = ___bytes0;
		if ((((int64_t)L_5) >= ((int64_t)(((int64_t)((int64_t)((int32_t)1048576)))))))
		{
			goto IL_003b;
		}
	}
	{
		// return $"{(bytes / 1024f):F2} KB";
		int64_t L_6 = ___bytes0;
		float L_7 = ((float)((float)(((float)((float)L_6)))/(float)(1024.0f)));
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral76D77E1ED81EB2AF96C4306A205A5B5FC70F2250, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_003b:
	{
		// else if (bytes < 1024 * 1024L * 1024L)
		int64_t L_10 = ___bytes0;
		if ((((int64_t)L_10) >= ((int64_t)(((int64_t)((int64_t)((int32_t)1073741824)))))))
		{
			goto IL_005c;
		}
	}
	{
		// return $"{(bytes / (1024f * 1024f)):F2} MB";
		int64_t L_11 = ___bytes0;
		float L_12 = ((float)((float)(((float)((float)L_11)))/(float)(1048576.0f)));
		RuntimeObject * L_13 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral9C5FC774434F93F2D2FFC8F3FE0C20520E68470B, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_005c:
	{
		// return $"{(bytes / (1024f * 1024f * 1024f)):F2} GB";
		int64_t L_15 = ___bytes0;
		float L_16 = ((float)((float)(((float)((float)L_15)))/(float)(1.07374182E+09f)));
		RuntimeObject * L_17 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6A30C30A9E94477CB7C8B5090D5C87FB1ADCA307, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void kcp2k.KcpTransport::OnLogStatistics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_OnLogStatistics_m9663F2E5351E14D0DCF760590BC228579DD38645 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_OnLogStatistics_m9663F2E5351E14D0DCF760590BC228579DD38645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ServerActive())
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, __this);
		if (!L_0)
		{
			goto IL_00e9;
		}
	}
	{
		// string log = "kcp SERVER @ time: " + NetworkTime.localTime + "\n";
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_1 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral5C4EA8C1EF3693FE256E7823BD101277224E9A31, L_3, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		// log += $"  connections: {server.connections.Count}\n";
		KcpServer_t0CD64A1AF2EE43235591F507C2BA6D9402A00848 * L_5 = __this->get_server_30();
		NullCheck(L_5);
		Dictionary_2_tBF759D9AE47DA3326876264BD4BC57E2C19B7D7D * L_6 = L_5->get_connections_8();
		NullCheck(L_6);
		int32_t L_7 = Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1(L_6, /*hidden argument*/Dictionary_2_get_Count_m6FAE0D3CABFE8B7F2E5C1FF62DF41122AF9701D1_RuntimeMethod_var);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF2B66685790B9583E43AD2401C967FEA20476435, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, L_10, /*hidden argument*/NULL);
		// log += $"  MaxSendRate (avg): {PrettyBytes(GetAverageMaxSendRate())}/s\n";
		int64_t L_12 = KcpTransport_GetAverageMaxSendRate_m5F1204AAC387654C91D38CB1F25AEDFE2EEC0A95(__this, /*hidden argument*/NULL);
		String_t* L_13 = KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_11, _stringLiteralDE0A6153E1F06CC6C537D31E60B4BA7EA0B82AE8, L_13, _stringLiteral198CEEA500A2E628ECEE2CBAE7DFA493069DC3B4, /*hidden argument*/NULL);
		// log += $"  MaxRecvRate (avg): {PrettyBytes(GetAverageMaxReceiveRate())}/s\n";
		int64_t L_15 = KcpTransport_GetAverageMaxReceiveRate_m22E5746E6FB44ECF4C14357DB4058BA91E6B3F71(__this, /*hidden argument*/NULL);
		String_t* L_16 = KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_14, _stringLiteralFEEDC45D166F8E0364690EC42CF6DD7C2A985782, L_16, _stringLiteral198CEEA500A2E628ECEE2CBAE7DFA493069DC3B4, /*hidden argument*/NULL);
		// log += $"  SendQueue: {GetTotalSendQueue()}\n";
		int64_t L_18 = KcpTransport_GetTotalSendQueue_m732A16998CEBE55BF115BB29C2466927194EC34B(__this, /*hidden argument*/NULL);
		int64_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral33C7EC38BA8D7E29F5C7BDB9A05F75DE93FD0D4D, L_20, /*hidden argument*/NULL);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_17, L_21, /*hidden argument*/NULL);
		// log += $"  ReceiveQueue: {GetTotalReceiveQueue()}\n";
		int64_t L_23 = KcpTransport_GetTotalReceiveQueue_m07D5274AD0400A509C3D59DAAC1B1B6F14333E51(__this, /*hidden argument*/NULL);
		int64_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral384CA255C41CFE1EA28DB6499335A51C5488DE34, L_25, /*hidden argument*/NULL);
		String_t* L_27 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_22, L_26, /*hidden argument*/NULL);
		// log += $"  SendBuffer: {GetTotalSendBuffer()}\n";
		int64_t L_28 = KcpTransport_GetTotalSendBuffer_m920A529FDF5DD709CED54134F9D1B6C568D8A16A(__this, /*hidden argument*/NULL);
		int64_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral62C920EB6AD4884B77B42E7C7E7436744D4B7234, L_30, /*hidden argument*/NULL);
		String_t* L_32 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_27, L_31, /*hidden argument*/NULL);
		// log += $"  ReceiveBuffer: {GetTotalReceiveBuffer()}\n\n";
		int64_t L_33 = KcpTransport_GetTotalReceiveBuffer_mAB03EC6DEB2AF011B5B3F8C02485C9C324A7AA99(__this, /*hidden argument*/NULL);
		int64_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral016C0CDF513C536E7FDF069563900BD422BCBB8A, L_35, /*hidden argument*/NULL);
		String_t* L_37 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_32, L_36, /*hidden argument*/NULL);
		// Debug.Log(log);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_37, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		// if (ClientConnected())
		bool L_38 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, __this);
		if (!L_38)
		{
			goto IL_01ec;
		}
	}
	{
		// string log = "kcp CLIENT @ time: " + NetworkTime.localTime + "\n";
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tCCC1943FE3EB0F8829DDDD784DA00CB0F668178B_il2cpp_TypeInfo_var);
		double L_39 = NetworkTime_get_localTime_m45D94550720905B3051AD5ECA436FB0E6B671BBE(/*hidden argument*/NULL);
		double L_40 = L_39;
		RuntimeObject * L_41 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral2BCBB85DE8B237880AD1014063A8751F3D5AFA74, L_41, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		// log += $"  MaxSendRate: {PrettyBytes(client.peer.MaxSendRate)}/s\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_43 = __this->get_client_31();
		NullCheck(L_43);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_44 = L_43->get_peer_0();
		NullCheck(L_44);
		uint32_t L_45 = KcpPeer_get_MaxSendRate_m07A29F561A5C003C4C11FC7C191C205AF4283887(L_44, /*hidden argument*/NULL);
		String_t* L_46 = KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8((((int64_t)((uint64_t)L_45))), /*hidden argument*/NULL);
		String_t* L_47 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_42, _stringLiteralE87B78496AA11193426860E59B9F0A75ADAE6484, L_46, _stringLiteral198CEEA500A2E628ECEE2CBAE7DFA493069DC3B4, /*hidden argument*/NULL);
		// log += $"  MaxRecvRate: {PrettyBytes(client.peer.MaxReceiveRate)}/s\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_48 = __this->get_client_31();
		NullCheck(L_48);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_49 = L_48->get_peer_0();
		NullCheck(L_49);
		uint32_t L_50 = KcpPeer_get_MaxReceiveRate_m05CFE37AEC9AB9E2CE57507AE136D88D4E6769FC(L_49, /*hidden argument*/NULL);
		String_t* L_51 = KcpTransport_PrettyBytes_mC05D673A896A04547B70E4409E71A54ED31994B8((((int64_t)((uint64_t)L_50))), /*hidden argument*/NULL);
		String_t* L_52 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_47, _stringLiteral9FB30C5D95722158445A39851B517F5FE9893EEB, L_51, _stringLiteral198CEEA500A2E628ECEE2CBAE7DFA493069DC3B4, /*hidden argument*/NULL);
		// log += $"  SendQueue: {client.peer.SendQueueCount}\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_53 = __this->get_client_31();
		NullCheck(L_53);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_54 = L_53->get_peer_0();
		NullCheck(L_54);
		int32_t L_55 = KcpPeer_get_SendQueueCount_mDEDA224CD3F1E6FA3CC688F6041BAE9981F1C758(L_54, /*hidden argument*/NULL);
		int32_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral33C7EC38BA8D7E29F5C7BDB9A05F75DE93FD0D4D, L_57, /*hidden argument*/NULL);
		String_t* L_59 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_52, L_58, /*hidden argument*/NULL);
		// log += $"  ReceiveQueue: {client.peer.ReceiveQueueCount}\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_60 = __this->get_client_31();
		NullCheck(L_60);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_61 = L_60->get_peer_0();
		NullCheck(L_61);
		int32_t L_62 = KcpPeer_get_ReceiveQueueCount_m0EE2EC80217E5AC592D531D43EC179D8D4D4AAE9(L_61, /*hidden argument*/NULL);
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_63);
		String_t* L_65 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral384CA255C41CFE1EA28DB6499335A51C5488DE34, L_64, /*hidden argument*/NULL);
		String_t* L_66 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_59, L_65, /*hidden argument*/NULL);
		// log += $"  SendBuffer: {client.peer.SendBufferCount}\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_67 = __this->get_client_31();
		NullCheck(L_67);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_68 = L_67->get_peer_0();
		NullCheck(L_68);
		int32_t L_69 = KcpPeer_get_SendBufferCount_m31709A91E7EA197697931B424D2E1A8D7247B8B5(L_68, /*hidden argument*/NULL);
		int32_t L_70 = L_69;
		RuntimeObject * L_71 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_70);
		String_t* L_72 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral62C920EB6AD4884B77B42E7C7E7436744D4B7234, L_71, /*hidden argument*/NULL);
		String_t* L_73 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_66, L_72, /*hidden argument*/NULL);
		// log += $"  ReceiveBuffer: {client.peer.ReceiveBufferCount}\n\n";
		KcpClient_t9772251A1B08D0D4CE8A534F3460073162796109 * L_74 = __this->get_client_31();
		NullCheck(L_74);
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_75 = L_74->get_peer_0();
		NullCheck(L_75);
		int32_t L_76 = KcpPeer_get_ReceiveBufferCount_m772F67AB01E1C2FAAC044F59229FD6E032CA787B(L_75, /*hidden argument*/NULL);
		int32_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral016C0CDF513C536E7FDF069563900BD422BCBB8A, L_78, /*hidden argument*/NULL);
		String_t* L_80 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_73, L_79, /*hidden argument*/NULL);
		// Debug.Log(log);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_80, /*hidden argument*/NULL);
	}

IL_01ec:
	{
		// }
		return;
	}
}
// System.String kcp2k.KcpTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_ToString_m81779DD42C9C30D482B23ED268159EA9A811B711 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_ToString_m81779DD42C9C30D482B23ED268159EA9A811B711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => "KCP";
		return _stringLiteral8FD1D7FC268EC1CA75F71DFDD4D0767826D12C73;
	}
}
// System.Void kcp2k.KcpTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport__ctor_mEEB2AA1E63E0600D8330C905D1D7003B7AB5B9E8 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// public ushort Port = 7777;
		__this->set_Port_16((uint16_t)((int32_t)7777));
		// public bool DualMode = true;
		__this->set_DualMode_17((bool)1);
		// public bool NoDelay = true;
		__this->set_NoDelay_18((bool)1);
		// public uint Interval = 10;
		__this->set_Interval_19(((int32_t)10));
		// public int Timeout = 10000;
		__this->set_Timeout_20(((int32_t)10000));
		// public int FastResend = 2;
		__this->set_FastResend_21(2);
		// public uint SendWindowSize = 4096; 
		__this->set_SendWindowSize_23(((int32_t)4096));
		// public uint ReceiveWindowSize = 4096; 
		__this->set_ReceiveWindowSize_24(((int32_t)4096));
		// public uint MaxRetransmit = Kcp.DEADLINK * 2; 
		__this->set_MaxRetransmit_25(((int32_t)40));
		// public bool MaximizeSocketBuffers = true;
		__this->set_MaximizeSocketBuffers_26((bool)1);
		Transport__ctor_m73B1FF8258BBADB77EB8CED40EC34C34A956D7DE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_1_mF5329E294A1AD1451758FBFF6E5858817D61D64C (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// () => OnClientConnected.Invoke(),
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientConnected_5();
		NullCheck(L_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_2(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_2_m71B394DC17E55DDB8D79C871E69A5881FED32131 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___message0, uint8_t ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_2_m71B394DC17E55DDB8D79C871E69A5881FED32131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (message, channel) => OnClientDataReceived.Invoke(message, FromKcpChannel(channel)),
		Action_2_tF5EC64D07CDDB0C03DA1216A2DF0E5E24E3EB05C * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDataReceived_6();
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_1 = ___message0;
		uint8_t L_2 = ___channel1;
		int32_t L_3 = KcpTransport_FromKcpChannel_mE654FCC36E0125AF8313B95E73CCE8276B0FDAEA(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A(L_0, L_1, L_3, /*hidden argument*/Action_2_Invoke_m675FA9ED400C8C642CECCA39508E1DBD7FD4D70A_RuntimeMethod_var);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_3_m2415761EB1EA930DFFB4A5EF050603A07C48B778 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, const RuntimeMethod* method)
{
	{
		// () => OnClientDisconnected.Invoke(),
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientDisconnected_9();
		NullCheck(L_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_4(kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_4_m46CB28A712414DA35A478A6B806E696DABE800CC (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, uint8_t ___error0, String_t* ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_4_m46CB28A712414DA35A478A6B806E696DABE800CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (error, reason) => OnClientError.Invoke(ToTransportError(error), reason)
		Action_2_tC299510424CD206373E7F2273FA3E955667F68FF * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnClientError_8();
		uint8_t L_1 = ___error0;
		uint8_t L_2 = KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___reason1;
		NullCheck(L_0);
		Action_2_Invoke_mCC40875411D2FA0345600AD1CCA196E1F4F0BD29(L_0, L_2, L_3, /*hidden argument*/Action_2_Invoke_mCC40875411D2FA0345600AD1CCA196E1F4F0BD29_RuntimeMethod_var);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_5(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_5_m6941A645DDBB9D2DD6EB13554C9D9E7664EA3A46 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_5_m6941A645DDBB9D2DD6EB13554C9D9E7664EA3A46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (connectionId) => OnServerConnected.Invoke(connectionId),
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerConnected_10();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500(L_0, L_1, /*hidden argument*/Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_6(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_6_m0389A0C99F78F3FDD5840BE656820A34C3AF496D (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___message1, uint8_t ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_6_m0389A0C99F78F3FDD5840BE656820A34C3AF496D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (connectionId, message, channel) => OnServerDataReceived.Invoke(connectionId, message, FromKcpChannel(channel)),
		Action_3_t4A7058BE37A18DCF0E31385EDEF53096102ED598 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDataReceived_11();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_2 = ___message1;
		uint8_t L_3 = ___channel2;
		int32_t L_4 = KcpTransport_FromKcpChannel_mE654FCC36E0125AF8313B95E73CCE8276B0FDAEA(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127(L_0, L_1, L_2, L_4, /*hidden argument*/Action_3_Invoke_mA2D7F59F101C99D421749DDCEA30997C1B390127_RuntimeMethod_var);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_7(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_7_m0525DD9A812FC393BA6CDA4EA685817912685BD1 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_7_m0525DD9A812FC393BA6CDA4EA685817912685BD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (connectionId) => OnServerDisconnected.Invoke(connectionId),
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerDisconnected_14();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500(L_0, L_1, /*hidden argument*/Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_8(System.Int32,kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_8_m8F29A8F2B9CA0C9AC05570DC3D726860CB41A224 (KcpTransport_t6AD649B01CCA73779F38562B3E7185D5609C111C * __this, int32_t ___connectionId0, uint8_t ___error1, String_t* ___reason2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KcpTransport_U3CAwakeU3Eb__23_8_m8F29A8F2B9CA0C9AC05570DC3D726860CB41A224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (connectionId, error, reason) => OnServerError.Invoke(connectionId, ToTransportError(error), reason),
		Action_3_t7ABB696AE53CD344F6666873D6A978B795C3690B * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 *)__this)->get_OnServerError_13();
		int32_t L_1 = ___connectionId0;
		uint8_t L_2 = ___error1;
		uint8_t L_3 = KcpTransport_ToTransportError_m730658F77E2D7C2F9C6A93A37A3D431881C4C477(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___reason2;
		NullCheck(L_0);
		Action_3_Invoke_m4D4D60F525CC37B7127AA9322B489598F8872956(L_0, L_1, L_3, L_4, /*hidden argument*/Action_3_Invoke_m4D4D60F525CC37B7127AA9322B489598F8872956_RuntimeMethod_var);
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
// System.Void kcp2k.KcpTransport_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0128DDC4FA43740287ACF537829B20C33CA8B28D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m0128DDC4FA43740287ACF537829B20C33CA8B28D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * L_0 = (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A *)il2cpp_codegen_object_new(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m91CB8D2999DD3AE8223B00C0D7BBBD505618702A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m91CB8D2999DD3AE8223B00C0D7BBBD505618702A (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport_<>c::<Awake>b__23_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__23_0_mCB5F46BD5A11BCB9D6AAB46644D8FE23ED868C90 (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, String_t* ____0, const RuntimeMethod* method)
{
	{
		// Log.Info = _ => {};
		return;
	}
}
// System.Int64 kcp2k.KcpTransport_<>c::<GetAverageMaxSendRate>b__45_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_mCC9F1BE75B5EDA2A6CB02BBDD8A01A284AED9D6C (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// ? server.connections.Values.Sum(conn => (long)conn.peer.MaxSendRate) / server.connections.Count
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		uint32_t L_2 = KcpPeer_get_MaxSendRate_m07A29F561A5C003C4C11FC7C191C205AF4283887(L_1, /*hidden argument*/NULL);
		return (((int64_t)((uint64_t)L_2)));
	}
}
// System.Int64 kcp2k.KcpTransport_<>c::<GetAverageMaxReceiveRate>b__46_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m319C393DFF44224BA732E040B53D9C7322BF332C (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// ? server.connections.Values.Sum(conn => (long)conn.peer.MaxReceiveRate) / server.connections.Count
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		uint32_t L_2 = KcpPeer_get_MaxReceiveRate_m05CFE37AEC9AB9E2CE57507AE136D88D4E6769FC(L_1, /*hidden argument*/NULL);
		return (((int64_t)((uint64_t)L_2)));
	}
}
// System.Int32 kcp2k.KcpTransport_<>c::<GetTotalSendQueue>b__47_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_m6D4F1827FE51CDE9BB65E1546A0A4A31CA0F8653 (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.peer.SendQueueCount);
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		int32_t L_2 = KcpPeer_get_SendQueueCount_mDEDA224CD3F1E6FA3CC688F6041BAE9981F1C758(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport_<>c::<GetTotalReceiveQueue>b__48_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m1913798882F93E7E04C977D5D97851B7D51CAAEA (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveQueueCount);
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		int32_t L_2 = KcpPeer_get_ReceiveQueueCount_m0EE2EC80217E5AC592D531D43EC179D8D4D4AAE9(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport_<>c::<GetTotalSendBuffer>b__49_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_mCFE819BC9269F68C2397AAEBDE32EC96CDC13961 (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.peer.SendBufferCount);
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		int32_t L_2 = KcpPeer_get_SendBufferCount_m31709A91E7EA197697931B424D2E1A8D7247B8B5(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport_<>c::<GetTotalReceiveBuffer>b__50_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_mF0F09FD0DC64477E941033E6EC4B37DD38B1CFC8 (U3CU3Ec_tA8AAFD82CC71BB4E1777E3F0C35DE30F5B8ED14A * __this, KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  ___conn0, const RuntimeMethod* method)
{
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveBufferCount);
		KcpServerConnection_tE7CF1ECEF45B1BF7B6072E9816D4CFE173975A6C  L_0 = ___conn0;
		KcpPeer_tCB9364932C9565FACC780C28BFB26AF663F463C4 * L_1 = L_0.get_peer_0();
		NullCheck(L_1);
		int32_t L_2 = KcpPeer_get_ReceiveBufferCount_m772F67AB01E1C2FAAC044F59229FD6E032CA787B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m02387DADA172F909FD346559D93990E990E05352_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)__this->get__array_0();
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_gshared_inline (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m385893A8A68FBB3B606471EF05038D2912F6A172_gshared_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  List_1_get_Item_mF57D108BBCDA4F1BBF9B6AB0806F3727863EB2F3_gshared_inline (List_1_t1F5155A0DAD4F2AF32C260C0C735DA843A750823 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701* L_2 = (QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701*)__this->get__items_1();
		int32_t L_3 = ___index0;
		QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((QueuedMessageU5BU5D_tEE4401F31CABEC676BC1B1265F1D53161565E701*)L_2, (int32_t)L_3);
		return (QueuedMessage_t412CE9C15EB4C5F20DAE012FB607692E31158783 )L_4;
	}
}
