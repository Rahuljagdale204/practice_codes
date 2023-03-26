#include<bits/stdc++.h>
using namespace std;

void printsubarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printsubarray(arr,n-1);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    printsubarray(arr,n);
    return 0;
}