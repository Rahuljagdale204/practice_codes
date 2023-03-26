#include<iostream>
using namespace std;

int main() {

     #ifndef ONLINE_JUDGLE
         freopen("input.txt", "r",stdin);
         freopen("output.txt","w", stdout);
    #endif
    
    int a,b ,c;
    cin>>a>>b>>c;

    if(a>b) {
        if(a>c){
            cout<<"A is largest!\n"<<endl;
        }
        else {
            cout<<"C is largest!!\n"<<endl;
        }
    }
    else {
        if (b>c) {
           cout<<"B is largest!!\n"<<endl;
        }
        else {
            cout<<"C is largest!!\n"<<endl;
        }
    }
    return 0;
    
}