﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
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
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C;
struct Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44;
struct Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384;
struct Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18;
struct Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D;
struct Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D;
struct Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2;
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
struct Func_2_tA526681EE526C81F376160E44520BDC21770A705;
struct Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC;
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39;
struct Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4;
struct Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA;
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC;
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67;
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A;
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C;
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711;
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741;
struct Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB;
struct Func_2_t28B89F577966ACE68E85C35C084880FB68397861;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
struct Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4;
struct Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3;
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A;
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
struct Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13;
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41;
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619;
struct Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73;
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22;
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB;
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB;
struct Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD;
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E;
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19;
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C;
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9;
struct Func_2_tB0A053D611A12E64831578506F155296DD632944;
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4;
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115;
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD;
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B;
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C;
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751;
struct Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F;
struct Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A;
struct Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A;
struct Func_2_tE430274101A35C9C0B5469132139AD0BA5035667;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IEnumerable_1_t30FBA3F0775777FD15679FBAE44B692629C5E6BB;
struct IEnumerable_1_t64B98413ADC364FA8E2A7EF47C0E957FDDD2C1DD;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t2BB095AB2DF67A05AFA977F9A716C856D31DC5DA;
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t341BAB962495036CBB25700234AA71EAF80C6AE0;
struct IEnumerator_1_tC880EC5644F413FB0DF632E7B8266215D8459084;
struct IEnumerator_1_t66E4CFAFB15FAD3BA3573CE2E321AFC488F05319;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_tEECB81389808568F3A4227D00948C08133D9EE8F;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t4E5076BDD22FD35271F759AC8A6B6CA8DCBDB43A;
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC;
struct Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD;
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072;
struct List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54;
struct List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0;
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F;
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535;
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6;
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43;
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2;
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_t2FCEA7635AA5C3B22E982462685B40276413F521;
struct WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A;
struct WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7;
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E;
struct WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08;
struct WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF;
struct WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282;
struct WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC;
struct WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A;
struct WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A;
struct WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F;
struct WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB;
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6;
struct WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A;
struct WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245;
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65;
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D;
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE;
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4;
struct WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4;
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A;
struct WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13;
struct WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4;
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0;
struct WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6;
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76;
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA;
struct WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D;
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81;
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5;
struct WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7;
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C;
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562;
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343;
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266;
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F;
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA;
struct WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5;
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247;
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA;
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484;
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7;
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730;
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
struct WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6;
struct WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9;
struct WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF;
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507;
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A;
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960;
struct WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848;
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct SerializablePVProfileU5BU5D_t15CBE5811C9B0A88DEB4669CAAF2FBFF363BC530;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MethodInfo_t;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A;
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	int32_t ___current_2;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	RuntimeObject* ___current_2;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535  : public RuntimeObject
{
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25  : public RuntimeObject
{
	HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6  : public RuntimeObject
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43  : public RuntimeObject
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06  : public RuntimeObject
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2  : public RuntimeObject
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t2FCEA7635AA5C3B22E982462685B40276413F521  : public RuntimeObject
{
	SerializablePVProfileU5BU5D_t15CBE5811C9B0A88DEB4669CAAF2FBFF363BC530* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	int32_t ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	RuntimeObject* ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	float ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6 : public RuntimeObject {};
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	int32_t ____numEntries_2;
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries_1;
	int32_t ____numEntries_2;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey_3;
};
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state_0;
};
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	bool ___U3CCanReadU3Ek__BackingField_0;
	bool ___U3CCanWriteU3Ek__BackingField_1;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	RuntimeObject* ___Value_0;
	int32_t ___HashCode_1;
	int32_t ___Next_2;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	int32_t ____current_3;
};
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	int32_t ____current_3;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	RuntimeObject* ____current_3;
};
struct Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C 
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	float ____current_3;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F 
{
	int64_t ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	RuntimeObject* ___key_0;
	bool ___value_1;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___value_1;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array_0;
	int32_t ___m_StartIndex_1;
	int32_t ___m_Length_2;
};
struct Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source_3;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data_0;
	int32_t ___m_Start_1;
	int32_t ___m_Length_2;
};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data_0;
	int32_t ___m_Start_1;
	int32_t ___m_Length_2;
};
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data_0;
	int32_t ___m_Start_1;
	int32_t ___m_Length_2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r_0;
	float ___g_1;
	float ___b_2;
	float ___a_3;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase_0;
	String_t* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin_0;
	float ___m_YMin_1;
	float ___m_Width_2;
	float ___m_Height_3;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin_0;
	int32_t ___m_YMin_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value_0;
	int32_t ___m_Type_1;
	RuntimeObject* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB 
{
	float ___X_1;
	float ___Y_2;
	float ___Z_3;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};
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
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C 
{
	String_t* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE 
{
	List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ____current_3;
};
struct Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 
{
	List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ____current_3;
};
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
};
struct Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D 
{
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ____current_3;
};
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current_3;
};
struct Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD 
{
	List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ____current_3;
};
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___current_2;
};
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current_2;
};
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___current_2;
};
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_2;
};
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector_5;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};
struct WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___selector_5;
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector_5;
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector_5;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector_5;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector_5;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848  : public Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3
{
	bool ___m_Running_0;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	RuntimeObject* ___Data_1;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_pinvoke
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_com
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	String_t* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField_2;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	bool ___hasEscapes_1;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
};
struct Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B 
{
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ____current_3;
};
struct Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 
{
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ____current_3;
};
struct Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 
{
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ____current_3;
};
struct Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current_3;
};
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB ___current_2;
};
struct WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	RuntimeObject* ___source_3;
	Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	RuntimeObject* ___source_3;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	RuntimeObject* ___source_3;
	Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	RuntimeObject* ___source_3;
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___source_3;
	Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___predicate_4;
	Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* ___selector_5;
	Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE ___enumerator_6;
};
struct WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___source_3;
	Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___predicate_4;
	Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* ___selector_5;
	Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE ___enumerator_6;
};
struct WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___source_3;
	Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___predicate_4;
	Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* ___selector_5;
	Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 ___enumerator_6;
};
struct WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___source_3;
	Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___predicate_4;
	Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* ___selector_5;
	Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 ___enumerator_6;
};
struct WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___source_3;
	Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___predicate_4;
	Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* ___selector_5;
	Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 ___enumerator_6;
};
struct WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___selector_5;
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};
struct WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* ___selector_5;
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector_5;
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};
struct WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___selector_5;
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};
struct WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* ___selector_5;
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___selector_5;
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector_5;
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector_5;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};
struct WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	Func_2_tB0A053D611A12E64831578506F155296DD632944* ___selector_5;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector_5;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector_5;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector_5;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector_5;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector_5;
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};
struct WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___source_3;
	Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___predicate_4;
	Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* ___selector_5;
	Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD ___enumerator_6;
};
struct WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___source_3;
	Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___predicate_4;
	Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* ___selector_5;
	Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD ___enumerator_6;
};
struct WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___source_3;
	Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___predicate_4;
	Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* ___selector_5;
	Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD ___enumerator_6;
};
struct HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 
{
	int32_t ___parent_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	float ___radius_2;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type_0;
	bool ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	RuntimeObject* ___anyValue_7;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
struct Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 
{
	List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ____current_3;
};
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current_3;
};
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C  : public MulticastDelegate_t
{
};
struct Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44  : public MulticastDelegate_t
{
};
struct Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384  : public MulticastDelegate_t
{
};
struct Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18  : public MulticastDelegate_t
{
};
struct Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D  : public MulticastDelegate_t
{
};
struct Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D  : public MulticastDelegate_t
{
};
struct Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2  : public MulticastDelegate_t
{
};
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858  : public MulticastDelegate_t
{
};
struct Func_2_tA526681EE526C81F376160E44520BDC21770A705  : public MulticastDelegate_t
{
};
struct Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC  : public MulticastDelegate_t
{
};
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3  : public MulticastDelegate_t
{
};
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67  : public MulticastDelegate_t
{
};
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A  : public MulticastDelegate_t
{
};
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C  : public MulticastDelegate_t
{
};
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711  : public MulticastDelegate_t
{
};
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741  : public MulticastDelegate_t
{
};
struct Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB  : public MulticastDelegate_t
{
};
struct Func_2_t28B89F577966ACE68E85C35C084880FB68397861  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821  : public MulticastDelegate_t
{
};
struct Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4  : public MulticastDelegate_t
{
};
struct Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3  : public MulticastDelegate_t
{
};
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A  : public MulticastDelegate_t
{
};
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};
struct Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13  : public MulticastDelegate_t
{
};
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41  : public MulticastDelegate_t
{
};
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB  : public MulticastDelegate_t
{
};
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619  : public MulticastDelegate_t
{
};
struct Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73  : public MulticastDelegate_t
{
};
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22  : public MulticastDelegate_t
{
};
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB  : public MulticastDelegate_t
{
};
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB  : public MulticastDelegate_t
{
};
struct Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD  : public MulticastDelegate_t
{
};
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E  : public MulticastDelegate_t
{
};
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19  : public MulticastDelegate_t
{
};
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C  : public MulticastDelegate_t
{
};
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9  : public MulticastDelegate_t
{
};
struct Func_2_tB0A053D611A12E64831578506F155296DD632944  : public MulticastDelegate_t
{
};
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4  : public MulticastDelegate_t
{
};
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115  : public MulticastDelegate_t
{
};
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD  : public MulticastDelegate_t
{
};
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B  : public MulticastDelegate_t
{
};
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C  : public MulticastDelegate_t
{
};
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751  : public MulticastDelegate_t
{
};
struct Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F  : public MulticastDelegate_t
{
};
struct Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A  : public MulticastDelegate_t
{
};
struct Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A  : public MulticastDelegate_t
{
};
struct Func_2_tE430274101A35C9C0B5469132139AD0BA5035667  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___current_2;
};
struct KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C 
{
	RuntimeObject* ___key_0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value_1;
};
struct WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	RuntimeObject* ___source_3;
	Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector_5;
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector_5;
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector_5;
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};
struct WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___selector_5;
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector_5;
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector_5;
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};
struct WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___selector_5;
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector_5;
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector_5;
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source_3;
	Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate_4;
	Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector_5;
	Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ___enumerator_6;
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 
{
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ____current_3;
};
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39  : public MulticastDelegate_t
{
};
struct Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4  : public MulticastDelegate_t
{
};
struct Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA  : public MulticastDelegate_t
{
};
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC  : public MulticastDelegate_t
{
};
struct WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E  : public Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE
{
	RuntimeObject* ___source_3;
	Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4  : public Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE
{
	List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___source_3;
	Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___predicate_4;
	Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___selector_5;
	Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 ___enumerator_6;
};
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector_5;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector_5;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector_5;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* ___selector_5;
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};
struct WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___selector_5;
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___selector_5;
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};
struct List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54_StaticFields
{
	KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* ___s_emptyArray_5;
};
struct List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0_StaticFields
{
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___s_emptyArray_5;
};
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F_StaticFields
{
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___s_emptyArray_5;
};
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535_StaticFields
{
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ___s_emptyArray_5;
};
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25_StaticFields
{
	HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* ___s_emptyArray_5;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6_StaticFields
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___s_emptyArray_5;
};
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43_StaticFields
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___s_emptyArray_5;
};
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06_StaticFields
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___s_emptyArray_5;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_StaticFields
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___s_emptyArray_5;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray_5;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray_5;
};
struct List_1_t2FCEA7635AA5C3B22E982462685B40276413F521_StaticFields
{
	SerializablePVProfileU5BU5D_t15CBE5811C9B0A88DEB4669CAAF2FBFF363BC530* ___s_emptyArray_5;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};
struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB_StaticFields
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Zero_0;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___VertexLayout_3;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* m_Items[1];

	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
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
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF71967CAF54FC4BE3088E1DA80CCB31E16A37233_gshared (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE List_1_GetEnumerator_m8FB67682855433314971B9405D3A33D6A85A4990_gshared (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_gshared_inline (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_gshared_inline (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m2F6A22D93F44BB5152EDA8939B02BB8BE27F6168_gshared_inline (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFAB59075C004C7789DA644F39E75D443DB3BB29B_gshared (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m10FBAFFC7FE5EB92D3F01083A7FF7694FBD85FBC_gshared (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD16022D4A5D06BAF031439184A09FA0B659CFEC8_gshared_inline (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8359981C9C44CEFAD685D6C22E49BC70E7ACA7E2_gshared (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594_gshared (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_gshared_inline (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_gshared_inline (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5903DD50B3329A1403CD3327D82EEE12EC7FEA71_gshared_inline (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4_gshared (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9C3415BA508E4AF0A2B4FC2E3502B9C23A7CBA7F_gshared (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m72D6E76CBA247928654820A5A0CC1C2FDA961439_gshared_inline (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC94B8AAF3A95E1E7F9452B1D6B0081F7F7A67594_gshared (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m0C23B4E01FFDCAB1BD8BC6F059200275941173DC_gshared_inline (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8CF9934E77E34F556FBA24C147E254C5CFC924D1_gshared (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mC620087CFE80E373940239493AF88242386734F4_gshared_inline (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0C736188EDFFE32AB15CA42E5CAF6448966D7802_gshared (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617_gshared (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_gshared_inline (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC9771FD810A0346CDC317D6BD7143A93AC8B1ADB_gshared_inline (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mD8528092C448FCBCE637FA2906990AC587286B9F_gshared_inline (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mE36CAA341FFDEA72D043824CA9EECE531922B64F_gshared_inline (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694_gshared (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC_gshared (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB_gshared (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* __this, RuntimeObject* ___0_source, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13_gshared (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD_gshared (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* __this, RuntimeObject* ___0_source, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3_gshared (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143_gshared (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22_gshared (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43_gshared (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* __this, RuntimeObject* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mBB8CAC6EFDF890C52EA1A7FB6BDC74AE46893959_gshared_inline (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m560E811D260AAF22D1BA93E1E806D01D6912EB1F_gshared (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5_gshared (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_gshared_inline (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mED2D0AC4D1A7A591A154C30875FE4E98D6CBC2FF_gshared_inline (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m4DF4F7C778C6FA0551F7553C2CDAEC9FC552AFBC_gshared_inline (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCA6E1000E87F5A3E5777DB083816D433BDB80B69_gshared_inline (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5_gshared (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B_gshared (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___0_source, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80AF6105CB27DF6369202AD41CC26392A6998667_gshared (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815_gshared (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_gshared_inline (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_gshared_inline (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m95750C6A27E298B963955DBC2590791BC7D2262B_gshared_inline (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C_gshared (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEF8E5E1021366219EA710813CF8A96753ADEE8CC_gshared (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m30E2725B162D3AB358E1141C46D73092A3E2B281_gshared_inline (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5AB733093BE4F56FA37CC63B811ABC83B70D8359_gshared (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mB86F7566E04338542E7A9D7FAE73DFEF27372933_gshared_inline (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared (RuntimeObject** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mF71967CAF54FC4BE3088E1DA80CCB31E16A37233 (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF*, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*, Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF71967CAF54FC4BE3088E1DA80CCB31E16A37233_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE List_1_GetEnumerator_m8FB67682855433314971B9405D3A33D6A85A4990 (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE (*) (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*, const RuntimeMethod*))List_1_GetEnumerator_m8FB67682855433314971B9405D3A33D6A85A4990_gshared)(__this, method);
}
inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_inline (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F (*) (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*, const RuntimeMethod*))Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_inline (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*))Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_gshared_inline)(__this, ___0_arg, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m2F6A22D93F44BB5152EDA8939B02BB8BE27F6168_inline (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*))Func_2_Invoke_m2F6A22D93F44BB5152EDA8939B02BB8BE27F6168_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mFAB59075C004C7789DA644F39E75D443DB3BB29B (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*, const RuntimeMethod*))Enumerator_MoveNext_mFAB59075C004C7789DA644F39E75D443DB3BB29B_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m10FBAFFC7FE5EB92D3F01083A7FF7694FBD85FBC (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282*, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*, Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m10FBAFFC7FE5EB92D3F01083A7FF7694FBD85FBC_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mD16022D4A5D06BAF031439184A09FA0B659CFEC8_inline (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*))Func_2_Invoke_mD16022D4A5D06BAF031439184A09FA0B659CFEC8_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8359981C9C44CEFAD685D6C22E49BC70E7ACA7E2 (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC*, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*, Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8359981C9C44CEFAD685D6C22E49BC70E7ACA7E2_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594 (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 (*) (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*, const RuntimeMethod*))List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594_gshared)(__this, method);
}
inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_inline (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 (*) (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*, const RuntimeMethod*))Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_inline (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*))Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m5903DD50B3329A1403CD3327D82EEE12EC7FEA71_inline (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*))Func_2_Invoke_m5903DD50B3329A1403CD3327D82EEE12EC7FEA71_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4 (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*, const RuntimeMethod*))Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m9C3415BA508E4AF0A2B4FC2E3502B9C23A7CBA7F (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A*, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*, Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9C3415BA508E4AF0A2B4FC2E3502B9C23A7CBA7F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m72D6E76CBA247928654820A5A0CC1C2FDA961439_inline (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*))Func_2_Invoke_m72D6E76CBA247928654820A5A0CC1C2FDA961439_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mC94B8AAF3A95E1E7F9452B1D6B0081F7F7A67594 (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A*, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*, Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mC94B8AAF3A95E1E7F9452B1D6B0081F7F7A67594_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m0C23B4E01FFDCAB1BD8BC6F059200275941173DC_inline (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*))Func_2_Invoke_m0C23B4E01FFDCAB1BD8BC6F059200275941173DC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_tA526681EE526C81F376160E44520BDC21770A705*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, const RuntimeMethod*))List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared)(__this, method);
}
inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tA526681EE526C81F376160E44520BDC21770A705*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39 (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8CF9934E77E34F556FBA24C147E254C5CFC924D1 (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8CF9934E77E34F556FBA24C147E254C5CFC924D1_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mC620087CFE80E373940239493AF88242386734F4_inline (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_mC620087CFE80E373940239493AF88242386734F4_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1 (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m0C736188EDFFE32AB15CA42E5CAF6448966D7802 (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0C736188EDFFE32AB15CA42E5CAF6448966D7802_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617 (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 (*) (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, const RuntimeMethod*))List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617_gshared)(__this, method);
}
inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_inline (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_mC9771FD810A0346CDC317D6BD7143A93AC8B1ADB_inline (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))Func_2_Invoke_mC9771FD810A0346CDC317D6BD7143A93AC8B1ADB_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7 (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379 (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mD8528092C448FCBCE637FA2906990AC587286B9F_inline (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))Func_2_Invoke_mD8528092C448FCBCE637FA2906990AC587286B9F_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21 (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mE36CAA341FFDEA72D043824CA9EECE531922B64F_inline (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))Func_2_Invoke_mE36CAA341FFDEA72D043824CA9EECE531922B64F_gshared_inline)(__this, ___0_arg, method);
}
inline void Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694 (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*, const RuntimeMethod*))Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B (*) (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, const RuntimeMethod*))List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC_gshared)(__this, method);
}
inline ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline)(__this, ___0_arg, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5 (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* __this, RuntimeObject* ___0_source, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*, RuntimeObject*, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63 (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13 (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*, const RuntimeMethod*))Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method)
{
	return ((  LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB (*) (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* __this, RuntimeObject* ___0_source, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*, RuntimeObject*, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3 (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*, const RuntimeMethod*))Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7 (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4*, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, Func_2_t28B89F577966ACE68E85C35C084880FB68397861*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143 (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 (*) (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*, const RuntimeMethod*))List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143_gshared)(__this, method);
}
inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method)
{
	return ((  HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*) (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*, const RuntimeMethod*))Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*))Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline)(__this, ___0_arg, method);
}
inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method)
{
	return ((  HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*) (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*))Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22 (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*, const RuntimeMethod*))Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43 (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* __this, RuntimeObject* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E*, RuntimeObject*, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4 (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*, int32_t, const RuntimeMethod*))Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5 (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196 (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mBB8CAC6EFDF890C52EA1A7FB6BDC74AE46893959_inline (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*, int32_t, const RuntimeMethod*))Func_2_Invoke_mBB8CAC6EFDF890C52EA1A7FB6BDC74AE46893959_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7 (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, int32_t, const RuntimeMethod*))Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m560E811D260AAF22D1BA93E1E806D01D6912EB1F (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m560E811D260AAF22D1BA93E1E806D01D6912EB1F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5 (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5_gshared)(__this, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_inline (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_mED2D0AC4D1A7A591A154C30875FE4E98D6CBC2FF_inline (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))Func_2_Invoke_mED2D0AC4D1A7A591A154C30875FE4E98D6CBC2FF_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7 (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m4DF4F7C778C6FA0551F7553C2CDAEC9FC552AFBC_inline (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))Func_2_Invoke_m4DF4F7C778C6FA0551F7553C2CDAEC9FC552AFBC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mCA6E1000E87F5A3E5777DB083816D433BDB80B69_inline (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))Func_2_Invoke_mCA6E1000E87F5A3E5777DB083816D433BDB80B69_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5 (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5_gshared)(__this, method);
}
inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8 (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561 (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B_gshared)(__this, method);
}
inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5 (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9 (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5 (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*, const RuntimeMethod*))Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared)(__this, method);
}
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline)(__this, ___0_arg, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6 (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987 (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___0_source, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*, RuntimeObject*, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5 (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared)(__this, method);
}
inline float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, float, const RuntimeMethod*))Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, float, const RuntimeMethod*))Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209 (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030 (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tB0A053D611A12E64831578506F155296DD632944*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tB0A053D611A12E64831578506F155296DD632944*, float, const RuntimeMethod*))Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287 (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, float, const RuntimeMethod*))Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829 (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264 (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared)(__this, method);
}
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83 (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared)(__this, method);
}
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15 (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m80AF6105CB27DF6369202AD41CC26392A6998667 (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6*, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*, Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m80AF6105CB27DF6369202AD41CC26392A6998667_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815 (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD (*) (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*, const RuntimeMethod*))List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815_gshared)(__this, method);
}
inline SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_inline (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* __this, const RuntimeMethod* method)
{
	return ((  SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C (*) (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*, const RuntimeMethod*))Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_inline (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*))Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m95750C6A27E298B963955DBC2590791BC7D2262B_inline (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*))Func_2_Invoke_m95750C6A27E298B963955DBC2590791BC7D2262B_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*, const RuntimeMethod*))Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mEF8E5E1021366219EA710813CF8A96753ADEE8CC (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9*, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*, Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mEF8E5E1021366219EA710813CF8A96753ADEE8CC_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m30E2725B162D3AB358E1141C46D73092A3E2B281_inline (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*))Func_2_Invoke_m30E2725B162D3AB358E1141C46D73092A3E2B281_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m5AB733093BE4F56FA37CC63B811ABC83B70D8359 (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF*, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*, Func_2_tE430274101A35C9C0B5469132139AD0BA5035667*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5AB733093BE4F56FA37CC63B811ABC83B70D8359_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mB86F7566E04338542E7A9D7FAE73DFEF27372933_inline (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*))Func_2_Invoke_mB86F7566E04338542E7A9D7FAE73DFEF27372933_gshared_inline)(__this, ___0_arg, method);
}
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507_mF46512CB8E82FDFE361A83FB9D6C6A0FFE567B60 (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A_m41297B9656855D65846598E02A0081FD493B75C9 (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960_mC50F34E55EE50A542A52AA68D9CCB44BBC4B3433 (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, il2cppRetVal, method);
}
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)(__this, method);
}
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___0_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF71967CAF54FC4BE3088E1DA80CCB31E16A37233_gshared (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m491E521A4C3B99D7516EE492361BCF176E76A9C6_gshared (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, const RuntimeMethod* method) 
{
	{
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_0 = (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*)__this->___source_3;
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_1 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* L_2 = (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44*)__this->___selector_5;
		WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* L_3 = (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mF71967CAF54FC4BE3088E1DA80CCB31E16A37233(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0FBDD11D6B4849E1E8BC3B8D80E9B59C108E6049_gshared (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_3 = (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE L_4;
		L_4 = List_1_GetEnumerator_m8FB67682855433314971B9405D3A33D6A85A4990(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* L_5 = (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*)(&__this->___enumerator_6);
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_6;
		L_6 = Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_7 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_8 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* L_11 = (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44*)__this->___selector_5;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m2F6A22D93F44BB5152EDA8939B02BB8BE27F6168_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* L_14 = (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFAB59075C004C7789DA644F39E75D443DB3BB29B(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m75F9A80AF4D7508A0805C9C78468EA178ACC77F5_gshared (WhereSelectListIterator_2_t1CAC6DF4169AC6E1F823B5596E4B82D0781359FF* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m10FBAFFC7FE5EB92D3F01083A7FF7694FBD85FBC_gshared (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* ___0_source, Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* ___1_predicate, Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m88136D285793307C445EFB7A6BAE32BAD0DB2991_gshared (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, const RuntimeMethod* method) 
{
	{
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_0 = (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*)__this->___source_3;
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_1 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* L_2 = (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384*)__this->___selector_5;
		WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* L_3 = (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m10FBAFFC7FE5EB92D3F01083A7FF7694FBD85FBC(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF689C458DBA6D60197615A79F60A4148C171B8BD_gshared (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54* L_3 = (List_1_t76FAF8D3D0068FAA767C4D52C2EAE9F977192D54*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE L_4;
		L_4 = List_1_GetEnumerator_m8FB67682855433314971B9405D3A33D6A85A4990(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* L_5 = (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*)(&__this->___enumerator_6);
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_6;
		L_6 = Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_7 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* L_8 = (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C*)__this->___predicate_4;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* L_11 = (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384*)__this->___selector_5;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mD16022D4A5D06BAF031439184A09FA0B659CFEC8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* L_14 = (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFAB59075C004C7789DA644F39E75D443DB3BB29B(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5F6DA9D27A2A1EA966EE1BAC12DDD11899FBC447_gshared (WhereSelectListIterator_2_tDC9013A26EADEA5DBE96D491444CC71215FDC282* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8359981C9C44CEFAD685D6C22E49BC70E7ACA7E2_gshared (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mE87023C7E9426168BD4AE4E36BA8992B8B280376_gshared (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* L_2 = (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D*)__this->___selector_5;
		WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* L_3 = (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8359981C9C44CEFAD685D6C22E49BC70E7ACA7E2(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA1C33BEFA51B8AF584606182837A9163D3F5BF2A_gshared (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_3 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 L_4;
		L_4 = List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_5 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_6;
		L_6 = Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_7 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_8 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* L_11 = (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D*)__this->___selector_5;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5903DD50B3329A1403CD3327D82EEE12EC7FEA71_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_14 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9EB4110B6C86DF349328823DD127E9B610C40E88_gshared (WhereSelectListIterator_2_t9DA630BA95295A8FC9EB3BFC1C5F95A4981206DC* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9C3415BA508E4AF0A2B4FC2E3502B9C23A7CBA7F_gshared (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m07B5DA4A0C983C6BFE264B1DC222C16478EE01E4_gshared (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* L_2 = (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D*)__this->___selector_5;
		WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* L_3 = (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9C3415BA508E4AF0A2B4FC2E3502B9C23A7CBA7F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDE582FF7AF688FA78B7A91DA5426C7AA413F66C7_gshared (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_3 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 L_4;
		L_4 = List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_5 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_6;
		L_6 = Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_7 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_8 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* L_11 = (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D*)__this->___selector_5;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m72D6E76CBA247928654820A5A0CC1C2FDA961439_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_14 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m15B5452E50F1C283CBC619A5D4101767A958C82B_gshared (WhereSelectListIterator_2_tF1743DE899867D8D696769A94AEC0670DBF8774A* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC94B8AAF3A95E1E7F9452B1D6B0081F7F7A67594_gshared (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* ___0_source, Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* ___1_predicate, Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m04281B42D4EC7AC9EE2F6995EFE898E532789E48_gshared (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_0 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_1 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* L_2 = (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2*)__this->___selector_5;
		WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* L_3 = (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mC94B8AAF3A95E1E7F9452B1D6B0081F7F7A67594(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4D5BD7972E8EB2165CE2C8FDAD0E002ACE556741_gshared (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0* L_3 = (List_1_tD0A736394A4C31ADA6457F0720BD2BEAAD71A6D0*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993 L_4;
		L_4 = List_1_GetEnumerator_m1037276870EA103BA2A11C3853C00A0F10945594(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_5 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_6;
		L_6 = Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_7 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* L_8 = (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18*)__this->___predicate_4;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* L_11 = (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2*)__this->___selector_5;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m0C23B4E01FFDCAB1BD8BC6F059200275941173DC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* L_14 = (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7D4B973586A87D0321E3C4DEEA705D75CE65AFA4(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD42C539C6C97B469B98EAB87566CBEB9D618F299_gshared (WhereSelectListIterator_2_tE7F05D9806D1AC34C1233E21A382BA757795401A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tA526681EE526C81F376160E44520BDC21770A705* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m5543BC2ADA2036AEA8AD33BB33B715E67B25E425_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_2 = (Func_2_tA526681EE526C81F376160E44520BDC21770A705*)__this->___selector_5;
		WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* L_3 = (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9E7D9C2AC5C4EE62428D630E2153A54CA911CEAF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE1D16DDBA8514349D61E5734B72CDE6E55D0E7E4_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA526681EE526C81F376160E44520BDC21770A705* L_11 = (Func_2_tA526681EE526C81F376160E44520BDC21770A705*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6068BC7507F99A18650B2195728A397A4B255F95_gshared (WhereSelectListIterator_2_t984D9217719A2864144A476CBB92FB7754CC788F* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8CF9934E77E34F556FBA24C147E254C5CFC924D1_gshared (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m224936EADFF39FB165B8E683A03720E12EBF5769_gshared (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* L_2 = (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC*)__this->___selector_5;
		WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* L_3 = (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8CF9934E77E34F556FBA24C147E254C5CFC924D1(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1B2CD46AA49F5A7912E55101F3680FBBE6874521_gshared (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* L_11 = (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mC620087CFE80E373940239493AF88242386734F4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF466E2AD0D183671A860C263C4630058A407D1EB_gshared (WhereSelectListIterator_2_t5FF4F072EAA67D8846B9E0A3B60E8BB0B24B79EB* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7549B7E49F1A52E465C4F9B0827E3A9241D0C573_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* L_3 = (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m96C28F46AFA617F5C19FFC661CD4F9E63BE75103_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_11 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2F81906E04BD7F8616E72DD5160FE9BB1D207D35_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0C736188EDFFE32AB15CA42E5CAF6448966D7802_gshared (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m4CCCBEA1CD5B455F7F1BFA2305BCAC29E3078D79_gshared (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* L_2 = (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4*)__this->___selector_5;
		WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* L_3 = (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m0C736188EDFFE32AB15CA42E5CAF6448966D7802(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA821008A222AF2C3B0B353815F3C252AB14C1C91_gshared (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* L_11 = (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mC9771FD810A0346CDC317D6BD7143A93AC8B1ADB_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEF00814F1E99BBCC30A53399D8B85826BE93477_gshared (WhereSelectListIterator_2_t216412FEB3391E7D14367C5524CC46082B1E583A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m694C23A4B41ECADFC4B3DE36DC22612D1A1DAA98_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_2 = (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*)__this->___selector_5;
		WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* L_3 = (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m456B8B16ACC5F9621BDD8BFE7C5703C56CE2DFEB_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_11 = (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mD8528092C448FCBCE637FA2906990AC587286B9F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED68DEB8E7E78B34B6D78F7651E81AECA2495CED_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___0_source, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___1_predicate, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m8635A10BD8B76832003D82090DE167DD6CF91F1D_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* L_3 = (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF87683433A907EC64C1163940FD77B7B240EFAD1_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = List_1_GetEnumerator_mC348850B6A5BCD026D7DE9E738D73E6B39622617(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_11 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mE36CAA341FFDEA72D043824CA9EECE531922B64F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCF386B618FAA2832977C3F95A2465C8698280DD8_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0397D9777395ACDDD4910C22AD5CB9D820F9B694((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* WhereSelectListIterator_2_Clone_mA1AE1A51E11723EC85F03021507B3634C1D64580_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* L_3 = (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8B6AB5314BB7E9C2FC62357670E901C0D40B0C25_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_11 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBA9EAF462530A792C1EBBA1A5B7D748399E500E4_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* L_1 = (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mDE3E3BFAAECCB1C948A4EAE995827BA61C8229CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mE32C10001585143D33C8C03C94D8B3FC38473618_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* L_3 = (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m27E92E918634190C912ACC889DFA23AF8ACB11C6_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_11 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1C5509878B9B4DFBFC85E633339AC802F221ABB0_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___0_source, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___1_predicate, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1E7752C201FADE3311855B57586F297A5EB34E13((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* WhereSelectListIterator_2_Clone_mB3426B2435DB4C6FF9ED2D97EAEA54214C511BC6_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* L_3 = (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5DDB57FD52DB3C0CEB20436C511C5C36D858C935_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = List_1_GetEnumerator_m7E3F4B5D9BB5E07987DC9900E65D7F19F1EE9EFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_11 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_13;
		L_13 = Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8C11C42C5D6791545B8E6E5E688620AABF327963_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* L_1 = (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m617A1F0E762F491EEFD26C596E9100518BDBA4AD(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* WhereSelectListIterator_2_Clone_m4A23AB9C7251D71D26DAFE5BB560E531ECCDDE10_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_0 = (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*)__this->___source_3;
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_1 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_2 = (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*)__this->___selector_5;
		WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* L_3 = (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAA77A791BE3D5D989777DA8140CE7CD0F0335E60_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_3 = (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 L_4;
		L_4 = List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* L_5 = (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*)(&__this->___enumerator_6);
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_6;
		L_6 = Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_7 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_8 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_11 = (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*)__this->___selector_5;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_12 = V_1;
		NullCheck(L_11);
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_13;
		L_13 = Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* L_14 = (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED77F102E1763A235979871C9DF710030A22ADAC_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* L_1 = (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m89B70C1B596662479F7844116D9B99FE501BFD84_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* L_3 = (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA4673028DAC84866E54385B22CBEFC22D92BC9CD_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B1D8127CD81AE6BA9FA935CA573327EACB64820_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m551DB82C97B0D14CD1CAB4742072C5086988C8F4_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_2 = (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*)__this->___selector_5;
		WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* L_3 = (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9157C66EF2FA3246129237E64468ED7084177DC1_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_11 = (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m733ADF7FB8076669C0869C174979CE46A370EC47_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m02305DD4136C7D986273157CB0641C4802925481_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_2 = (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*)__this->___selector_5;
		WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* L_3 = (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0B0DC5484A333DC7C274DF4B81E8E81108F738DA_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_11 = (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mBB8CAC6EFDF890C52EA1A7FB6BDC74AE46893959_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD3B8013D29C5A394A6A490F1B58A50D7EAE81ABC_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mEB021C37D21C588BD23B2E31E94B78EECAC70ECC_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* L_3 = (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC4C73B9B34878E32FE1CE9D39506A38A51D3647E_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_11 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m73B23853246474AB894F5475C49165E061CFE8AE_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m560E811D260AAF22D1BA93E1E806D01D6912EB1F_gshared (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m12A383AC0565948532B62905E62A4D4C4237ED96_gshared (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* L_2 = (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13*)__this->___selector_5;
		WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* L_3 = (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m560E811D260AAF22D1BA93E1E806D01D6912EB1F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m21E18A681C5C2010912DB264692C7D0501BF81F6_gshared (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* L_11 = (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mED2D0AC4D1A7A591A154C30875FE4E98D6CBC2FF_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD06439F6474BE67ECAE9873625E9DA43F2FB4ED0_gshared (WhereSelectListIterator_2_t72F7F0B0B6614C06BF7822AED0653A79051BE1A6* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m937D5D1B7EC49BC4FAFEF932971777D72EED049F_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* L_3 = (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m08D934685D1F2120D36F9765312FE73F71D11A0C_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_11 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m4DF4F7C778C6FA0551F7553C2CDAEC9FC552AFBC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBD04923D351FA549D359E8DE870BC9B749151AD5_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6278EB80D90415F83BFDB8B5371391F709708653_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* L_3 = (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0CB70971EBB16282B0C9F4643F3FD2738E5BD75E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = List_1_GetEnumerator_m29A75776B211A8A73BA0F0BDD4EE3F8AFB4F57D5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_11 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mCA6E1000E87F5A3E5777DB083816D433BDB80B69_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m47E63372073B7C4C5AD7436694EFC21E163DF15E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m8DC967543F35E54B736058BC2D3FCFFE921A8052_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_2 = (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*)__this->___selector_5;
		WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* L_3 = (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m66117FFE58A7C34134453BB6CF84EAC44E88EA11_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_11 = (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m65D6C37E9192A0D08B671B89109DC9A4D75EA41F_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m796C8279CEB66ADDC80A7EAC36AEE08605979787_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* L_3 = (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAFCE990F26EBDDF656AA01807375D36544C63124_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_11 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1B9A768C2B1A26E615BCDB10078F5231CF0C4ADC_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___0_source, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___1_predicate, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF2790E5EEE1D2834008B9010A19FF3E957831704_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* L_3 = (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m238375EE3AAF7B4CE3F25C85030EB4F8692B3BC9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_11 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA426094A845A1CE82FF3AD1193681948DA7603C9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m681F413FC2C5FE51B87C7ED65EF60F4B41DA6CF2_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_2 = (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*)__this->___selector_5;
		WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* L_3 = (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBD8DBE1B22CA9AE5EF4CE2F335A919B5C66679F8_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_11 = (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m40B821BD9576B72161380E66E341A5A0DE235742_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m89C4946CF9C7CA28F2091618685B85AA11EA3E87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* L_3 = (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7DCCE086E23C0D68D4F9AEF5E70291B76432AAF1_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_11 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC6AFE32AA08E2CBC27F4433BA2319CA59306DC87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___0_source, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___1_predicate, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D39A066ED4134383555E981E6798ABE193987FA_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* L_3 = (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA38FDC21AFF8361AF5116FA137FCCBCACEA1AD47_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_11 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m760B5F9924376AD216CBF0E0478787D491BBCC1C_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m62045FC9E5DDF7C34F754695E9EBF13C4326DCE8_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* L_3 = (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE97A1BC013242BE83F2417B94F433533ECA0BE17_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3FE0D83DC912C8134BC2E276A0BBBF78E7CCDFF2_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mF42081341BA80585066D84F1EB99058CEAEB9529_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* L_3 = (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m800FE72E92DE905CEB928E72485F8A74DDBFFEF0_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_11 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEA53E9D37F0B4DB9D0E1D26336E8203C5080814B_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* WhereSelectListIterator_2_Clone_m47AED1BFB1424EA5DD7CD462A74B68318FAF25DD_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* L_3 = (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6E59DFD08E06CE99C6F1B2E476F96CE1407BBBF7_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_3 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_4;
		L_4 = List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_5 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_7 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_8 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_11 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_1;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_14 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3F7CA31CDB32C704C8A775637B425248EC96913B_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* L_1 = (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m83103F083E2774F63DCAF44EEA4FDA620666A842_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* L_3 = (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5EE4A67650BDA6399B4D4CCBA4C6FAF5DBD891CC_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_11 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA93495B19C8B7D4C3787E3E17F2EE687BBCAA203_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mA0362CF7356220FFEE8398D75DBBF8A56EF00E2E_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_2 = (Func_2_tB0A053D611A12E64831578506F155296DD632944*)__this->___selector_5;
		WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* L_3 = (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m42F09D1899B886163544FA2526D6003330C1571B_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_11 = (Func_2_tB0A053D611A12E64831578506F155296DD632944*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m68075FABD2216D8D4854D3ADCE10291091F1D306_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m4C5B47918993CE67EEDF80BB4EEB316D15EB817E_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* L_3 = (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m365018BB1C5782BD2AAFBA88AE5D47F6CECDB135_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_11 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1471483926B9C1FB36A517E3AF0FB642126DFCF2_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m203266656A861AB9FCE85C6265CBB81759D6EC78_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* L_3 = (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m441444FFC4A56B13F1DCFA2E6C732972CC286B71_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_11 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B9342EC90171F99141E32C1E7D1126C61888256_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mAA6E54E622F7BE663D868824A8964114883CF9B8_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*)__this->___selector_5;
		WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* L_3 = (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3C3E603A5CAAA0B3816226A84D4D8695B2A8033B_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_11 = (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA5DFDE58967126D391822B5CCAEAD14051DD8CF3_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m7514B4D4CA43073C8D6D3B10D6B33C562464A0C8_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* L_3 = (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9801C3269DA1FCC381EED100CE2C710B10873FDE_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_11 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m54A65CB2977BDF55DA3004F81CF889F22E233DE9_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m017DDC5605971EF6DC6E63CC46E9C1FF67ECF3C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*)__this->___selector_5;
		WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* L_3 = (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2745F3BB6FB127C4C57AA2EC540DEAA7A89D622_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_11 = (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF06218BFCB481A4B87E64900FBFE9FDABB11A7C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80AF6105CB27DF6369202AD41CC26392A6998667_gshared (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD34E1F98DA66D0B4E46CB8CDD8C94C4297A2FC87_gshared (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* L_2 = (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A*)__this->___selector_5;
		WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* L_3 = (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m80AF6105CB27DF6369202AD41CC26392A6998667(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5C53C0864B6C1DA49D0CDE671A1A912F80484539_gshared (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_3 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD L_4;
		L_4 = List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_5 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6;
		L_6 = Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_7 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_8 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* L_11 = (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A*)__this->___selector_5;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m95750C6A27E298B963955DBC2590791BC7D2262B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_14 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5B5B6D58512245D60DF2E7AB20D96ED0903C02F3_gshared (WhereSelectListIterator_2_t6538FFC9AC50BA7B84EC8373D9CE7108126108C6* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEF8E5E1021366219EA710813CF8A96753ADEE8CC_gshared (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mDCE54895C1F43527591420CDB925A08597AAF2AA_gshared (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* L_2 = (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A*)__this->___selector_5;
		WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* L_3 = (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mEF8E5E1021366219EA710813CF8A96753ADEE8CC(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3922B69F8F7B710759027C0BDFB2A740833BA9A1_gshared (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_3 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD L_4;
		L_4 = List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_5 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6;
		L_6 = Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_7 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_8 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* L_11 = (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A*)__this->___selector_5;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m30E2725B162D3AB358E1141C46D73092A3E2B281_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_14 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFD8975581D4D69ADE6D10E6BFEBB1476CB2EAFEA_gshared (WhereSelectListIterator_2_t9BAA88FA66E0090720E548C9308FA202EF3868A9* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5AB733093BE4F56FA37CC63B811ABC83B70D8359_gshared (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* ___0_source, Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* ___1_predicate, Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m956BE65C7CE4FF70556DAF7AFE1AEA9A86AF5C12_gshared (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_0 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_1 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* L_2 = (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667*)__this->___selector_5;
		WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* L_3 = (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5AB733093BE4F56FA37CC63B811ABC83B70D8359(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m807F21B1E122B18A767626A408ADA9CF1FECBC85_gshared (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2FCEA7635AA5C3B22E982462685B40276413F521* L_3 = (List_1_t2FCEA7635AA5C3B22E982462685B40276413F521*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD L_4;
		L_4 = List_1_GetEnumerator_mFBCD305E26DF17679838A948438689EDF77B2815(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_5 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6;
		L_6 = Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_7 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* L_8 = (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F*)__this->___predicate_4;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* L_11 = (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667*)__this->___selector_5;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mB86F7566E04338542E7A9D7FAE73DFEF27372933_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* L_14 = (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCB42E419D21E31671FC2959177DC4A6FA1C2D58C(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB581AD9677DB616541543820E110A48068C01A3F_gshared (WhereSelectListIterator_2_tE396AA1B83A0826B162891EF9D741EA9C4D738AF* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* V_0 = NULL;
	WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507_mF46512CB8E82FDFE361A83FB9D6C6A0FFE567B60((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m589391B12E05BAAED6C3E9BD7971B2A9ABB61855_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* V_0 = NULL;
	WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A_m41297B9656855D65846598E02A0081FD493B75C9((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_mFBAE16E1599FD53C4310CC682EA6A6D77708CD48_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___value_8);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, (*L_0));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* V_0 = NULL;
	WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960_mC50F34E55EE50A542A52AA68D9CCB44BBC4B3433((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m559746678D2E800FBF20AA902184BB03ABD5963E_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		float* L_0 = (float*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* WitEntityDataBase_1_FromEntityWitResponseNode_m2A96C59D1D12FDCB580D1C1F2F77E5978FA7B7CD_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* V_0 = NULL;
	WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		il2cpp_codegen_write_instance_field_data<WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ((  bool (*) (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m2EDC565705637A5D658625C85550EC6591E2878C_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
	String_t* V_0 = NULL;
	{
		String_t* L_1;
		L_1 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m262E6B88066F73CF24A328EBCEDEB83B1357B84B_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start_1 = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001f:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		int32_t L_7 = (int32_t)__this->___m_Start_1;
		int32_t L_8 = (int32_t)__this->___m_Length_2;
		int32_t L_9;
		L_9 = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Start_1;
		int32_t L_5 = (int32_t)__this->___m_Length_2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_6 = ___0_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start_1 = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		int32_t L_7 = (int32_t)__this->___m_Start_1;
		int32_t L_8 = (int32_t)__this->___m_Length_2;
		int32_t L_9;
		L_9 = ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Start_1;
		int32_t L_5 = (int32_t)__this->___m_Length_2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_6 = ___0_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start_1 = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001f:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		int32_t L_7 = (int32_t)__this->___m_Start_1;
		int32_t L_8 = (int32_t)__this->___m_Length_2;
		int32_t L_9;
		L_9 = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_2 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Start_1;
		int32_t L_5 = (int32_t)__this->___m_Length_2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_6 = ___0_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___0_extractKey;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		NullCheck(L_43);
		bool L_47;
		L_47 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___3_value;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___1_newValue;
		RuntimeObject* L_1 = ___0_value;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___0_value;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___1_newValue;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___3_count;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___1_key;
		int32_t L_40 = ___2_index;
		String_t* L_41 = V_2;
		int32_t L_42 = ___3_count;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___4_entryIndex;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___4_entryIndex;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_45 = L_13;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_10 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_11 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_21;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_3 = L_24;
	}

IL_009f:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a7:
	{
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_30)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		V_0 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_32)->max_length)), 2));
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_34 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_35 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		int32_t L_36 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_37 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_37, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_37;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_43 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_42);
		bool L_46;
		L_46 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_45: *(void**)L_45), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_47 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_5 = L_49;
	}

IL_0130:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013b:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_54 = V_1;
		return L_54;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_17, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_18 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_20);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_27 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), L_29, 0, NULL);
		V_1 = L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_1;
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_33 = V_3;
		String_t* L_34 = V_2;
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		bool L_37;
		L_37 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_33, L_34, 0, L_36, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_37)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_38 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_39 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_41, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_41);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_9 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_13 = (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this->____extractKey_3;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_14 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_13);
		String_t* L_17;
		L_17 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_16: *(void**)L_16));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_24 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_26;
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_29 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_30);
		int32_t L_31 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1))))), (int32_t)L_31);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_32 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_34);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_35 = ___3_count;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_38 = ___1_key;
		int32_t L_39 = ___2_index;
		String_t* L_40 = V_2;
		int32_t L_41 = ___3_count;
		int32_t L_42;
		L_42 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_38, L_39, L_40, 0, L_41, NULL);
		if (L_42)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_43 = ___4_entryIndex;
		int32_t L_44 = V_1;
		*((int32_t*)L_43) = (int32_t)L_44;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_45 = V_1;
		V_0 = L_45;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_46 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)__this->____entries_1;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_48;
	}

IL_00f9:
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_50 = ___4_entryIndex;
		int32_t L_51 = V_0;
		*((int32_t*)L_50) = (int32_t)L_51;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		RuntimeObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m02EC85BAE95B9D0C95EA3184815B5CCFBB2F0895_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___m_Running_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_mDCB36A022152056BF8CCA7631E957B93D40263FC_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		VirtualActionInvoker0::Invoke(10, (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		VirtualActionInvoker0::Invoke(14, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_mFBBF6A8276D64C60D9CFC25A68C047179A71DA73_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = (bool)__this->___m_Running_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0017:
	{
		__this->___m_Running_0 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mD4AF4F9D7701970C2478F1B27FE8DD1BA2664D7F_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = (bool)__this->___m_Running_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		VirtualActionInvoker0::Invoke(13, __this);
	}

IL_0014:
	{
		__this->___m_Running_0 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_m7B4C8C5A1B99CEEDD98E8B4E564BBCAD0CF8D17A_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F Enumerator_get_Current_mAD5F7ED646B0B46E1B9BD0745C91677FC3101223_gshared_inline (Enumerator_tA0B01774C21DF8FFB16811CA6CB92C23C82111FE* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_0 = (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mAD143460B9F7A33E9D67CC2090E969366C04CB79_gshared_inline (Func_2_t614979E2AC81C7FE99D5A60F63345019CAF6711C* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m2F6A22D93F44BB5152EDA8939B02BB8BE27F6168_gshared_inline (Func_2_tE4BD87A0D34939F9E4ACFB9FD2E91467F181CD44* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD16022D4A5D06BAF031439184A09FA0B659CFEC8_gshared_inline (Func_2_t388D22D2DD3188B0A0CD580CFAE5587824B0E384* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m0FA75CF4EDF310F67BF737E0919FDA10AB791CE7_gshared_inline (Enumerator_tAD3A3CF1E4957809FFB69EF614BB060663321993* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_0 = (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m089CEB45EEB1C10A50DBC4F54885589C76B2EAC2_gshared_inline (Func_2_t42B3FD16B2CF503DC28052E64E3A0C3CB4A30E18* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5903DD50B3329A1403CD3327D82EEE12EC7FEA71_gshared_inline (Func_2_tFF3B58A560ADA6F98F66592FD510F17022B1275D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m72D6E76CBA247928654820A5A0CC1C2FDA961439_gshared_inline (Func_2_tB0A64BBAAE443FD95D03EE7D71835B655F52B66D* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m0C23B4E01FFDCAB1BD8BC6F059200275941173DC_gshared_inline (Func_2_t652A8B4FB91E3D4BCDF29C3975DDBC1B2C6B49D2* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m18A3A6EDA433C635C66C43DA6B86F7BC746BFDD0_gshared_inline (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m450153F6300275E6112B4346D2EF20A15EB7091E_gshared_inline (Func_2_tA526681EE526C81F376160E44520BDC21770A705* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mC620087CFE80E373940239493AF88242386734F4_gshared_inline (Func_2_t704E02C4F85762552825E96EBE7454A3B35487BC* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m8EC2E5D1BEEA74F624F19C59924823693B9B39A5_gshared_inline (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_0 = (KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m3EFCA43071E49247CA187C6905BBE3AD2919734F_gshared_inline (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC9771FD810A0346CDC317D6BD7143A93AC8B1ADB_gshared_inline (Func_2_tB5C6155FEB0CE729BFB648BFEB2A7126A24677F4* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mD8528092C448FCBCE637FA2906990AC587286B9F_gshared_inline (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mE36CAA341FFDEA72D043824CA9EECE531922B64F_gshared_inline (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* __this, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) 
{
	{
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_0 = (ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m6AFC38149A32AA924DD5FAFEF1D4ACEB8C691402_gshared_inline (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m9EA905DC619480CDE0E67494A0B590F4587B69FC_gshared_inline (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) 
{
	typedef Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mA0E5A81A2F085F4A8D1963F3F3C1DC55488C044B_gshared_inline (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB Func_2_Invoke_m3297D4BDAF118B55261893BBB37F126354BFE22A_gshared_inline (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_arg, const RuntimeMethod* method) 
{
	typedef LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB (*FunctionPointerType) (RuntimeObject*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) 
{
	{
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_0 = (HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) 
{
	typedef HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*FunctionPointerType) (RuntimeObject*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mBB8CAC6EFDF890C52EA1A7FB6BDC74AE46893959_gshared_inline (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDA1881613DBD7FA5B08D09294EC8EC31432B6856_gshared_inline (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mED2D0AC4D1A7A591A154C30875FE4E98D6CBC2FF_gshared_inline (Func_2_t80A37D019AF2DC81EDD76E4E327FDBD8ABBD1A13* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m4DF4F7C778C6FA0551F7553C2CDAEC9FC552AFBC_gshared_inline (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCA6E1000E87F5A3E5777DB083816D433BDB80B69_gshared_inline (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) 
{
	{
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_0 = (NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) 
{
	{
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_0 = (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) 
{
	typedef Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (Substring_t2E16755269E6716C22074D6BC0A9099915E67849)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C Enumerator_get_Current_m83A00BC8BA75F77179B61D8EE0E0DA66F47CDB5E_gshared_inline (Enumerator_tD348BAA5B9575AFEB2F626A5366EBD048E31D7CD* __this, const RuntimeMethod* method) 
{
	{
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_0 = (SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDB25A388DA9B010FDB1EBE79458CAF2369114020_gshared_inline (Func_2_t8E08751C5572FAF596178E23EBB45037E595AD3F* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m95750C6A27E298B963955DBC2590791BC7D2262B_gshared_inline (Func_2_tCC9453A16D34D048BD75B9EF462B1FBF9828688A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m30E2725B162D3AB358E1141C46D73092A3E2B281_gshared_inline (Func_2_t3A39446030D5B498B1E23E792EAE4E67F3FDED6A* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mB86F7566E04338542E7A9D7FAE73DFEF27372933_gshared_inline (Func_2_tE430274101A35C9C0B5469132139AD0BA5035667* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}