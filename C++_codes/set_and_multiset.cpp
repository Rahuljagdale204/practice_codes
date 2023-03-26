//set and multiset
#include<iostream>
#include<set>
using namespace std;

int32_t main(){
    multiset<int>s;
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(8);
    for (auto i: s)
        cout<<i<<" ";
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(s.find(7));
    for (auto i: s)
        cout<<i<<" ";
    cout<<endl;
}