#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Legs_C_02_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Legs_C_02.Item_Legs_C_02_C
// 0x0000 (0x0278 - 0x0278)
class UItem_Legs_C_02_C : public UEquipableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(42188);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
