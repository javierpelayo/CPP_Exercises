/*
*   Finds the mode of a series of positive integers.
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
    int input = 0;
    int prev = 0;
    int cur_dup_c = 0;
    int prev_dup_c = 0;
    int top = 0;
    std::vector<int> series;
    std::vector<int> duplicate;
    std::vector<int> dupl_count;

    std::cout << "Enter a series of positive integers separated by whitespace (CTRL + D to stop):\n";
    while (std::cin >> input) {
        series.push_back(input);
    }

    std::sort(series.begin(), series.end());

    for (int j = 1; j < series.size(); ++j) {
        prev = j-1;

        if(series[j] == series[prev]){
            cur_dup_c += 1;
            if(cur_dup_c > prev_dup_c) {
                top = series[j];
                prev_dup_c = cur_dup_c;
            }
        } else {
            cur_dup_c = 0;
        }
    }

    std::cout << "Most Frequent Integer: " << top << std::endl;
    
    
    return 0;
}