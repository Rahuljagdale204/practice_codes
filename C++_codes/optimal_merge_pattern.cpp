//problem: - you are given n files with their computation
//times in an array.
//operation: - choose / take any two files. add their
//computation times.{cost = sum of computation time}
// do this until we are left with only one file in the 
//array.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setbit(x) buildin(x)_popcount(x)

int main(){
    int n;
    cin>>n;

    vi arr(n);
    rep(i,0,n){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end(),less<int>());
    
    vi ans(n);
    rep(i,0,n+1){
        rep(j,0,i+1){
            ans[i] = ans[i] +arr[j];
        }
    }
    int res=0;
    rep(i,1,n){
        res +=ans[i];
    }
    cout<<"Minimum sum of all elements is "<<res<<endl;
    return 0;
    
}