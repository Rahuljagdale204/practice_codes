// hari is a civil enginner
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, c = 1;
    cin>>n;
    for (i = 1; i <= (2 * n) - 1; i++)
    {
        for (j = 1; j <= (2 * n) - 1; j++)
        {
            if (i == j || i + j == 2 * n)
                cout<<c;
            else
                cout<<" ";
        }
        if (i < n)
            c++;
        else
            c--;
        cout<<endl;
    }
    return 0;
}