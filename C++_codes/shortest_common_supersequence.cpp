#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int LCstring(string str1,string str2,int n,int m){
    int tab[n+1][m+1];
    rep(i,0,n+1){
        rep(j,0,m+1){
            if(i==0 || j==0){
                tab[i][j]=0;
            }
        }
    }
    rep(i,1,n+1){
        rep(j,1,m+1){
            if(str1[i-1]==str2[j-1]){
                tab[i][j] = 1+tab[i-1][j-1];
            }
            else{
                tab[i][j] = max(tab[i][j-1], tab[i-1][j]);
            }
        }
    }
    return tab[n][m];
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n ,m;
    n = str1.length();
    m = str2.length();
    cout<<m+n-LCstring(str1,str2,n,m)<<endl;
    return 0;
}