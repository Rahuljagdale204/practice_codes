#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the row of square matrix: -\n";
    cin >> n;
    int a[n][n];
    cout << "Enter the elements of matrix: -\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0 ; i< n; i++) {
        for (int j=i ;j <n; j++) {
            //swap
            int temp = a[i][j];
            a[i][j] =a[j][i];
            a[j][i] = temp;
        }
    }
    //print 
    cout << "The Transpose matrix: -\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}