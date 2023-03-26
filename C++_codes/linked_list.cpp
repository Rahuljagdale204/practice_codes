#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next= head;
    head=n;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return; 
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }


    node* temp =head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;

}

// node* reverse(node* &head){

//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;

//     while(currptr!=NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;

//     }
// }

node* reverseRecursive(node* &head){ 
    if(head==NULL || head->next==NULL){
        return head;
    }


    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
}

int main() {
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head, 20);
    display(head);
    // cout<<search(head, 5)<<endl;
    // cout<<search(head, 6)<<endl;
    // deletion(head, 5);
    // display(head);
    // deleteAtHead(head);
    // display(head);

    // node* newhead=reverse(head);
    // display(headhead);

    insertAtTail(head, 20);
    node* newhead = reverseRecursive(head);
    display(newhead);


    return 0;
}