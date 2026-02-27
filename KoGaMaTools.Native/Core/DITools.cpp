#include "DITools.h"

KoGaMaTools::Core::DIContainer& KoGaMaTools::Core::DIContainer::GetInstance()
{
    static DIContainer instance;
    return instance;
}

void KoGaMaTools::Core::DIContainer::InitAll()
{
    for (auto& type: m_order) {
        auto& service = this->m_services[type];
        auto initializable = std::dynamic_pointer_cast<IInitializable>(service);
        if (initializable)
            initializable->Init(*this);

    }
}
void KoGaMaTools::Core::DIContainer::Reset()
{
    this->m_order.clear();
    this->m_services.clear();
}