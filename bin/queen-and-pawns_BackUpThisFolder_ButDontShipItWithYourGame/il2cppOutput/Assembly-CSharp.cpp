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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AdManager
struct AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Camerafollow
struct Camerafollow_t7EC3DBCF08CCBB4F77FFADED793E2AC2D7794262;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyDisk
struct EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Explode
struct Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joysticki
struct Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Pawn
struct Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Queen
struct Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RewardedAds
struct RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Simplethings
struct Simplethings_t47706D14FCE38EE1D66767E9EB8966A8258C7446;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TextScript
struct TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// btnBackToMenu
struct btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05;
// btnMenu
struct btnMenu_t5485FE2780860AC0BFEBA6D66040A7E5C5AE8842;
// btnNext
struct btnNext_t807B4C62C8C6BDFE9DE67B43E82697D331205176;
// btnRepeat
struct btnRepeat_tBF14AEF0F416AF6CD8D40CCA6E17F70B6FD56016;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Explode/<Example>d__10
struct U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuScript/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral029895525904D4B3D4CC7E05F6164373CE0E155A;
IL2CPP_EXTERN_C String_t* _stringLiteral052435E0118F7F13231FFACC66FDAE7A05C8F685;
IL2CPP_EXTERN_C String_t* _stringLiteral0971A9A569B1589268E91913FC61419C8315FD25;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral28B4A47032A02D5D20A50BA72AA76374D00D098A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral5331E2152FAFD85FDD476F6007E6CEB01D4E1193;
IL2CPP_EXTERN_C String_t* _stringLiteral5FEDBE3BF23D305C9F9E0C3F848EEA5D9D7B8E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral66E3237AA96B60FC0EF217ABA4D16E348323972F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral745209F65BE924C0FDB24ED47081936FDD420B9E;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral83E55DDBDB9293449EF639A3C30DD369A90216F7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0D780D2B6FF34C0047C0A0F987852AB25B1389;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral983C2058385AB18FBCF3E9C9B0C5A088C6516B21;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA6FF14C7EE01568FA937948140DE799B44C6EDB5;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5A2696BEE49DD47D9500D7CC5F7209FD3EFD99;
IL2CPP_EXTERN_C String_t* _stringLiteralC8163F209348CDD3BBF484A5A6C015C557201002;
IL2CPP_EXTERN_C String_t* _stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D2CF4DB304B086330A6E0513E98F3DE913D772;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisExplode_t4635F1D29094AC378A54EE157376D11F587B5E6F_mA83AC2FA67B9CB38C2927AC9D57B927BEAB256C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739_m9056383B7E9548AC8F9FD4DCF8325CE9CE6DCF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B_mE6E2C78770CB746C6251F8C80F7CCF9911B8F872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleU3Ed__10_System_Collections_IEnumerator_Reset_m64FF3224C1C329EC0B3BBC862A489D3BE03979D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CStartU3Eb__0_mFF21AFB3CCE46FE37A1F562D58936037B2F7A3BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* btnMenu_LoadMenu_mE1739DAD8B52FF7AEA15315CEB092AFABF953190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* btnNext_Next_mD44E6F7E9D34DCB60BEAC58D7A70631B9C431483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* btnRepeat_Repeat_m7C3F58E048743D7FE29115E97BF0526FAD53C91F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Explode/<Example>d__10
struct U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B  : public RuntimeObject
{
	// System.Int32 Explode/<Example>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Explode/<Example>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Explode Explode/<Example>d__10::<>4__this
	Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* ___U3CU3E4__this_2;
};

// MenuScript/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918  : public RuntimeObject
{
	// System.Int32 MenuScript/<>c__DisplayClass5_0::x
	int32_t ___x_0;
	// MenuScript MenuScript/<>c__DisplayClass5_0::<>4__this
	MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_t3E17ADA25A3C4F14ECF6026741219437DA054963 
{
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;
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

// UnityEngine.PenStatus
struct PenStatus_tCAD6543115EF443E17410B52D37EC67BCC88ABB8 
{
	// System.Int32 UnityEngine.PenStatus::value__
	int32_t ___value___2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsInitializationError
struct UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsInitializationError::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsLoadError
struct UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsLoadError::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsShowCompletionState
struct UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowCompletionState::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsShowError
struct UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowError::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<tilt>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtiltU3Ek__BackingField_29;
	// UnityEngine.PenStatus UnityEngine.EventSystems.PointerEventData::<penStatus>k__BackingField
	int32_t ___U3CpenStatusU3Ek__BackingField_30;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_31;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AdManager
struct AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdManager::_androidGameId
	String_t* ____androidGameId_5;
	// System.String AdManager::_iOSGameId
	String_t* ____iOSGameId_6;
	// System.Boolean AdManager::_testMode
	bool ____testMode_7;
	// System.String AdManager::_gameId
	String_t* ____gameId_8;
};

struct AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_StaticFields
{
	// AdManager AdManager::Instance
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* ___Instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Camerafollow
struct Camerafollow_t7EC3DBCF08CCBB4F77FFADED793E2AC2D7794262  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Camerafollow::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_4;
	// UnityEngine.GameObject Camerafollow::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// EnemyDisk
struct EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyDisk::rotationSpeed
	float ___rotationSpeed_4;
	// System.Single EnemyDisk::speed
	float ___speed_5;
	// System.Single EnemyDisk::xpos
	float ___xpos_6;
};

// Explode
struct Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Explode::radius
	float ___radius_4;
	// System.Single Explode::force
	float ___force_5;
	// UnityEngine.GameObject Explode::exp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___exp_6;
	// UnityEngine.AudioSource Explode::expSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___expSource_7;
	// System.String Explode::colName
	String_t* ___colName_8;
	// System.Boolean Explode::_explosionDone
	bool ____explosionDone_9;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::queen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___queen_4;
	// UnityEngine.Vector3 GameManager::queenPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___queenPos_5;
	// UnityEngine.Vector3 GameManager::pawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pawnPos_6;
	// UnityEngine.GameObject GameManager::pawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pawn_7;
	// UnityEngine.GameObject GameManager::respawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___respawn_8;
	// UnityEngine.GameObject GameManager::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_9;
	// UnityEngine.GameObject GameManager::losePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___losePanel_10;
	// System.Boolean GameManager::isGaming
	bool ___isGaming_11;
	// System.Int32 GameManager::score
	int32_t ___score_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::pawns
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pawns_13;
	// System.Int32 GameManager::pawnCount
	int32_t ___pawnCount_14;
	// System.Int32 GameManager::pawnInGame
	int32_t ___pawnInGame_15;
	// TMPro.TMP_Text GameManager::scoreText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scoreText_16;
	// System.String GameManager::_sceneName
	String_t* ____sceneName_17;
	// System.Int32 GameManager::_sceneNumber
	int32_t ____sceneNumber_18;
	// RewardedAds GameManager::_rewardedAds
	RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* ____rewardedAds_19;
	// System.Random GameManager::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_20;
	// System.Boolean GameManager::_isAdsNeed
	bool ____isAdsNeed_21;
	// System.Int32 GameManager::rnd
	int32_t ___rnd_22;
	// TMPro.TMP_Text GameManager::scoreValue
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scoreValue_23;
};

// Joysticki
struct Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joysticki::speed
	float ___speed_4;
	// System.Single Joysticki::maxAlloedSize
	float ___maxAlloedSize_5;
	// UnityEngine.Vector2 Joysticki::direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction_6;
	// UnityEngine.Sprite Joysticki::activeSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___activeSprite_7;
	// UnityEngine.Sprite Joysticki::idleSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___idleSprite_8;
	// UnityEngine.Vector2 Joysticki::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_9;
	// UnityEngine.Vector2 Joysticki::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_10;
	// UnityEngine.UI.Image Joysticki::img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___img_11;
	// UnityEngine.RectTransform Joysticki::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_12;
};

// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MenuScript::levelCount
	int32_t ___levelCount_4;
	// UnityEngine.GameObject MenuScript::pref
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pref_5;
	// UnityEngine.RectTransform MenuScript::parantPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___parantPanel_6;
	// System.Int32 MenuScript::openLevels
	int32_t ___openLevels_7;
	// UnityEngine.UI.Button[] MenuScript::lvlButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___lvlButtons_8;
};

// Pawn
struct Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Pawn::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// System.Single Pawn::speed
	float ___speed_5;
	// System.Int32 Pawn::scoreValue
	int32_t ___scoreValue_6;
	// GameManager Pawn::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_7;
	// System.Int32 Pawn::pawnIndex
	int32_t ___pawnIndex_8;
	// UnityEngine.Collider Pawn::_myCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____myCollider_9;
	// UnityEngine.Vector3 Pawn::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_10;
};

// Queen
struct Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Queen::playerSpeed
	float ___playerSpeed_4;
	// UnityEngine.Vector3 Queen::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_5;
	// System.Single Queen::speed
	float ___speed_6;
	// UnityEngine.Rigidbody Queen::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// GameManager Queen::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_8;
	// Joysticki Queen::joy
	Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* ___joy_9;
	// System.Single Queen::joyspeed
	float ___joyspeed_10;
	// UnityEngine.SpriteRenderer Queen::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_11;
};

// RewardedAds
struct RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean RewardedAds::isReady
	bool ___isReady_4;
	// System.String RewardedAds::_androidAdUnitId
	String_t* ____androidAdUnitId_5;
	// System.String RewardedAds::_iOSAdUnitId
	String_t* ____iOSAdUnitId_6;
	// System.String RewardedAds::_adUnitId
	String_t* ____adUnitId_7;
};

// Simplethings
struct Simplethings_t47706D14FCE38EE1D66767E9EB8966A8258C7446  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TextScript
struct TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// btnBackToMenu
struct btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager btnBackToMenu::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
};

// btnMenu
struct btnMenu_t5485FE2780860AC0BFEBA6D66040A7E5C5AE8842  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager btnMenu::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// UnityEngine.UI.Button btnMenu::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_5;
};

// btnNext
struct btnNext_t807B4C62C8C6BDFE9DE67B43E82697D331205176  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager btnNext::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// UnityEngine.UI.Button btnNext::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_5;
};

