#include<bits/stdc++.h>
using namespace std;

void targetsum(int arr[],int target,int idx,int sum,string ans,int n){
    if(idx==n){
        if(sum==target){
            cout<<ans<<endl;
        }
        return;
    }
    
    targetsum(arr,target,idx+1,arr[idx]+sum,ans+to_string(arr[idx])+",",n);
    targetsum(arr,target,idx+1,sum,ans,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    targetsum(arr,target,0,0,"",n);
    return 0;
}