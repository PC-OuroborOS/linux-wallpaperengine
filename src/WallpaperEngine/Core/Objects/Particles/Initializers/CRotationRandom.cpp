#include "CRotationRandom.h"

#include "WallpaperEngine/Core/Core.h"

using namespace WallpaperEngine::Core::Objects::Particles::Initializers;

CRotationRandom* CRotationRandom::fromJSON (json data, irr::u32 id)
{
    auto min_it = data.find ("min");
    auto max_it = data.find ("max");

    irr::core::vector3df min = irr::core::vector3df ();
    irr::core::vector3df max = irr::core::vector3df ();

    if (min_it != data.end ())
    {
        min = WallpaperEngine::Core::ato3vf (*min_it);
    }

    if (max_it != data.end ())
    {
        max = WallpaperEngine::Core::ato3vf (*max_it);
    }

    return new CRotationRandom (id, min, max);
}

CRotationRandom::CRotationRandom (irr::u32 id, irr::core::vector3df min, irr::core::vector3df max) :
        CInitializer (id, "rotationrandom"),
        m_min (min),
        m_max (max)
{
}

const irr::core::vector3df CRotationRandom::getMinimum () const
{
    return this->m_min;
}

const irr::core::vector3df CRotationRandom::getMaximum () const
{
    return this->m_max;
}