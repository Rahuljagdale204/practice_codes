#include<bits/stdc++.h>
using namespace std;

void printabbr(string str,string ans, int count,int pos){
    if(pos==str.length()){
        if(count==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+to_string(count)<<endl;
        }
        return;
    }
    if(count>0){
        printabbr(str,(ans+to_string(count)+str[pos]),0,pos+1);
    }
    else{
        printabbr(str,(ans+str[pos]),0,pos+1);
    }
    printabbr(str,ans,count+1,pos+1);
}

int main(){
    string str;
    getline(cin,str);
    printabbr(str,"",0,0);
    return 0;
}