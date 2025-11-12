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

class GameState : public MapManager {
 public:
  GameState();
  virtual ~GameState();

  static GameState* CreateInstance();

  SDL_AppResult AppQuit() { return app_quit_; }

  bool Initialize();

  void OnLoop();
  void Update(float delta_time);
  void Draw();

  void OnEvent(SDL_Event &event);
  void HandleKeyInput(Player *player, SDL_Event &event);

  void TestParsePlayers();

 private:
  SDLState sdl_state_;
  AssetManager asset_manager_;

 private:
  SDL_AppResult app_quit_;

  uint64_t app_time_;

  static GameState *instance_;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_STATES_GAME_STATE_H
// -----------------------------------------------------------------------------
