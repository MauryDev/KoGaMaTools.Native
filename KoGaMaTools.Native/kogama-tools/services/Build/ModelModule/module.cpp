#include "module.h"


void KoGaMaTools::Services::ModelModule::Init(Core::DIContainer& di)
{
	di.NewService<CopyModelService>()
		.NewService<PasteModelService>()
		.NewService<ModelService>()
		.NewService<CustomModelScale>();
}
