//GCD using Extended Euclidean Algorithm

#include<bits/stdc++.h>
using namespace std;

int egcd(int a,int b){
    int x=0,y=1,u=1,v=0;
    while(a!=0){
        int q = b/a;
        int r = b%a;
        int m = x-u*q;
        int n = y-v*q;
        b = a;
        a=r;
        x = u;
        y=v;
        u=m;
    }
    int gcd =b;
    cout<<"Value of s is "<<x<<" and value of t is "<<y<<endl;
    return gcd;
}

int main(){
    cout<<"+++GCD using Extended Euclidean Algorithm+++"<<endl;
    cout<<"Enter the two number: -";
    int a,b;cin>>a>>b;

    int ans = egcd(a,b);
    cout<<"GCD of given number is "<<ans<<endl;
    return 0;
}
