/*
Given a binary tree find if the tree is balanced or not
Balanced: The height differs by atmost one
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class TreeNode{
	public:
		int val;
		TreeNode *left,*right;
	TreeNode(int v){
		val = v;
		left = NULL;
		right = NULL;	
	}
};
unordered_map<int,int> heights;
int height(TreeNode* root){
	if(!root)
		return 0;
	if(abs(height(root->left) - height(root->right)) >1)
		return -100;
	return 1+max(height(root->left),height(root->right));
	//return ans;
}

bool isBalanced(TreeNode* root){
	if(!root){
		return true;
	}
	
	//cout<<"height Difference: "<<abs(height(root->left)-height(root->right))<<" at node value: "<<root->val<<" \n";
	if(abs(height(root->left)-height(root->right))>1)
		return false;
	return (isBalanced(root->left)&&isBalanced(root->right));
}

void inorder(TreeNode* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->val<<"\n";
	inorder(root->right);
}



int main(){
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	cout<<isBalanced(root)<<"\n";
	root->left->left = new TreeNode(3);
	cout<<isBalanced(root)<<"\n";
	root->right = new TreeNode(4);
	cout<<isBalanced(root)<<"\n";
	return 0;
}
