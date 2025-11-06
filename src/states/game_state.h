/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/06 6:09
  filename:  AriesGames\BomberManClient\src\states\game_state.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_STATES_GAME_STATE_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_STATES_GAME_STATE_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include "states/sdl_state.h"
#include "core/asset_manager.h"
#include "map/map_manager.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

class GameState {
 public:
  GameState();
  virtual ~GameState();

  void Loop();

 private:
  SDLState sdl_state_;
  AssetManager asset_manager_;
  MapManager map_manager_;

 private:
  bool inited_;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_STATES_GAME_STATE_H
// -----------------------------------------------------------------------------
