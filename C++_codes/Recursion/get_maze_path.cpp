#include<bits/stdc++.h>
using namespace std;

vector<string>getmazepath(int sr,int sc,int dr,int dc){
    if(sr==dr &sc==dc){
        vector<string> answer;
        answer.push_back("");
        return answer;
    }
    vector<string>hpaths;
    vector<string>vpaths;
    if(sc<dc){
        hpaths=(getmazepath(sr,sc+1,dr,dc));
    }
    if(sr<dr){
        vpaths=getmazepath(sr+1,sc,dr,dc);
    }

    vector<string>paths;
    for(auto path:hpaths){
        paths.push_back("h"+path);
    }
    for(auto path:vpaths){
        paths.push_back("v"+path);
    }
    return paths;
}

int main(){
    int dr,dc;
    cin>>dr>>dc;
    vector<string>output;
    output=getmazepath(1,1,dr,dc);
    for(auto i:output){
        cout<<i<<endl;
    }
    return 0;
}
