/*
*   Looks for integers in a file and fins their sum.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 10, Exercise 11
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>
int read_int() {
    std::ifstream ifst{"random.txt"};
    int sum = 0;
    for (char ch; ifst >> ch;) {
        sum += i;
    }

    if(ifst.good()) {
        ifst.unget();
        ifst.clear();
    }
}

int main() {
    int sum = 0;
    sum = read_int();
    std::cout << "The sum is:\n";
    std::cout << sum << "\n";
}