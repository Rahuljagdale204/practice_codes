#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=2; i<n; i++) {
        if(n%i == 0) {
            cout<<"Non Prime Number"<<endl;
            break;
        }
        
        cout<<"It is a Prime Number"<<endl;
        return 0;
    }
}