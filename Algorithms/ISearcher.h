//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_ISEARCHER_H
#define EVENDERCH2_ISEARCHER_H

#include "Searchable.h"

template<class Solution,class T>

class ISearcher {
public:
    virtual Solution search(Searchable<T> searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;
};

#endif //EVENDERCH2_ISEARCHER_H
