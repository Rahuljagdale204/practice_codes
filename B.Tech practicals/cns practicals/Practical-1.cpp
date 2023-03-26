#include<bits/stdc++.h>
using namespace std;

string encryption(string text, int shift){
    char ch;
    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + shift;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            text[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + shift;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            text[i] = ch;
        }
    }
    return text;
}

string decryption(string text, int shift){
    char ch;
    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - shift;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            text[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - shift;
            if (ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            text[i] = ch;
        }
    }
    return text;
}
   

int main(){
    string text;
    getline(cin,text);
    int shift;
    cin>>shift;
    cout<<"Choose the option\n1. Encryption\n2.Decryption"<<endl;
    int choice;
    cin>>choice;

    if(choice==1){
        string cipher = encryption(text,shift);
        cout<<cipher<<endl;
    }
    else if(choice==2){
        string cipher = decryption(text,shift);
        cout<<cipher<<endl;
    }
    return 0;
}