#include<bits/stdc++.h>
using namespace std;

void getsubsqu(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    string rem = str.substr(1);
    
    getsubsqu(rem,ans+ch);
    getsubsqu(rem,ans+"");
}

int main(){
    string str;
    getline(cin,str);
    getsubsqu(str,"");
    return 0;
}