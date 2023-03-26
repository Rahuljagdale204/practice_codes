#include<iostream>
using namespace std;

class A {
    public:
    int a;
    void funcA() {
        cout<<"Func A\n";
    }

    private:
    int b;
    void funB() {
        cout<<"Func B\n";
    }

    protected:
    int c;
    void funC() {
        cout<<"Func C\n";
    }
};

int main() {

    A obj;
    obj.funcA();

    return 0;
}
