/*
*   Implements a Name_pair class where a pair of names and ages are stored in vectors.
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 9, Exercise 3
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
        std::vector<std::string> name;
        std::vector<double> age;
};

void Name_pair::read_names() {
    std::cout << "Enter names to be read(type -1 to quit):\n";
    for(std::string n; std::cin >> n && n != "-1";) {
        name.push_back(n);
    }
}

void Name_pair::read_ages() {
    std::cout << "Enter ages for each name(type -1 to quit):\n";
    for(double a; std::cin >> a;) {
        if(a == -1)
            break;
        age.push_back(a);
    }
}

// void Name_pair::print() {
//     std::cout << "Name Pairs:\n";
//     for (int i = 0; i < name.size(); i++) {
//         std::cout << "(" << name[i] << ", " << age[i] << ")\n";
//     }
// }

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

std::ostream& operator<<(std::ostream& os, Name_pair n) {
    std::string name_pairs = "Name Pairs:\n";
    std::string pair;
    os << name_pairs;
    for (int i = 0; i < n.name.size(); i++) {
        pair = "(" + n.name[i] + ", " + std::to_string(n.age[i]) + ")\n";
        os << pair;
    }
    return os;
}

bool operator==(const Name_pair& nl, const Name_pair& nr) {
    for (int i = 0; i < nl.name.size(); i++) {
        if(nl.name[i] == nr.name[i] && nl.age[i] == nr.age[i]) {
            return true;
        } else {
            return false;
        }
    }

    return false;
}

bool operator!=(const Name_pair& nl, const Name_pair& nr) {
    for (int i = 0; i < nl.name.size(); i++) {
        if(nl.name[i] != nr.name[i] && nl.age[i] != nr.age[i]) {
            return true;
        } else {
            return false;
        }
    }

    return false;
}

int main() {
    Name_pair names_1;
    Name_pair names_2;

    names_1.read_names();
    names_1.read_ages();
    names_1.sort();

    std::cout << names_1;
    std::cin.clear();

    names_2.read_names();
    names_2.read_ages();
    names_2.sort();

    // if(names_1 == names_2) {
    //     std::cout << "These pairs of names are the same!\n";
    // } else {
    //     std::cout << "These pairs of names are not the same!\n";
    // }
    // if(names_1 != names_2) {
    //     std::cout << "These pairs of names are not equal!\n";
    // } else {
    //     std::cout << "These pairs of names are equal!\n";
    // }
}