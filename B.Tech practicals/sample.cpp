#include<bits/stdc++.h>
using namespace std;

int lessele(int n,vector<int>arr){
    int count=0;
    for(auto x:arr){
        if(x<n){
            count++;
        }
    }
    return count;
}

int largele(int n,vector<int>arr){
    int count=0;
    for(auto x:arr){
        if(x>n){
            count++;
        }
    }
    return count;
}

int main(){
    int n;cin>>n;
    vector<int>arr;
    int cost =0;
    int small,large;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        small = lessele(num,arr);
        large = largele(num,arr);
        cost+= min(small,large);
        arr.push_back(num);
    }
    cout<<cost<<endl;
    return 0;
}