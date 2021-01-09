/*
*   A basic calculator.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 5
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int main() {
    double op1 = 0.0;
    double op2 = 0.0;
    char oper = ' ';
    std::string act = " "; 
    double result = 0.0;

    std::cout << "Enter two operands and an operation to be performed:\n";
    std::cin >> op1 >> op2 >> oper;

    if(oper == '+'){
        result = op1 + op2;
        act = "sum";
    } else if(oper == '-'){
        result = op1 - op2;
        act = "difference";
    } else if(oper == '*'){
        result = op1 * op2;
        act = "product";
    } else if(oper == '/') {
        result = op1 / op2;
        act = "ratio";
    }
    
    std::cout << "The " << act << " of " << op1
              << " and " << op2 << " is " << result << ".\n";
    return 0;
}