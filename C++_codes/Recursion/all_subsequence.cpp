#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    subsequence(arr,n);

    return 0;
}