//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CACHEMANAGER_H
#define EVENDERCH2_CACHEMANAGER_H

#include <string>

using namespace std;
template<class Problem, class Solution>

class CacheManager {
public:
    virtual bool isExist(Problem problem) = 0;
    virtual string popSulotion(Problem problem) = 0;
    virtual void saveSulotion(Problem problem, Solution solution) = 0;
};

#endif //EVENDERCH2_CACHEMANAGER_H
