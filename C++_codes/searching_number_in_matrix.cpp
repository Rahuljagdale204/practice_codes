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
    int x;
    cout<<"Enter the number for searching"<<endl;
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x) {
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if (flag){
        cout<<"Element is found\n";
    }
    else {
        cout<<"Element not found\n";
    }
    return 0;

}