//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_MYTESTCLIENTHANDLER_H
#define EVENDERCH2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "FileCacheManager.h"

using namespace std;

class MyTestClientHandler: public ClientHandler {
    FileCacheManager *cacheManager;

public:
    virtual void handleClient(istream & input) = 0;
};


#endif //EVENDERCH2_MYTESTCLIENTHANDLER_H
