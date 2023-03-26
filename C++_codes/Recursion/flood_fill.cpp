#include<bits/stdc++.h>
using namespace std;


void floodfill(vector<vector<int>>arr,int row,int col,string ans,vector<vector<bool>>visited){
    
    if(row<0||col<0||row==(arr.size())||(col==arr[0].size())||arr[row][col]==1||visited[row][col]==true){
        return;
    }
    if(row==(arr.size()-1) && col ==(arr[0].size()-1)){
        cout<<ans<<endl;
        return;
    }
    visited[row][col]=true;
    floodfill(arr,row-1,col,ans+"t",visited);
    floodfill(arr,row,col-1,ans+"l",visited);           
    floodfill(arr,row+1,col,ans+"d",visited);
    floodfill(arr,row,col+1,ans+"r",visited);
    visited[row][col]=false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
        temp.clear();
    }
    vector<vector<bool>>visited;
    floodfill(arr,0,0,"",visited);
    return 0;
}