#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data =val;
        left = NULL;
        right = NULL;
    }
};

Node* searchBST(Node *root, int key){

    if (root ==NULL){
        return NULL;
    }
    if (root->data == key){
        return root;
    }

    else if(root->data > key){
        return searchBST(root->left, key);
    }
    return searchBST(root->right , key);
}

Node* inordersucc(Node* root){
    Node* curr = root;
    if(curr && curr->left !=NULL){
        curr= curr->left;
    }
    return curr;
}

//delete node
Node* deleteBST(Node *root, int key){
    
    if(key < root->data){
        root->left = deleteBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}



void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    Node *root= new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(7);

    if(searchBST(root, 3) ==NULL){
        cout<<"Key doesn't exist!!"<<endl;
    }
    else{
        cout<<"key Exist."<<endl;
    }
    cout<<endl;
    cout<<"Delete Node"<<endl;

    //delete node
    inorder(root);
    cout<<endl;
    cout<<endl;
    root= deleteBST(root,3);
    inorder(root);
    cout<<endl;
    if(searchBST(root, 3) ==NULL){
        cout<<"Key doesn't exist!!"<<endl;
    }
    else{
        cout<<"key Exist."<<endl;
    }
    
    return 0;
}

