//0,1,2 sort
//check value if arr[mid] - 
 //   if 0, swap arr[low] and arr[mid], low++, mid++
 //   if 1, mid++
 //   if 2, swap arr[mid] and arr[high], high--

 //time complexity: - O(N)

#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void dnfsort(int arr[], int n) {
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr, low, mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr, mid, high);
            high--;
        }
    }
}

int main() {

    int arr[] = {1,0,2,1,0,1,2,1,2};
    dnfsort(arr, 9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0; 
}