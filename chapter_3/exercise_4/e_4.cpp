/*
*   Takes two integers as input and determines the smaller, larger, sum,
*   difference, product, and ratio of these values & outputs them.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 4
*/
#include<iostream>
#include<string>

int main() {
    int val1 = 0;
    int val2 = 0;

    std::cout << "Enter two integer values:" << std::endl;
    std::cin >> val1 >> val2;

    std::cout << "Larger: " + std::string((val1 < val2) ? "val2": "val1") << std::endl;
    std::cout << "Smaller: " + std::string((val1 < val2) ? "val1": "val2") << std::endl;
    std::cout << "Sum: " << val1+val2 << std::endl;
    std::cout << "Difference: " << val1-val2 << std::endl;
    std::cout << "Product: " << val1*val2 << std::endl;
    std::cout << "Ratio: " << double(val1)/double(val2) << std::endl;

    return 0;
}