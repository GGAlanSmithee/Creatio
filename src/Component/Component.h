#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED

#include <string>
#include <glm/glm.hpp>

namespace GGComponent
{
    enum class Type : int
    {
        None       = 0,
        Model      = 1 << 0,
        Physics    = 1 << 1,
        Appearance = 1 << 2
    };

    typedef struct Appearance
    {
        std::string TextureId    = "";
    }
    Appearance;

    typedef struct Model
    {
        glm::mat4 Scale       = glm::mat4(1.0);
        glm::mat4 Rotation    = glm::mat4(1.0);
        glm::mat4 Translation = glm::mat4(1.0);

        glm::mat4 Get()
        {
            return Translation * Rotation * Scale;
        }
    }
    Model;

    typedef struct Physics
    {
        glm::vec2 Velocity = glm::vec2(1.0f);
    }
    Physics;
}

#endif // COMPONENT_H_INCLUDED
