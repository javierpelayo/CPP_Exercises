/*
*   Finds the min, max and mode of a sequence of strings.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 16
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

int main() {
    std::string input = " ";
    int prev = 0;
    int cur_dup_c = 0;
    int prev_dup_c = 0;
    std::string top = " ";
    std::string min = " ";
    std::string max = " ";
    std::vector<std::string> seq;

    std::cout << "Enter a sequence of strings separated by whitespace (CTRL + D to stop):\n";
    while (std::cin >> input) {
        seq.push_back(input);
    }

    std::sort(seq.begin(), seq.end());
    min = seq[0];
    max = seq[seq.size() - 1];

    for (int j = 1; j < seq.size(); ++j) {
        prev = j-1;

        if(seq[j] == seq[prev]){
            cur_dup_c += 1;
            if(cur_dup_c > prev_dup_c) {
                top = seq[j];
                prev_dup_c = cur_dup_c;
            }
        } else {
            cur_dup_c = 0;
        }
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Mode: " << top << std::endl;
    
    
    return 0;
}