#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    int i, ans=0;
    for(i=1;i<=n;i++) {
        ans+=i;
        
    }
    return ans;
}

int32_t main() {
    int n;
    cin>> n;
    cout<<sum(n)<<endl;
}