#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define setbits(x) builtin_popcount(x)

int knapsack(int wt[],int val[], int W, int n){
    if(n==0 || W==0){
        return 0;
    }
    if (wt[n-1]>W){
        //(wt(n-1)>W)
            return knapsack(wt,val,W, n-1);
        }
    else{
        return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1), knapsack(wt,val,W,n-1));
    }
}

int main(){
    int n;
    cin>>n;
    int wt[n],val[n];
    rep(i,0,n){
        cin>>wt[i]>>val[i];
    }

    wt[n] = (60,100,120);
    val[n] = (10,20,30);
    int W=50;
    cin>>W;
    int res = knapsack(wt,val,W,n);
    cout<<"The maximum Profit is "<<res<<endl;
    return 0;
}