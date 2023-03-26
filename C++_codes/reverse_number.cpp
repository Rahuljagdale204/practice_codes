#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int reverse,last;
    while (n>0)
    {
        last = n%10;
        reverse = reverse*10 + last;
        n = n/10;
    }
    cout<<"The reverse number is "<<reverse<<endl;
    
    return 0;
}