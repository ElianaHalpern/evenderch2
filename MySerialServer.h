//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_MYSERIALSERVER_H
#define EVENDERCH2_MYSERIALSERVER_H

#include "Server.h"
#include "ClientHandler.h"

using namespace server_side;
using namespace std;

class MySerialServer : public Server {
public:
    virtual void open(int port, ClientHandler *c) = 0;

    virtual void stop() = 0;

    virtual bool isOpen()= 0;
};


#endif //EVENDERCH2_MYSERIALSERVER_H
