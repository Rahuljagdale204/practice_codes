#include<bits/stdc++.h>
using namespace std;

int powerlinear(int x,int p){
    if(p==0){
        return 1;
    }
    else{
        // return x*(powerlinear(x,p-1));
        if(p%2==0){
            return(powerlinear(x,p/2)*powerlinear(x,p/2)); 
        }
        else{
            return (powerlinear(x,p/2)*powerlinear(x,p/2)*x);
        }
    }
}

int main(){
    int x,p;
    cin>>x>>p;
    int answer = powerlinear(x,p);
    cout<<answer<<endl;

    return 0;
}