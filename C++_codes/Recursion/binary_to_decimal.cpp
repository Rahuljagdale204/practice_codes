#include<bits/stdc++.h>
using namespace std;

int binarydecimal(int n){
    int sum =0;
    int rem;
    int a=0;
    while(n>0){
        rem = n%10;
        sum = sum+rem*pow(2,a);
        n = n/10;
        a++;
    }
    return sum;
}

int main(){

    int n ;
    cin>>n;
    int answer = binarydecimal(n);
    cout<<answer<<endl;
    return 0;
}