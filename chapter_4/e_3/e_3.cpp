/*
*   Reads a sequence of doubles which symbolize distance between
*   cities and outputs the sum, shortest, longest and the mean of
*   the distances.
*   
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 4, Exercise 3
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<algorithm>
#include<vector>

int main() {
    std::vector<double> distances;
    double sum = 0.0;

    std::cout << "Enter the distances between cities, enter q to end:" << std::endl;
    for(double dist = 0.0; std::cin >> dist;) {
        distances.push_back(dist);
        sum += dist;
    }

    if (distances.size() > 0) {
        std::sort(distances.begin(), distances.end());
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Shortest: " << distances[0] << std::endl;
        std::cout << "Longest: " << distances[distances.size() - 1] << std::endl;
        std::cout << "Mean: " << distances[(distances.size()-1)/2] << std::endl;
    }

    // not required but added for visual correctness
    for (double x : distances)
        std::cout << x << " ";

    return 0;
}