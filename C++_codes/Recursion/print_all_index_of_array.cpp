#include<bits/stdc++.h>
using namespace std;

int mainfunction(int arr[],int idx,int key,int size,int fsf,int output[]){
    
    if(idx==size){
        int arr[fsf];
        return arr[fsf];     
    }
    if()
}

void allindexes(int arr[],int size,int key){
    int output[size];
    int fsf=0;
    int len = mainfunction(arr,0,key,size,fsf,output);
    if(len==0){
        cout<<"Index is not found"<<endl;
    }
    else{
        for(int i=0;i<len;i++){
            cout<<output[i]<<" ";
        }
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

    return 0;

}