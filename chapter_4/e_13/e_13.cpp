/*
*   Finds all the prime numbers between 1 and 100 using the "Sieve of Eratosthenes".
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 12
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<time.h>

int main() {
    clock_t clkStart = clock();
    clock_t clkFinish;
    int count = 0;
    std::vector<int> prime_comp = {2, 3, 5, 7};
    std::vector<int> comps = {4, 6, 10, 14};
    std::vector<int> primes;

    for(int i = 2; i < 100; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(i == comps[j]) {
                comps[j] += prime_comp[j];
                ++count; // if greater than 0, than we found a composite
            }
        }
        if(count == 0) {
            primes.push_back(i);
        }
        count = 0;
    }
    clkFinish = clock();

    for(int x : primes)
        std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Run Time: " << (clkFinish - clkStart) << std::endl;

    return 0;
}