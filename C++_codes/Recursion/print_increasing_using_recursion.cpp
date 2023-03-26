#include<bits/stdc++.h>
using namespace std;

void printincresing(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printincresing(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    printincresing(n);
    return 0;
}