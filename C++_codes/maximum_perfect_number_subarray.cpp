//For a given array an interger K, find the maximum perfect numbers 
//in a subarray of size K.

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isnumberperfect(int n){
    int sum = 1;
    for (int i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(i==n/i){
                sum += i;
            }
            else{
                sum += i + n/i;
            }
        }

    }
    if(sum == n &n!=1){
        return true;
    }
    else{
        return false;
    }
}


int maxsum(int arr[], int n, int k){
    if(n< k){
        cout<<"Length of subarray is greater than length of array."<<endl;
        return -1;
    }
    
    int res=0;
    for(int i=0;i<k;i++){
        res += arr[i];
    }

    int sum = res;
    for(int j=k;j<n;j++){
        sum += arr[j]-arr[j-k];
        res = max(res, sum);
    }

    return res;
}

int maxperfectnumber(int arr[],int n, int k){

    for(int i=0; i<n;i++){
        if(isnumberperfect(arr[i])){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }
    return maxsum(arr, n, k);
}

int main(){

    int arr[]= {28,2,496, 3, 6, 99, 8128, 24};
    int n = 8;
    int k = 4;


    cout<<"Number of perfect number in given array is "<<maxperfectnumber(arr,n,k)<<endl;


    return 0;
}