/*
*   String to number and vice-versa conversion (0-9) from input.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 6
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int main() {
    std::string input = " ";
    std::vector<std::string> words = {"zero", "one", "two",
                                        "three", "four", "five",
                                        "six", "seven", "eight",
                                        "nine"};

    std::vector<std::string> digits = {"0" ,"1", "2", "3", "4", "5",
                                        "6", "7", "8", "9"};

    std::cout << "Enter a number spelled out or as a digit from 0-9. (q to quit):\n";
    while(input != "q"){
        std::cin >> input;

        for(int i = 0; i <= 9; ++i) {
            if (input == words[i]) {
                std::cout << i << std::endl;
            } else if(input == digits[i]) {
                std::cout << words[i] << std::endl;
            }
        }
    }

    return 0;
}