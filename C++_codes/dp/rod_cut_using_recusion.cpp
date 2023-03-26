#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int cutting(int length[],int price[],int n,int N){
    if(n==0|| N==0){
        return 0;
    }
    if(length[n-1]<=N){
        return max(price[n-1]+cutting(length,price,n,N-price[n-1]), cutting(length,price,n-1,N));
    }
    else{
        return cutting(length,price, n-1,N);
    }
}


int main(){
    int n;
    cin>>n;
    int length[n] ,price[n];
    rep(i,0,n){
        cin>>length[i]>>price[i];
    }

    int N;
    cin>>N;

    cout<<cutting(length,price,n,N)<<endl;

    return 0;
}