//check for BST
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }
    bool leftvalid = isBST(root->left , min, root);
    bool rightvalid = isBST(root->right, root, max);
    return leftvalid and rightvalid;

}

int main() {
    Node* root= new Node(2);
    root->left = new Node(1);
    root->right = new Node(4);

    if(isBST(root, NULL, NULL)==1){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }
    return 0;
}