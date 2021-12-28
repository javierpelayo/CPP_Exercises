/*
*   Replaces punctuation characters with whitespace.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 11, Exercise 6
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

int main() {
    std::string punc = ".;,?-'";
    std::string sentence;
    std::cout << "Enter a sentence with punctuations(* to quit):\n";
    for(char c; std::cin.get(c) && c != '*';) {
        for (int i = 0; i < punc.size(); i++) {
            if (c == punc[i]) {
                c = ' ';
            }
        }
        sentence += c;
    }

    std::cout << sentence << '\n';
}