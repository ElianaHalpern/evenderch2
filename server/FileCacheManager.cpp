//
// Created by eliana on 1/3/19.
//

#include "FileCacheManager.h"

bool server_side::FileCacheManager::isExist(std::string problem) {
    return this->solutions.count(problem) > 0;;
}

std::string server_side::FileCacheManager::popSolution(std::string problem) {
    return this->solutions.at(problem);
}

void server_side::FileCacheManager::saveSolution(std::string problem, std::string solution) {
    solutions.insert(make_pair(problem, solution));
}

/**
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
 **/