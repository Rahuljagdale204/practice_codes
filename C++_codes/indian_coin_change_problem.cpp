//you are given an array of Denominations and a value X. You need to find
//the minimum number of coins reuired to make value x.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int X;
    cin>>X;

    //for sorting the vector
    sort(arr.begin(), arr.end(), greater<int>());
    int ans =0;
    for(int i=0;i<n;i++){
        ans += X/arr[i];
        X -= X/arr[i] * arr[i];
    }

    cout<<"Minimum number of coins required: - "<<ans<<endl;
}