/*
*   Reads a text file and converts input to all lower case.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 11, Exercise 1
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<ctype.h>

int main() {
    try {
        std::string filename;
        std::string word_lower;
        std::vector<std::string> words;
        std::cout << "Enter name of file w/ extension:\n";
        std::cin >> filename;
        
        std::ifstream ifst {filename, std::ios_base::in|std::ios_base::out};

        ifst.exceptions(ifst.exceptions()|std::ios_base::badbit);

        for (std::string word; ifst >> word;) {
            for(char c : word) {
                c = std::tolower(c);
                word_lower += c;
            }
            words.push_back(word_lower);
            word_lower = "";
        }

        std::ofstream ofst {"words_lower.txt"};
        ofst.exceptions(ofst.exceptions()|std::ios_base::badbit);

        for (int i = 0; i < words.size(); i++) {
            ofst << words[i] << ' ';
        }

    } catch(std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}