#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlen(Node* head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }                                                                                                
    return len;
}

void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head=temp;
}

void insert(Node* &head,int d){
    Node* temp = new Node(d);
    Node* curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
    temp->prev = curr; 

}

void insertatposition(Node* &head,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }

    Node* temp = head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }

    Node* newnode = new Node(d);
    if(temp->next ==NULL){
        temp->next = newnode;
        newnode->prev = temp;
        return;
    }

    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

int main(){
    Node* head = new Node(4);
    print(head);
    insertathead(head,10);
    print(head);
    insert(head,23);
    print(head);
    insert(head,45);
    print(head);
    insertatposition(head,5,24);
    print(head);
    return 0;
}