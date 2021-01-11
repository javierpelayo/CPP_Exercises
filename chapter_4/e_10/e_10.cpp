/*
*   Plays the game rock, paper, scissors.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 10
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>
#include<string>

int main() {
    std::string seed = " ";
    std::string input = " ";
    std::vector<std::string> choice = {"rock", "paper", "scissors"};
    int count = 0;
    int number = 0;

    std::cout << "Enter a random combination(the longer the better):\n";
    std::cin >> seed;
    seed.size();
    std::cout << "Choose rock, paper, or scissors(q to quit):\n";
    while(input != "q"){
        std::cin >> input;

        number = (int(seed[count]) % 10);

        if (number >= 4 && number <= 6)
            number = 1;
        else if(number >= 7 && number <= 9)
            number = 2;
        else {
            number = 0;
        }

        std::cout << "Computer Chooses: " << choice[number] << std::endl;

        if(choice[number] == input)
            std::cout << "The game is a tie!\n";
        else if(choice[number] == "rock" && input == "paper")
            std::cout << "You win!\n";
        else if(choice[number] == "paper" && input == "rock")
            std::cout << "You lose!\n";
        else if(choice[number] == "paper" && input == "scissors")
            std::cout << "You win!\n";
        else if(choice[number] == "scissors" && input == "paper")
            std::cout << "You lose!\n";
        else if(choice[number] == "rock" && input == "scissors")
            std::cout << "You lose!\n";
        else
            std::cout << "You win!\n";

        if(count == seed.size())
            count = 0;
        else
            ++count;
    }
    return 0;
}