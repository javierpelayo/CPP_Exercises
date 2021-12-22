/*
*   
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 9, Exercise 5
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

class Book {
    public:
        void getISBN();
        void getTitle();
        void getAuthor();
        void getCDate();
        void getAvailable();
        void check_out();
    private:
        std::string ISBN;
        std::string title;
        std::string author;
        std::string c_date;
        bool checked_out;
}

int main() {

}