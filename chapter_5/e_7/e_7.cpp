/*
*   calculates x for a quadratic equation and has error handlings
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 5, Exercise 7
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>

void calculate_quadratic(double a, double b, double c, double& x_1, double& x_2) {
    double b_squ = b*b;
    double neg = 4*a*c;
    if((b_squ - neg) < 0)
        throw std::runtime_error("No real roots exist for this equation.");
    
    double num_1 = -1*b + sqrt(b_squ-neg);
    double num_2 = -1*b - sqrt(b_squ-neg);
    double denom = 2*a;
    x_1 = num_1/denom;
    x_2 = num_2/denom;
}

int main() {
    std::cout << "Enter coeffecients & constant for your quadratic equation: (ax^2 + bx + c)\n";
    double a;
    double b;
    double c;
    double x_1;
    double x_2;

    try {
        std::cin >> a >> b >> c;
        if(!std::cin)
            throw std::runtime_error("Wrong input, floating-point integers are needed.");

        calculate_quadratic(a, b, c, x_1, x_2);
        std::cout << "Solutions:\n";
        std::cout << "x_1: " << x_1 << '\n';
        std::cout << "x_2: " << x_2 << '\n';
    } catch(std::runtime_error& e) {
        std::cerr << "Runtime Error: " << e.what() << '\n';
        return 1;
    }

}