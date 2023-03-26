#include"bits/stdc++.h"
using namespace std;

class base {
    public:
    virtual void print() {
        cout<< "This is the base class's print function"<<endl;
    }
    void display() {
        cout<< "This is the base class's display function"<<endl;
    }
};
class dervied: public base {
    public:
    void print() {
        cout<< "This is the dervied class's print function"<<endl;
    }
    void display() {
        cout<< "This is the dervied class's display function"<<endl;
    }  
};

int32_t main() {
    base *baseptr;
    dervied d;
    baseptr = &d;
    baseptr -> print();

    baseptr -> display();

    return 0;
}