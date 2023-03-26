#include<bits/stdc++.h>
using namespace std;

void zigzag(int n){
    if(n==0){
        return;
    }
    cout<<"Pre "<<n<<endl;
    zigzag(n-1);
    cout<<" In "<<n<<endl;
    zigzag(n-1);
    cout<<"Post "<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    zigzag(n);
    return 0;
}