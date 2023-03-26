#include<bits/stdc++.h>
using namespace std;

int allsubsqu(string str,string arr[]){
    if(str.length()==0){
        arr[0]="";
        return 1;
    }
    int smalloutsize= allsubsqu(str.substr(1),arr);
    for(int i=0;i<smalloutsize;i++){
        arr[i+smalloutsize]=str[0]+arr[i];
        
    }
    return 2*smalloutsize;

}

int main(){
    string str;
    getline(cin,str);
    string arr[1000];
    int outsize = allsubsqu(str,arr);
    for(int i=0;i<outsize;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
