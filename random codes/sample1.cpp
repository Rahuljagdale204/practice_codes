#include<iostream>
#include<set>
#include<map>
#include<cmath>
using namespace std;


int main() {
    int N, k;
    cin>>N;
    cin>>k;
    int sum;
    int p=0, q=0;
    map<int, int> mp;
    for(int i=0;i<N;i++) {
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    for(auto i:mp) {
        if(i.second!=1){
            p++;
        }
        else{
            q++;
        }
        
    }
    if(q%k!=0){
        sum = (q/k)+1;
    }
    else{
        sum = q/k;
    }

    cout<<p+sum<<endl;

    return 0;
}