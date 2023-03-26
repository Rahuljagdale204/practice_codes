#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left,int mid,int right){
    int i,j,k,sizeleft,sizeright;
    sizeleft = mid-left+1;
    sizeright = right-mid;

    int leftarr[sizeleft],rightarr[sizeright];

    for(i=0;i<sizeleft;i++){
        leftarr[i] = arr[left+i];
    }

    for(j=0;j<sizeright;j++){
        rightarr[j] = arr[mid+1+j];
    }

    i=0,j=0,k=left;

    //filling finalarray
    while(i<sizeleft && j<sizeright){
        if(leftarr[i]<=rightarr[j]){
            arr[k]=leftarr[i];
            i++;
        }
        else{
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while(i<sizeleft){
        arr[k] = leftarr[i];
        i++;k++;
    }

    while(j<sizeright){
        arr[k] = rightarr[j];
        j++;k++;
    }
}

void mergesort(int arr[],int left,int right){
    int mid;
    if(left<right){
        mid = left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}