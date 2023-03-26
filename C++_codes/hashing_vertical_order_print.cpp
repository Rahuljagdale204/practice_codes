#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node* newNode(int val){
        Node* node = new Node;
        node->data = val;
        node->left = node->right = NULL;
        return node;
    }
};

void getverticalorder(Node* root, int hdis, map<int, vector < int> &m){
    if(root ==NULL){
        return;
    }

    m[hdis].push_back(root->data);
    getverticalorder(root->left, hdis-1, m);
    getverticalorder(root->right, hdis+1, m);
}

int main(){
    Node *root= newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);

    map<int, vector <int> > m;
    int hdis = 0;

    getverticalorder(root, hdis, m);

    map<int, vector<int> >::iterator it;

    for(it = m.begin(); it!=m.end();it++){
        for(int i=0;i<(it->second()).size();i++){
            cout<<(it->second()[i])<<" ";
        }    }


}