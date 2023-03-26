#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
   string str=s;
   reverse(s.begin(),s.end());
   return (s==str);
}

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(ispalindrome(s)){
      cout<<s<<endl;
      return;
   }
   vector<int>idx;
   string str = s;
   reverse(str.begin(),str.end());
   for(int i=0;i<n;i++){
      if(str[i]!=s[i]){
         idx.push_back(i);
      }
   }
   reverse(idx.begin(),idx.end());
   for(auto x:idx){
      s.erase(x,1);
      if(ispalindrome(s)){
         break;
      }
   }
   cout<<s<<endl;
}

int main(){
   int t;cin>>t;
   while(t--){
      solve();
   }
   return 0;
}