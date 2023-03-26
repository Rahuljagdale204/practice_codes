#include<iostream>
#include<unordered_set>
using namespace std;

int32_t main(){
    unordered_set<int> set1;
    set1.insert(3);
    set1.insert(26);
    set1.insert(10);
    set1.insert(5);
    set1.insert(9);
    for (auto i:set1){
        cout<<i<<" ";
    }
    cout<<endl;
    set1.erase(3);
    set1.erase(set1.begin());
    for (auto i: set1){
        cout<<i<<" ";
    }



    return 0;
}