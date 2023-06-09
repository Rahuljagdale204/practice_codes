#include<bits/stdc++.h>
#include<queue>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second 




int main(){
    int n;
    cin>>n;

    vi arr(n);
    rep(i,0,n){
        cin>>arr[i];
    }

    priority_queue<int,vector<int>,greater<int>> minheap;
    rep(i,0,n){
        minheap.push(arr[i]);
    }
    int ans = 0;
    while(minheap.size()>1){
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();
        ans +=e1+e2;
        minheap.push(e1+e2);
    }
    cout<<"Answer: -"<<ans<<endl;
    return 0;
}