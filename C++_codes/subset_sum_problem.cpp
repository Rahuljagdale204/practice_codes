#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

bool subsetsum(int arr[],int sum, int n){
    int t[n+1][sum+1];
    if(sum==0|| n==0){
        return false;
    }
    rep(i,1,n+1){
        rep(j,1,sum+1){
            if(arr[i]<=j){
                t[i][j] = t[i][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n+1][sum+1];
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    
    if(subsetsum(arr,sum,n)){
        cout<<"Sum of subset is occured"<<endl;
    }
    else{
        cout<<"Failed!!!"<<endl;
    }
    return 0;
}