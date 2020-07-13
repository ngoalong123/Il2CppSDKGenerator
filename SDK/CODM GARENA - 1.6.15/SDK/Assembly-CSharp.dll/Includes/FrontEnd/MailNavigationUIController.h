#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_MainController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0614))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(MailNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C06B4))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(MailNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C07F0))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C08E4))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C099C))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0A3C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0B00))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0B08))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0B10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FadeOut() {
		return ((T (*)(MailNavigationUIController*))(Il2CppBase() + 0x36C0B18))(this);
	}

};

}