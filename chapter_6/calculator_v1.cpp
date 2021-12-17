/*
*   A simple calculator V1.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 6
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/

#include<iostream>

int main () {
    std::cout << "Please enter an expressions: ";
    int lval = 0;
    int rval;
    char op;
    int res;
    std::cin >> lval >> op >> rval; // read something like 1 + 3

    if (op == '+')
        res = lval + rval; // addition
    else if (op == '-')
        res = lval - rval; // subtraction

    std::cout << "Result: " << res << '\n';

    return 0;
}