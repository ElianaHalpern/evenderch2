//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_MATRIXSOLVER_H
#define EVENDERCH2_MATRIXSOLVER_H


#include <string>
#include "Solver.h"
#include "Matrix.h"

template <class T>

class MatrixSolver: public Solver<T> {
public:
    Searcher<T> s;
    virtual string solve(string problem){
        vector<string> linesFromClient;

        Matrix<T> matrix = new Matrix<T>();
        vector<vector<State<T>>> vecMatrix;

    } //יבנה ממבר של searcheble
};


#endif //EVENDERCH2_MATRIXSOLVER_H
