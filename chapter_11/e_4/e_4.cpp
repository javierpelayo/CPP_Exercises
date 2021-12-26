/*
*   Prompts user to enter several integers in any combination
*   of octal, decimal, or hexadecimal then converts them to decimal
*   form then outputs the values in properly spaced columns.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 11, Exercise 4
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<ctype.h>
#include<iomanip>

int main() {
    std::vector<int> integers;
    std::vector<std::string> istr;
    std::vector<std::string> itype;
    std::string numstr;
    std::ostringstream ostr;

    std::cout << "Enter integers in decimal, hexadecimal or octal format:\n";

    for (std::string num; std::cin >> num && num != "q";) {

        if(num[0] == '0' && num[1] == 'x') {
            itype.push_back("hexadecimal");
        } else if (num[0] == '0') {
            itype.push_back("octal");
        } else {
            itype.push_back("decimal");
        }

        istr.push_back(num);
        ostr << num << ' ';
    }

    std::istringstream ist{ostr.str()};

    ist.unsetf(std::ios::dec);
    ist.unsetf(std::ios::oct);
    ist.unsetf(std::ios::hex);
    for (int i; ist >> i;) {
        integers.push_back(i);
    }

    for (int i = 0; i < integers.size(); i++) {
        std::cout << std::setw(4) << istr[i] << ' ' << std::setw(11) << itype[i] << " converts to " << integers[i] << " decimal.\n";
    }
}