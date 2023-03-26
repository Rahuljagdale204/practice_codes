#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcheight(node* root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftheight = calcheight(root->left);
    int rightheight = calcheight(root->right);
    return max(leftheight, rightheight) + 1;
}

int calcdiameter(node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = calcheight(root->left);
    int rheight = calcheight(root->right);
    int currdiameter = lheight + rheight + 1;

    int ldiameter = calcdiameter(root->left);
    int rdiameter = calcdiameter(root->right);

    return max(currdiameter, max(ldiameter, rdiameter));
}

int calcdiameter2(node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh=0, rh = 0;
    int leftdiameter = calcdiameter2(root->left, &lh);
    int rigthdiameter = calcdiameter2(root->right, &rh);

    int currdiameter2 = lh + rh + 1;
    *height = max(lh, rh) +1;

    return max(currdiameter2, max(leftdiameter, rigthdiameter));
}

int32_t main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    //calculate diameter of binary tree
    //cout << calcdiameter(root) << "\n";
    

    //Diameter of Binary Tree - optimized
    int height = 0;
    cout<<calcdiameter2(root, &height)<<endl;
    return 0;
}