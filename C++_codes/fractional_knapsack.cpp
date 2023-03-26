//fractional Knapsack problem
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setBits(x) builtin_popcount(x)

bool compare(pii p1, pii p2){
    double v1 = (double) p1.ff/ p1.ss;
    double v2 = (double) p2.ff/p2.ss;
    return v1>v2;
}


int main(){
    int n;
    cin>>n;
    vii arr(n);
    rep(i,0,n){
        cin>>arr[i].ff >> arr[i].ss;
    }
    int w;
    cin>>w;

    sort(arr.begin(), arr.end(), compare);
    int ans = 0;
    rep(i, 0, n){
        if(w >= arr[i].ss){
            ans += arr[i].ff;
            w -= arr[i].ss;
            continue;
        }
        double vw = (double) arr[i].ff/arr[i].ss;
        ans += vw*w;
        w = 0;
        break;
    }
    cout<<"The maximum quantity is : - "<<ans<<endl;
    return 0;
}