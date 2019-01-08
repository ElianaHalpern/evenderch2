//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_SEARCHABLE_H
#define EVENDERCH2_SEARCHABLE_H

#include "State.h"

class Searchable {
    State getInitialState();
    State getGoalState();
    List<State> getAllPossibleStates(State<T> s);
};
#endif //EVENDERCH2_SEARCHABLE_H
