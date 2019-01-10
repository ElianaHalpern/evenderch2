//
// Created by eliana on 1/10/19.
//

#include "Lexer.h"


static const vector<string> splitByLines(string &s, const char &delimiter) {

    string buff{""};
    vector<string> v;

    for (auto n : s) {
        if (n != delimiter)
            buff += n;
        else if (n == delimiter && buff != "") {
            v.push_back(buff);
            buff = "";
        }
    }
    if (buff != "") {
        v.push_back(buff);
    }
    return v;
}
