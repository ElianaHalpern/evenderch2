//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_CACHEMANAGER_H
#define EVENDERCH2_CACHEMANAGER_H

#include <string>

using namespace std;

class CacheManager {
public:
    virtual bool isExist(string key) = 0;
    virtual string popSulotion(string key) = 0;
    virtual void saveSulotion(string key, string val) = 0;
};

#endif //EVENDERCH2_CACHEMANAGER_H
