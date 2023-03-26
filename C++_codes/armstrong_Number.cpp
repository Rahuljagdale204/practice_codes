#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    int sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int original=n;
    while (n>0)
    {
        int last = n%10;
        sum +=pow(last, 3);
        n = n/10;
    }
    if(sum==original){
        cout<<original<<" is an Armstrong Number."<<endl;
    }
    else {
        cout<<original<<" is not an Armstrong Number."<<endl;
    }
    
    return 0;
}