//
// Created by eliana on 1/3/19.
//

#include "FileCacheManager.h"

template<class Problem, class Solution>
bool FileCacheManager::isExist(Problem problem) {
    return this->solutions.count(problem) > 0;;
}

template<class Problem, class Solution>
Solution FileCacheManager::popSolution(Problem problem) {
    return this->solutions.at(problem);
}

template<class Problem, class Solution>
void FileCacheManager::saveSolution(Problem problem, Solution solution) {
    solutions.insert(make_pair(problem, solution));
}

template<class Problem, class Solution>
void FileCacheManager::loadFileToMap() {
    ifstream solutionsFile;
    string line;
    vector<string> parsing;
    solutionsFile.open("Solutions.txt");
    if (solutionsFile.is_open()) {
        while (getline(solutionsFile, line)) {
            parsing = Data::fileToVector(line, '$');
            solutions.insert(make_pair(parsing.at(0), parsing.at(1)));
        }
        solutionsFile.close();
    } else {
        cout << "Unable to open file" << endl;
        return;
    }
}

template<class Problem, class Solution>
void FileCacheManager::saveToFile(unordered_map<Problem, Solution> solutions) {
    ofstream myFile;
    myFile.open("Solutions.txt");
    if (myFile.is_open()) {
        std::unordered_map<Problem, Solution>::iterator it;
        for (it = solutions.begin(); it != solutions.end(); it++) {
            myFile << it->first << '$' << it->second << endl;
        }
        myFile.close();
    } else {
        cout << "Unable to open file" << endl;
        return;
    }
}