//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHER_H
#define EVENDERCH2_SEARCHER_H

#include "Searchable.h"

template<class Problem, class Solution>
class Searcher{

    virtual Solution search (Searchable searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;
};
#endif //EVENDERCH2_SEARCHER_H
