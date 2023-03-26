#include<bits/stdc++.h>
using namespace std;

void fun(string s,int x)
{
	x--;
	string temp="";
	int ct=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='.') ct++;
		if(ct==3) break;
		temp=temp+s[i];
	}
	int i=0;
	while(true)
	{		
		cout<<s<<"."<<i<<" - "<<s<<"."<<i+x<<endl;
		i+=x+1;
		if(i>=255) break;
	}
	
	
}
int main()
{
	string s;
	cout<<"Enter the ip Address of class C: "<<endl;
	cin>>s;
	int n;
	cout<<"entre numbber of subnets you want: "<<endl;
	cin>>n;
	
	int m = s.size();
	for(int i=m-1;i>=0;i--){
		if(s[i]=='.'){
			s.erase(s.begin()+i);
			break;
		}
		else{
			s.erase(s.begin()+i);
		}
	}

	int num=0;
	for(int i=0; i<s.size(); i++) {
		if(s[i]!='.')
		{int x=s[i]-'0'; num=num*10+x;}
		else break;
	}
	long long int x;
	if(num<=127) x=(256/n);
	else if(num<=191) x=(pow(2,16)/n);
	else x=(pow(2,24)/n);
	fun(s,x);
	
}
