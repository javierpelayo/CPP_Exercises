/*
*   Finds all the prime numbers between 1 and 100.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 11
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<time.h>

int main(){
    clock_t clkStart = clock();
    clock_t clkFinish;
    int comp_c = 0; // increases if number is composite
    std::vector<int> primes = {2};
    for (int i = 3; i < 100; ++i) {
        for (int j = 0; j < primes.size(); ++j) {
            if((i % primes[j]) == 0){
                ++comp_c;
            }
        }
        if(comp_c == 0) {
            primes.push_back(i);
        }
        comp_c = 0;
    }
    clkFinish = clock();

    for(int x : primes)
        std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Run Time: " << (clkFinish - clkStart) << std::endl;

    return 0;
}