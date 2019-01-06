//
// Created by eliana on 1/3/19.
//

#include "FileCacheManager.h"

bool FileCacheManager:: isExist(string &key){
    auto search = solutions.find(key);
    return search != solutions.end();
}

string FileCacheManager:: popSolutions(string &key){
    return solutions.at(key);
}

void FileCacheManager:: saveSolutions(string &key, string &val){
    solutions.insert(key, val);
}