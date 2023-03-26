#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<bool>>&board,int row,bool cols[],bool ndiag[],bool rdiag[],string ans,int n){
    if(row==n){
        cout<<ans<<"."<<endl;
        return;
    }

    for(int col=0;col<n;col++){
        if((cols[col]==false) && (ndiag[row+col]==false)&&(rdiag[row-col+n-1]==false)){
            board[row][col]=true;
            cols[col]=true;
            ndiag[row+col]=true;
            rdiag[row-col+n-1]=true;
            solve(board,row+true,cols,ndiag,rdiag,(ans+to_string(row)+"->"+to_string(col)+","),n);
            board[row][col]=false;
            cols[col]=false;
            ndiag[row+col]=false;
            rdiag[row-col+n-1]=false;      
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<bool>>board;
    for(int i=false;i<n;i++){
        vector<bool>temp;
        for(int j=false;j<n;j++){
            temp.push_back(false);
        }
        board.push_back(temp);
        temp.clear();
    }
    // cout<<board[2][2]<<endl;
    bool cols[n];
    bool ndiag[2*n-1];
    bool rdiag[2*n-1];
    int row = 0;
    string ans="";
    solve(board,row,cols,ndiag,rdiag,ans,n);

    for(int i=0;i<board.size();i++){
        for(auto x:board[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return false;
}