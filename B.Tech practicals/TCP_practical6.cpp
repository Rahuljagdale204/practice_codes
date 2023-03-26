#include <bits/stdc++.h>
using namespace std;
string binaryAddition(string s1, string s2)
{
    int carry = 0;
    string ans;
    for (int i = 31; 0 <= i; i--)
    {
        if (carry)
        {
            if (s1[i] == '1' && s2[i] == '1')
                ans.push_back('1');
            else if (s1[i] == '0' && s2[i] == '0')
            {
                ans.push_back('1');
                carry = 0;
            }
            else
            {
                ans.push_back('0');
            }
        }
        else
        {
            if (s1[i] == '1' && s2[i] == '1')
            {
                ans.push_back('0');
                carry = 1;
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                ans.push_back('0');
            }
            else
            {
                ans.push_back('1');
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
string Function2(string s)
{
    int k = 1, no = 0;
    for (int i = s.size() - 1; 0 <= i; i--)
    {
        no = (s[i] - '0') * k + no;
        k *= 2;
    }
    return to_string(no);
}
string binaryTodecimal(string s)
{
    string ans, temp;
    while (!s.empty())
    {
        temp = s.substr(0, 8);
        s = s.substr(8);
        ans = ans + Function2(temp);
        ans.push_back('.');
        temp.clear();
    }
    ans.pop_back();
    return ans;
}
string decimalTobinary(int n)
{
    string s;
    while (s.size() != 8)
    {
        if (n % 2)
        {
            s.push_back('1');
        }
        else
            s.push_back('0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
string Function(string s)
{
    string temp, ans;
    s.push_back('.');
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            ans = ans + decimalTobinary(stoi(temp));
            temp.clear();
        }
        else
            temp.push_back(s[i]);
    }
    return ans;
}
int main()
{
    string s, mass;
    cout << "Enter ip Address: -\n";
    cin >> s;
    int no;
    cout << "Enter the no of subnets\n";
    cin >> no;
    while (s[s.size() - 1] != '/')
    {
        mass = s[s.size() - 1] + mass;
        s.pop_back();
    }
    s.pop_back();
    string subnet;
    int n = stoi(mass);
    int n1 = n, n2 = 32 - (n + log2(float(no)));
    mass.clear();
    n1 += log2(no);
    while (n1--)
    {
        mass.push_back('1');
    }
    while (mass.size() != 32)
    {
        mass.push_back('0');
    }
    cout<<"subnet mask is : -"<<binaryTodecimal(mass)<<endl;
    int x = pow(2, n2)-1;
    cout<<"Total no of hosts per subnet are "<<x<<endl;
    s = Function(s);
    for (int i = 0; i < n; i++)
    {
        subnet.push_back(s[i]);
    }
    while (subnet.size() != 32)
    {
        subnet.push_back('0');
    }    
    string toadd=decimalTobinary(x);
    while (toadd.size() != 32)
    {
        toadd='0'+toadd;
    }
    vector<string> vec;
    vec.push_back(subnet);
    vec.push_back(binaryAddition(subnet,toadd));
    string one="00000000000000000000000000000001";
    x=no-1;
    while (x--)
    {
        vec.push_back(binaryAddition(vec[vec.size()-1],one));
        vec.push_back(binaryAddition(vec[vec.size()-1],toadd));
    }
    for (int i = 0; i < vec.size(); i+=2)
    {
        cout<<"Initial address is "<<binaryTodecimal(vec[i])<<"\tFinal address is "<<binaryTodecimal(vec[i+1])<<endl;
    }
    return 0;
}