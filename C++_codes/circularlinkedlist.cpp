#include<iostream>
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

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    node* n=new node(val);
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
}

void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    node* todelete=head;
    temp->next = head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    
    node* temp=head;
    int count=1;

    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next = temp->next->next;

    delete todelete;

}

void display(node* &head){
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    
}

int main() {

    node* head =NULL;
    insertAtTail(head,2);
    insertAtTail(head, 4);
    insertAtTail(head, 7);
    insertAtTail(head, 10);
    insertAtTail(head, 15);
    insertAtTail(head, 18);
    display(head);
    insertAtHead(head, 20);
    display(head);

    cout<<"Delete of nodes form cirular linkedlist"<<endl;

    deletion(head, 4);
    display(head);
    cout<<"Delete the 1st node"<<endl;
    deletion(head,1);
    display(head);
    return 0;
}