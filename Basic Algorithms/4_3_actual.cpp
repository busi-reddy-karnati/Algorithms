#include<map>
#include<iostream>
using namespace std;
class ListNode{
	public:
		int val;
		ListNode* next;
		ListNode(int val1){
			val=val1;
			next=NULL;
		}
};


class TreeNode{
	public:
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int v){
			left=NULL;
			right=NULL;
			val=v;
		}
};
map<int,ListNode*> depthMap;
void preorder(TreeNode* root, int depth){
	if(!root)
		return;
	if(depthMap.find(depth) == depthMap.end()){
		depthMap[depth] = new ListNode(root->val);
	}	
	else{
		ListNode* temp = new ListNode(root->val);
		temp->next = depthMap[depth];
		depthMap[depth] = temp;
	}
	preorder(root->left,depth+1);
	preorder(root->right,depth+1);
}
int main(){
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	root->left->left->left = new TreeNode(8);
	root->left->left->right = new TreeNode(9);
	root->left->right->left = new TreeNode(10);
	root->left->right->right = new TreeNode(11);
	root->right->left->left = new TreeNode(12);
	root->right->left->right = new TreeNode(13);
	root->right->right->left = new TreeNode(14);
	root->right->right->right = new TreeNode(15);
	preorder(root,1);
	for(auto i:depthMap){
		ListNode* temp = i.second;
		while(temp->next){
			cout<<"Depth: "<<i.first<<" Element: "<<temp->val<<"\n";
			temp=temp->next;
		}
		cout<<"Depth: "<<i.first<<" Element: "<<temp->val;
		cout<<"\n";
	}
	return 0;
}