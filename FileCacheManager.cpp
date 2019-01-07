//
// Created by eliana on 1/3/19.
//

#include "FileCacheManager.h"

bool FileCacheManager::isExist(string problem) {
    auto search = this->solutions.find(problem);
    return search != this->solutions.end();
}

string FileCacheManager::popSolution(string problem) {
    return this->solutions.at(problem);
}

void FileCacheManager::saveSolution(string problem, string solution) {
    solutions.insert(make_pair(problem, solution));
}

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

void FileCacheManager::saveToFile(unordered_map<string, string> solutions) {
    int solutionsRow = solutions.size();
    int solutionsClo = 3;
    string solutionsArr[solutionsRow][solutionsClo];

    std::unordered_map<string, string>::iterator it;
    int i = 0;
    for (it = solutions.begin(); it != solutions.end(); it++) {
        solutionsArr[i][0] = it->first;
        solutionsArr[i][1] = '$';
        solutionsArr[i][2] = it->second;
    }
    ofstream myFile;
    myFile.open("Solutions.txt");
    if (myFile.is_open()) {
        for (int i = 0; i < solutionsRow; i++) {
            for (int j = 0; j < solutionsClo; j++) {
                myFile << solutionsArr[i][j];
            }
            myFile << "\n";
        }
        myFile.close();
    } else {
        cout << "Unable to open file" << endl;
        return;
    }
}