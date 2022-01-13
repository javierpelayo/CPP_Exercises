/*
*   Doubly-Linked List implementation example
*
*   Book: Programming Principles and Practice Using C++ 2nd Edition
*   Author: Bjarne Stroustrup
*   Section: Chapter 17
*
*   Compile: g++ -std=c++14 name.cpp -o name
*/
#include<iostream>

class Link {
    public:
        std::string value;
        Link(const std::string& v, Link* p = nullptr, Link* s = nullptr) 
            : value{v}, prev{p}, succ{s} {}
        Link* insert(Link* n);
        Link* add(Link* n);
        Link* erase();
        Link* find(const std::string& s);
        const Link* find(const std::string& s) const;
        Link* advance(int n) const;
        Link* next() const { return succ; }
        Link* previous() const { return prev; }
    private:
        Link* prev;
        Link* succ;
};

Link* Link::insert(Link* n) { // insert n before p; return n
    if(n==nullptr) return this;
    if(this==nullptr) return n;
    n->succ = this;
    if(prev) prev->succ = n;
    n->prev = prev;
    prev = n;
    return n;
}

Link* add(Link* p, Link* n) {   // insert n after p; return n
    // exercise 11
}

Link* erase(Link* p) {  // remove *p from list; return p's successor
    if(p==nullptr) return nullptr;
    if(p->succ) p->succ->prev = p->prev;
    if(p->prev) p->prev->succ = p->succ;
    return p->succ;
}

Link* find(Link* p, const std::string& s) {  // find s in list
    while(p) {
        if(p->value==s) return p;
        p = p->succ;
    }
    return nullptr;
}

Link* advance(Link* p, int n) {     // move n positions in list
    if(p==nullptr) return nullptr;
    if(0 < n) {
        while(n--) {
            if(p->prev == nullptr) return nullptr;
            p = p->succ;
        }
    } else if (n < 0) {
        while(n++) {
            if(p->prev == nullptr) return nullptr;
            p = p->prev;
        }
    }
    return p;
}

void print_all(Link* p) {
    std::cout << "{ ";
    while(p) {
        std::cout << p->value;
        if(p->next()) std::cout << ", ";
    }
    std::cout << " }";
}

int main() {
    Link* norse_gods = new Link{"Thor"};
    norse_gods = norse_gods->insert(new Link{"Odin"});
    norse_gods = norse_gods->insert(new Link{"Zeus"});
    norse_gods = norse_gods->insert(new Link{"Freia"});

    Link* greek_gods = new Link{"Hera"};
    greek_gods = greek_gods->insert(new Link{"Athena"});
    greek_gods = greek_gods->insert(new Link{"Mars"});
    greek_gods = greek_gods->insert(new Link{"Poseidon"});

    Link* p = greek_gods->find("Mars");
    if(p) p->value = "Ares";

    Link* p2 = norse_gods->find("Zeus");
    if(p2) {
        if(p2==norse_gods) norse_gods=p2->next();
        p2->erase();
        greek_gods = greek_gods->insert(p2);
    }

    print_all(norse_gods);
    std::cout << "\n";

    print_all(greek_gods);
    std::cout << "\n";
}