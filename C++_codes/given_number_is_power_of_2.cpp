#include<iostream>

using namespace std;

int ispower2(int n) {
   if(n && !(n & n-1)==1){
    cout<<"Given number is power of 2."<<endl;
   }
   else {
       cout<<"Given number is not power of 2."<<endl;
   }
   return 0;
}

int main() {
    ispower2(18);
    return 0;
}