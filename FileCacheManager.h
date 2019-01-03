//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_FILECACHEMANAGER_H
#define EVENDERCH2_FILECACHEMANAGER_H

#include "CacheManager.h"
#include "MyTestClientHandler.h"
#include <map>
#include <string>

using namespace std;

class FileCacheManager {
    MyTestClientHandler *testClient;
    map<string, string>;
public:
    virtual bool isExist(string &key) = 0;
    virtual string popSulotion(string &key) = 0;
    virtual void saveSulotion(string &key, string &val) = 0;
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
