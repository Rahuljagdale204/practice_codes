#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[],int n){
    // int temp;
    // temp = arr[0];
    // for(int i=0;i<n;i++){
    //     if(temp<arr[i]){
    //         temp=arr[i];
    //     }
    // }
    // return temp;

    if(n==sizeof(arr)-1){
        return arr[n];
    }
    int maxnum = maximum(arr,n+1);
    if(maxnum>arr[n]){
        return maxnum;
    }
    else{
        return arr[n];
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int answer=maximum(arr,n);
    int answer = maximum(arr,0);
    cout<<answer<<endl;
    return 0;
}