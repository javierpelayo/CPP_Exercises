/*
*   Returns the size of each string in a vector
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 8 Exercise 13
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<vector>
#include<iostream>

std::vector<int> sto(std::vector<std::string> svec) {
    std::vector<int> ivec;
    for(int i = 0; i < svec.size(); i++) {
        ivec.push_back(svec[i].size());
    }

    return ivec;
}

int main() {
    std::vector<std::string> svec;
    std::vector<int> ivec;
    std::cout << "Enter a sequence of strings(q to quit):\n";
    for(std::string word = " "; std::cin >> word && word != "q";) {
        svec.push_back(word);
    }
    ivec = sto(svec);
    std::cout << "The size of each word is:\n";
    for(int i = 0; i < ivec.size(); i++) {
        std::cout << ivec[i] << ' ';
    }
}