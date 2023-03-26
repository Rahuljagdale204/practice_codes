//You are given n activities with their start and finish times.
//select the maximum number of activities that can be performed by a 
//single person, assuming that a person can only work on a single 
//activity at a time.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        arr.push_back({start, end});

    }

    sort(arr.begin(), arr.end(), [&](vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    });

    int take = 1;
    int end = arr[0][1];
    for(int i=0;i<n;i++){
        if(arr[i][0]>end){
            take++;
            end = arr[i][1];
        }
    }
    cout<<"Maximum number of activities can be performed are : "<<take<<endl;

}