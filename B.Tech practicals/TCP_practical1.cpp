#include<bits/stdc++.h>
using namespace std;

string conversion(string s){
    int number;
    number = stoi(s, 0, 2);
    return to_string(number);
}


string binarytodottedconversion(string str){
    string ans1 = str.substr(0,8);
    ans1 = conversion(ans1);
    string ans2 = str.substr(9,8);
    ans2 = conversion(ans2);
    string ans3 = str.substr(18,8);
    ans3 = conversion(ans3);
    string ans4 = str.substr(27,8);
    ans4 = conversion(ans4);

    str.clear();
    str+= ans1+"."+ans2+"."+ans3+"."+ans4;
    return str;
}

string conversion2(string ans){
    int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];
    binaryNum = stoi(ans);
    ans.clear();
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;

    for(i=i; i>=0; i--)
        ans+=hexDecNum[i];
    
    return ans;
}

string hexadecimalconversion(string str){
    string ans1 = str.substr(0,8);
    ans1 = conversion2(ans1);
    string ans2 = str.substr(9,8);
    ans2 = conversion2(ans2);
    string ans3 = str.substr(18,8);
    ans3 = conversion2(ans3);
    string ans4 = str.substr(27,8);
    ans4 = conversion2(ans4);

    str.clear();
    str+= ans1+"."+ans2+"."+ans3+"."+ans4;
    return str;
}

int main(){
    string str;
    getline(cin,str);

    if(str.size()==35){
        string ans = binarytodottedconversion(str);
        cout<<"Dottered Repersentation of Data: - "<<endl;
        cout<<ans<<endl;
        cout<<"Hexadecimal Repersentation of Data: - "<<endl;
        string ans2 = hexadecimalconversion(str);
        cout<<ans2<<endl;
    }
    else{
        cout<<"Invalid string"<<endl;
    }
    return 0;
}