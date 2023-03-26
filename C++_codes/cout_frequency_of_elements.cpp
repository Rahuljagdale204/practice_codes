#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>

using namespace std;


int main(){

    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    vector<int>arr;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        int num = 0;
        cin>>num;
        arr.push_back(num);
    }

    map<int, int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    map<int, int> :: iterator it;
    cout<<"Frequency of elements is: -"<<endl;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->first << " "<<it->second<<endl;
    }
}