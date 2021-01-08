/*
*   Takes three strings as input and sorts them in ascending order.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 7
*/
#include<iostream>
#include<string>

int main(){
    std::string val1 = " ";
    std::string val2 = " ";
    std::string val3 = " ";

    std::cout << "Enter three strings separated by spaces:" << std::endl;
    std::cin >> val1 >> val2 >> val3;

    if(val1 <= val2 && val1 <= val3){
        std::cout << val1 << " ";
        std::cout << ((val2 <= val3) ? val2 : val3) << " ";
        std::cout << ((val3 <= val2) ? val2 : val3) << std::endl;
    } else if(val2 <= val1 && val2 <= val3){
        std::cout << val2 << " ";
        std::cout << ((val1 <= val3) ? val1 : val3) << " ";
        std::cout << ((val3 <= val1) ? val1 : val3) << std::endl;
    } else {
        std::cout << val3 << " ";
        std::cout << ((val2 <= val1) ? val2 : val1) << " ";
        std::cout << ((val1 <= val2) ? val2 : val1) << std::endl;
    }
}