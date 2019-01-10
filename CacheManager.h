//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CACHEMANAGER_H
#define EVENDERCH2_CACHEMANAGER_H

#include <string>
#include <unordered_map>

using namespace std;

class CacheManager {
public:
    virtual bool isExist(string problem) = 0;
    virtual string popSolution(string problem) = 0;
    virtual void saveSolution(string problem, string solution) = 0;
    virtual void saveToFile(unordered_map<string, string> solutions);
    virtual void loadFileToMap();
};

#endif //EVENDERCH2_CACHEMANAGER_H
