#include<iostream>
using namespace std;

int main() {
    char arr[100];
    int i;
    cout<<"Enter the character\n";
    cin>>arr;
    cout<< arr<<endl;
    while(arr[i]!='\0'){
        cout << arr[i]<<endl;
        i++;
    }

    return 0;
}