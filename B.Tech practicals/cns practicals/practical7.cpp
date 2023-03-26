#include<bits/stdc++.h>

using namespace std;

int gcd(int n1,int n2){                      
    if(n2==0){
        return n1;
    }
    return gcd(n2,n1%n2);
}

int lcm(int n1,int n2)
{                                              
  int gc,lc;
  gc=gcd(n1,n2);
  lc=n1*n2/gc;
  return lc;
}
int main()
{
  int x,cd,i,p,r,n;
  int cnt,flag;                                  
  vector<int> pr,rem;
  cin>>n;                                     
  for(i=0;i<n;i++) 
  { cin>>p>>r; 
    pr.push_back(p); 
    rem.push_back(r); 
  }
  x=rem[0];                                    
  cd= pr[0];                               
  for(i=1;i<n;i++)
  {   cnt=0;
      flag=0;
      while(cnt<100000)                      
      {
          if(x%pr[i]==rem[i])                
           {  flag=1;
              break;
           }
          x=x+cd;
      }
      if(flag==0)                           
       {
           cout<<"solution not exists.";            
           return 0;
       }
      cd=lcm(pr[i],cd);                      
  }
  cout<<"The value of X is ";
  cout<<x<<endl;
  return 0;
}