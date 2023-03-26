// GCD using Basic Euclidean Algorithm

#include<bits/stdc++.h>
using namespace std;

//recursion
int gcd(int a,int b){

    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}

int main(){

    cout<<"+++GCD using Basic Euclidean Algorithm+++"<<endl;

    cout<<"Enter the two number: -";
    int a,b;cin>>a>>b;
    int answer = gcd(a,b);

    cout<<"GCD of given number is using basic Euclidean Algorithm is "<<answer<<endl;
    return 0;
}
