//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_PARALLELSERVER_H
#define EVENDERCH2_PARALLELSERVER_H


#include "Server.h"
#include "ClientHandler.h"

namespace server_side {
    class MyParallelServer : public Server {
    public:
        void open(int port, server_side::ClientHandler *c) = 0;

        void stop() = 0;

        bool isOpen() = 0;
    };
};

#endif //EVENDERCH2_PARALLELSERVER_H
