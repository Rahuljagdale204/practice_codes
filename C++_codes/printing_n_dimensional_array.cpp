#include<iostream>

using namespace std;

int main() {
    int n, m;
    cout<<"Enter the value of rows and columns: - "<<endl;
    cin>>n>>m;
    cout<<"Enter the elements of matrix: -"<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

//printing matrix
    cout<<"Matrix is: - "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
    return 0;
}