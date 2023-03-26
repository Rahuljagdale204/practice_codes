#include<iostream>
using namespace std;

// int catalan(int n){
//     if(n<=1){
//         return 1;
//     }

//     int res = 0;
//     for(int i=0;i<n;i++){
//         res += catalan(i) * catalan(n-i-1);
//     }
//     return res;
// }


// int main(){
//     for(int i = 0;i<11;i++){
//         cout<<catalan(i)<<endl;
//     }
//     cout<<endl;

//     return 0;
// }

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

vector<Node*>constructTrees(int start, int end){
    vector<Node*>trees;

    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftsubtree = constructTrees(start, i-1);
        vector<Node*> rightsubtree = constructTrees(i+1, end);

        for(int j=0;j< leftsubtree.size();j++){
            Node* left = leftsubtree[j];
            for(int k=0;k<rightsubtree.size();k++){
                Node* right = rightsubtree[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main() {
    vector<Node*>totaltrees = constructTrees(1,3);
    for(int i=0;i<totaltrees.size(); i++){
        cout<<(i+1)<<" : ";
        preorder(totaltrees[i]);
        cout<<endl;
    }
    return 0;
}