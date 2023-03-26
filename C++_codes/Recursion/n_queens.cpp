#include<bits/stdc++.h>
using namespace std;

bool issafeplace(vector<vector<int>>arr,int row,int col){
    for(int i=row-1,j=col;i>=0;i--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<arr.size();i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    return true;
}

void printqueen(vector<vector<int>>arr,string ans, int row){
    if(row==arr.size()){
        cout<<ans<<"."<<endl;
        return;
    }

    for(int col=0;col<arr.size();col++){
        if(issafeplace(arr,row,col)==true){
            arr[row][col]=1;
            printqueen(arr,(ans+to_string(row)+"-"+to_string(col)+","),row+1);
            arr[row][col]=0;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int num;
            num=0;
            temp.push_back(num);
        }
        arr.push_back(temp);
        temp.clear();
    }
    printqueen(arr,"",0);
    return 0;
}