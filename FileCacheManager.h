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

class FileCacheManager: public CacheManager{
    unordered_map<string, string> solutions;

public:
    virtual bool isExist(string problem);
    virtual string popSolution(string problem);
    virtual void saveSolution(string problem, string solution);
    virtual void saveToFile(unordered_map<string, string> solutions);
    virtual void loadFileToMap();
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
