//create a list of nodes of graphs
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n,m;
    cin>>n>>m;

    vi adj[n+1];
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjacency list of the above graph is:"<<endl;
    rep(i,1,n+1){
        cout<<i<<" ->";
        vector<int> :: iterator it;
        for(it = adj[i].begin();it!=adj[i].end();it++){
            cout<<*it<<" ";
    
        }
        cout<<endl;
    }

    return 0;
}