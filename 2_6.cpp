/*
Check if a given string is a palindrome sequence
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        char val;
        Node *next;
        Node(char data){
            val=data;
            next=NULL;
        }

};

class LinkedList{
    public:
        Node *head;
        Node *tail;
        LinkedList(){
            head=NULL;
            tail=NULL;
        }
        void insertnode(char num){
            if(head==NULL){
                head=new Node(num);
                tail=head;
            }
            else{
                tail->next=new Node(num);
                tail=tail->next;

            }
        }

        void deletenode(char num){
            Node *temp=head;
            while(temp!=NULL && temp->next!=NULL){
                
                if(temp->next->val==num){
                    temp->next=temp->next->next;
                    
                }
                if(temp!=NULL)
                    temp=temp->next;
            }
        }

        void display(){
            Node *temp=head;
            cout<<head->val<<" ";
            while(temp->next!=NULL){
                cout<<temp->next->val<<" ";
                temp=temp->next;
            }
        }
};
void ifpalindrome(Node *head){
    string s;
    while(head){
        s=s+head->val;
        head=head->next;
    }
    int n=s.size();
    int flag=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            cout<<"No";
            flag=1;
            break;
        }

    }
    if(flag==0)
        cout<<"yes";
}
int main(){
    LinkedList* l=new LinkedList();
    l->insertnode('a');
    l->insertnode('b');
    l->insertnode('b');
    l->insertnode('c');
    l->insertnode('a');
    ifpalindrome(l->head);
    return 0;
}