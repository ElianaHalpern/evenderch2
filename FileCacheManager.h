//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_FILECACHEMANAGER_H
#define EVENDERCH2_FILECACHEMANAGER_H

#include "CacheManager.h"
#include "MyTestClientHandler.h"
#include <unordered_map>
#include <string>

using namespace std;

class FileCacheManager: public CacheManager<std::string, std::string>{
    unordered_map<string, string> solutions;
public:
    virtual bool isExist(string problem) = 0;
    virtual string popSolutions(string problem) = 0;
    virtual void saveSolutions(string problem, string solution) = 0;
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
