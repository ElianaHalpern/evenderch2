//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_STATE_H
#define EVENDERCH2_STATE_H

template<class T>
class State {
public:
    T state;
    double cost;
    State cameFrom;

    State(T state) {
        this->state = state;
    }

    virtual bool Equals(State<T> s){
        return state.Equals(s.state);
    }
};


#endif //EVENDERCH2_STATE_H
