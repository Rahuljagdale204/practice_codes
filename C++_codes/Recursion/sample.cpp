#include<bits/stdc++.h>
using namespace std;

string LongestWord(string sen) {
  
  // code goes here  
  vector<string>v;
  string str = "";
  for(int i=0;i<sen.size();i++){
    if((sen[i]>='a'&&sen[i]<='z') || (sen[i]>='A'&&sen[i]<='Z')){
      str+=sen[i];
    }
    else{
      v.push_back(str);
      str = "";
    }
  }
  v.push_back(str);
  sen.clear();
  int len=0;
  for(int i=0;i<v.size();i++){
    if(v[i].size()>len){
        len = v[i].size();
        sen = v[i];
    }
  }
  

  return sen;

}

int main(){
    string sen;
    getline(cin,sen);

    string ans = LongestWord(sen);
    cout<<ans<<endl;
    return 0;
}