#include<bits/stdc++.h>
using namespace std;

string secconversion(string ans){
    int num = stoi(ans);
    string str="";
    for(int i=7;i>=0;i--){
        int k = num>>i;
        if(k & 1){
            str +="1";
        }
        else{
            str+="0";
        }
    }
    return str;
}

string stringconversion(string str){
    int n = str.size();
    string ans="";
    string ret="";
    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            ret+=secconversion(ans)+" ";
            ans="";
        }
        else{
            ans+=str[i];
        }
    }
    ret+=secconversion(ans);
    
    return ret;
}

bool checkstring(string str){
    int n = str.size();
    string ans="";
    int dot_count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            if(ans.size()>1 && ans[0]=='0'){
                return false;
            }
            int num = stoi(ans);
            if(num>255 || num<0){
                return false;
            }
            dot_count++;
            ans="";
        }
        else{
            ans+=str[i];
        }
        if(dot_count>3){
            return false;
        }
    }

    return true;
}

int main(){
    string str;
    getline(cin,str);

    if(checkstring(str)){
        string ans = stringconversion(str);
        cout<<ans<<endl;
    }
    else{
        cout<<"Invalid String"<<endl;
    }
    return 0;
}