#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int *arr,int n,int target){
    bool flag;
    if(n<0){
        return false;
    }
    if(arr[n]==target){
        return true;
    }
    return linearsearch(arr,n-1,target);
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;cin>>target;

    bool ans= linearsearch(arr,n,target);
    if(ans) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}