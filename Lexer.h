//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_LEXER_H
#define EVENDERCH2_LEXER_H

#include <string>
#include <vector>

using namespace std;

class Lexer {
public:
    virtual vector<string> splitByLines(string &s, const char &delimiter) = 0;
};


#endif //EVENDERCH2_LEXER_H
