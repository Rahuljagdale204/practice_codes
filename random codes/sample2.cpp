#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reversestring(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
    return s;
}

void solve(string s){
    int n = s.size();
    vector<string>vec;
    string str ="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            vec.push_back(str);
            str = "";
        }
        else{
            str+=s[i];
        }
    }
    vec.push_back(str);
    for(int i=0;i<vec.size();i++){
        vec[i] = reversestring(vec[i]);
    }
    string ans;
    for(auto x:vec){
        ans+=x+" ";
    }
    ans.pop_back();
    cout<<ans<<endl;
}

int main(){
    string s;
    getline(cin,s);
    solve(s);
    return 0;
}