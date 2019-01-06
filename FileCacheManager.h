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

class FileCacheManager {
    MyTestClientHandler *testClient;
    unordered_map<string, string> solutions;
public:
    virtual bool isExist(string &key) = 0;
    virtual string popSolutions(string &key) = 0;
    virtual void saveSolutions(string &key, string &val) = 0;
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
