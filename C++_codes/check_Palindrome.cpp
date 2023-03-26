#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the letters in word\n";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word\n";
    cin>>arr;

    bool check=1;

    for(int i=0;i<n;i++) {
        if(arr[i]!=arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if (check==true){
        cout<<"The given word is palindrome\n";
    }
    else{
        cout<<"The given word is not palindrome\n";
    }
    cout<<endl;
    return 0;
}