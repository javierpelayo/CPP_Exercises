/*
*   A simple calculator V2.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 6
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>

int main() {
    std::cout << "Please enter expression. \n";
    std::cout << "Add an x to end expression: \n";
    int lval = 0;
    int rval;
    std::cin >> lval;
    if (!std::cin) {
        std::cout << "Error: No first operand.\n";
    } else {
        for(char op; std::cin >> op;) {
            if(op != 'x')
                std::cin >> rval;
            if(!std::cin)
                std::cout << "Error: No second operand.\n";
            switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                std::cout << "Result: " << lval << '\n';
                return 0;
            }
        }
        std::cout << "Erorr: Bad expression.";
    }
}