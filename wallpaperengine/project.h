#ifndef WALLENGINE_PROJECT_H
#define WALLENGINE_PROJECT_H

#include <irrlicht/irrlicht.h>
#include <nlohmann/json.hpp>
#include "scene.h"

namespace wp
{
    using json = nlohmann::json;

    class project
    {
    public:
        project (irr::io::path baseDirectory);

    private:
        json m_projectFile;
        std::string m_content;

        std::string m_title;
        std::string m_type;
        std::string m_file;
        scene* m_scene;
    };
};

#endif //WALLENGINE_PROJECT_H
