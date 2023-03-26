#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(14);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }

    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    for(auto element:v) {
        cout<<element<<endl;
    }

    v.pop_back();

    vector<int> v2 (4,47);
    for(auto element:v2) {
        cout<<element<<endl;
    }
    swap(v, v2);
    for(auto element:v){
        cout<<element<<endl;
    }
    cout<<endl;
    for(auto element:v2) {
        cout<<element<<endl;
    }
}