//ubouned knapsack using top down method

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int unboundedknapsack(int wt[],int val[],int n,int W){
    int t[n+1][W+1];
    rep(i,0,n+1){
        rep(j,0,W+1){
            if(i==0 || j==0){
                t[i][j]=0;
            }
            else if (wt[i-1]<=j){
                t[i][j] = max(val[i-1]+t[i][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][W];
}

int main(){
    int n;
    cin>>n;
    int wt[n],val[n];
    rep(i,0,n){
        cin>>wt[i]>>val[i];
    }

    int W;
    cin>>W;

    cout<<unboundedknapsack(wt,val,n,W)<<endl;

    return 0;
}