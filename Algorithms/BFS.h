//
// Created by eliana on 1/9/19.
//

#ifndef EVENDERCH2_BFS_H
#define EVENDERCH2_BFS_H


#include "Searcher.h"

using namespace std;

class BFS: public Searcher{
    string search(Searchable<State<std::pair<int, int>>> searchable);

    int getNumberOfNodesEvaluated();
};


#endif //EVENDERCH2_BFS_H
