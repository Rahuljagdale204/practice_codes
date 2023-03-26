#include<iostream>
using namespace std;

bool sorted(int arr[], int n) {
    if(n==1){
        return true;
    }

    bool restarray = sorted(arr+1, n-1);

    return ((arr[0]<arr[1]) & restarray);
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
     if(sorted(arr, n)==1){
        cout<<"Array is sorted"<<endl;
    }
    else
        cout<<"Array is not sorted"<<endl;
   

    return 0;
}