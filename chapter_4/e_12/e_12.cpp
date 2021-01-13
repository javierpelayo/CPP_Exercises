/*
*   Finds all the prime numbers between 1 and max.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 12
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int find_comp(int k, std::vector<int>& p) {
    int count = 0;
    for (int j = 0; j < p.size(); ++j) {
        if((k % p[j]) == 0){
            ++count;
        }
    }
    return count;
}

int main(){
    int comp_c = 0; // increases if number is composite
    int max = 0;
    std::vector<int> primes = {2};

    std::cout << "Enter a max number for primes:\n";
    std::cin >> max;

    for (int i = 3; i < max; ++i) {
        comp_c = find_comp(i, primes);
        if(comp_c == 0) {
            primes.push_back(i);
        }
        comp_c = 0;
    }

    for(int x : primes)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}