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
    void open(int port, ClientHandler *c);

    void stop();

    bool isOpen();
};


#endif //EVENDERCH2_MYSERIALSERVER_H
