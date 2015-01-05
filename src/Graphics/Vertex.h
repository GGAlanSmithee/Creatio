#ifndef VERTEX_H_INCLUDED
#define VERTEX_H_INCLUDED

#include <glm/glm.hpp>

namespace GGGraphics
{
    /// Contains information about a vertex position, texture coordinates, normals etc
    /// @author Alan Smithee
    /// @date created 2014-11-22
    /// @date changed 2014-12-21
    typedef struct Vertex
    {
        /// Default constructor
        /// @author Alan Smithee
        /// @date created 2014-12-20
        /// @date changed 2015-01-05
        /// @param position the position of the vertex
        /// @param normal the normal of the vertex
        /// @param texCoord the texture coordinates of the vertex
        Vertex(const glm::vec3& position, const glm::vec3& normal, const glm::vec2& texCoord) :
            Position(position),
            Normal(normal),
            TexCoord(texCoord)
        {
            // Empty
        }

        glm::vec3 Position;
        glm::vec3 Normal;
        glm::vec2 TexCoord;
    }
    Vertex;
}

#endif // VERTEX_H_INCLUDED
