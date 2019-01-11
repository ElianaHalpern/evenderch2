#include "Lexer.h"

static const vector<string> splitByLines(string &s, const char &delimiter) {
    string temp = "";
    vector<string> result;
    for (string::iterator it = s.begin(); it != s.end(); ++it) {
        if (*it != delimiter) {
            temp += *it;
        } else if (*it == delimiter && temp != "") {
            result.push_back(temp);
            temp = "";
        }
    }
    if (temp != "") {
        result.push_back(temp);
    }
    return result;
}
