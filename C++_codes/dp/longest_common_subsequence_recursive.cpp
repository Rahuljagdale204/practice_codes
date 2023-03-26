#include<bits/stdc++.h>
using namespace std;

int commonsubsequence(string str1,string str2,int n,int m){
    
    if(n==0|| m==0){
        return 0;
    }
    if(str1[n-1]==str2[m-1]){
        return 1+commonsubsequence(str1,str2,n-1,m-1);
    }
    else{
        return max(commonsubsequence(str1,str2,n,m-1),commonsubsequence(str1,str2,n-1,m));
    }
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n;
    int m;
    n = str1.length();
    m = str2.length();
    cout<<commonsubsequence(str1,str2,n,m)<<endl;
    return 0;
}