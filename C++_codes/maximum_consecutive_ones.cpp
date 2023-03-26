// Given an array A of 0's and 1's, we may change up to K values from
// 0 to 1.
// Return the length of the longest (contiguous) subarray that contains
// only 1's.
#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    // a[i...j]
    int zerocnt = 0, i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zerocnt++;
        }
        while (zerocnt > k)
        {
            if (a[i] == 0)
            {
                zerocnt--;
            }
            i++;
        }
        // zerocut <=k;
        ans = max(ans, j - i + 1);
    }
    cout << ans << endl;
    return 0;
}