#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

bool func(int arr[],int n){
    
    int sum=0;
    rep(i,0,n){
        sum +=arr[i];
    }
    int tab[n+1][sum+1];
    rep(i,1,n+1){
        rep(j,1,sum+1){
            if(arr[i-1]>j){
                tab[i][j] = tab[i-1][j];
            }
            else{
                tab[i][j] = tab[i-1][j] ||tab[i-1][j-arr[i-1]];
            }
        }
    }
    vi s(sum/2);
    rep(i,0,sum/2){
        s.push_back(tab[n][i]);
    }
    int mn = INT_MAX;
    for(int i=0;i<s.size();i++){
        mn = min(mn, sum-2*s[i]);
    }
    return mn;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }

    cout<<"The minimum difference is "<<func(arr,n)<<endl;
}