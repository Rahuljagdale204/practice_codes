#include <bits/stdc++.h>
using namespace std;
 
int subsetSum(int arr[], int n, int sum)
{

    int tab[n + 1][sum + 1];

    tab[0][0] = 1;
    for (int i = 1; i <= sum; i++)
        tab[0][i] = 0;
     
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (arr[i - 1] > j)
                tab[i][j] = tab[i - 1][j];
            else
            {
                tab[i][j] = tab[i - 1][j] + tab[i - 1][j - arr[i - 1]];
            }
        }
    }
 
 
    return tab[n][sum];
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
 
    cout << (subsetSum(arr, n, sum));
    return 0;
}