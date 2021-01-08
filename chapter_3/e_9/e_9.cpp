/*
*   Converts spelled out numbers from 0-4 from strings to ints.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 9
*/
#include<iostream>
#include<string>

int main() {
    std::string number = " ";

    std::cout << "Enter a number in string format:" << std::endl;
    std::cin >> number;

    if (number == "zero"){
        std::cout << 0 << std::endl;
    } else if (number == "one"){
        std::cout << 1 << std::endl;
    } else if (number == "two"){
        std::cout << 2 << std::endl;
    } else if (number == "three"){
        std::cout << 3 << std::endl;
    } else if (number == "four"){
        std::cout << 4 << std::endl;
    } else {
        std::cout << "Not a number I know" << std::endl;
    }
}