/*
*   Outputs a file raw_temp with a list of readings of temperatures
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 10, Exercise 2
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<fstream>
#include<vector>

class Readings {
    public:
        int day;
        int hour;
        double temp;
};

void write() {
    int day;
    int hour;
    double temp;
    std::vector<Readings> raw_temps;
    while(std::cin >> day >> hour >> temp && day != -1) {
        Readings r;
        r.day = day;
        r.hour = hour;
        r.temp = temp;
        raw_temps.push_back(r);
    }
    std::string filename = "raw_temps.txt";
    std::ofstream ofst{filename};

    for (int i = 0; i < raw_temps.size(); i++) {
        ofst << "(" << raw_temps[i].day << " " << raw_temps[i].hour << " " << raw_temps[i].temp << ")\n";
    }
    std::cout << "File complete: raw_temps.txt\n";
}

void read() {
    std::string filename;
    std::cin >> filename;
    if(std::cin.fail()) {
        std::cout << "Something went wrong with input. Closing program.";
    } else {
        std::ifstream ifst{filename};
        char ch1;
        char ch2;
        int day;
        int hour;
        double temp;
        std::vector<Readings> file_temps;
        while(ifst >> ch1 >> day >> hour >> temp >> ch2) {
            std::cout << "(" << day << " " << hour << " " << temp << ")\n";
        }
    }
}

int main() {
    int input;
    std::string filename = "raw_temps.txt";
    std::ofstream ofst{filename};

    std::cout << "==Temperature Readings==\n";
    std::cout << "Would you like to 1-read or 2-write to a file?(type 1 or 2):\n";
    std::cin >> input;
    if(std::cin.fail()) {
        std::cout << "That wasn't an integer.\n Closing program.";
        return 0;
    } else if(input == 1) {
        std::cout << "Enter the name of the file you want to read with its extension:\n";
        read();
    } else if(input == 2) {
        std::cout << "Enter temperature readings as: day hour temp :\n";
        write();
    }
    return 0;
}