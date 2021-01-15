/*
*   Gets names with scores as input and checks for duplicate names.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 19
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

void check_dupl(std::vector<std::string>& nc, int& e) {
    int prev = 0;
    int i = 1;
    std::sort(nc.begin(), nc.end());
    while((e != 1) && (i < nc.size())) {
        prev = i - 1;
        if(nc[i] == nc[prev])
            e = 1;
        ++i;
    }

}

int main() {
    std::string n = " ";
    int s = -1;
    int error = 0;
    std::vector<std::string> names;
    std::vector<int> scores;
    std::vector<std::string> name_check;

    std::cout << "Enter a name and a score (enter 'NoName 0' to quit):\n";
    std::cin >> n >> s;

    while(n != "NoName" && s != 0) {
        names.push_back(n);
        scores.push_back(s);
        std::cin >> n >> s;
    }

    for(std::string x : names)
        name_check.push_back(x);
    
    check_dupl(name_check, error);

    if(error == 1) {
        std::cout << "\nError: Names cannot be the same.\n";
    } else {
        std::cout << "\nName & Score:"<< std::endl;
        for(int j = 0; j < names.size(); ++j) {
            std::cout << names[j] << " " << scores[j] << std::endl;
        }
    }

    return 0;
}