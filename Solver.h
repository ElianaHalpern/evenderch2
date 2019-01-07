//
// Created by eliana on 1/3/19.
//

#ifndef EVENDERCH2_SOLVER_H
#define EVENDERCH2_SOLVER_H

template<class Problem, class Solution>
class Solver {
public:
    virtual Solution solve(Problem p) = 0;
};

#endif //EVENDERCH2_SOLVER_H
