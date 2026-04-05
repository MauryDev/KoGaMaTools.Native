#pragma once
#include "../../Core/DITools.h"

namespace KoGaMaTools::Services
{
	class AntiBanService: public Core::IInitializable
	{
		inline static std::shared_ptr<AntiBanService> Instance;

	public:
		void Init(Core::DIContainer& di) override;
		static void NoneFunc();
	};
}