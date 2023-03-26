#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int subsetsum(int arr[],int n,int sum){
    if(sum==0||n==0){
        return 0;
    }
    int tab[n+1][sum+1];
    tab[0][0] = 1;
    rep(i,1,sum+1){
        tab[0][i] = 0;
    }

    rep(i,1,n+1){
        rep(j,0,sum+1){
            if(arr[i-1]<=j){
                tab[i][j] = tab[i-1][j-arr[i-1]] + tab[i-1][j];
            }
            else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
    return tab[n][sum];
}

int targetsum(int arr[],int n,int sum){
    int sumofarray=0;
    rep(i,0,n){
        sumofarray += arr[i];
    }
    int s1 = (sumofarray-sum)/2;
    return (subsetsum(arr,n,s1)); 
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

    cout<<targetsum(arr,n,sum)<<endl;
    return 0;
}