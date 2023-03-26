#include<iostream>
using namespace std;

class A{
    public:
    void Afunc() {
        cout<<"Function A \n";
    }
};
class B : public A {
    public:
    void Bfunc() {
        cout<<"Function B \n";
    }
};
class C: public B {
    public:
    void Cfunc() {
        cout<<"Function C \n";
    }
};

int main() {
    C c;
    c.Afunc();
    c.Bfunc();
    c.Cfunc();
}