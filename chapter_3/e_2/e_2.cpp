/*
*   Program converts miles to km's.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 2
*/
// 1.609 km = 1 mile

#include<string>
#include<iostream>

int main(){
    std::string prompt = "Enter miles to convert:";
    double miles = 0;
    double km = 0;

    std::cout << prompt << std::endl;
    std::cin >> miles;
    km = miles * 1.609;
    std::cout << miles << " miles is " << km << " kilometers." << std::endl;
}