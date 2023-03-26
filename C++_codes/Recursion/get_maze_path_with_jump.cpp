#include<bits/stdc++.h>
using namespace std;

vector<string>getmazepathjump(int sr,int sc,int dr,int dc){
    if(sc==dc & sr==dr){
        vector<string>answer;
        answer.push_back("");
        return answer;
    }
    vector<string>paths;
    // for horizontal
    for(int ms=1;ms<=dc-sc;ms++){
        vector<string>hpaths=getmazepathjump(sr,sc+ms,dr,dc);
        for(auto hpath:hpaths){
            paths.push_back("h"+to_string(ms)+hpath);
        }
    }
    // for vectical
    for(int ms=1;ms<=dr-sr;ms++){
        vector<string>vpaths = getmazepathjump(sr+ms,sc,dr,dc);
        for(auto vpath:vpaths){
            paths.push_back("v"+to_string(ms)+vpath);
        }
    }
    //for diagonally
    for(int ms=1;ms<=dr-sr & ms<=dc-sc;ms++){
        vector<string>dpaths = getmazepathjump(sr+ms,sc+ms,dr,dc);
        for(auto dpath:dpaths){
            paths.push_back("d"+to_string(ms)+dpath);
        }
    }
    return paths;
}

int main(){
    int dr,dc;
    cin>>dr>>dc;
    vector<string>answer = getmazepathjump(1,1,dr,dc);
    for(auto i:answer){
        cout<<i<<endl;
    }

    return 0;
}