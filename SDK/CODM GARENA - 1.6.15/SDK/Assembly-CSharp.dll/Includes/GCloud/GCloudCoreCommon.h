#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GCloudCoreCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GCloudCoreCommon"));
	}

	template <typename T = Il2CppString*> static T& PluginName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}