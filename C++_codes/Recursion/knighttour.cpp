#include<bits/stdc++.h>
using namespace std;

void printboard(vector<vector<int>>chess){
    for(int i=0;i<chess.size();i++){
        for(int j=0;j<chess[0].size();j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printknighttour(vector<vector<int>>chess,int r,int c,int move){
    if(r<0||c<0||r>=chess.size()||c>=chess[0].size()||chess[r][c]>0){
        return;
    }
    else if(move==chess.size()*chess.size()){
        chess[r][c]=move;
        printboard(chess);
        chess[r][c]=0;
        return;
    }

    chess[r][c]=move;
    printknighttour(chess,r-2,c+1,move+1);
    printknighttour(chess,r-1,c+2,move+1);
    printknighttour(chess,r+1,c+2,move+1);
    printknighttour(chess,r+2,c+1,move+1);
    printknighttour(chess,r+2,c-1,move+1);
    printknighttour(chess,r+1,c-2,move+1);
    printknighttour(chess,r-1,c-2,move+1);
    printknighttour(chess,r-2,c-1,move+1);
}



int main(){
    int n,r,c;
    cin>>n>>r>>c;
    vector<vector<int>> chess;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int num=0;
            temp.push_back(num);
        }
        chess.push_back(temp);
    }
    int move=1;
    printknighttour(chess,r,c,move);
    return 0;
}