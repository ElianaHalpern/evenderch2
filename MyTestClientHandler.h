//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_MYTESTCLIENTHANDLER_H
#define EVENDERCH2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
#include <iostream>

using namespace std;
template <class T>

class MyTestClientHandler : public ClientHandler {
public:
    Solver<T> *solver;
    CacheManager *cacheManager;

    MyTestClientHandler(Solver<T> *s, CacheManager *c) {
        this->solver = s;
        this->cacheManager = c;
    }

    string handleClient(int socket) override;
};


#endif //EVENDERCH2_MYTESTCLIENTHANDLER_H
