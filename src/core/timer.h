/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/04 20:25
  filename:  AriesGames\BomberManClient\src\core\timer.h
  
  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_TIMER_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_TIMER_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//#include "include/macro.h"
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

class Timer {
public:
  Timer(float length) : length(length), time(0), timeout(false) {}

  void step(float deltaTime) {
    time += deltaTime;
    if (time >= length) {
      time = fmodf(time, length);
    }
  }

  bool isTimeout() const { return timeout; }
  float getTime() const { return time; }
  float getLength() const { return length; }
  void reset() { time = 0; }

 private:
  float length;
  float time;
  bool timeout;
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_CORE_TIMER_H
// -----------------------------------------------------------------------------
