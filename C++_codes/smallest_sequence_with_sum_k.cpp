#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;


int main(){
    int n, k;
    cout<<"Enter the number of elements: -"<<endl;
    cin>>n;
    cout<<"Enter the value of minimum sum: -"<<endl;
    cin>>k;


    vector<int> arr;

    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter the element"<<endl;
        cin>>num;
        arr.push_back(num);
    }
    
    priority_queue<int>pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    int sum = 0;
    int count = 0;

    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();

        count++;

        if(sum>=k){
            break;
        }
    }
    if(sum <k){
        cout<<"No such sequence exists"<<endl;
    }
    else{
        cout<<"The number of subsequence whose sum is greater than "<<k<<" is "<<count<<endl;
    }
}
