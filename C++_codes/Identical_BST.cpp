//For given root nodes of 2 binary serach trees, print if the BSTs are identical
// or not. Identical BSTs are structurally identical & have equal values
// for the nodes in the structure.
#include<iostream>

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


//isIdentical
bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    else if(root1 == NULL || root2 == NULL){
        return false;
    }
    bool cond1 = (root1->data == root2->data);
    bool cond2 = isIdentical(root1->left, root2->left);
    bool cond3 = isIdentical(root1->right, root2->right);

    if(cond1 && cond2 && cond3){
        return true;
    }
    return false;
}

int main() {
    Node* root1 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(8);
    root1->left->left = new Node(1);
    root1->left->right = new Node(4);
    root1->right->right = new Node(10);

    
    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(8);
    root2->left->left = new Node(1);
    root2->left->right = new Node(4);
    root2->right->right = new Node(12);

    if(isIdentical(root1, root2)){
        cout<<"Both BSTs are Identical!!"<<endl;
    }
    else{
        cout<<"The given BSTs are Different!!"<<endl;
    }

    return 0;  
}