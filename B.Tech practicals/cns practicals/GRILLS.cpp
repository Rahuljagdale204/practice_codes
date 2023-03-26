#include<bits/stdc++.h>
using namespace std;

int main(){
	char mat[6][6];
	string s;
	getline(cin,s);
	string temp;
	for(int i=0; i<s.size();i++)
    {
        if(s[i]==' ') continue;
        temp=temp+s[i];
    }
    int k=0; 
    int remain=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(k<temp.size())
              mat[i][j]= temp[k++];
            else {
                char c=remain+'A';
                mat[i][j]=c;
                remain++;
            }
        }
    }
    
    vector<pair<int,int>> v={{0,0},{0,3},{1,5},{2,2},{2,4},{4,2},{4,4},{5,1},{5,3}};
    k=0;
    cout<<temp<<endl;
    for(int i=0; i<4; i++){
        int remain=0;
        for(int j=0; j<9; j++){
            if(k<temp.size())
                 mat[v[j].first][v[j].second]=temp[k++];
            else {
                char c=remain+'A';
                mat[v[j].first][v[j].second]=temp[k++];
                remain++;
            }
        }
        
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                 cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        } 
        cout<<endl;
        
        for(int j=0; j<9 ;j++){
            int x=v[j].first;
            int y=v[j].second;
            v[j].first=y;
            v[j].second=abs(5-x);
        }
        sort(v.begin(),v.end());
    } 
   
}