// btnRepeat
struct btnRepeat_tBF14AEF0F416AF6CD8D40CCA6E17F70B6FD56016  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager btnRepeat::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// UnityEngine.UI.Button btnRepeat::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void AdManager::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InitializeAds_m8A0745FD67D47DCCE2807744CBF162FCDC7AF92B (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void GameManager::GoToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoToMenu_mCD2382DFBEDFA8B644932FC4FE1BFBB88BAE310D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void GameManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextLevel_m8C788DB3E42A69E16169B855F886F1DB6D43B9A0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::Repeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Repeat_m941E85C2EBBCF2AA625FE97497C892D8D40527F3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void EnemyDisk::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk_ChangeDirection_m2FBF10D1ABD8A9B9F7F0887AFE4E6A5D4B8F21EE (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Explode::Exploders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_Exploders_m4D476581BA7C255051613907BEA4F34950F883C7 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Explode::Example()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Explode_Example_mF6968C8407B657338AB52B584F3B187880BC1061 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD8FF6CAA6FF6749259FB95762B2A521CF8483163 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Explode>()
inline Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* Component_GetComponent_TisExplode_t4635F1D29094AC378A54EE157376D11F587B5E6F_mA83AC2FA67B9CB38C2927AC9D57B927BEAB256C1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Explode::ExplodeWithDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_ExplodeWithDelay_m54A082114916737D407C35991FB6FC27C5812D58 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) ;
// System.Void Explode/<Example>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleU3Ed__10__ctor_m93B218844DA56D98F51491D1B03206E3E7A0EEAE (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::QueenRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_QueenRespawn_m23EA214CF1BA085CA6B67A4C8B2189646FA37AD8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::PawnCreate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PawnCreate_m37F0B21BE43B4F3894B4196DF18747A4F9E8A2EF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<RewardedAds>()
inline RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* Component_GetComponent_TisRewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739_m9056383B7E9548AC8F9FD4DCF8325CE9CE6DCF3E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void GameManager::YouWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_YouWin_mFBD5A41AA877328E07B05044E0EE82569C4A4592 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::YouLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_YouLose_m3732383862949A2E9DA172792A8134FFEBBB544E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void GameManager::TryAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TryAd_m14BFE2D5D31EFF2CB14E800CAA9958A797B1D009 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void RewardedAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_ShowAd_m00075A364A5C3B33420AA9FC42F0A003759CE488 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m4781751459C8DE7A3E3D593004FD3A5CBFC31A37 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.GridLayout>()
inline GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* Object_FindObjectOfType_TisGridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B_mE6E2C78770CB746C6251F8C80F7CCF9911B8F872 (const RuntimeMethod* method)
{
	return ((  GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void MenuScript/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m1629EC79EF1D8443679221C6E730E4D939ACA8C8 (U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MenuScript::SelectLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_SelectLevel_m2DABD3549B042F0A5F302CF566B0A00F425BC676 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, int32_t ___lev0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Pawn::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_GoForward_mA4B63A59BEEAD55C4CA22A2575E5639D09749FD2 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Queen::JoystickFun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_JoystickFun_m3C57C163392A71C127C7707E4A023971F01798F9 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) ;
// System.Void Queen::MovementLogic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_MovementLogic_m7B25FA52F6621367C16D9167E9E689CC0E85F5A6 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) ;
// System.Void Queen::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Respawn_mE1F85036F0B7FC7BE158AAD2E839EBECA62540D4 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
inline void List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5 (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Void AdManager::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InitializeAds_m8A0745FD67D47DCCE2807744CBF162FCDC7AF92B (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* G_B2_0 = NULL;
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* G_B3_1 = NULL;
	{
		// _gameId = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? _iOSGameId
		//     : _androidGameId;
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->____androidGameId_5;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->____iOSGameId_6;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->____gameId_8 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____gameId_8), (void*)G_B3_0);
		// Advertisement.Initialize(_gameId, _testMode, this);
		String_t* L_3 = __this->____gameId_8;
		bool L_4 = __this->____testMode_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E(L_3, L_4, __this, NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnInitializationComplete_mFF64A4140EB0150A71B540DE0CC76683062281FD (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66E3237AA96B60FC0EF217ABA4D16E348323972F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ads initailization complete");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral66E3237AA96B60FC0EF217ABA4D16E348323972F, NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnInitializationFailed_m620BCF3322AE1D9B5042670BDB24025794674F9B (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029895525904D4B3D4CC7E05F6164373CE0E155A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ads error");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral029895525904D4B3D4CC7E05F6164373CE0E155A, NULL);
		// }
		return;
	}
}
// System.Void AdManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Awake_m43FB07FA2AFD8129346852990F3C6BA0825E6A35 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Instance != null && Instance != this)
		AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* L_0 = ((AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* L_2 = ((AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		goto IL_0038;
	}

IL_0027:
	{
		// Instance = this;
		((AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
	}

IL_0038:
	{
		// InitializeAds();
		AdManager_InitializeAds_m8A0745FD67D47DCCE2807744CBF162FCDC7AF92B(__this, NULL);
		// }
		return;
	}
}
// System.Void AdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__ctor_m3CAFD30A4952D8832C0690AE2064A046AA278E78 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
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
// System.Void btnBackToMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnBackToMenu_Start_mF2217FF094CDE39CEC96A40FBE393B6F0B0B33E9 (btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___gameManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void btnBackToMenu::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnBackToMenu_OnPointerEnter_m40DF77907C5CB444F72FB4BE10D48C4CDB2795E3 (btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// gameManager.GoToMenu();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		NullCheck(L_0);
		GameManager_GoToMenu_mCD2382DFBEDFA8B644932FC4FE1BFBB88BAE310D(L_0, NULL);
		// }
		return;
	}
}
// System.Void btnBackToMenu::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnBackToMenu_OnPointerExit_m5429968D8414CFD58D4E45FB0576F8DDD25BB23A (btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void btnBackToMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnBackToMenu__ctor_m593DE5920C414F5A722A101BB9B65FA3D38B36DB (btnBackToMenu_t72464E9D1B191778F14069EF1CB4CA1DED597D05* __this, const RuntimeMethod* method) 
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
// System.Void btnMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnMenu_Start_mBED4FFDE6F7AE3352C41997926A6DF15C46CA4C5 (btnMenu_t5485FE2780860AC0BFEBA6D66040A7E5C5AE8842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&btnMenu_LoadMenu_mE1739DAD8B52FF7AEA15315CEB092AFABF953190_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___gameManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_0);
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_5), (void*)L_1);
		// btn.onClick.AddListener(LoadMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btn_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)btnMenu_LoadMenu_mE1739DAD8B52FF7AEA15315CEB092AFABF953190_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void btnMenu::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnMenu_LoadMenu_mE1739DAD8B52FF7AEA15315CEB092AFABF953190 (btnMenu_t5485FE2780860AC0BFEBA6D66040A7E5C5AE8842* __this, const RuntimeMethod* method) 
{
	{
		// gameManager.GoToMenu();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		NullCheck(L_0);
		GameManager_GoToMenu_mCD2382DFBEDFA8B644932FC4FE1BFBB88BAE310D(L_0, NULL);
		// }
		return;
	}
}
// System.Void btnMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnMenu__ctor_mE24C42E64EDB581E0CCD4AA98EC73BA33BDF4724 (btnMenu_t5485FE2780860AC0BFEBA6D66040A7E5C5AE8842* __this, const RuntimeMethod* method) 
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
// System.Void btnNext::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnNext_Start_m0E1EC915CE16A8490B7F792B00C303A70306F9FD (btnNext_t807B4C62C8C6BDFE9DE67B43E82697D331205176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&btnNext_Next_mD44E6F7E9D34DCB60BEAC58D7A70631B9C431483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___gameManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_0);
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_5), (void*)L_1);
		// btn.onClick.AddListener(Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btn_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)btnNext_Next_mD44E6F7E9D34DCB60BEAC58D7A70631B9C431483_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void btnNext::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnNext_Next_mD44E6F7E9D34DCB60BEAC58D7A70631B9C431483 (btnNext_t807B4C62C8C6BDFE9DE67B43E82697D331205176* __this, const RuntimeMethod* method) 
{
	{
		// gameManager.NextLevel();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		NullCheck(L_0);
		GameManager_NextLevel_m8C788DB3E42A69E16169B855F886F1DB6D43B9A0(L_0, NULL);
		// }
		return;
	}
}
// System.Void btnNext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnNext__ctor_m1737EB4DE2E3DC66F980193128FEE82AF1B6CE29 (btnNext_t807B4C62C8C6BDFE9DE67B43E82697D331205176* __this, const RuntimeMethod* method) 
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
// System.Void btnRepeat::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnRepeat_Start_m61DC7922C38BEBA65F187F8DFA69CC1FF306A1E4 (btnRepeat_tBF14AEF0F416AF6CD8D40CCA6E17F70B6FD56016* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&btnRepeat_Repeat_m7C3F58E048743D7FE29115E97BF0526FAD53C91F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___gameManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_0);
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_5), (void*)L_1);
		// btn.onClick.AddListener(Repeat);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btn_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)btnRepeat_Repeat_m7C3F58E048743D7FE29115E97BF0526FAD53C91F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void btnRepeat::Repeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnRepeat_Repeat_m7C3F58E048743D7FE29115E97BF0526FAD53C91F (btnRepeat_tBF14AEF0F416AF6CD8D40CCA6E17F70B6FD56016* __this, const RuntimeMethod* method) 
{
	{
		// gameManager.Repeat();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		NullCheck(L_0);
		GameManager_Repeat_m941E85C2EBBCF2AA625FE97497C892D8D40527F3(L_0, NULL);
		// }
		return;
	}
}
// System.Void btnRepeat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnRepeat__ctor_mA2A6999A89FF62697AE75D6BA13F25915E71A2D2 (btnRepeat_tBF14AEF0F416AF6CD8D40CCA6E17F70B6FD56016* __this, const RuntimeMethod* method) 
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
// System.Void Camerafollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camerafollow_Start_mD892F413B8FD00BED666980247517D09A98D0E15 (Camerafollow_t7EC3DBCF08CCBB4F77FFADED793E2AC2D7794262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_0);
		// pos = player.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_5, NULL);
		__this->___pos_4 = L_6;
		// }
		return;
	}
}
// System.Void Camerafollow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camerafollow_FixedUpdate_mF7E388137A76D07394F8D3D562716BA64A277FB3 (Camerafollow_t7EC3DBCF08CCBB4F77FFADED793E2AC2D7794262* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = player.transform.position - pos; ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___pos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Camerafollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camerafollow__ctor_mC83741A41CE48B0C39DDD0CFB76BF1A6FBEE3FFE (Camerafollow_t7EC3DBCF08CCBB4F77FFADED793E2AC2D7794262* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
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
// System.Void EnemyDisk::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk_Start_m8BE88BF6244395EB33B15302777798AA4804FFD5 (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, const RuntimeMethod* method) 
{
	{
		// xpos = gameObject.transform.position.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___xpos_6 = L_3;
		// }
		return;
	}
}
// System.Void EnemyDisk::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk_FixedUpdate_m5BB2461F6992C4907D7E5D587775BE329ACDA94F (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xpos = gameObject.transform.position.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___xpos_6 = L_3;
		// transform.Rotate(0,0,rotationSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___rotationSpeed_4;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_4);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_4, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		// if(xpos < -6 || xpos > 6)
		float L_7 = __this->___xpos_6;
		if ((((float)L_7) < ((float)(-6.0f))))
		{
			goto IL_0056;
		}
	}
	{
		float L_8 = __this->___xpos_6;
		if ((!(((float)L_8) > ((float)(6.0f)))))
		{
			goto IL_005c;
		}
	}

IL_0056:
	{
		// ChangeDirection();
		EnemyDisk_ChangeDirection_m2FBF10D1ABD8A9B9F7F0887AFE4E6A5D4B8F21EE(__this, NULL);
	}

