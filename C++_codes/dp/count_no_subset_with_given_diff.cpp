#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int numberofsubset(int arr[],int n,int sums1){
    if(sums1==0 || n==0){
        return 0;
    }
    int tab[n+1][sums1+1];
    tab[0][0] = 1;
    rep(i,1,sums1+1){
        tab[0][i] = 0;
    }

    rep(i,1,n+1){
        rep(j,0,sums1+1){
            if(arr[i-1]<=j){
                tab[i][j] = tab[i-1][j-arr[i-1]] + tab[i-1][j];
            }
            else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
    return tab[n][sums1];
}

int average(int arr[],int n,int diff){
    int sumofarray =0;
    rep(i,0,n){
        sumofarray +=arr[i];
    }

    int sums1 = 0;
    sums1 = (sumofarray+diff)/2;

    return (numberofsubset(arr,n,sums1));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    int diff;
    cin>>diff;

    cout<<average(arr,n,diff)<<endl;
    return 0;
}