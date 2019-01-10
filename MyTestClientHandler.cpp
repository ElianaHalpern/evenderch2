//
// Created by eliana on 1/3/19.
//

#include "MyTestClientHandler.h"

string MyTestClientHandler::handleClient(int socket) {
    string line = buffer;
    string problem = "";
    string solution = "";
    //לולאה של קריאת שורה מהבאםר כל פעם
    if (line != "end") {
        problem += line;
    }
    cout.flush();
    //מסתיימת הלולאה של הבאפר

    if (this->cacheManager->isExist(problem)) {
        solution = this->cacheManager->popSolution(problem);
    } else {
        solution = this->solver->solve(problem);
        this->cacheManager->saveSolution(problem, solution);
    }
    return solution;
}