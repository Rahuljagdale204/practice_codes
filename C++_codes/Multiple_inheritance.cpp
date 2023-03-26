#include<iostream>
using namespace std;
class A {
    public:
    void Afunc() {
        cout<<"Function A \n"<<endl;
    }
};

class B {
    public:
    void Bfunc() {
        cout<< "Function B\n"<<endl;
    }
};
class C : public A, public B{
    public:
    void Cfunc() {
        cout<<"Function C \n"<<endl;
    }
};

int main () {
    C c;
    c.Cfunc();
    c.Afunc();
    c.Bfunc();
    return 0;
}