/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/04 20:28
  filename:  AriesGames\BomberManClient\src\core\animation.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ANIMATION_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ANIMATION_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include "timer.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

class Animation {
 public:
  Animation() : timer_(0), frame_count_(0) {}
  Animation(int frame_count, float length) : timer_(length), frame_count_(frame_count) {}

  void Step(float delta_time) {
    timer_.Step(delta_time);
  }

  float GetLength() const { return timer_.GetLength(); }
  float GetTotalTime() const { return timer_.GetTotalTime(); }

  int CurrentFrame() const {
    return static_cast<int>(timer_.GetTime() / timer_.GetLength() * frame_count_);
  }

 private:
  Timer timer_;
  int frame_count_;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ANIMATION_H
// -----------------------------------------------------------------------------

