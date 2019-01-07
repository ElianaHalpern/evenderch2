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

class FileCacheManager: public CacheManager<std::string, std::string>{
    unordered_map<string, string> solutions;

    FileCacheManager:: FileCacheManager() {
        //Default behaviour- loading file to solutions map only once
        loadFileToMap();
    }

public:
    virtual bool isExist(string problem) = 0;
    virtual string popSolution(string problem) = 0;
    virtual void saveSolution(string problem, string solution) = 0;
    virtual void saveToFile(unordered_map<string, string> solutions);
    virtual void loadFileToMap();
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