IL_005c:
	{
		// transform.position = new Vector3(transform.position.x + speed * Time.deltaTime, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = __this->___speed_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)))), L_17, L_20, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_21, NULL);
		// if (transform.position.y < -6)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		if ((!(((float)L_24) < ((float)(-6.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_25, NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void EnemyDisk::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk_ChangeDirection_m2FBF10D1ABD8A9B9F7F0887AFE4E6A5D4B8F21EE (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, const RuntimeMethod* method) 
{
	{
		// speed = -speed;
		float L_0 = __this->___speed_5;
		__this->___speed_5 = ((-L_0));
		// rotationSpeed = -rotationSpeed;
		float L_1 = __this->___rotationSpeed_4;
		__this->___rotationSpeed_4 = ((-L_1));
		// }
		return;
	}
}
// System.Void EnemyDisk::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk_OnCollisionEnter_mC4D3D90BAD7429CDECA8D11A83B55E41E3C1F763 (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B4A47032A02D5D20A50BA72AA76374D00D098A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Things")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral28B4A47032A02D5D20A50BA72AA76374D00D098A, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// ChangeDirection();
		EnemyDisk_ChangeDirection_m2FBF10D1ABD8A9B9F7F0887AFE4E6A5D4B8F21EE(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void EnemyDisk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDisk__ctor_mB7099E2342A64A4751F93F63C10F13BAE05A6F32 (EnemyDisk_t54DC14DD27EF2AD2B25867D2DACF2E977DB5C331* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 100f;
		__this->___rotationSpeed_4 = (100.0f);
		// public float speed = 10f;
		__this->___speed_5 = (10.0f);
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
// System.Void Explode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_Start_m486DDBBD18B9407BDAD61D8B4064275AE9AF7F22 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// expSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___expSource_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expSource_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Explode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_Update_m9F8150D4957F1B979946E581C025B85B692299A3 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.position.y < -5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-5.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Explode::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_OnCollisionEnter_m1C3277FDC7C28E9593096729FFF647316B1D5BEB (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983C2058385AB18FBCF3E9C9B0C5A088C6516B21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision != null && collision.gameObject.tag != "NoForce")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		bool L_4;
		L_4 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_3, _stringLiteral983C2058385AB18FBCF3E9C9B0C5A088C6516B21, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// Exploders();
		Explode_Exploders_m4D476581BA7C255051613907BEA4F34950F883C7(__this, NULL);
		// StartCoroutine(Example());
		RuntimeObject* L_5;
		L_5 = Explode_Example_mF6968C8407B657338AB52B584F3B187880BC1061(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Explode::Exploders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_Exploders_m4D476581BA7C255051613907BEA4F34950F883C7 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisExplode_t4635F1D29094AC378A54EE157376D11F587B5E6F_mA83AC2FA67B9CB38C2927AC9D57B927BEAB256C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983C2058385AB18FBCF3E9C9B0C5A088C6516B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D2CF4DB304B086330A6E0513E98F3DE913D772);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* V_3 = NULL;
	{
		// Collider[] overlappedColliders = Physics.OverlapSphere(transform.position, radius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___radius_4;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2(L_1, L_2, NULL);
		V_0 = L_3;
		// transform.GetChild(2).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 2, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// for (int i = 0; i < overlappedColliders.Length; i++)
		V_1 = 0;
		goto IL_00d6;
	}

IL_0035:
	{
		// if (overlappedColliders[i].gameObject.tag != "Pawn" && overlappedColliders[i].gameObject.tag != "NoForce")
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_11, NULL);
		bool L_13;
		L_13 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_12, _stringLiteralE7D2CF4DB304B086330A6E0513E98F3DE913D772, NULL);
		if (!L_13)
		{
			goto IL_00d2;
		}
	}
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_18, NULL);
		bool L_20;
		L_20 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_19, _stringLiteral983C2058385AB18FBCF3E9C9B0C5A088C6516B21, NULL);
		if (!L_20)
		{
			goto IL_00d2;
		}
	}
	{
		// Rigidbody rigidbody = overlappedColliders[i].attachedRigidbody;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25;
		L_25 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_24, NULL);
		V_2 = L_25;
		// if (rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00d2;
		}
	}
	{
		// rigidbody.AddExplosionForce(force, transform.position, radius, 0.5f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = V_2;
		float L_29 = __this->___force_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = __this->___radius_4;
		NullCheck(L_28);
		Rigidbody_AddExplosionForce_mD8FF6CAA6FF6749259FB95762B2A521CF8483163(L_28, L_29, L_31, L_32, (0.5f), NULL);
		// Explode explosion = rigidbody.GetComponent<Explode>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = V_2;
		NullCheck(L_33);
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_34;
		L_34 = Component_GetComponent_TisExplode_t4635F1D29094AC378A54EE157376D11F587B5E6F_mA83AC2FA67B9CB38C2927AC9D57B927BEAB256C1(L_33, Component_GetComponent_TisExplode_t4635F1D29094AC378A54EE157376D11F587B5E6F_mA83AC2FA67B9CB38C2927AC9D57B927BEAB256C1_RuntimeMethod_var);
		V_3 = L_34;
		// if(explosion != null)
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_35 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_00d2;
		}
	}
	{
		// if(Vector3.Distance(transform.position, rigidbody.position) < radius)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = V_2;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_39, NULL);
		float L_41;
		L_41 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_38, L_40, NULL);
		float L_42 = __this->___radius_4;
		if ((!(((float)L_41) < ((float)L_42))))
		{
			goto IL_00d2;
		}
	}
	{
		// explosion.ExplodeWithDelay();
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_43 = V_3;
		NullCheck(L_43);
		Explode_ExplodeWithDelay_m54A082114916737D407C35991FB6FC27C5812D58(L_43, NULL);
	}

