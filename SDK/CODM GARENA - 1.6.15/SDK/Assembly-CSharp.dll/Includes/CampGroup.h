#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampGroup"));
	}

	template <typename T = uintptr_t> T& areaType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}