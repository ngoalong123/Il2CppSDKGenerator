#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnSpotGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnSpotGroup"));
	}

	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnSpotGroups() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& spawnSpots() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}