IL_00d2:
	{
		// for (int i = 0; i < overlappedColliders.Length; i++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00d6:
	{
		// for (int i = 0; i < overlappedColliders.Length; i++)
		int32_t L_45 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_46 = V_0;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Explode::Example()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Explode_Example_mF6968C8407B657338AB52B584F3B187880BC1061 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* L_0 = (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B*)il2cpp_codegen_object_new(U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CExampleU3Ed__10__ctor_m93B218844DA56D98F51491D1B03206E3E7A0EEAE(L_0, 0, NULL);
		U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Explode::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_OnDrawGizmosSelected_mE770AFCFA463DA50B56E66F00CC6CBEF3E91A283 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawWireSphere(transform.position, radius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___radius_4;
		Gizmos_DrawWireSphere_m23F90E2FD50D825625414C0A0AA8B1557CB5DD61(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Explode::ExplodeWithDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode_ExplodeWithDelay_m54A082114916737D407C35991FB6FC27C5812D58 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5A2696BEE49DD47D9500D7CC5F7209FD3EFD99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_explosionDone) return;
		bool L_0 = __this->____explosionDone_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_explosionDone) return;
		return;
	}

IL_0009:
	{
		// _explosionDone = true;
		__this->____explosionDone_9 = (bool)1;
		// Invoke("Exploders", 0.2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralBE5A2696BEE49DD47D9500D7CC5F7209FD3EFD99, (0.200000003f), NULL);
		// }
		return;
	}
}
// System.Void Explode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explode__ctor_m87E0F75692364C98C2BBCF984D64D9E198F126A6 (Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 5.0f;
		__this->___radius_4 = (5.0f);
		// public float force = 10000.0f;
		__this->___force_5 = (10000.0f);
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
// System.Void Explode/<Example>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleU3Ed__10__ctor_m93B218844DA56D98F51491D1B03206E3E7A0EEAE (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Explode/<Example>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleU3Ed__10_System_IDisposable_Dispose_m61DCE177F479EBB7FB042B9F3B8824DF15947326 (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Explode/<Example>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleU3Ed__10_MoveNext_mCA5AD9002BA691DFE4C89C22AAA4CE93BB735D09 (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// expSource.Play();
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___expSource_7;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		Explode_t4635F1D29094AC378A54EE157376D11F587B5E6F* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Explode/<Example>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExampleU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2C5C22E6D1AEDA9AD1F73A870552728CD4E900F6 (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Explode/<Example>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleU3Ed__10_System_Collections_IEnumerator_Reset_m64FF3224C1C329EC0B3BBC862A489D3BE03979D7 (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleU3Ed__10_System_Collections_IEnumerator_Reset_m64FF3224C1C329EC0B3BBC862A489D3BE03979D7_RuntimeMethod_var)));
	}
}
// System.Object Explode/<Example>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExampleU3Ed__10_System_Collections_IEnumerator_get_Current_mF3744D1731FF60EE90DBD6E2370B1868D66EB203 (U3CExampleU3Ed__10_tE141209B21859EBC9503D5869A581820B1AB674B* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E55DDBDB9293449EF639A3C30DD369A90216F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6FF14C7EE01568FA937948140DE799B44C6EDB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8163F209348CDD3BBF484A5A6C015C557201002);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queen = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___queen_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queen_4), (void*)L_0);
		// winPanel = GameObject.Find("PanelWin");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral83E55DDBDB9293449EF639A3C30DD369A90216F7, NULL);
		__this->___winPanel_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___winPanel_9), (void*)L_1);
		// losePanel = GameObject.Find("PanelLose");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA6FF14C7EE01568FA937948140DE799B44C6EDB5, NULL);
		__this->___losePanel_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___losePanel_10), (void*)L_2);
		// scoreValue = GameObject.Find("ScoreValue").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralC8163F209348CDD3BBF484A5A6C015C557201002, NULL);
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_3, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___scoreValue_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreValue_23), (void*)L_4);
		// scoreText = GameObject.Find("ScoreText").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0, NULL);
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6;
		L_6 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_5, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___scoreText_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreText_16), (void*)L_6);
		// isGaming = true;
		__this->___isGaming_11 = (bool)1;
		// respawn = GameObject.FindGameObjectWithTag("Respawn");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B, NULL);
		__this->___respawn_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___respawn_8), (void*)L_7);
		// queenPos = respawn.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___respawn_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___queenPos_5 = L_10;
		// QueenRespawn();
		GameManager_QueenRespawn_m23EA214CF1BA085CA6B67A4C8B2189646FA37AD8(__this, NULL);
		// pawnPos = queenPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___queenPos_5;
		__this->___pawnPos_6 = L_11;
		// PawnCreate(pawnPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___pawnPos_6;
		GameManager_PawnCreate_m37F0B21BE43B4F3894B4196DF18747A4F9E8A2EF(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739_m9056383B7E9548AC8F9FD4DCF8325CE9CE6DCF3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->____random_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____random_20), (void*)L_0);
		// winPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___winPanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// losePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___losePanel_10;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// _sceneName = SceneManager.GetActiveScene().name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		__this->____sceneName_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sceneName_17), (void*)L_4);
		// _sceneNumber = System.Int32.Parse(_sceneName.Substring(5));
		String_t* L_5 = __this->____sceneName_17;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, 5, NULL);
		int32_t L_7;
		L_7 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_6, NULL);
		__this->____sceneNumber_18 = L_7;
		// _rewardedAds = GetComponent<RewardedAds>();
		RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* L_8;
		L_8 = Component_GetComponent_TisRewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739_m9056383B7E9548AC8F9FD4DCF8325CE9CE6DCF3E(__this, Component_GetComponent_TisRewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739_m9056383B7E9548AC8F9FD4DCF8325CE9CE6DCF3E_RuntimeMethod_var);
		__this->____rewardedAds_19 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rewardedAds_19), (void*)L_8);
		// rnd = _random.Next(0, 100);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = __this->____random_20;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 0, ((int32_t)100));
		__this->___rnd_22 = L_10;
		// if (rnd > 25 && rnd < 40)
		int32_t L_11 = __this->___rnd_22;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)25))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_12 = __this->___rnd_22;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)40))))
		{
			goto IL_0088;
		}
	}
	{
		// _isAdsNeed = true;
		__this->____isAdsNeed_21 = (bool)1;
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// scoreValue.text = score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___scoreValue_23;
		int32_t* L_1 = (&__this->___score_12);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// if(pawnInGame == 0 && score > 0 && isGaming)
		int32_t L_3 = __this->___pawnInGame_15;
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = __this->___score_12;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = __this->___isGaming_11;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// isGaming = false;
		__this->___isGaming_11 = (bool)0;
		// YouWin();
		GameManager_YouWin_mFBD5A41AA877328E07B05044E0EE82569C4A4592(__this, NULL);
		return;
	}

IL_003d:
	{
		// }else if(pawnInGame == 0 && score == 0 && isGaming)
		int32_t L_6 = __this->___pawnInGame_15;
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = __this->___score_12;
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		bool L_8 = __this->___isGaming_11;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// isGaming = false;
		__this->___isGaming_11 = (bool)0;
		// YouLose();
		GameManager_YouLose_m3732383862949A2E9DA172792A8134FFEBBB544E(__this, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void GameManager::PawnCreate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PawnCreate_m37F0B21BE43B4F3894B4196DF18747A4F9E8A2EF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D2CF4DB304B086330A6E0513E98F3DE913D772);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// pawnInGame = pawnCount;
		int32_t L_0 = __this->___pawnCount_14;
		__this->___pawnInGame_15 = L_0;
		// pos.y = pos.y + 5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		float L_2 = L_1.___y_3;
		(&___pos0)->___y_3 = ((float)il2cpp_codegen_add(L_2, (5.0f)));
		// pos.z = pos.z - (pawnCount + 3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		float L_4 = L_3.___z_4;
		int32_t L_5 = __this->___pawnCount_14;
		(&___pos0)->___z_4 = ((float)il2cpp_codegen_subtract(L_4, ((float)((int32_t)il2cpp_codegen_add(L_5, 3)))));
		// for (int i = 0; i< pawnCount; i++)
		V_0 = 0;
		goto IL_008d;
	}

IL_003a:
	{
		// pos.z = pos.z - 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___pos0;
		float L_7 = L_6.___z_4;
		(&___pos0)->___z_4 = ((float)il2cpp_codegen_subtract(L_7, (1.0f)));
		// GameObject g = Instantiate(pawn, pos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___pawn_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___pos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_1 = L_11;
		// string myName= "Pawn" + i.ToString();
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE7D2CF4DB304B086330A6E0513E98F3DE913D772, L_12, NULL);
		V_2 = L_13;
		// g.transform.name = myName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		String_t* L_16 = V_2;
		NullCheck(L_15);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_15, L_16, NULL);
		// pawns.Add(g);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = __this->___pawns_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		NullCheck(L_17);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_17, L_18, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i< pawnCount; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_008d:
	{
		// for (int i = 0; i< pawnCount; i++)
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___pawnCount_14;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::QueenRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_QueenRespawn_m23EA214CF1BA085CA6B67A4C8B2189646FA37AD8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// queenPos.y = queenPos.y + 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___queenPos_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___queenPos_5);
		float L_2 = L_1->___y_3;
		L_0->___y_3 = ((float)il2cpp_codegen_add(L_2, (0.5f)));
		// queen.transform.position = queenPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___queen_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___queenPos_5;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void GameManager::YouWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_YouWin_mFBD5A41AA877328E07B05044E0EE82569C4A4592 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isAdsNeed)
		bool L_0 = __this->____isAdsNeed_21;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// TryAd();
		GameManager_TryAd_m14BFE2D5D31EFF2CB14E800CAA9958A797B1D009(__this, NULL);
		// if (_rewardedAds.isReady)
		RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* L_1 = __this->____rewardedAds_19;
		NullCheck(L_1);
		bool L_2 = L_1->___isReady_4;
		if (!L_2)
		{
			goto IL_00bf;
		}
	}
	{
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___winPanel_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// scoreText.text = "Score: " + score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___scoreText_16;
		int32_t* L_5 = (&__this->___score_12);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// if (PlayerPrefs.GetInt("OpenLevels") <= _sceneNumber)
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, NULL);
		int32_t L_9 = __this->____sceneNumber_18;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_00bf;
		}
	}
	{
		// PlayerPrefs.SetInt("OpenLevels", _sceneNumber + 1);
		int32_t L_10 = __this->____sceneNumber_18;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		return;
	}

