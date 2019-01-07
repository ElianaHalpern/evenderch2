//
// Created by noa on 1/6/19.
//

#include <bits/stdc++.h>
#include <algorithm>
#include "StringReverser.h"

/**
 * return a reversed string.
 * @param input .
 * @return input reversed
 */
string StringReverser::solve(string input) {
    string temp = input;
    reverse(temp.begin(), temp.end());
    return temp;
}