//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CACHEMANAGER_H
#define EVENDERCH2_CACHEMANAGER_H

#include <string>
#include <unordered_map>

using namespace std;
template<class Problem, class Solution>

class CacheManager {
public:
    virtual bool isExist(Problem problem) = 0;
    virtual string popSolution(Problem problem) = 0;
    virtual void saveSolution(Problem problem, Solution solution) = 0;
    virtual void saveToFile(unordered_map<string, string> solutions);
    virtual void loadFileToMap();
};

#endif //EVENDERCH2_CACHEMANAGER_H