IL_006f:
	{
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___winPanel_9;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// scoreText.text = "Score: " + score.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___scoreText_16;
		int32_t* L_13 = (&__this->___score_12);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_14, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_15);
		// if (PlayerPrefs.GetInt("OpenLevels") <= _sceneNumber)
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, NULL);
		int32_t L_17 = __this->____sceneNumber_18;
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_00bf;
		}
	}
	{
		// PlayerPrefs.SetInt("OpenLevels", _sceneNumber + 1);
		int32_t L_18 = __this->____sceneNumber_18;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void GameManager::YouLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_YouLose_m3732383862949A2E9DA172792A8134FFEBBB544E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (_isAdsNeed)
		bool L_0 = __this->____isAdsNeed_21;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// TryAd();
		GameManager_TryAd_m14BFE2D5D31EFF2CB14E800CAA9958A797B1D009(__this, NULL);
		// if (_rewardedAds.isReady)
		RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* L_1 = __this->____rewardedAds_19;
		NullCheck(L_1);
		bool L_2 = L_1->___isReady_4;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// losePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___losePanel_10;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0028:
	{
		// losePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___losePanel_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void GameManager::TryAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TryAd_m14BFE2D5D31EFF2CB14E800CAA9958A797B1D009 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// _rewardedAds.ShowAd();
		RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* L_0 = __this->____rewardedAds_19;
		NullCheck(L_0);
		RewardedAds_ShowAd_m00075A364A5C3B33420AA9FC42F0A003759CE488(L_0, NULL);
		// _rewardedAds.isReady = true;
		RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* L_1 = __this->____rewardedAds_19;
		NullCheck(L_1);
		L_1->___isReady_4 = (bool)1;
		// }
		return;
	}
}
// System.Void GameManager::GoToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoToMenu_mCD2382DFBEDFA8B644932FC4FE1BFBB88BAE310D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Repeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Repeat_m941E85C2EBBCF2AA625FE97497C892D8D40527F3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int scene = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// SceneManager.LoadScene(scene, LoadSceneMode.Single);
		SceneManager_LoadScene_m4781751459C8DE7A3E3D593004FD3A5CBFC31A37(L_1, 0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextLevel_m8C788DB3E42A69E16169B855F886F1DB6D43B9A0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int scene = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// SceneManager.LoadScene(scene + 1);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int pawnCount = 5;
		__this->___pawnCount_14 = 5;
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
// System.Void Joysticki::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joysticki_Start_mF1DCF723B555D6DD9A03E199FA19F1AB77C2613C (Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_12), (void*)L_0);
		// img = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___img_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___img_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void Joysticki::OnPointerDown(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joysticki_OnPointerDown_mEF8C06E698BE8151C5ADF2D48F10E2859572427E (Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pntr = (PointerEventData)data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// startPosition = pntr.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		__this->___startPosition_9 = L_2;
		// img.sprite = activeSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___img_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___activeSprite_7;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Joysticki::OnDrag(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joysticki_OnDrag_mD372A0F89552E35C6862E14BEF4E5F44513509D1 (Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// PointerEventData pntr = (PointerEventData)data;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___data0;
		V_0 = ((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var));
		// position = pntr.position - startPosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___startPosition_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_2, L_3, NULL);
		__this->___position_10 = L_4;
		// float size = position.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___position_10);
		float L_6;
		L_6 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_5, NULL);
		V_1 = L_6;
		// if (size > maxAlloedSize)
		float L_7 = V_1;
		float L_8 = __this->___maxAlloedSize_5;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_005d;
		}
	}
	{
		// speed = 1.0f;
		__this->___speed_4 = (1.0f);
		// position = position / size * maxAlloedSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___position_10;
		float L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_9, L_10, NULL);
		float L_12 = __this->___maxAlloedSize_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_11, L_12, NULL);
		__this->___position_10 = L_13;
		goto IL_006b;
	}

IL_005d:
	{
		// speed = size / maxAlloedSize;
		float L_14 = V_1;
		float L_15 = __this->___maxAlloedSize_5;
		__this->___speed_4 = ((float)(L_14/L_15));
	}

IL_006b:
	{
		// direction = position / size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___position_10;
		float L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_16, L_17, NULL);
		__this->___direction_6 = L_18;
		// rectTransform.localPosition = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___rectTransform_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___position_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_21, NULL);
		// }
		return;
	}
}
// System.Void Joysticki::OnPointerUp(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joysticki_OnPointerUp_m7E45FAF17003F87B9C4B3E6CC83A77E943288F31 (Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) 
{
	{
		// speed = 0.0f;
		__this->___speed_4 = (0.0f);
		// direction = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___direction_6 = L_0;
		// rectTransform.localPosition = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// img.sprite = idleSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___img_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___idleSprite_8;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Joysticki::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joysticki__ctor_m807D063A8ED330139D2504584983E3837D153F7B (Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* __this, const RuntimeMethod* method) 
{
	{
		// public float maxAlloedSize = 100.0f;
		__this->___maxAlloedSize_5 = (100.0f);
		// public Vector2 direction = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___direction_6 = L_0;
		// Vector2 startPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___startPosition_9 = L_1;
		// Vector2 position = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___position_10 = L_2;
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
// System.Void MenuScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_Start_m8C843F2A54A5C8116CC175C71C202BACBE173A0C (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B_mE6E2C78770CB746C6251F8C80F7CCF9911B8F872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CStartU3Eb__0_mFF21AFB3CCE46FE37A1F562D58936037B2F7A3BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FEDBE3BF23D305C9F9E0C3F848EEA5D9D7B8E8E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// lvlButtons = new Button[levelCount];
		int32_t L_0 = __this->___levelCount_4;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_1 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___lvlButtons_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lvlButtons_8), (void*)L_1);
		// if(PlayerPrefs.GetInt("OpenLevels") == 0)
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// PlayerPrefs.SetInt("OpenLevels", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, 1, NULL);
		// openLevels = 1;
		__this->___openLevels_7 = 1;
		goto IL_0041;
	}

IL_0031:
	{
		// openLevels = PlayerPrefs.GetInt("OpenLevels");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0971A9A569B1589268E91913FC61419C8315FD25, NULL);
		__this->___openLevels_7 = L_3;
	}

IL_0041:
	{
		// var parent = FindObjectOfType<GridLayout>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* L_4;
		L_4 = Object_FindObjectOfType_TisGridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B_mE6E2C78770CB746C6251F8C80F7CCF9911B8F872(Object_FindObjectOfType_TisGridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B_mE6E2C78770CB746C6251F8C80F7CCF9911B8F872_RuntimeMethod_var);
		// for (int i = 0; i < levelCount; i++)
		V_0 = 0;
		goto IL_00e9;
	}

IL_004e:
	{
		U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* L_5 = (U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		U3CU3Ec__DisplayClass5_0__ctor_m1629EC79EF1D8443679221C6E730E4D939ACA8C8(L_5, NULL);
		V_1 = L_5;
		U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* L_6 = V_1;
		NullCheck(L_6);
		L_6->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___U3CU3E4__this_1), (void*)__this);
		// int x = new int();
		U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* L_7 = V_1;
		NullCheck(L_7);
		L_7->___x_0 = 0;
		// x = i + 1;
		U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		L_8->___x_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// GameObject levelButton = Instantiate(pref);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___pref_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_2 = L_11;
		// levelButton.name = "btn" + i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5FEDBE3BF23D305C9F9E0C3F848EEA5D9D7B8E8E, L_13, NULL);
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_14, NULL);
		// levelButton.transform.SetParent(parantPanel, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___parantPanel_6;
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_17, (bool)0, NULL);
		// TMP_Text btnText = levelButton.GetComponentInChildren<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		NullCheck(L_18);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19;
		L_19 = GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690(L_18, GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var);
		// btnText.text = (i+1).ToString();
		int32_t L_20 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_21);
		// levelButton.gameObject.GetComponent<Button>().onClick.AddListener(delegate
		// {
		//     SelectLevel(x);
		// });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24;
		L_24 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_23, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_24);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_25;
		L_25 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_24, NULL);
		U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* L_26 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_27 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CStartU3Eb__0_mFF21AFB3CCE46FE37A1F562D58936037B2F7A3BF_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_25, L_27, NULL);
		// lvlButtons[i] = levelButton.GetComponentInChildren<Button>();
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_28 = __this->___lvlButtons_8;
		int32_t L_29 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_2;
		NullCheck(L_30);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31;
		L_31 = GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A(L_30, GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_31);
		// for (int i = 0; i < levelCount; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00e9:
	{
		// for (int i = 0; i < levelCount; i++)
		int32_t L_33 = V_0;
		int32_t L_34 = __this->___levelCount_4;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004e;
		}
	}
	{
		// for (int i = 0; i < lvlButtons.Length; i++)
		V_4 = 0;
		goto IL_011b;
	}

