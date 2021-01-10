/*
*   A basic calculator modified for numbers as words.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 5
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int main() {
    std::string val1{" "};
    std::string val2{" "};
    int op1{0};
    int op2{0};
    char oper{' '};

    std::vector<std::string> words = {"zero", "one", "two",
                                    "three", "four", "five",
                                    "six", "seven", "eight",
                                    "nine"};

    std::vector<std::string> digits = {"0" ,"1", "2", "3", "4", "5",
                                    "6", "7", "8", "9"};

    std::string act{" "}; 
    int result{0};

    std::cout << "Enter two operands and an operation to be performed:\n";
    std::cin >> val1 >> val2 >> oper;

    for(int i = 0; i < 9; ++i){
        if(val1 == words[i] || val1 == digits[i])
            op1 = i;
        if(val2 == words[i] || val2 == digits[i])
            op2 = i;
    }

    if(oper == '+'){
        result = op1 + op2;
        act = "sum";
    } else if(oper == '-'){
        result = op1 - op2;
        act = "difference";
    } else if(oper == '*'){
        result = op1 * op2;
        act = "product";
    } else if(oper == '/') {
        result = op1 / op2;
        act = "ratio";
    }
    
    std::cout << "The " << act << " of " << op1
              << " and " << op2 << " is " << result << ".\n";
    return 0;
}