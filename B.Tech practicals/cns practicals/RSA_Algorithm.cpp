#include<iostream>
#include<math.h>
using namespace std;
// find gcd
int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {
   double p, q;
   cout<<"Enter the value of p and q: -";
   cin>>p>>q;
   double n=p*q;//calculate n
   double track;
   double phi= (p-1)*(q-1);//calculate phi
   double e;
   cout<<"Enter the key: -";
   cin>>e;
   while(e<phi) {
      track = gcd(e,phi);
      if(track==1)
         break;
      else
         e++;
   }
   double d1=1/e;
   double d=fmod(d1,phi);
   double message = 9;
   double c = pow(message,e); //encrypt the message
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"Original Message = "<<message<<endl;
   cout<<" "<<"p = "<<p<<endl;
   cout<<" "<<"q = "<<q<<endl;
   cout<<" "<<"n = pq = "<<n<<endl;
   cout<<" "<<"phi = "<<phi<<endl;
   cout<<" "<<"e = "<<e<<endl;
   cout<<" "<<"d = "<<d<<endl;
   cout<<" "<<"Encrypted message = "<<c<<endl;
   cout<<" "<<"Decrypted message = "<<m<<endl;
   return 0;
}