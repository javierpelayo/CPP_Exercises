/*
*   Determines whether an integer is odd or even.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 8
*/
#include<iostream>
#include<string>

int main() {
    int number = 0;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> number;

    if ((number % 2) == 0) {
        std::cout << "The number " << number << " is even." << std::endl;
    } else {
        std::cout << "The number " << number << " is odd." << std::endl;
    }
    return 0;
}