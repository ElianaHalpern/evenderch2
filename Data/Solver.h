//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_SOLVER_H
#define EVENDERCH2_SOLVER_H

#include "../Algorithms/Searcher.h"

class Solver {
public:
    virtual std::string solve(std::string problem) = 0;
};

#endif //EVENDERCH2_SOLVER_H
