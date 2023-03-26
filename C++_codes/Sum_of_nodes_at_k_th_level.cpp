//Find the sum of nodes at k_th level.

#include"bits/stdc++.h"
#include<queue>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


int sumAtK(node* root, int k){

    if(root ==NULL){
        return -1;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level =0;
    int sum = 0;
    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        if(curr !=NULL){
            if(level == k) {
                sum+=curr->data;
            }

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}


int32_t main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    //sum at k
    cout<<"sum At Kth Level"<<endl;
    cout<<sumAtK(root, 1);

    return 0;
}