/*
*   Reverse the order of characters in a file.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 11, Exercise 12
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>

int main() {
    try {
        std::string filename;
        std::vector<char> fchars;
        std::cout << "Enter the name of the file:\n";
        std::cin >> filename;

        std::ifstream ifst {filename};
        ifst.exceptions(ifst.exceptions()|std::ios_base::badbit);

        for (char c; ifst >> c;) {
            fchars.push_back(c);
        }

        ifst.close();

        std::ofstream ofst {filename, std::ios_base::trunc};
        ofst.exceptions(ofst.exceptions()|std::ios_base::badbit);

        for (int i = 1; i <= fchars.size(); i++) {
            ofst << fchars[fchars.size()-i];
        }
        
    } catch(std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}