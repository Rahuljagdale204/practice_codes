//return the size of largest BST in given binary tree.
//for each node store the following information:
//min in subtree
//max in subtree
//subtree size
//size of largest BST
//isBST
//Recursively, traverse in a bottom-up manner & find the size of largest
//BST
#include<iostream>
#include<climits>
using namespace std;


struct Node{
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info {
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info largestBST(Node* root){

    if(root == NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if(root->left==NULL && root->right == NULL){
        return{1, root->data, root->data, 1, true};
    }
 
    Info leftinfo = largestBST(root->left);
    Info rightinfo = largestBST(root->right);

    Info curr;
    curr.size = (1+ leftinfo.size + rightinfo.size);

    if(leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data){
        curr.min = min(leftinfo.min , min(rightinfo.min, root->data));
        curr.max = max(rightinfo.max, max(leftinfo.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
        
    }
    curr.ans= max(leftinfo.ans, rightinfo.ans);
    curr.isBST = false;
    return curr;
}

int main(){
    Node* root= new Node(15);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(5);

    cout<<"Largest BST in Binary tree :"<<largestBST(root).ans<<endl;

    return 0;
}