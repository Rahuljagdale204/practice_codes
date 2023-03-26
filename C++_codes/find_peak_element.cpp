//Find the peak element
//For a given array, find the peak element in the array. Peak element
//is one which is greater than both, left and right nighbour of itself.

#include<iostream>
using namespace std;

int peakelement(int arr[], int left, int right, int n){

    int mid = left +(right-left)/2;

    if((mid == 0 || arr[mid-1]<arr[mid]) && (mid ==n-1 || arr[mid+1]<=arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid-1]> arr[mid]){
        return peakelement(arr, left, mid-1, n);
    }
    else{
        return peakelement(arr, mid+1, right, n);
    }
}

int main(){
    int arr[] = {0, 3,5,2,9, 7};
    int n = 6;
    cout<<"Peak element index "<<peakelement(arr, 0, n-1, n)+1<<endl;
    return 0;

}
