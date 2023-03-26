#include<iostream>
using namespace std;

class A {
    public:
    void func() {
        cout<<"Class A Inherited\n";
    }

    private:

    protected:
};
class B : public A {
    void funcB(){
        cout<<"Class B own"<<endl;
    }
};
int main(){
    B b;
    b.func();
    return 0;
}