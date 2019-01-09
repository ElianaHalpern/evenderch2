//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHER_H
#define EVENDERCH2_SEARCHER_H

#include "Searchable.h"

using namespace std;
template<class T>

class Searcher{

    virtual vector<State<T>> search (Searchable<T> searchable) = 0;

    virtual int getNumberOfNodesEvaluated() = 0;
};
#endif //EVENDERCH2_SEARCHER_H
