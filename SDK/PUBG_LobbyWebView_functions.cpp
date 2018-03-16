// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebView_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Parameter                      (Parm, ZeroConstructor)

void ULobbyWebView_C::WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84030);

	ULobbyWebView_C_WebViewBroadcast_Params params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewUnload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewUnload(int ViewIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84027);

	ULobbyWebView_C_WebViewUnload_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VeiwIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewShow(int VeiwIndex, bool Visible)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84020);

	ULobbyWebView_C_WebViewShow_Params params;
	params.VeiwIndex = VeiwIndex;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84003);

	ULobbyWebView_C_HandleEventFromWeb_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewInputFocus(int ViewIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83990);

	ULobbyWebView_C_WebViewInputFocus_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)

void ULobbyWebView_C::WebViewLoad(int ViewIndex, const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83983);

	ULobbyWebView_C_WebViewLoad_Params params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyWebView_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83982);

	ULobbyWebView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83979);

	ULobbyWebView_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyWebView_C::Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83978);

	ULobbyWebView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.J_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::J_1(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83976);

	ULobbyWebView_C_J_1_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
// (BlueprintEvent)

void ULobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83975);

	ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressAKey
// (BlueprintCallable, BlueprintEvent)

void ULobbyWebView_C::PressAKey()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83974);

	ULobbyWebView_C_PressAKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressBKey
// (BlueprintCallable, BlueprintEvent)

void ULobbyWebView_C::PressBKey()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83973);

	ULobbyWebView_C_PressBKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::ExecuteUbergraph_LobbyWebView(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(83946);

	ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
