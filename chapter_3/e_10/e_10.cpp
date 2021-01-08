/*
*   Takes an operation followed by two operands and outputs the result
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 10
*/
#include<iostream>
#include<string>

int main() {
    char op = ' ';
    double val1 = 0.0;
    double val2 = 0.0;

    std::cout << "Enter an operation followed by two operands:" << std::endl;
    std::cin >> op >> val1 >> val2;

    if (op=='+'){
        std::cout << (val1 + val2) << std::endl;
    } else if (op=='-'){
        std::cout << (val1 - val2) << std::endl;
    } else if (op=='*'){
        std::cout << (val1 * val2) << std::endl;
    } else if (op=='/'){
        std::cout << (val1 / val2) << std::endl;
    }

    return 0;
}