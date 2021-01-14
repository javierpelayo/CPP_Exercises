/*
*   Finds all the prime numbers between 1 and max using the "Sieve of Eratosthenes".
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 14
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<time.h>

void mark_comp(int k, int m, std::vector<bool>& c) {
    for (int j = (k*k); j < m; j+=k) {
        c[j] = 1;
    }
}

int main() {
    clock_t clkStart = clock();
    clock_t clkFinish;
    std::vector<int> primes;
    std::vector<bool> comps(101);
    int max = 0;

    std::cout << "Enter a max number to find primes:\n";
    std::cin >> max;

    for(int i = 2; i*i < max; ++i) {
        if(comps[i] == 0){
            mark_comp(i, max, comps);
        }
    }

    for (int k = 2; k < max; ++k) {
        if(comps[k] == 0) {
            primes.push_back(k);
        }
    }

    clkFinish = clock();

    for(int x : primes)
        std::cout << x << " ";
    std::cout << "\n \n";

    std::cout << "Run Time: " << (clkFinish - clkStart) << std::endl;

    return 0;
}