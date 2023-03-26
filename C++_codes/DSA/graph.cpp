#include<bits/stdc++.h>
using namespace std;

class graph{
    public:

    unordered_map<int,list<int>>adj;
    void addedges(int u,int v,bool direction){
        //direction = 0 ->undirected
        //direction = 1 -> directed graph

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
             
        }
    }

    void printadjlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }

};

int main(){
    //n is number of nodes of graph;
    int n;cin>>n;
    //m is edges of graph;
    int m;cin>>m;

    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //cerating indirected graph
        g.addedges(u,v,0);

    }

    //printing graph;
    g.printadjlist();

    return 0;
}