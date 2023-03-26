#include<iostream>
#include<math.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{

    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int x){
        node* n=new node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
       
        back->next=n;
        back=n;
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            cout<<"Queue is empty!!"<<endl;
            return true;
        }
        cout<<"Queue is not empty!"<<" ";
        return false;
    }
};

int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(34);
    q.enqueue(56);
    q.enqueue(73);
    q.enqueue(88);

    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
}