/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/02 21:40
  filename:  AriesGames\BomberManClient\src\core\asset_manager.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ASSET_MANAGER_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ASSET_MANAGER_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include <string>
#include <vector>

#include "core/animation.h"
#include "entities/map_tile.h"
#include "entities/spoil.h"
#include "states/sdl_state.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
namespace _PlayerDir {
enum T {
  kDown,
  kUp,
  kLeft,
  kRight,
  kMax,
};
};
typedef _PlayerDir::T PlayerDir;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
namespace _PlayerNo {
enum T {
  k1,
  k2,
  kMax,
};
};
typedef _PlayerNo::T PlayerNo;
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
struct AssetTexture {
  SDL_Texture *sdl_texture;
  SDL_FRect rect;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

class AssetManager {
 public:
  AssetManager(SDLState &sdl_state);
  virtual ~AssetManager();

  static AssetManager& Instance() { return *instance_; }

  bool Initialize();

  void Load();
  
  float SpriteSize() { return sprite_size_; }

  AssetTexture MapTexture(MapTileType object) { return map_textures_[object]; }
  AssetTexture SpoilTexture(SpoilType object) { return map_textures_[object]; }

  SDL_Texture* DragonEggGstTexture() { return dragon_egg_gst_texture_; }

  Animation PlayerAnimation() { return player_animation_; }
  SDL_Texture* PlayerTexture(PlayerNo no) { return player_textures_[no]; }

 private:
  void Unload();
  SDL_Texture *loadTexture(SDL_Renderer *renderer, const std::string &filepath);

 private:
  SDLState &sdl_state_;

  float sprite_size_;

  std::vector<AssetTexture> map_textures_;
  std::vector<AssetTexture> spoil_textures_;

  SDL_Texture *dragon_egg_gst_texture_;

  Animation player_animation_;
  std::vector<SDL_Texture *> player_textures_;

  static AssetManager* instance_;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ASSET_MANAGER_H
// -----------------------------------------------------------------------------
