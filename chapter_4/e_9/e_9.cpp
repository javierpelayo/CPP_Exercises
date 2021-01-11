/*
*   Calculates the number of rice on the 64th square on a chess board, 
*   rice is doubled at each subsequent square.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 9
*
*   Compile: g++ -std=c++11 name.cpp -o name
*
*   Results:
*   If rice count is an int than the 64th square is 0,
*   if double it is 3.68935e+19.
*   
*   For int the max square is 29, and for double the max square is 64
*/
#include<iostream>

int main() {
    int rice_i_at = 1;
    double rice_d_at = 1;
    int cur_square = 0;

    std::cout << "Int Double Squares\n";
    while(cur_square <= 64){
        rice_i_at *= 2;
        rice_d_at *= 2;

        std::cout << rice_i_at << " " << rice_d_at << " " << cur_square << std::endl;

        ++cur_square;
    }
    return 0;
}