#include<bits/stdc++.h>
using namespace std;

void getstairpath(int n,string path){
    if(n==0){
        cout<<path<<endl;
        return;
    }
    if(n<0){
        return;
    }
    for(int jump =1;jump<3;jump++){
        getstairpath(n-jump,path+to_string(jump));
    }
}

int main(){
    int n;
    cin>>n;
    getstairpath(n,"");
    return 0;
}