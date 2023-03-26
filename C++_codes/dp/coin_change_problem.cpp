//coin change problem

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int coinchange(int coin[],int n,int total){
    int tab[n+1][total+1];
    tab[0][0] = 1;
    rep(i,1,total+1){
        tab[0][i] = 0;
    }
    rep(i,1,n+1){
        rep(j,0,total+1){
            if(coin[i-1]<=j){
                tab[i][j] =tab[i][j-coin[i-1]] + tab[i-1][j];
            }
            else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
    return tab[n][total];
}

int main(){
    int n;
    cin>>n;
    int coin[n];
    rep(i,0,n){
        cin>>coin[i];
    }
    int total;
    cin>>total;

    cout<<coinchange(coin,n,total)<<endl;
    return 0;
}