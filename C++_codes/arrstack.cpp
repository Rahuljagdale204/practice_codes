#include<iostream>
using namespace std;

#define n 100

class stack{
    
    int* arr;
    int top;

    public:
    stack(){
        arr=new int [n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack is overflow!!!"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop() {
        if(top==-1){
            cout<<"No element to pop!"<<endl;
            return;
        }

        top--;
    }

    int topmost(){

                if(top==-1){
            cout<<"No element to pop!"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main() {

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(14);
    st.push(20);
    cout<<st.topmost()<<endl;
    st.pop();
    st.pop();
    cout<<st.topmost()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.topmost()<<endl;
}