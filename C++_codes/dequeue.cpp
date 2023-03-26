#include<iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> dq;
    dq.push_back(2);
    dq.push_back(4);
    dq.push_front(1);
    dq.push_front(5);

    for(auto i: dq)
       cout<<i<<" ";
    cout<<"\n";
    dq.pop_back();
    dq.pop_front();
    for(auto i: dq)
       cout<<i<<" ";
    cout<<"\n";
}