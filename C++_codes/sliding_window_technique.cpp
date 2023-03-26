//Given an array with n elements calculate the minimum sum of k,
//consecutive elements.
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int calculatesum(vector<int>arr, int k, int n){

    int sum = 0;
    int res = INT_MAX;
    for(int i=0;i<k;i++){
        sum +=arr[i];
    }
    res= min(res, sum);
    for(int i=1;i<n-k+1;i++){
        sum -=arr[i-1];
        sum +=arr[i+k-1];
        res = min(res, sum);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num = 0;
        cin>>num;
        arr.push_back(num);
    }

    

    int result = calculatesum(arr, k,n);
    cout<<"Minimum sum of "<<k<<" in given array is "<<result<<endl;
    return 0;
}