#include<bits/stdc++.h>
using namespace std;

void kpc(string digit,string output,int idx,vector<string>&answer,string mapping[]){
    if(idx>=digit.length()){
        answer.push_back(output);
        return;
    }
    int number = digit[idx]-'0';
    string value = mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        kpc(digit,output,idx+1,answer,mapping);
        output.pop_back();
    }
}


int main(){
    string digit;
    getline(cin,digit);
    vector<string>answer;
    string output;
    int idx=0;
    string mapping[10] = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    kpc(digit,output,idx,answer,mapping);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}