IL_00fa:
	{
		// if (i + 1 > openLevels)
		int32_t L_35 = V_4;
		int32_t L_36 = __this->___openLevels_7;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_35, 1))) <= ((int32_t)L_36)))
		{
			goto IL_0115;
		}
	}
	{
		// lvlButtons[i].interactable = false;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_37 = __this->___lvlButtons_8;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_40, (bool)0, NULL);
	}

IL_0115:
	{
		// for (int i = 0; i < lvlButtons.Length; i++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_011b:
	{
		// for (int i = 0; i < lvlButtons.Length; i++)
		int32_t L_42 = V_4;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_43 = __this->___lvlButtons_8;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_00fa;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuScript::SelectLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_SelectLevel_m2DABD3549B042F0A5F302CF566B0A00F425BC676 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, int32_t ___lev0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052435E0118F7F13231FFACC66FDAE7A05C8F685);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5331E2152FAFD85FDD476F6007E6CEB01D4E1193);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral745209F65BE924C0FDB24ED47081936FDD420B9E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string level = "scene001";
		V_0 = _stringLiteral745209F65BE924C0FDB24ED47081936FDD420B9E;
		// if(lev > 99)
		int32_t L_0 = ___lev0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)99))))
		{
			goto IL_001f;
		}
	}
	{
		// level = "scene" + lev.ToString();
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___lev0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, L_1, NULL);
		V_0 = L_2;
		goto IL_0054;
	}

IL_001f:
	{
		// if(lev > 9 && lev <= 99)
		int32_t L_3 = ___lev0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)9))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ___lev0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)99))))
		{
			goto IL_003d;
		}
	}
	{
		// level = "scene" + "0" + lev.ToString();
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___lev0), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral052435E0118F7F13231FFACC66FDAE7A05C8F685, L_5, NULL);
		V_0 = L_6;
		goto IL_0054;
	}

IL_003d:
	{
		// else if(lev <= 9)
		int32_t L_7 = ___lev0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)9))))
		{
			goto IL_0054;
		}
	}
	{
		// level = "scene" + "00" + lev.ToString();
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___lev0), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5331E2152FAFD85FDD476F6007E6CEB01D4E1193, L_8, NULL);
		V_0 = L_9;
	}

IL_0054:
	{
		// SceneManager.LoadScene(level);
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_10, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_mCDAA51C5C929C62E7082872DA581F913C3E66EDC (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// public int levelCount = 2;
		__this->___levelCount_4 = 2;
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
// System.Void MenuScript/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m1629EC79EF1D8443679221C6E730E4D939ACA8C8 (U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MenuScript/<>c__DisplayClass5_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CStartU3Eb__0_mFF21AFB3CCE46FE37A1F562D58936037B2F7A3BF (U3CU3Ec__DisplayClass5_0_t45F235D5E10FB0D338D4F27A96975C7F26B9B918* __this, const RuntimeMethod* method) 
{
	{
		// SelectLevel(x);
		MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___x_0;
		NullCheck(L_0);
		MenuScript_SelectLevel_m2DABD3549B042F0A5F302CF566B0A00F425BC676(L_0, L_1, NULL);
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
// System.Void Pawn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Start_mA64089B85B4ECCC05EFE7F98D93CB5D67D852AEC (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// move = new Vector3(0, 0, speed);
		float L_0 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), L_0, /*hidden argument*/NULL);
		__this->___move_10 = L_1;
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_2);
		// _myCollider = rb.GetComponent<Collider>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_4;
		NullCheck(L_3);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_3, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->____myCollider_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myCollider_9), (void*)L_4);
		// }
		return;
	}
}
// System.Void Pawn::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Awake_m0F7BDDA180A5D80BD1387BB32FB7A56AC9F3B53D (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___manager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Pawn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Update_mB92014937119164743A6DFA6369DDFF7261236DC (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pawn::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_FixedUpdate_m848F14D973AA986817473F23DD35671BCB68B4D4 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoForward();
		Pawn_GoForward_mA4B63A59BEEAD55C4CA22A2575E5639D09749FD2(__this, NULL);
		// if(transform.position.y < -5f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-5.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// manager.pawnInGame--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = __this->___manager_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___pawnInGame_15;
		NullCheck(L_4);
		L_4->___pawnInGame_15 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Pawn::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_OnCollisionEnter_mFEC01E131B091CF179C5DC53321F71EFB4F1684B (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143, NULL);
		// temp = gameObject.name.Substring(4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_1, 4, NULL);
		// if (collision.gameObject.tag == "Finish")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// manager.score = manager.score + scoreValue;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = __this->___manager_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = __this->___manager_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___score_12;
		int32_t L_10 = __this->___scoreValue_6;
		NullCheck(L_7);
		L_7->___score_12 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		// manager.pawnInGame--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = __this->___manager_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->___pawnInGame_15;
		NullCheck(L_12);
		L_12->___pawnInGame_15 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
	}

