//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CLIENTHANDLER_H
#define EVENDERCH2_CLIENTHANDLER_H

#include <iostream>
#include "Server.h"

namespace server_side {
    class ClientHandler {
    public:
        virtual void handleClient(int socket) = 0;
    };
};
#endif //EVENDERCH2_CLIENTHANDLER_H
