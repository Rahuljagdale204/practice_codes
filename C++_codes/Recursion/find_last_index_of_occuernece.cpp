#include<bits/stdc++.h>
using namespace std;

int lastoccurence(int arr[],int n,int key,int size){
    if(n==size){
        return -1;
    }
    int temp = lastoccurence(arr,n+1,key,size);
    if(temp==-1){
        if(arr[n]==key){
            return n+1;
        }
        else{
            return -1;
        }
    }
    else{
        return temp;
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int answer = lastoccurence(arr,0,key,n);
    cout<<answer<<endl;
    return 0;
}
