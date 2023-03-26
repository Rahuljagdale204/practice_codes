#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[left]>arr[largest]) largest = left;

    if(right<n && arr[right]>arr[largest]) largest = right;

    if(largest!=i){
        swap(arr[largest],arr[i]);

        maxheapify(arr,n,largest);
    }
}


void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        maxheapify(arr,i,0);
    }

}

void printheap(int arr[],int n){
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

    heapsort(arr,n);
    printheap(arr,n);
    return 0;
}