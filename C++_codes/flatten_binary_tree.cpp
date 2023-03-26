//Given a binary tree, flatten it into linked list inplace. After flatt-
//-ening, left of each node should point to NULL and right should contain
//next node in preorder sequence.
//(lt's not allowed to use ther data structure)
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void flatten(Node* root){
    if(root ==NULL || (root->left ==NULL && root->right == NULL)){
        return;
    }
    if(root->left !=NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right !=NULL){
            t= t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void inorderprint(Node* root){
    if(root == NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}


int32_t main() {
    Node *root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->right->right = new Node(6);
    // root->right->left = new Node(6);
    root->left->right = new Node(3);

    flatten(root);
    inorderprint(root);
    cout<<endl; 


    return 0;
}