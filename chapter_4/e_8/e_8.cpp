/*
*   Calculates where the number of rice is 1 thousand, 1 million, and 1 billion
*   on a chess board square, rice is doubled at each subsequent square.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 8
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int main() {
    int t = 1000;
    int m = 1000000;
    int b = 1000000000;

    int rice_at = 1;
    int cur_square = 0;

    while(cur_square <= 64){
        rice_at *= 2;
        if((rice_at >= t && rice_at <= t*2) || (rice_at >= m && rice_at <= m*2) || (rice_at >= b && rice_at <= b*2))
            std::cout << rice_at << " grains of rice for the " << cur_square << " square." << std::endl;
        ++cur_square;
    }
    return 0;
}