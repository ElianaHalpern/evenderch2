//
// Created by eliana on 1/10/19.
//

#include "MatrixSearchable.h"

State<pair<int,int>> MatrixSearchable:: getInitialState(){
    return this->start;
}

State<pair<int,int>> MatrixSearchable:: getGoalState(){
    return this->goal;
}

vector<State<pair<int,int>>> MatrixSearchable:: getAllPossibleStates(State<pair<int,int>> s){
    std::vector<State<pair<int,int>>> statesToGo;
    int i = s.getState().first;
    int j = s.getState().second;
    int MatrixSize = this->matrix.size();

    //up
    if (i > 0 && i <= MatrixSize) {
        statesToGo.push_back(this->matrix[i - 1][j]);
    }

    //down
    if (i >= 0 && i < MatrixSize) {
        statesToGo.push_back(this->matrix[i + 1][j]);
    }

    //left
    if (j > 0 && j <= MatrixSize) {
        statesToGo.push_back(this->matrix[i][j - 1]);
    }

    //right
    if (j >= 0 && j < MatrixSize) {
        statesToGo.push_back(this->matrix[i][j + 1]);
    }
    return statesToGo;
}