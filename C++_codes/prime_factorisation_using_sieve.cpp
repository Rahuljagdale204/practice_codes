#include<iostream>

using namespace std;
void primenumber(int n){
    int spf[1000]={0};
    for(int i=2;i<=n;i++) {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){ 
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<endl;
        n= n/spf[n];
    }
}

int main() {
    int n;
    cout<<"Enter the number: -"<<endl;
    cin>>n;
    primenumber(n);
    return 0;
}