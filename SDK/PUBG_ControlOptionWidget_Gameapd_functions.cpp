// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ControlOptionWidget_Gameapd_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControlOptionWidget_Gameapd_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93716);

	UControlOptionWidget_Gameapd_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UControlOptionWidget_Gameapd_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93710);

	UControlOptionWidget_Gameapd_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetCurrentFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControlOptionWidget_Gameapd_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93707);

	UControlOptionWidget_Gameapd_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlOptionWidget_Gameapd_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93702);

	UControlOptionWidget_Gameapd_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnPrevOrNextFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControlOptionWidget_Gameapd_C::OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93692);

	UControlOptionWidget_Gameapd_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UControlOptionWidget_Gameapd_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93685);

	UControlOptionWidget_Gameapd_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlOptionWidget_Gameapd_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93684);

	UControlOptionWidget_Gameapd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93683);

	UControlOptionWidget_Gameapd_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnReset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93682);

	UControlOptionWidget_Gameapd_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93681);

	UControlOptionWidget_Gameapd_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.ExecuteUbergraph_ControlOptionWidget_Gameapd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UControlOptionWidget_Gameapd_C::ExecuteUbergraph_ControlOptionWidget_Gameapd(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93653);

	UControlOptionWidget_Gameapd_C_ExecuteUbergraph_ControlOptionWidget_Gameapd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
