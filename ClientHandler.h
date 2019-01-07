//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CLIENTHANDLER_H
#define EVENDERCH2_CLIENTHANDLER_H

#include <iostream>

using namespace std;

class ClientHandler {
public:
    virtual string handleClient(string buffer) = 0;
};
#endif //EVENDERCH2_CLIENTHANDLER_H
