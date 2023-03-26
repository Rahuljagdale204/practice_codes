#include<bits/stdc++.h>
using namespace std;

void encoding(string str,string ans){
if(str.length()==0){
    cout<<ans<<endl;
    return;
}
else if(str.length()==1){
    char ch1 = str[0];
    if(ch1=='0'){
        return;
    }
    else{
        int chv1 = ch1 -'0';
        char code = (char)('a'+chv1-1);
        ans=ans+code;
        cout<<ans<<endl;
    }
}
else{ //string length >1
    char ch2 = str[0];
    string rem1 = str.substr(1);

    if(ch2=='0'){
        return;
    }
    else{
        int chv2 = ch2-'0';
        char code= (char)('a'+chv2-1);
        ans=ans+code;
        encoding(rem1,ans);
    }

    string ch12 = str.substr(0,2);
    string rem2 = str.substr(2);

    int ch12v = stoi(ch12);
    if(ch12v<27){
        char code2 = (char)('a'+ch12v-1);
        ans=ans+code2;
        encoding(rem2,ans); 
    }
}

}

int main(){
    string digit;
    getline(cin,digit);
    encoding(digit,"");
    return 0;
}