//
// Created by eliana on 1/3/19.
//

#include "MyTestClientHandler.h"

void MyTestClientHandler:: handleClient(istream & input){
    string line;
    getline(std::cin, line);
    if (this->cacheManager->isExist(line)) {
        string s = this->cacheManager->popSolutions(line);
        cout << s << endl;
    }
    this->cacheManager->saveSolutions();
}