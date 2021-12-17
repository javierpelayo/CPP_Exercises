/*
*   Prints a vector of ints to cout
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 8 Exercise 2
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

void print(std::string label, std::vector<int> v) {
    std::cout << label << '\n';
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ' ';
    }
}

int main() {
    std::vector<int> vec;
    std::cout << "Enter a sequence of ints(q to quit): \n";
    for(int i = 0; std::cin >> i;) {
        vec.push_back(i);
    }

    print("Ints: ", vec);
}