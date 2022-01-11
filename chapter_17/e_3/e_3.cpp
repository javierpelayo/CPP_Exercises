/*
*   replaces all upercase char's in a string with lowercase char's
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 17, Exercise 3
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>

void to_lower(char* s) {
    std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string lower = "abcdefghijklmnopqrstuvwxyz";
    while(*s != '0') {
        for(int i = 0; i < upper.size(); i++) {
            if(*s == upper[i]) {
                *s = lower[i];
            }
        }
        ++s;
    }
}

int main() {
    char* p = new char[6]{'H', 'E', 'L', 'L', 'O', '0'};
    to_lower(p);
    while(*p != '0') {
        std::cout << *p;
        ++p;
    }
    std::cout << '\n';
}