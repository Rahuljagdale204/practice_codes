#include<iostream>
using namespace std;

int main() {
    int a = 14052002;
    int *aptr;
    aptr = &a;

    cout<< &a<<endl;
    cout << aptr << endl;
    cout<< *aptr << endl;
    *aptr = 20042001;
    cout<< a<<endl;
    return 0;
}