#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        size=0;
    }

    void push(int val){
        q2.push(val);
        size++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){
        q1.pop();
        size--;
    }

    int top(){
        return q1.front();
    }

    int sizestack(){
        return size;
    }
};

int main(){
    cout<<"stack using Queue"<<endl;

    Stack st;

    st.push(14);
    st.push(7);
    st.push(1);
    st.push(23);
    st.push(67);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    return 0;
}