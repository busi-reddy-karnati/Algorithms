/*
Implement Inorder Traversal of a Binary Tree
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;
    Node(int val1){
        val=val1;
        left=NULL;
        right=NULL;
    }

};

class Tree{
    public:
    Node *root;
    Tree(){
        root=NULL;
    }
    void postordertraversal(Node *temp){
        if(temp){
            postordertraversal(temp->left);            
            postordertraversal(temp->right);
            cout<<temp->val<<" ";
        }
    }
    void insertnode(int num, Node *node){
        if(root==NULL)
            root=new Node(num);
        else if(node->val > num){
            if(node->left==NULL){
                node->left=new Node(num);
                cout<<"Inserted "<<num<<" to the left of "<<node->val<<"\n";
            }
            else{
                insertnode(num,node->left);
            }

        }
        else{
            if(node->right==NULL){
                cout<<"Inserted "<<num<<"  right of "<<node->val<<"\n";
                node->right=new Node(num);
            }
            else{
                insertnode(num,node->right);
            }

        }

    }
};
int main(){
    Tree* tree=new Tree();
    tree->insertnode(10,tree->root);
    tree->insertnode(5,tree->root);
    tree->insertnode(18,tree->root);
    tree->insertnode(9,tree->root);
    tree->insertnode(20,tree->root);
    tree->insertnode(3,tree->root);
    tree->insertnode(7,tree->root);
    tree->postordertraversal(tree->root);
    return 0;

}