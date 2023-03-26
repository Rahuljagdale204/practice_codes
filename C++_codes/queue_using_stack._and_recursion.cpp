
#include"bits/stdc++.h"
#include<stack>
#include<queue>
using namespace std;

class queuebuild{
    stack<int> s1;

    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty!"<<" ";
            return -1;
        }

        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }

        int item= pop();
        s1.push(x);
        return item;
    }
    

        bool empty(){
            if(s1.empty()){
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
    
    


    return 0;
}