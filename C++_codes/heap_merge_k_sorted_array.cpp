#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int>mergetwoarrays(vector<int>l, vector<int>r){
    vector<int>ret;
    int l_in=0,r_in=0;
    while(l_in+r_in < l.size()+r.size()){
        if(l_in!=l.size() &&(r_in==r.size() || l[l_in]<r[r_in])){
            ret.push_back(l[l_in]);
            l_in++;
        }
        else{
            ret.push_back(r[r_in]);
            r_in++;
        }
    }
    return ret;
}

vector<int>mergeArrays(vector<vector<int> > arr){
    vector<vector<int> > arr_s;
    while(arr.size() !=1){
        arr_s.clear();
        for(int i=0;i<arr.size();i +=2){
            if(i == arr.size()-1){
                arr_s.push_back(arr[i]);
            }
            else{
                arr_s.push_back(mergetwoarrays(arr[i], arr[i+1]));
            }
            
        }
        arr = arr_s;
    }
    return arr[0];
}

int main(){
    int n;
    cout<<"Enter the number of array:"<<endl;
    cin>>n;
    vector<vector<int> > v;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the size of array"<<endl;
        cin>>x;
        vector<int>temp;
        cout<<"Enter the elements of array"<<endl;
        for(int j=0;j<x;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        v.push_back(temp);
    }

    vector<int>output = mergeArrays(v);

    for(auto u:output){
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}