//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_MATRIX_H
#define EVENDERCH2_MATRIX_H



#include <vector>
#include "State.h"
#include "Searchable.h"

using namespace std;

class MatrixSearchable : public Searchable<State<pair<int,int>>> {
private:
    vector<vector<State<pair<int,int>>>> matrix;
    State<pair<int,int>> start;
    State<pair<int,int>> goal;
public:

    //להעביר את הוקטור עם כתובת?
    MatrixSearchable(vector<vector<State<pair<int,int>>>> m, State<pair<int,int>> s,
                     State<pair<int,int>> g){
        this->matrix = m;
        this->start = s;
        this->goal = g;
    }

    State<pair<int,int>> getInitialState() override;
    State<pair<int,int>> getGoalState() override;
    vector<State<pair<int,int>>> getAllPossibleStates(State<pair<int,int>> state) override;
};


#endif //EVENDERCH2_MATRIX_H
