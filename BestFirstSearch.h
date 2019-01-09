//
// Created by eliana on 1/9/19.
//

#ifndef EVENDERCH2_BESTFIRSTSEARCH_H
#define EVENDERCH2_BESTFIRSTSEARCH_H


#include "Searcher.h"

using namespace std;
template <class T>

class BestFirstSearch: public Searcher<T> {
    vector<State<T>> search (Searchable<T> searchable);

    int getNumberOfNodesEvaluated();
};


#endif //EVENDERCH2_BESTFIRSTSEARCH_H
