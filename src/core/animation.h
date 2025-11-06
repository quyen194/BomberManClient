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
  Animation() : timer(0), frameCount(0) {}
  Animation(int frameCount, float length) : timer(length), frameCount(frameCount) {}

  float getLength() const { return timer.getLength(); }
  int currentFrame() const {
    return static_cast<int>(timer.getTime() / timer.getLength() * frameCount);
  }
  void step(float deltaTime) {
    timer.step(deltaTime);
  }

 private:
  Timer timer;
  int frameCount;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_ANIMATION_H
// -----------------------------------------------------------------------------

