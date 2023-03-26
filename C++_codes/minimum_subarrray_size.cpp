//for a given array and an integer X, find the minimum subarray size for 
//which sum > x.
#include<iostream>
using namespace std;
//sliding window apporach
int smallestsubarraywithsum(int arr[], int n, int x){
    int sum = 0, minlength = n+1, start = 0, end = 0;
    while(end < n){
        while( sum <= x && end < n){
            sum += arr[end++];
        }
        while(sum > x && start < n){
            if(end -start < minlength){
                minlength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minlength;
}

int main(){
    int arr[]= {1, 4, 45,6, 10, 19};
    int n = 6;
    int x = 51;

    int result = smallestsubarraywithsum(arr, n, x);
    if(result == n+1){
        cout<<"No such subarray exists in given array"<<endl;
    }
    else{
            cout<< "The size of minimum subarray having sum "<<x<<" is "<<result<<endl;
    }
    return 0;
}