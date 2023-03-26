#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
int tab[1001][1001];
int memorization(string str1,string str2,int n,int m){
    
    if(n==0|| m==0){
        return 0;
    }
    if(tab[n][m]!=-1){
        return tab[n][m];
    }
    if(str1[n-1]==str2[m-1]){
        return tab[n][m]=1+memorization(str1,str2,n-1,m-1);
    }
    else{
        return tab[n][m]=max(memorization(str1,str2,n,m-1),memorization(str1,str2,n-1,m));
    }   
}
 
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n,m;
    n = str1.length();
    m = str2.length();
    memset(tab,-1,sizeof(tab));
    cout<<memorization(str1,str2,n,m)<<endl;
    return 0;
}