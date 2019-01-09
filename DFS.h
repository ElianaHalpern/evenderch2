//
// Created by eliana on 1/9/19.
//

#ifndef EVENDERCH2_DFS_H
#define EVENDERCH2_DFS_H


#include "Searcher.h"
using namespace std;
template <class T>

class DFS: public Searcher<T> {
    vector<State<T>> search (Searchable<T> searchable);

    int getNumberOfNodesEvaluated();
};


#endif //EVENDERCH2_DFS_H
