#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)


void LCString(string str1,string str2,int n, int m){
    int tab[n+1][m+1];
    rep(i,0,n+1){
        rep(j,0,m+1){
            if(i==0 || j==0){
                tab[i][j] == 0;
            }
        }
    }

    rep(i,1,n+1){
        rep(j,1,m+1){
            if(str1[i-1]==str2[j-1]){
                tab[i][j]=tab[i-1][j-1]+1;
            }
            else{
                tab[i][j]=max(tab[i-1][j], tab[i][j-1]);
            }
        }
    }
    string s;
    int i=n,j = m;
    while(i>0 && j>0){
        if(str1[i-1]==str2[j-1]){
            s.push_back(str1[i-1]);
            i--;
            j--;
        }
        else{
            if(tab[i][j-1]>tab[i-1][j]){
                i--;
            }
            else{
                j--;
            }
        }
    }

    reverse(s.begin(),s.end());
    cout<<s<<endl;

}

int main(){
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    int n,m;
    n = str1.length();
    m = str2.length();
    LCString(str1,str2,n,m);
    // cout<<<<endl;
    return 0;
}