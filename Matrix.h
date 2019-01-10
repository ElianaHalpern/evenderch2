//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_MATRIX_H
#define EVENDERCH2_MATRIX_H


#include "Searchable.h"
#include "Point.h"

template<class T>

class Matrix : public Searchable<T> {
public:
    vector<vector<State<Point>>> matrix;

    void setMatrix(const vector<vector<State<T>>> &matrix) {
        Matrix::matrix = matrix;
    }

    State<T> *getInitialState() {
        return matrix[0][0];
    }

    State<T> *getGoalState() {
        return matrix[matrix.size() - 1][matrix.size() - 1];
    }

    State<T> *getUpState(int x, int y) {
        if ((x - 1) < 0) {
            return nullptr;
        }
        return matrix[x - 1][y];
    }

    State<T> *getDownState(int x, int y) {
        if ((x + 1) > matrix.size()) {
            return nullptr;
        }
        return matrix[x + 1][y];
    }

    State<T> *getLeftState(int x, int y) {
        if ((y - 1) < 0) {
            return nullptr;
        }
        return matrix[x][y - 1];
    }

    State<T> *getRightState(int x, int y) {
        if ((y + 1) > matrix.size()) {
            return nullptr;
        }
        return matrix[x][y + 1];
    }

    vector<State<T> *> getAllPossibleStates(State<T> s) {
        State<T> *up;
        State<T> *down;
        State<T> *left;
        State<T> *right;
        vector<State<T> *> vec;
        vec[0] = getUpState(curr.getPointX(), curr.getPointY()); //up
        vec[1] = getDownState(curr.getPointX(), curr.getPointY()); //down
        vec[2] = getLeftState(curr.getPointX(), curr.getPointY()); //left
        vec[3] = getRightState(curr.getPointX(), curr.getPointY()); //right
        return vec;
    }
};


#endif //EVENDERCH2_MATRIX_H
