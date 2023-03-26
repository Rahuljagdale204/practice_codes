//Maximum possible sum of a path in the binary tree, starting and 
//ending at any node.
//stratergy
//for each node, compute:
//1.Node val
//2. Max path through left child+node val
//3.max path throught right child + node val
//4. max path through left child + max path through right child + node val
#include<iostream>
#include<vector>
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

int maxpathsumutil(Node *root, int &ans){
    if(root ==NULL){
        return 0;
    }

    int left = maxpathsumutil(root->left, ans);
    int right = maxpathsumutil(root->right, ans);

    int nodemax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));

    ans = max(ans, nodemax);

    int signlepathsum = max(root->data, max(root->data + left , root->data + right));
    return signlepathsum;
}

int maxPathSum(Node *root){
    int ans =   INT_MIN;
    maxpathsumutil(root, ans);
    return ans;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    //test
    cout<<maxPathSum(root)<<" ";
    cout<<endl;
    return 0;

    
}