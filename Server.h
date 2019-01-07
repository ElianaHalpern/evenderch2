//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_SERVER_H
#define EVENDERCH2_SERVER_H

#include "ClientHandler.h"

namespace server_side {

    class Server {
    public:

        virtual void open(int port, ClientHandler *clientHandler) = 0;

        virtual void stop() = 0;
    };
}


#endif //EVENDERCH2_SERVER_H
