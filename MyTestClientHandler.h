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

class MyTestClientHandler : public ClientHandler {
private:
    Solver<string, string> *solver;
    CacheManager<string, string> *cacheManager;
public:
    MyTestClientHandler(Solver<string, string> *s, CacheManager<string, string> *c) {
        this->solver = s;
        this->cacheManager = c;
    }

    virtual string handleClient(string buffer) = 0;
};


#endif //EVENDERCH2_MYTESTCLIENTHANDLER_H
