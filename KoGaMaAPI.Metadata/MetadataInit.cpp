#include "MetadataInit.h"
#include <Tools.Il2Cpp.Lib.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "Tools.Il2Cpp.ICalls.h"
void KoGaMaAPI::Metadata::Install(const std::string& icalls_dat, const std::string& kogama_dat)
{
	Tools::Il2Cpp::Init();
	Tools::Il2Cpp::il2cpp_init("");

	auto metadata1 = Tools::Il2Cpp::Metadata::MetadataRoot::ReadFromFile(icalls_dat.c_str());

	auto metadata2 = Tools::Il2Cpp::Metadata::MetadataRoot::ReadFromFile(kogama_dat.c_str());

	auto domain = Tools::Il2Cpp::il2cpp_domain_get();
	Tools::Il2Cpp::Il2CppThread::Attach(domain);

	Tools::Il2Cpp::ICalls::Init(metadata1);

	KoGaMaAPI::KoGaMa::Init(metadata2);
}
