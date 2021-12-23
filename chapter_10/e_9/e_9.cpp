/*
*   Takes two files containing strings and merges them, preserving order.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 10, Exercise 9
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>

void sort(std::vector<std::string>& words) {
    std::string word;
    std::string temp;
    for (int i = 0; i < words.size(); i++) {
        for (int j = i; j < words.size(); j++) {
            if(words[i] > words[j]) {
                std::string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
}

int main() {
    std::string filename_1 = "words1.txt";
    std::string filename_2 = "words2.txt";
    std::vector<std::string> words;

    std::ifstream ifst_1{filename_1};
    std::ifstream ifst_2{filename_2};
    for (std::string word; ifst_1 >> word;) {
        words.push_back(word);
    }
    for (std::string word; ifst_2 >> word;) {
        words.push_back(word);
    }

    sort(words);

    std::ofstream ofst{"merged_words.txt"};

    for (int i = 0; i < words.size(); i++) {
        ofst << words[i] << " ";
    }

    return 0;
}