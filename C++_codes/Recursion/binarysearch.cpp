#include<bits/stdc++.h>
using namespace std;


bool binarysearch(int *arr,int l,int r,int target){
    

}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;cin>>target;

    bool ans = binarysearch(arr,0,n,target);
    if(ans)cout<<"Present"<<endl;
    else cout<<"absent"<<endl;
    return 0;
}