#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class IServerChannelSinkProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider"));
	}


	template <typename T = void> T set_Next(uintptr_t value) {
		return ((T (*)(IServerChannelSinkProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}