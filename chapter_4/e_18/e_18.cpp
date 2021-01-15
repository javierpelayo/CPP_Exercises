/*
*   Solves regular and complex quadratic equations using the quadratic formula.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 18
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

/*
*   Using Newton's Method and a function of the form f(x) = x^2 - n
*   we can find the sqrt such that n > 0.
*
*   Disclaimer: I'm aware that sqrt exists from cmath.
*   
*   xk+1 = xk - (f(xk)/f'(xk))
*   reduces to:
*   xk+1 = 1/2(xk-(n/xk))
*
*   n in this case corresponds to the number inside the sqrt
*   which will be our initial guess since a graph isn't available.
*/
double my_sqrt(double n, int& j) {
    if(n < 0) {
        n *= -1;
        j = 1;
    }

    constexpr double ctrl = .001; // lower floating-point = more run-time but more root accuracy
    double r = n;

    // loop makes approximations until it converges to the root
    while( !((r*r <= (n+ctrl)) && (r*r >= (n-ctrl))) ) {
        r = .5 * (r - (n/r));
        // std::cout << r << std::endl;
    }

    return ((r < 0) ? -r : r);
}

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    double in_sqrt = 0;
    double root = 0;
    double denom = 0;
    double lft_num = 0;
    double x1 = 0;
    double x2 = 0;
    double xi = 0;
    int i = 0; // if 1 than it is complex
    std::cout << "Quadratic => ax^2 + bx + c\n";
    std::cout << "Enter the 2 coefficients and the constant (a b c) in that order:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    in_sqrt = (b * b) - (4 * (a * c));
    denom = 2.0 * a;

    root = my_sqrt(in_sqrt, i);
    lft_num = -b;

    if(i == 0) {
        x1 = (lft_num - root) / denom;
        x2 = (lft_num + root) / denom;
    } else {
        x1 = lft_num / denom;
        xi = root / denom;
    }

    if(i == 0) {
        std::cout << "x1: " << x1 << std::endl;
        std::cout << "x2: " << x2 << std::endl;
    } else {
        std::cout << "x1: " << x1 << " - " << xi << "i" << std::endl;
        std::cout << "x2: " << x1 << " + " << xi << "i" << std::endl;
    }

    return 0;
}