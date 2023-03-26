#include<iostream>
using namespace std;

int fibnacci(int n){

    if(n==0 || n==1){
        return n;
    }
    return (fibnacci(n-1) + fibnacci(n-2));
}

int main() {
    int n;
    cin>>n;
    cout<<fibnacci(n)<<endl;

    return 0;
}