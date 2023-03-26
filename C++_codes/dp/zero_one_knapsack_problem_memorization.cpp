#include<bits/stdc++.h>
// #include<cstring>
#include<iostream>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define setbits(x) builtin_popcount(x) 

int arr[102][1002];

int knapsack(int wt[],int val[], int W,int n){
    
    if(n==0||W==0){
        return 0;
    }
    if(arr[n][W] !=-1){
        return arr[n][W];
    }

    if(wt[n-1]<=W){
        return arr[n][W] = max(val[n-1]+knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt,val,W,n-1));
    }
    else{
        return arr[n][W] = knapsack(wt,val,W,n-1);
    }
}

int main(){
    int n;
    cin>>n;
    int wt[n],val[n];
    rep(i,0,n){
        cin>>wt[i]>>val[n];
    }
    memset(arr,-1,sizeof(arr));
    int W;
    cin>>W;
    int res = knapsack(wt, val,W,n);
    cout<<res<<endl;
    return 0;
}