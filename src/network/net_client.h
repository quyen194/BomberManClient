/********************************************************************
  Copyright 2014, Cong Quyen Knight. All rights reserved

  project:   Aries Games Project
  author:    quyen19492
  email:     quyen19492@gmail.com

  created:   2025/11/09 9:07
  filename:  AriesGames\BomberManClient\src\network\net_client.h

  purpose:
*********************************************************************/


// -----------------------------------------------------------------------------
#ifndef ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_NET_CLIENT_H
#define ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_NET_CLIENT_H
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#include "map/map_updater.h"

// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

class NetClient : public MapUpdater {
 public:
  NetClient();
  virtual ~NetClient();

 protected:
};
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
#endif  // ARIES_GAMES_BOMBERMANCLIENT_SRC_NETWORK_NET_CLIENT_H
// -----------------------------------------------------------------------------
