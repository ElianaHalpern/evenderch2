//
// Created by eliana on 1/8/19.
//

#ifndef EVENDERCH2_STATE_H
#define EVENDERCH2_STATE_H

template<class T>
class State {
private:
    T state;
    double cost;
    State<T>* cameFrom;

public:
    State(T state) {
        this->state = state;
    }

    virtual bool Equals(State<T> s){
        return (this->state == s.state);
    }
};


#endif //EVENDERCH2_STATE_H
