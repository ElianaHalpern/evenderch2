//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_FILECACHEMANAGER_H
#define EVENDERCH2_FILECACHEMANAGER_H

#include "CacheManager.h"
#include <unordered_map>
#include <string>

namespace server_side {
    class FileCacheManager : public CacheManager<std::string, std::string> {
        std::unordered_map<std::string, std::string> solutions;

    public:
        virtual bool isExist(std::string problem);

        virtual std::string popSolution(std::string problem);

        virtual void saveSolution(std::string problem, std::string solution);

        //virtual void saveToFile(unordered_map<string, string> solutions);

        //virtual void loadFileToMap();
    };
};


#endif //EVENDERCH2_FILECACHEMANAGER_H
