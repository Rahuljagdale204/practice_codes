//Graph to a matrix conversion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n,m;
    cin>>n>>m;

    vvi adjm(n+1, vi(n+1,0));
    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;

    }

    cout<<"Adjacency Matrix of above graph is given by: "<<endl;

    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";

        }
        cout<<endl;
    }


}