/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/05 16:18
  filename:  AriesGames\BomberManClient\src\entities\spoil.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_SPOIL_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_SPOIL_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//#include "include/macro.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
namespace _SpoilType {
enum T {
  kDragonEggMystic,
  kDragonEggAttack,
  kDragonEggDelay,
  kDragonEggSpeed,
  kMax,
};
};
typedef _SpoilType::T SpoilType;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

struct Spoil {
  SpoilType type;
  glm::vec2 map_pos;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_ENTITIES_SPOIL_H
// -----------------------------------------------------------------------------
