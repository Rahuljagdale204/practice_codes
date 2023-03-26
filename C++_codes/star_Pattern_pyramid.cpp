#include<iostream>
using namespace  std;

int main() {
    int n;
    cout<<"Enter the row number:"<<endl;
    cin>>n;

    int i, j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++) {
            cout<<" *";
        }
        cout<<endl;
    }
     for(i=n;i>=1;i--) {
        for(j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++) {
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}