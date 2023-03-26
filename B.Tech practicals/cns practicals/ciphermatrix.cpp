#include<bits/stdc++.h>
using namespace std;

string originalText(string cipher_text, string key)
{
    string orig_text;
 
    for (int i = 0 ; i < cipher_text.size(); i++)
    {
        // converting in range 0-25
        char x = (cipher_text[i] - key[i] + 26) %26;
 
        // convert into alphabets(ASCII)
        x += 'A';
        orig_text.push_back(x);
    }
    return orig_text;
}

int main(){
    
    cout<<originalText("HQJUJSZVHBQHYPS","deceptive");
    return 0;
}