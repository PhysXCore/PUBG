// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MouseSettingsWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsEnableApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86030);

	UMouseSettingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDefaultSetting              (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::initailizeMouseSettingsWidget(bool bIsDefaultSetting)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86015);

	UMouseSettingsWidget_C_initailizeMouseSettingsWidget_Params params;
	params.bIsDefaultSetting = bIsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85996);

	UMouseSettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85995);

	UMouseSettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85994);

	UMouseSettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMouseSettingsWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85993);

	UMouseSettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnReset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85992);

	UMouseSettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::ExecuteUbergraph_MouseSettingsWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85981);

	UMouseSettingsWidget_C_ExecuteUbergraph_MouseSettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
