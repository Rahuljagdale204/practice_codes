#include<bits/stdc++.h>
using namespace std;

void classA(string s){
    cout<<"The IP address "<<s<<" belongs to class A"<<endl;

    int n=0;
    int i=0;
    while(n<1){
        if(s[i]=='.'){
            n++;
        }
        i++;
    }

    cout<<"Net id of given string is "<<s.substr(0,i-1)<<endl;
    cout<<"Host id of given string is "<<s.substr(i+1)<<endl;
    cout<<"Netword id of given string "<<s.substr(0,i)<<"0.0.0"<<endl;
}

void classB(string s){
    cout<<"The IP address "<<s<<" belongs to class B"<<endl;
    int n=0;
    int i=0;
    while(n<2){
        if(s[i]=='.'){
            n++;
        }
        i++;
    }
    cout<<"Net id of given string is "<<s.substr(0,i-1)<<endl;
    cout<<"Host id of given string is "<<s.substr(i+1)<<endl;
    cout<<"Netword id of given string "<<s.substr(0,i)<<"0.0"<<endl;
}

void classC(string s){
    cout<<"The IP address "<<s<<" belongs to class C"<<endl;
    int n=0;
    int i=0;
    while(n<3){
        if(s[i]=='.'){
            n++;
        }
        i++;
    }
    cout<<"Net id of given string is "<<s.substr(0,i-1)<<endl;
    cout<<"Host id of given string is "<<s.substr(i+1)<<endl;
    cout<<"Netword id of given string "<<s.substr(0,i)<<"0"<<endl;
}

void classD(string s){
    cout<<"The IP address "<<s<<" belongs to class D"<<endl;
    cout<<"The class D address used for multitasking and Boardcasting so they don't have Net Id and Host Id."<<endl;
}

void classE(string s){
    cout<<"The IP address "<<s<<" belongs to class E"<<endl;
    cout<<"The class E address used for multitasking and Boardcasting so they don't have Net Id and Host Id."<<endl;
}

void getinfoaboutstring(string str){
    string num1="";
    for(int i=0;i<3;i++){
        if(str[i]=='.'){
            break;
        }
        else{
            num1+=str[i];
        }
    }
    int num = stoi(num1);

    if(num>=0 && num<128){
        classA(str);
    }
    else if(num>=128 && num<192){
        classB(str);
    }
    else if(num>=192 && num< 224){
        classC(str);
    }
    else if(num>=224 && num<240){
        classD(str);
    }    
    else if(num>=240 && num<256){
        classE(str);
    }
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
        cout<<"Valid String"<<endl;
        getinfoaboutstring(str);
    }
    else{
        cout<<"Invalid String"<<endl;
    }

    return 0;
}