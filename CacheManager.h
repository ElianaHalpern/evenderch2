//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CACHEMANAGER_H
#define EVENDERCH2_CACHEMANAGER_H

#include <string>

template<class Problem, class Solution>
using namespace std;

class CacheManager {
public:
    virtual bool isExist(Problem key) = 0;
    virtual string popSulotion(string key) = 0;
    virtual void saveSulotion(string key, string val) = 0;
};

#endif //EVENDERCH2_CACHEMANAGER_H