IL_006e:
	{
		// if(collision.gameObject.tag == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_16, NULL);
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}
	{
		// manager.pawnInGame--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = __this->___manager_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___pawnInGame_15;
		NullCheck(L_20);
		L_20->___pawnInGame_15 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_22, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Pawn::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_GoForward_mA4B63A59BEEAD55C4CA22A2575E5639D09749FD2 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(move);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___move_10;
		NullCheck(L_0);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn__ctor_m38D7B83352D412569522B8D20EF1F7D6D622D8D1 (Pawn_t959658BA2B3CEE21ADF38C0CD171EBF18AA57167* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 100f;
		__this->___speed_5 = (100.0f);
		// public int scoreValue = 100;
		__this->___scoreValue_6 = ((int32_t)100);
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
// System.Void Queen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Start_mA1ACA1D21771FC7E60D2DCADD0C563E692D7C2D6 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___manager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_8), (void*)L_0);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_11), (void*)L_2);
		// move = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___move_5 = L_3;
		// }
		return;
	}
}
// System.Void Queen::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_FixedUpdate_m6BA018E79C95BF77AC5F7C7C31C85ED35B84B9C8 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// JoystickFun();
		Queen_JoystickFun_m3C57C163392A71C127C7707E4A023971F01798F9(__this, NULL);
		// MovementLogic();
		Queen_MovementLogic_m7B25FA52F6621367C16D9167E9E689CC0E85F5A6(__this, NULL);
		// if (transform.position.y < -5.0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-5.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// Respawn();
		Queen_Respawn_mE1F85036F0B7FC7BE158AAD2E839EBECA62540D4(__this, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Queen::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_OnCollisionEnter_mD36EAB507A590FCAF024EA366B77D3BB3AA9F67E (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (collision.gameObject.tag == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// int z = 0;
		V_0 = 0;
		// foreach (var i in manager.pawns)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = __this->___manager_8;
		NullCheck(L_4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___pawns_13;
		NullCheck(L_5);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_6;
		L_6 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_5, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_002c_1:
			{
				// foreach (var i in manager.pawns)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_7;
				// if (i != null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_005c_1;
				}
			}
			{
				// Destroy(i.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
				// manager.pawns[z] = null;
				GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = __this->___manager_8;
				NullCheck(L_12);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = L_12->___pawns_13;
				int32_t L_14 = V_0;
				NullCheck(L_13);
				List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35(L_13, L_14, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var);
				// break;
				goto IL_0079;
			}

IL_005c_1:
			{
				// z++;
				int32_t L_15 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0060_1:
			{
				// foreach (var i in manager.pawns)
				bool L_16;
				L_16 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// Respawn();
		Queen_Respawn_mE1F85036F0B7FC7BE158AAD2E839EBECA62540D4(__this, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Queen::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Respawn_mE1F85036F0B7FC7BE158AAD2E839EBECA62540D4 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// manager.pawnInGame--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___manager_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___pawnInGame_15;
		NullCheck(L_1);
		L_1->___pawnInGame_15 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// manager.QueenRespawn();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = __this->___manager_8;
		NullCheck(L_3);
		GameManager_QueenRespawn_m23EA214CF1BA085CA6B67A4C8B2189646FA37AD8(L_3, NULL);
		// }
		return;
	}
}
// System.Void Queen::MovementLogic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_MovementLogic_m7B25FA52F6621367C16D9167E9E689CC0E85F5A6 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(move * speed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___move_5;
		float L_2 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Queen::JoystickFun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_JoystickFun_m3C57C163392A71C127C7707E4A023971F01798F9 (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// joyspeed = joy.speed;
		Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* L_0 = __this->___joy_9;
		NullCheck(L_0);
		float L_1 = L_0->___speed_4;
		__this->___joyspeed_10 = L_1;
		// if (joy.speed > 0.0f)
		Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* L_2 = __this->___joy_9;
		NullCheck(L_2);
		float L_3 = L_2->___speed_4;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// Vector2 direction = joy.direction;
		Joysticki_tE03C11C95DA9A9571267DEDD194235B822237CDF* L_4 = __this->___joy_9;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___direction_6;
		V_0 = L_5;
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		float L_10;
		L_10 = atan2f(L_7, L_9);
		// move.z = direction.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___move_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___y_1;
		L_11->___z_4 = L_13;
		// move.x = direction.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___move_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___x_0;
		L_14->___x_2 = L_16;
		// rb.AddForce(move * speed * playerSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___move_5;
		float L_19 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		float L_21 = __this->___playerSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_17, L_22, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Queen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen__ctor_m7ABC6B14337B0A10B45B174113E9693F52A45E1A (Queen_t250477B0959155ACF197D12BD87FD1DA449DFEF7* __this, const RuntimeMethod* method) 
{
	{
		// public float playerSpeed = 2.0f;
		__this->___playerSpeed_4 = (2.0f);
		// public float speed = 10f;
		__this->___speed_6 = (10.0f);
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
// System.Void RewardedAds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_Awake_m111551E179B6D0CE3A365308A46E1CF7D9A15BB8 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) 
{
	{
		// isReady = false;
		__this->___isReady_4 = (bool)0;
		// _adUnitId = _androidAdUnitId;
		String_t* L_0 = __this->____androidAdUnitId_5;
		__this->____adUnitId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void RewardedAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_LoadAd_m93C4321A2DE950B70E7FBAC28AE138436B9AD75C (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_7;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsAdLoaded_mF3D8804E9D5118DDC324E68A013F6E33838DE8A5 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___adUnitId0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// if (adUnitId.Equals(_adUnitId))
		String_t* L_2 = ___adUnitId0;
		String_t* L_3 = __this->____adUnitId_7;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void RewardedAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_ShowAd_m00075A364A5C3B33420AA9FC42F0A003759CE488 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0D780D2B6FF34C0047C0A0F987852AB25B1389);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Show ADS");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8A0D780D2B6FF34C0047C0A0F987852AB25B1389, NULL);
		// Advertisement.Show(_adUnitId, this);
		String_t* L_0 = __this->____adUnitId_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsShowComplete_m6F59CED339A2C7958D308D42CA9AA00A0BCE9775 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.SKIPPED))
		String_t* L_0 = ___adUnitId0;
		String_t* L_1 = __this->____adUnitId_7;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = 0;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___showCompletionState1));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_7 = __this->____adUnitId_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C(L_7, __this, NULL);
	}

IL_0039:
	{
		// isReady = true;
		__this->___isReady_4 = (bool)1;
		// }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsFailedToLoad_mBFBD1EEFBEF5571829E6F6AB81DD3347C86ACA06 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsShowFailure_m06A3AD08A40DBD80BB4A7E88D058E4ADD44370E3 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsShowStart_m51C15C799F407B00D9B541DB86803BC219B452FF (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string adUnitId) { }
		return;
	}
}
// System.Void RewardedAds::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnUnityAdsShowClick_mB9013EFB3ABF3D38C74544FBC4A169F7A7F71A80 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void RewardedAds::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds_OnDestroy_mE5D9F06942423696AA06E9F9C96DEF0221C8FFF9 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) 
{
	{
		// isReady = true;
		__this->___isReady_4 = (bool)1;
		// }
		return;
	}
}
// System.Void RewardedAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAds__ctor_m5ED0C7783AC86EB14C172A82481F0231F71DB2A8 (RewardedAds_t7F74D09745A051C264622A5A433E3ECD766ED739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string _androidAdUnitId = "Rewarded_Android";
		__this->____androidAdUnitId_5 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_5), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		// [SerializeField] string _iOSAdUnitId = "Rewarded_iOS";
		__this->____iOSAdUnitId_6 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdUnitId_6), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
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
// System.Void Simplethings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Simplethings_Start_m26E2046CA7CD982537CCEE57F1D66B74404A3B04 (Simplethings_t47706D14FCE38EE1D66767E9EB8966A8258C7446* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Simplethings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Simplethings_Update_mC5E9EB176CD38FE79DF52ABC93AD158D3487D850 (Simplethings_t47706D14FCE38EE1D66767E9EB8966A8258C7446* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.position.y < -5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-5.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Simplethings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Simplethings__ctor_m7D6F389723EEA52608373D9C2EFD0192580280FC (Simplethings_t47706D14FCE38EE1D66767E9EB8966A8258C7446* __this, const RuntimeMethod* method) 
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
// System.Void TextScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScript_Start_m44C66CEBB5ED59E903DD97F937805EED27C81404 (TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScript_Update_m86710E15198900270AF2957A2D0264B37B80E77D (TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextScript::TextNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScript_TextNew_m2E122E1637BFF2FC1BA4828F9E4A085D8D9C6B6B (TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScript__ctor_mA005176ACFCDDDA6E0A25D522979ABE85527B927 (TextScript_t4D85E8F8F8B5EEC06BFA12E40FF12F75B94C090E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
