#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        this->data =val;
        this->left = NULL;
        this->right = NULL; 
    }

};

Node* Build(Node* root){
    // cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    // cout<<"Enter the data for inserting in left"<<endl;
    root->left = Build(root->left);

    // cout<<"Enter the data for isnerting in right"<<endl;
    root->right = Build(root->right);

    return root;
}


void reverselevelorder(Node* root){
    queue<Node*>q;
    if(root==NULL){
        return;
    }
    stack<int>st;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* temp = q.front();
            q.pop();
            st.push(temp->data);
            

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void levelordertraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
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
    Node* root = NULL;

    root=Build(root);
    //preorder traversal
    preorder(root);
    cout<<endl;
    //levelordertraveral
    levelordertraversal(root);
    cout<<endl;
    //reverselevelorder traversal
    reverselevelorder(root);

    return 0;
}