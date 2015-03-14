#ifndef APPLICATION_TILE_H_INCLUDED
#define APPLICATION_TILE_H_INCLUDED

#include "Math/Rect.h"
#include "Engine/Physics.h"

enum class GG_TileType
{
    None,
    Normal,
    Ice
};

class GG_Tile
{
    public:
        GG_Tile();
        GG_Tile(GG_Rect const&, const unsigned int, const GG_TileType, const GG_CollisionType);
        ~GG_Tile();

        friend GG_Rect const&          GG_GetBoundary(GG_Tile const&);
        friend unsigned int const      GG_GetTileNumber(GG_Tile const&);
        friend GG_TileType const       GG_GetTileType(GG_Tile const&);
        friend GG_CollisionType const  GG_GetCollisionType(GG_Tile const&);

    private:
        GG_Rect          boundary;
        unsigned int     tileNumber;
        GG_TileType      tileType;
        GG_CollisionType collisionType;
};

#endif // APPLICATION_TILE_H_INCLUDED
