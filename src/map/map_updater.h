/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/09 8:57
  filename:  AriesGames\BomberManClient\src\map\map_updater.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_MAP_MAP_UPDATER_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_MAP_MAP_UPDATER_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include <nlohmann/json.hpp>

#include "network/protocol_def.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
using json = nlohmann::json;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

class MapUpdater {
 public:
  virtual void UpdatePlayers(json &obj) = 0;

 protected:
  ServerMsgType server_msg_type_;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_MAP_MAP_UPDATER_H
// -----------------------------------------------------------------------------
