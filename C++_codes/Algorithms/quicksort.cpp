#include<bits/stdc++.h>
using namespace std;
 
// find if given string is K-Palindrome or not
int isKPalRec(string str1, string str2, int m, int n)
{
    // If first string is empty, the only option is to
    // remove all characters of second string
    if (m == 0) return n;
 
    // If second string is empty, the only option is to
    // remove all characters of first string
    if (n == 0) return m;
 
    // If last characters of two strings are same, ignore
    // last characters and get count for remaining strings.
    if (str1[m-1] == str2[n-1])
        return isKPalRec(str1, str2, m-1, n-1);
 
    // If last characters are not same,
    // 1. Remove last char from str1 and recur for m-1 and n
    // 2. Remove last char from str2 and recur for m and n-1
    // Take minimum of above two operations
    return 1 + min(isKPalRec(str1, str2, m-1, n), // Remove from str1
                   isKPalRec(str1, str2, m, n-1)); // Remove from str2
}
 
// Returns true if str is k palindrome.
bool isKPal(string str, int k)
{
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    int len = str.length();
    bool ans = (isKPalRec(str, revStr, len, len) <= k*2);
    cout<<revStr<<endl;
    return ans;
}
 
// Driver program
int main()
{
    string str = "acdcb";
    int k = 2;
    isKPal(str, k)? cout << "Yes" : cout << "No";
    return 0;
}