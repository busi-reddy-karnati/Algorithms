#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
	public:
		int val;
		TreeNode* left;
		TreeNode* right;
	TreeNode(int valu){
		val = valu;
		left = NULL;
		right = NULL;
	}
};
TreeNode* binaryTree(vector<int> &v, int left, int right){
	if(left>right)
		return NULL;
	if(left==right)
		return new TreeNode(v[left]);
	int mid=(right+left)/2;
	cout<<"v[mid]: "<<v[mid]<<"\n";
	TreeNode *root=new TreeNode(v[mid]);
	root->left = binaryTree(v,left,mid-1);
	root->right = binaryTree(v,mid+1,right);
	return root;
}
void inorder(TreeNode* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<"Value: "<<root->val<<"\n";
	inorder(root->right);
}
int main(){
	vector<int> vec={1,2,3,4,5,5,7,8};
	TreeNode* root=binaryTree(vec,0,vec.size()-1);
	inorder(root);
	return 0;
}