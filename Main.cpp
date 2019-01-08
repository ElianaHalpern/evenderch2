#include <iostream>
#include "Solver.h"
#include "Server.h"
#include "CacheManager.h"
#include "MySerialServer.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "MyTestClientHandler.h"

using namespace std;

namespace boot {
    class Main {
    public:
        int main(int argc, char *argv[]) {
            Solver<string, string> *solver = new StringReverser();
            CacheManager<string, string> *cacheManager = new FileCacheManager();
            cacheManager->loadFileToMap();
            Server *server = new MySerialServer();
            ClientHandler *clientHandler = new MyTestClientHandler(solver, cacheManager);
            server->open(stoi(argv[0]), clientHandler);
            return 0;
        }
    };
}
