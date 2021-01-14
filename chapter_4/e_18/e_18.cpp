/*
*   Solves quadratic equations using the quadratic formula.   
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 18
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    double in_sqr = 0;
    double denominator = 0;
    int i = 0;

    std::cout << "Enter the 2 coefficients and the constant (a b c) in that order:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    in_sqr = (b * b) - (4 * (a * c));
    denominator = 2 * a;
    if(in_sqr < 0) {
        in_sqr *= -1;
        i = 1;
    }

    if(i == 1) {
        std::cout << "x1:\n";
        std::cout << "(-" << b << "+" << "sqrt(" << in_sqr << ")i)/" << denominator << std::endl;

        std::cout << "x2:\n";
        std::cout << "(-" << b << "-" << "sqrt(" << in_sqr << ")i)/" << denominator << std::endl;
    } else {
        std::cout << "x1:\n";
        std::cout << "(-" << b << "+" << "sqrt(" << in_sqr << "))/" << denominator << std::endl;

        std::cout << "x2:\n";
        std::cout << "(-" << b << "-" << "sqrt(" << in_sqr << "))/" << denominator << std::endl;
    }

    return 0;
}