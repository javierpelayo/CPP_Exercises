/*
*   Asks the user for a number and the program asks
*   seven questions about the number in order to reach it.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 4
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

int main() {
    int number = 0;
    int guess = 50;
    char input = ' ';
    std::vector<int> dif = {25, 13, 6, 3, 2, 1};
    std::cout << "Enter a number(1-100) for the computer to guess:" << std::endl;
    std::cin >> number;

    for(int count = 0; count < 7; ++count){
        std::cout << "Is the number " << guess << " correct, lesser or greater?(c/l/g):\n";
        std::cin >> input;

        if(input == 'c')
            break;
        else if(input == 'l')
            guess -= dif[count];
        else
            guess += dif[count];
    }

    if(guess == number){
        std::cout << "I have guessed the number correctly!\n";
    } else {
        std::cout << "Something went wrong.\n";
    }

    return 0;
}