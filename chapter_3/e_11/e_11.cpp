/*
*   Prompts user to enter some number of pennies, nickels, dimes,
*   quarters, half-dollars & one-dollar coins than adds them all up.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 3, Exercise 11
*/
#include<iostream>
#include<string>

int main() {
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int one_dollars = 0;
    double sum = 0;

    std::cout << "How many pennies do you have?" << std::endl;
    std::cin >> pennies;
    std::cout << "How many nickels do you have?" << std::endl;
    std::cin >> nickels;
    std::cout << "How many dimes do you have?" << std::endl;
    std::cin >> dimes;
    std::cout << "How many quarters do you have?" << std::endl;
    std::cin >> quarters;
    std::cout << "How many half-dollars do you have?" << std::endl;
    std::cin >> half_dollars;
    std::cout << "How many one-dollars do you have?" << std::endl;
    std::cin >> one_dollars;

    sum = pennies + (5*nickels) + (10*dimes) + (25*quarters) + (50*half_dollars) + (100*one_dollars);
    sum *= .01;

    std::cout << "You have " << pennies << ((pennies > 1) ? " pennies." : " penny.") << std::endl;
    std::cout << "You have " << nickels << ((nickels > 1) ? " nickels." : " nickel.") << std::endl;
    std::cout << "You have " << dimes << ((dimes > 1) ? " dimes." : " dime.") << std::endl;
    std::cout << "You have " << quarters << ((quarters > 1) ? "quarters." : "quarter.") << std::endl;
    std::cout << "You have " << half_dollars << ((half_dollars > 1) ? " half-dollars." : " half-dollar.") << std::endl;
    std::cout << "You have " << one_dollars << ((one_dollars > 1) ? "one-dollars." : " one-dollar.") << std::endl;
    std::cout << "The value of all of your coin(s) is $" << sum << '.' << std::endl;
}