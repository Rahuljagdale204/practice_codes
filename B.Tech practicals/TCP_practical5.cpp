#include<bits/stdc++.h>
using namespace std;
string Function2(string s)
{
    int k=1,no=0;
    for (int i = s.size()-1; 0<=i; i--)
    {
        no=(s[i]-'0')*k+no;
        k*=2;
    }
    return to_string(no);
}
string binaryTodecimal(string s)
{
    string ans,temp;
    while (!s.empty())
    {
        temp=s.substr(0,8);
        s=s.substr(8);
        ans=ans+Function2(temp);
        ans.push_back('.');
        temp.clear();
    }
    ans.pop_back();
    return ans;
}
string decimalTobinary(int n)
{
    string s;
    while (s.size()!=8)
    {
        if(n%2)
        {
            s.push_back('1');
        }
        else
        s.push_back('0');
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;    
}
string Function(string s)
{
    string temp,ans;
    s.push_back('.');
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='.')
        {
            ans=ans+decimalTobinary(stoi(temp));
            temp.clear();
        }
        else
        temp.push_back(s[i]);
    }
    return ans;
}
int main()
{
    string s,mass;
    cout<<"Enter the IP Address: -"<<endl;
    cin>>s;
    while (s[s.size()-1]!='/')
    {
        mass=s[s.size()-1]+mass;
        s.pop_back();
    }
    s.pop_back();
    string subnet;
    int n = stoi(mass);
    int n1=n,n2=32-n;
    mass.clear();
    while (n--)
    {
        mass.push_back('1');
    }
    while (mass.size()!=32)
    {
        mass.push_back('0');
    }
    s=Function(s);
    string net,net1;
    for (int i = 0; i < 32; i++)
    {
        net.push_back(((s[i]-'0')&(mass[i]-'0'))+'0');
    }
    net1=binaryTodecimal(net);
    cout<<"Initial block Address: - "<<net1<<endl;
    string s2;
    while (n1--)
    {
        s2.push_back('0');
    }
    while (s2.size()!=32)
    {
        s2.push_back('1');
    }
    string finalans;
    for (size_t i = 0; i < 32; i++)
    {
        finalans.push_back(s2[i]|net[i]);
    }
    finalans=binaryTodecimal(finalans);
    cout<<"Last block Address:  "<<finalans<<endl;
    cout<<"No. of Addresses: - "<<pow(2,n2)<<endl;
    return 0;
}