#include<bits/stdc++.h>
using namespace std;

void towerofhonai(int n,int t1,int t2,int t3){
    if(n==0){
        return;
    }
    towerofhonai(n-1,t1,t3,t2);
    cout<<n<<" - "<<"["<<t1<<" -> "<<t2<<"]"<<endl;
    towerofhonai(n-1,t3,t2,t1); 
}

int main(){
    int n,t1,t2,t3;
    cin>>n;
    cin>>t1>>t2>>t3;
    towerofhonai(n,t1,t2,t3);//t1-start;t2-destination;t3-helper
    return 0;
}