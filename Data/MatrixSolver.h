//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_MATRIXSOLVER_H
#define EVENDERCH2_MATRIXSOLVER_H


#include <string>
#include "Solver.h"
#include "../Algorithms/MatrixSearchable.h"
#include "Lexer.h"

template<class T>

class MatrixSolver : public Solver<T> {
public:
    Searcher<T> s;

    virtual string solve(string problem) {
        //לשנות קודם מטריצה ואז גדלים. 2 לולאות נפרדות
        MatrixSearchable<T> matrix = new MatrixSearchable<T>();
        vector<string> linesFromClient;
        linesFromClient = Lexer::splitByLines(problem, '\n');
        matrix.setSize(stoi(linesFromClient.at(0)));
        vector<string> startPoint;
        startPoint = Lexer::splitByLines(linesFromClient.at(1), ',');
        matrix.setStart(stoi(startPoint.at(0)), stoi(startPoint.at(1)));
        vector<string> goalPoint;
        goalPoint = Lexer::splitByLines(linesFromClient.at(2), ',');
        matrix.setGoal(stoi(goalPoint.at(0)), stoi(goalPoint.at(1)));

        vector<vector<State<Point>>> vecMatrix;

        vector<vector<string>> vecVal;
        std::vector<string>::iterator it = linesFromClient.begin();
        it += 3;
        vector<string> lex;

        for (; it != linesFromClient.end(); it++) {
            lex = Lexer::splitByLines(problem, ',');
            vecVal.push_back(lex);
        }

        for (int i = 0; i < matrix.setSize(); i++) {
            for (int j = 0; j < matrix.setSize(); i++) {
                State s = new State()
                Point p = new Point(i, j);
                vecMatrix[i][j].
            }
        }


    } //יבנה ממבר של searcheble
};


#endif //EVENDERCH2_MATRIXSOLVER_H
