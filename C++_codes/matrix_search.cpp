#include<iostream>

using namespace std;

int main() {
    int n, m;
    cout<< "Enter the number of row and column: -\n";
    cin >> n>>m;
    int target;
    cout<< "Enter the target number: -\n";
    cin>>target;
    int arr[n][m];
    cout<<"Enter the elements of matrix: -\n";
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    int r=0, c=m-1;
    bool found = false;
    while(r < n and c >=0){
        if (arr[r][c]==target){
            found=true;
        }
        if(arr[r][c]>target)
            c--;
        else 
            r++;
    }
    if(found){
        cout<<"The number is present in Matrix.\n";
    }
    else {
        cout<<"The number does not exist in Matrix.\n";
    }
    return 0;
}