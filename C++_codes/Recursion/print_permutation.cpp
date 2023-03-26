#include<bits/stdc++.h>
using namespace std;

void permutation(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string lpart = str.substr(0,i);
        string rpart = str.substr(i+1);
        string rem = lpart+rpart;
        permutation(rem,ans+ch);
    }
    
}

int main(){
    string n;
    getline(cin,n);
    permutation(n,"");
    return 0;
}