//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHABLE_H
#define EVENDERCH2_SEARCHABLE_H

#include <vector>
#include "State.h"

using namespace std;
template <class T>

class Searchable {
    virtual State<T>* getInitialState();
    virtual State<T>* getGoalState();
    vector<State<T>*> getAllPossibleStates(State<T> s);
};
#endif //EVENDERCH2_SEARCHABLE_H
