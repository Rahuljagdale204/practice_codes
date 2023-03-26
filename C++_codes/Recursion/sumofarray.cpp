#include<bits/stdc++.h>
using namespace std;

int sumofarray(int *arr,int n){

    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int remain = sumofarray(arr+1,n-1);
    int sum = arr[0]+remain;
    return sum;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=sumofarray(arr,n);
    cout<<sum<<endl;
    return 0;
}