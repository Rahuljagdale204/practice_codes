//Append last k nodes to start of linked list.
#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head=n;
}

void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* n=new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head ){
    node* todelete=head;
    head = head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count=1;

    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev = temp->prev; 
    }

    delete temp;
}

int length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newhead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next = head;
    return newhead;
}

int main() {

    // node* head = NULL;
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);
    // display(head);
    // insertAtHead(head, 1);
    // display(head);

    // deletion(head, 4);
    // display(head);
    // cout<<"Delete the head node"<<endl;
    // deletion(head, 1);
    // display(head);

    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        insertAtTail(head, arr[i]);
    }

    display(head);

    cout<<"The append list"<<endl;
    node* newhead = kappend(head, 3);
    display(newhead);


    return 0;

}