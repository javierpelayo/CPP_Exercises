/*
*   Prints a sequenceo of fibonacci numbers using a vector starting from
*   user-inputted ints.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 8 Exercise 3
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

void print(std::string label, std::vector<int> v) {
    std::cout << label << '\n';
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ' ';
    }
}

std::vector<int> fibonacci(int x, int y, std::vector<int> v, int n) {
    v.push_back(x);
    v.push_back(y);
    for(int i = 1; i < n; i++) {
        v.push_back(v[i-1] + v[i]);
    }

    return v;
}

int main() {
    std::vector<int> fib;
    int x;
    int y;
    int max;

    std::cout << "Enter two ints to start the fibonacci sequence along with a max(x y max):\n";
    std::cin >> x >> y >> max;

    fib = fibonacci(x, y, fib, max);
    print("Fib Sequence: ", fib);
}