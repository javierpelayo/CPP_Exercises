/*
*   Returns the largest int of a vector
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 8 Exercise 10
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<vector>
#include<iostream>

int maxv(std::vector<int>& v) {
    int max = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = i; j < v.size(); j++) {
            if(v[i] < v[j] && max < v[i] && max < v[j]) {
                max = v[j];
            }
        }
    }
    return max;
}

int main() {
    std::vector<int> vec;
    int max;
    std::cout << "Enter a sequence of ints(q to quit):\n";
    for(int i = 0; std::cin >> i;) {
        vec.push_back(i);
    }
    max = maxv(vec);
    std::cout << "Your max number is: " << max << "\n";
}