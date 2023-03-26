#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};



void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}

void insert(Node* &head,int val){
    Node* temp = new Node(val);
    Node* curr =head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
}
void nthpositioninsert(Node* &head,int pos,int d){
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    Node* insert = new Node(d);
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    insert->next = temp->next;
    temp->next = insert;
}

void deletion(Node* &head, int pos){
    //deleting head node
    if(pos==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting another node
        int i=0;
        Node* curr = head;
        Node* prev = NULL;
        while(i<pos-1){
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printlinkedlist(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(5);
    insertAtHead(node1,15);
    insertAtHead(node1, 10);

    insert(node1,22);
    nthpositioninsert(node1,3,34);
    
    nthpositioninsert(node1,6,12);
    printlinkedlist(node1);
    deletion(node1,3);
    printlinkedlist(node1);
    //head deletion
    deletion(node1,1);
    printlinkedlist(node1);
    return 0;
}