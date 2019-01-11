//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_MYTESTCLIENTHANDLER_H
#define EVENDERCH2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "../Data/Solver.h"
#include "CacheManager.h"

namespace server_side {
    class MyTestClientHandler : public ClientHandler {
    private:
        Solver<std::string, std::string> *solver;
        CacheManager<std::string, std::string> *cache;

        /**
        MyTestClientHandler(Solver<T> *s, CacheManager *c) {
            this->solver = s;
            this->cacheManager = c;
        }
         **/

        void handleClient(int socket) override;
    };
};


#endif //EVENDERCH2_MYTESTCLIENTHANDLER_H
