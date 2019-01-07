//
// Created by eliana on 1/7/19.
//

#include "Data.h"

vector<string> Data:: fileToVector(string str, char delimiter){
    string temp = "";
    vector<string> result;
    for (string::iterator it = str.begin(); it != str.end(); ++it) {
        if (*it != delimiter) {
            temp += *it;
        } else {
            result.push_back(temp);
            temp = "";
        }
    }
    result.push_back(temp);
    return result;
}