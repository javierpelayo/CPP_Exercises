/*
*   Finds all the n prime numbers using the "Sieve of Eratosthenes".
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 15
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
    clock_t clkStart;
    clock_t clkFinish;
    int count = 0;
    std::vector<int> primes;
    int n = 0;

    std::cout << "Enter a number n to find first n primes:\n";
    std::cin >> n;

    int control = 20; // increase if looking for more than 10m primes.
    int upto = (n * control); // everything under this number will have the primes we want
    std::vector<bool> comps(upto + 1);

    clkStart = clock();
    for(int i = 2; i*i < upto; ++i) {
        if(comps[i] == 0){
            mark_comp(i, upto, comps);
        }
    }
    for (int k = 2; n != primes.size(); ++k) {
        if(comps[k] == 0) {
            primes.push_back(k);
            ++count;
        }
    }
    clkFinish = clock();

    for(int x : primes)
        std::cout << x << " ";

    std::cout << "\nComposite Size:" << comps.size() << std::endl;
    std::cout << "\nPrime Count: " << count << std::endl;
    std::cout << "Run Time: " << (clkFinish - clkStart) << std::endl;

    return 0;
}