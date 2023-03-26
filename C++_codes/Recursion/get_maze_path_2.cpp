#include<bits/stdc++.h>
using namespace std;

void mazepath(int sr,int sc,int fr,int fc, string ans){
    if(sr==fr & sc==fc){
        cout<<ans<<endl;
        return;
    }
    if(sr>fr or sc>fc){
        return;
    }

    mazepath(sr,sc+1,fr,fc,ans+"h");
    mazepath(sr+1,sc,fr,fc,ans+"v");

}

int main(){
    int fr,fc;
    cin>>fr>>fc;
    mazepath(1,1,fr,fc,"");
    return 0;
}