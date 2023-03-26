#include<bits/stdc++.h>
using namespace std;

void mazepathjump(int sr,int sc,int fr,int fc,string ans){
    if(sr==fr & sc==fc){
        cout<<ans<<endl;
        return;
    }
    if(sr>fr or sc>fc){
        return;
    }

    for(int ms=1;ms<=fc-sc;ms++){
        mazepathjump(sr,sc+ms,fr,fc,ans+"h"+to_string(ms));
    }
    for(int ms=1;ms<=fr-sr;ms++){
        mazepathjump(sr+ms,sc,fr,fc,ans+"v"+to_string(ms));
    }
    for(int ms=1;ms<=fr-sr & ms<=fc-sc;ms++){
        mazepathjump(sr+ms,sc+ms,fr,fc,ans+"d"+to_string(ms));
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    mazepathjump(1,1,n,m,"");
    return 0;
}