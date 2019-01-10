#include <iostream>
#include "Solver.h"
#include "server/Server.h"
#include "server/CacheManager.h"
#include "MySerialServer.h"
#include "MatrixSolver.h"
#include "Point.h"
#include "server/FileCacheManager.h"
#include "server/MyTestClientHandler.h"

using namespace std;

namespace boot {
    class Main {
    public:
        int main(int argc, char *argv[]) {
            Solver<Point> *solver = new MatrixSolver();
            CacheManager*cacheManager = new FileCacheManager();
            cacheManager->loadFileToMap();
            Server *server = new MySerialServer();
            ClientHandler *clientHandler = new MyTestClientHandler(solver, cacheManager);
            server->open(stoi(argv[0]), clientHandler);
            return 0;
        }
    };
}
