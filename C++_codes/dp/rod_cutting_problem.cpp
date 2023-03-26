#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int rodcutting(int length[],int price[],int N,int n){
    if(n==0||N==0){
        return 0;
    }
    int tab[n+1][N+1];
    rep(i,0,n+1){
        rep(j,0,N+1){
            if(i==0||j==0){
                tab[i][j]=0;
            }
            else if(length[i-1]<=j){
                tab[i][j] = max(price[i-1]+tab[i][j-length[i-1]],tab[i-1][j]);
            }
            else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
    return tab[n][N];

}

int main(){
    int n;
    cin>>n;
    int length[n], price[n];
    rep(i,0,n){
        cin>>length[i]>>price[i];
    }

    int N;
    cin>>N;

    cout<<rodcutting(length,price,N,n)<<endl;

    return 0;
}