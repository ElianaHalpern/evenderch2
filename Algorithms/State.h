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
    State *cameFrom;

public:
    State(T s) {
        this->state = s;
        this->cameFrom = nullptr;
        this->cost = 0;
    }

    State() {}

    T getState() const {
        return this->state;
    }

    void setCameFrom(State *from) {
        this->cameFrom = from;
    }

    void setCost(double c) {
        this->cost = c;
    }

    double getCost() {
        return this->cost;
    }

    State operator>(const State &st2) const {
        return (this->cost > st2.getCost());
    }

    State operator<(const State &st2) {
        return (this->cost < st2.getCost());
    }

    State operator==(const State &st2) {
        return (this->cost == st2.getCost());
    }
};


#endif //EVENDERCH2_STATE_H
