#include"bits/stdc++.h"
#include<iostream>
using namespace std;

//function overloading
class college {
    public:
    void fun() {
        cout<<"I am a function with no arguments\n";
    }
    void fun(int x){
        cout<<x<<endl;
        cout<<"I am a function with int arguments\n";
    }
    void fun(double x){
        cout<<x<<endl;
        cout<<"I am a function with double arguments\n";
    }
};

int32_t main() {
    college obj;
    obj.fun();
    obj.fun(14);
    obj.fun(45.76);

    return 0;
}