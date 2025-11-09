/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/09 10:27
  filename:  AriesGames\BomberManClient\src\network\protocol_def.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_PROTOCOL_DEF_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_PROTOCOL_DEF_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//#include "include/macro.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
namespace _ServerMsgType {
enum T {
  kJoinGame,
  kDrivePlayer,
  kGameStart,
  kGameUpdate,
  kGamePause,
  kGameEnd,
  kPlayerJoined,
  kPlayerStartMoving,
  kPlayerStopMoving,
  kPlayerEndMoving,
  kPlayerPickSpoil,
  kPlayerBeIsolated,
  kPlayerBackToPlayground,
  kBombSetup,
  kBombExploded,
  kMax,
};
}
typedef _ServerMsgType::T ServerMsgType;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_PROTOCOL_DEF_H
// -----------------------------------------------------------------------------
