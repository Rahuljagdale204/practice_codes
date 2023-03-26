#include<bits/stdc++.h>
using namespace std;
static string codes[10] = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void kpc(string digits,string ans){
    if(digits.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = digits[0];
    string rem = digits.substr(1);
    int num = ch-'0';
    string value = codes[num];
    for(int i=0;i<value.length();i++){
        char ch2 = value[i];
        kpc(rem,ans+ch2);
    }

}

int main(){
    string digits;
    getline(cin, digits);
    kpc(digits,"");
    return 0;
}