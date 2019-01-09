//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_FILECACHEMANAGER_H
#define EVENDERCH2_FILECACHEMANAGER_H

#include "CacheManager.h"
#include "Server.h"
#include "Data.h"
#include <unordered_map>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
using namespace server_side;
template<class Problem, class Solution>

class FileCacheManager: public CacheManager<Problem, Solution>{
    unordered_map<string, string> solutions;

public:
    virtual bool isExist(Problem problem);
    virtual Solution popSolution(Problem problem);
    virtual void saveSolution(Problem problem, Solution solution);
    virtual void saveToFile(unordered_map<Problem, Solution> solutions);
    virtual void loadFileToMap();
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
