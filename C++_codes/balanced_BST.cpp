#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

Node* arraytoBST(int arr[], int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    Node* root= new Node(arr[mid]);

    root->left = arraytoBST(arr, start, mid-1);
    root->right = arraytoBST(arr, mid+1, end);
    return root;

}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}

int main(){
    int arr[] = {10,20,30,40,50};
    Node* root = arraytoBST(arr, 0,4);
    cout<<"The Sorted array convert into the BST"<<endl;
    preorder(root);
    cout<<endl;
    return 0;

}