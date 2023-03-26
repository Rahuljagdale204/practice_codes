#include<iostream>
#include<algorithm>
#include<string>
using namespace std;



void heapify(int arr[], int n, int i){

    int maxidx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l] > arr[maxidx]){
        maxidx = l;
    }
    if(r<n && arr[r] > arr[maxidx]){
        maxidx = r;
    }

    if(maxidx!=i){
        swap(arr[i], arr[maxidx]);

        heapify(arr, n, maxidx);
    }

}

void heapsort(int arr[], int n){
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);

        heapify(arr,i,0);
    }
}

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: -"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    heapsort(arr,n);

    cout<<"Sorted array using heap sort: -\n"<<endl;
    printarray(arr, n);
    return 0;
}