/*
*   Implements a Name_pair class where a pair of names and ages are stored in vectors.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 9, Exercise 2
*
*   Compile: g++ -std=c++11 name.cpp -o name
*/
#include<iostream>
#include<vector>

class Name_pair {
    public:
        void read_names();
        void read_ages();
        void print();
        void sort();
    private:
        std::vector<std::string> name;
        std::vector<double> age;
};

void Name_pair::read_names() {
    std::cout << "Enter names to be read(q to quit):\n";
    for(std::string n; std::cin >> n && n != "q";) {
        name.push_back(n);
    }
}

void Name_pair::read_ages() {
    std::cout << "Enter ages for each name(q to quit):\n";
    for(double a; std::cin >> a;) {
        age.push_back(a);
    }
}

void Name_pair::print() {
    std::cout << "Name Pairs:\n";
    for (int i = 0; i < name.size(); i++) {
        std::cout << "(" << name[i] << ", " << age[i] << ")\n";
    }
}

void Name_pair::sort() {
    std::string temp_name;
    double temp_age;
    for (int i = 1; i < name.size(); i++) {
        for (int j = 0; j < name.size(); j++) {
            if(name[i] < name[j]) {
                temp_name = name[j];
                temp_age = age[j];

                name[j] = name[i];
                age[j] = age[i];

                name[i] = temp_name;
                age[i] = temp_age;
            }
        }
    }
}

int main() {
    Name_pair name_pair;
    name_pair.read_names();
    name_pair.read_ages();
    name_pair.sort();
    name_pair.print();
}