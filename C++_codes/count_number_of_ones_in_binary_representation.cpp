#include<iostream>
using namespace std;

int numofones(int n) {
   int count =0;
   while (n) {
       n = n & (n-1);
       count++;
   }
   return count;

}

int main() {

cout<<numofones(8)<<endl;
    return 0;
}