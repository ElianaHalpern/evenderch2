//
// Created by noa on 1/10/19.
//

#ifndef EVENDERCH2_LEXER_H
#define EVENDERCH2_LEXER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Lexer {

public:


    static const std::vector<std::string> splitByLines(string &s, const char &delimiter) {

        string buff{""};
        vector<std::string> v;

        for (auto n : s) {
            if (n != delimiter)
                buff += n;
            else if (n == delimiter && buff != "") {
                v.push_back(buff);
                buff = "";
            }
        }
        if (buff != "")
            v.push_back(buff);

        return v;

    }



};


#endif //EVENDERCH2_LEXER_H
