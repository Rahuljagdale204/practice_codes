#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    int m;
    cin>>m;
    char letters[m];
    for(int i=0;i<m;i++){
        cin>>letters[i];
    }
    int score[26];
    for(int i=0;i<26;i++){
        cin>>score[i];
    }
    
    int farr[26];
    for(char ch:letters){
        farr[ch-'a']++;
    }
    
    return 0;
}