//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CLIENTHANDLER_H
#define EVENDERCH2_CLIENTHANDLER_H

#include <iostream>

class ClientHandler {
public:
    virtual void handleClient(istream & input, ostream & output) = 0;
};
#endif //EVENDERCH2_CLIENTHANDLER_H
