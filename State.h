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
public:
    T getState() const {
        return state;
    }

    double getCost() const {
        return cost;
    }

    State<T> *getCameFrom() const {
        return cameFrom;
    }

public:
    void setState(T state) {
        State::state = state;
    }

    void setCost(double cost) {
        State::cost = cost;
    }

    void setCameFrom(State<T> *cameFrom) {
        State::cameFrom = cameFrom;
    }

private:
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
