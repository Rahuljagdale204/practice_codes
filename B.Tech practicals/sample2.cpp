#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int i = 0;
unordered_map<int, int> mp;

TreeNode *solve(vector<int> pre, vector<int> in, int lb, int ub)
{
	if (lb > ub)
		return NULL;

	TreeNode *ans = new TreeNode(pre[i++]);
	if (lb == ub)
		return ans;
	int mid = mp[ans->val];
	ans->left = solve(pre, in, lb, mid - 1);
	ans->right = solve(pre, in, mid + 1, ub);
	return ans;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
	i = 0;
	mp.clear();

	for (int j = 0; j < inorder.size(); j++)
	{
		mp[inorder[j]] = j;
	}
	int n = inorder.size();

	TreeNode *root = solve(preorder, inorder, 0, n - 1);
	return root;
}

void postorder(TreeNode* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";

}


int main(){
	int n;cin>>n;
	vector<int>in,pre;
	for(int i=0;i<n;i++){
		int num;cin>>num;
		in.push_back(num);
	}
	for(int i=0;i<n;i++){
		int num;cin>>num;
		pre.push_back(num);
	}

	TreeNode* root = buildTree(pre,in);
	postorder(root);
	return 0;
}