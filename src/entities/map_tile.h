/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/05 4:52
  filename:  AriesGames\BomberManClient\src\entities\map_tile.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_MAP_TILE_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_MAP_TILE_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include "glm/glm.hpp"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
namespace _AssetTileType {
enum T {
  kBalk,
  kWall,
  kGrass,
  kTeleportGate,
  kQuarantineZone,
  kDragonEggGst,
  kMax,
};
};
typedef _AssetTileType::T AssetTileType;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
namespace _MapTileType {
enum T {
  kGrass,
  kWall,
  kBalk,
  kTeleportGate,
  kQuarantineZone,
  kDragonEggGst,
  kMax,
};
};
typedef _MapTileType::T MapTileType;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

struct MapTile {
  MapTileType type;
  glm::vec2 map_pos;
  glm::vec2 screen_pos;
  SDL_Texture *texture;
  SDL_FRect rect;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_MAP_TILE_H
// -----------------------------------------------------------------------------
