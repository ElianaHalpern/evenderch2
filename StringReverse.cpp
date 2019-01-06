//
// Created by noa on 1/6/19.
//

#include <bits/stdc++.h>
#include <algorithm>
#include "StringReverse.h"
/**
 * return a reversed string.
 * @param input .
 * @return input reversed
 */
string StringReverse::solve(string input) {
//    string reversedString = "";
//
//    for (int i = input.size() - 1; i >= 0; i--) {
//        reversedString += input[i];
//    }
//    return reversedString;
    string temp = input;
    reverse(temp.begin(), temp.end());
    return temp;


}