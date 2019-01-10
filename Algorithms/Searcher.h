//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHER_H
#define EVENDERCH2_SEARCHER_H

#include "ISearcher.h"
#include "State.h"
#include <string>

template<class Solution, class T>

class Searcher: public ISearcher<std::string, State<std::pair<int, int >>> {

    string search(Searchable<State<std::pair<int, int>>> searchable);

    int getNumberOfNodesEvaluated();
};

#endif //EVENDERCH2_SEARCHER_H
