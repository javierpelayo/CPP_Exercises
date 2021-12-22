/*
*   Reads a file of integers and gets the sum
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 10, Exercise 1
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>

int main() {
    int sum = 0;
    std::string filename = "integers.txt";
    std::ifstream ifst{filename};
    for(int i = 0; ifst >> i;) {
        sum += i;
    }
    
    std::cout << "The sum is:\n";
    std::cout << sum << '\n';
}