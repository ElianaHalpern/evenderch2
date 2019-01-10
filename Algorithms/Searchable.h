//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHABLE_H
#define EVENDERCH2_SEARCHABLE_H

#include <vector>

using namespace std;
template <class T>

class Searchable {
    virtual T getInitialState();
    virtual T getGoalState();
    virtual vector<T> getAllPossibleStates(T);
};
#endif //EVENDERCH2_SEARCHABLE_H
