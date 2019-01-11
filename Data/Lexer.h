//
<<<<<<< HEAD
// Created by eliana on 1/10/19.
=======
// Created by noa on 1/10/19.
>>>>>>> origin/master
//

#ifndef EVENDERCH2_LEXER_H
#define EVENDERCH2_LEXER_H

<<<<<<< HEAD
=======
#include <iostream>
>>>>>>> origin/master
#include <string>
#include <vector>

using namespace std;

<<<<<<< HEAD
class Lexer {
public:
    virtual vector<string> splitByLines(string &s, const char &delimiter) = 0;
=======

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



>>>>>>> origin/master
};


#endif //EVENDERCH2_LEXER_H
