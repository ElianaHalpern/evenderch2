//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_SOLVER_H
#define EVENDERCH2_SOLVER_H

#include "Searcher.h"

template <class T>

class Solver {
public:
    Searcher<T> s;
    virtual string solve(string problem) = 0; //יבנה ממבר של searcheble
};

#endif //EVENDERCH2_SOLVER_H
