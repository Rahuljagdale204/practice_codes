#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<map>

using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> a;
    for (int i=0;i<n;i++){
        int num = 0;
        cin>>num;
        a.push_back(num);
    }

    map<int, int> count;

    int prefsum = 0;

    for(int i=0;i<n;i++){
        prefsum += a[i];
        count[prefsum]++;
    }

    int ans = 0;

    map<int, int>::iterator it;
    for(it= count.begin();it!=count.end();it++){
        int c = it->second;
        ans +=(c*(c-1))/2;

        if(it->first == 0){
            ans +=it->second;
        }
    }
    cout<<"Number of subarray whose sum is zero"<<endl;
    cout<<"Answer: - "<<ans<<endl;
}