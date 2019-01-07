//
// Created by eliana on 1/3/19.
//

#include "FileCacheManager.h"

bool FileCacheManager:: isExist(string problem){
    auto search = solutions.find(problem);
    return search != solutions.end();
}

string FileCacheManager:: popSolutions(string problem){
    return solutions.at(problem);
}

void FileCacheManager:: saveSolutions(string problem, string solution){
    solutions.insert(problem, solution);
}