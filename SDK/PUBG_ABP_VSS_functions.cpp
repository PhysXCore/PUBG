// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_VSS_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_VSS.ABP_VSS_C.HandleFireSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::HandleFireSelect()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50844);

	UABP_VSS_C_HandleFireSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_VSS_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50843);

	UABP_VSS_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::Reload2_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50842);

	UABP_VSS_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.FireSelect_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::FireSelect_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50841);

	UABP_VSS_C_FireSelect_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::WeaponFire_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50840);

	UABP_VSS_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::CancelReload_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50839);

	UABP_VSS_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.ExecuteUbergraph_ABP_VSS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_VSS_C::ExecuteUbergraph_ABP_VSS(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(50827);

	UABP_VSS_C_ExecuteUbergraph_ABP_VSS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
