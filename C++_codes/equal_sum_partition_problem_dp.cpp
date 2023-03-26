//Equal sum partition problem
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

bool equalsum(int arr[],int n){
    int sum=0;
    rep(i,0,n){
        sum +=arr[i];
    }
    if(sum%2!=0){
        return false;
    }
    bool partition[sum/2+1];
    
    rep(i,0,sum/2){
        partition[i]=0;
    }

    rep(i,0,n){
        for(int j=sum/2;j>=arr[i];j--){
            if(partition[j-arr[i]]==1 || j == arr[i] ){
                partition[j]=1;
            }
        }
    }
    return partition[sum/2];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    

    if(equalsum(arr,n)){
        cout<<"Equal sum partition occurs!!!"<<endl;
    }
    else{
        cout<<"Partition not occurs"<<endl;
    }
}+