#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;
    cin>>n;
    vi arr(n);
    rep(i,0,n){
        cin>>arr[i];
    }
    long long mn=0,mx=0;
    sort(arr.begin(),arr.end());

    rep(i,0,n/2){
        mx+=arr[i+n/2]-arr[i];
        mn +=arr[2*i+1]-arr[2*i];
    }
    cout<<"minimum "<<mn<<" -- "<<"maximum "<<mx<<endl;
    return 0;
}