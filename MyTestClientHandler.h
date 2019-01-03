//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_MYTESTCLIENTHANDLER_H
#define EVENDERCH2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"

class MyTestClientHandler: public ClientHandler {
public:
    virtual void handleClient(istream & input, ostream & output) = 0;
};


#endif //EVENDERCH2_MYTESTCLIENTHANDLER_H
