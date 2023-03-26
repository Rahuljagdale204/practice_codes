#include<iostream>
#include"bits/stdc++.h"
#include<stack>
#include<queue>
#include<math.h>
using namespace std;

class queuebuild{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty!"<<" ";
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            }
            int topval=s2.top();
            s2.pop();      
            return topval;
    }
    

        bool empty(){
            if(s1.empty() and s2.empty()){
                cout<<"Queue is Empty!"<<" ";
                return true;
            }
            cout<<"Queue is not Empty!"<<" ";
            return false;
        }
};



int32_t main() {

    queuebuild res;
    res.push(38);
    res.push(20);
    res.push(11);
    res.push(89);
    res.push(5);

    cout<<res.pop()<<endl;
    res.push(19);
    cout<<res.pop()<<endl;
    cout<<res.pop()<<endl;
    cout<<res.pop()<<endl;
    cout<<res.pop()<<endl;
    cout<<res.pop()<<endl;
    cout<<res.empty()<<endl;
    


    return 0;
}