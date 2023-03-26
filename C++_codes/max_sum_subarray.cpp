//Find a given array and intergers k and x, find the maximum sum subarray
//of size k and having sum less than X.
#include<iostream>
using namespace std;

void sumofsubarray(int arr[], int k, int x, int n){
    int sum = 0,ans = 0;

    for(int i=0;i<k; i++){
        sum +=arr[i];
    }

    if(sum < x){
        ans = sum;
    }

    for(int i = k; i<n;i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];

        if(sum< x){
            ans = max(ans, sum);
        }
    }

    cout<<ans << " is the maximum sum of subarray."<<endl;

}


int main(){
    int arr[] = {7, 5, 4, 6, 8, 9};
    int n = 6;
    int k = 3;
    int x = 20;
    sumofsubarray(arr, k, x, n);
    return 0;
} 