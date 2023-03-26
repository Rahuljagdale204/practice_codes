#include<iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    
    cout<< "Enter the value of n1, n2 and n3: - \n";
    cin>> n1 >> n2 >> n3;
    int arr[n1][n2];
    int arr2[n2][n3];
    cout<< "Enter the elements of 1st matrix: - \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++)
           cin >> arr[i][j];
    }
    cout << "Enter the elements of 2nd Matrix: - \n";
    for(int i=0; i <n2;i++) {
        for(int j=0;j<n3;j++)
            cin >> arr2[i][j];
    }

    int ans[n1][n3];
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n3;j++)
           ans[i][j] =0;
    }

    //multiplication
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n3;j++) {
            for(int k=0;k<n2;k++)
                ans[i][j] += arr[i][k]*arr2[k][j];
        }
    }

    //print
    cout << "The output Matrix: -\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++) 
            cout << ans[i][j] << " ";
        cout<<endl;
    }


    return 0;
}