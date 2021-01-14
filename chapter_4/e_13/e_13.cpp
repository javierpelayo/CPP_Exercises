/*
*   Finds all the prime numbers between 1 and 100 using the "Sieve of Eratosthenes".
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 13
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<time.h>

void mark_comp(int k, std::vector<bool>& c) {
    for (int j = (k*k); j < 100; j+=k) {
        c[j] = 1;
    }
}

int main() {
    clock_t clkStart = clock();
    clock_t clkFinish;
    int count = 0;
    std::vector<int> primes;
    std::vector<bool> comps(101);

    for(int i = 2; i*i < 100; ++i) {
        if(comps[i] == 0){
            mark_comp(i, comps);
        }
    }

    for (int k = 2; k < 100; ++k) {
        if(comps[k] == 0) {
            primes.push_back(k);
            ++count;
        }
    }

    clkFinish = clock();

    for(int x : primes)
        std::cout << x << " ";
    std::cout << "\nCount: " << count << "\n \n";

    std::cout << "Run Time: " << (clkFinish - clkStart) << std::endl;

    return 0;
}