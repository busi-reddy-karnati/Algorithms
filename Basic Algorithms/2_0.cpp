
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int data){
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
        void insertnode(int num){
            if(head==NULL){
                head=new Node(num);
                tail=head;
            }
            else{
                tail->next=new Node(num);
                tail=tail->next;

            }
        }

        void deletenode(int num){
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

int main(){
    LinkedList* l=new LinkedList();
    l->insertnode(1);
    l->insertnode(2);
    l->insertnode(3);
    l->insertnode(4);
    l->insertnode(2);
    l->display();
    l->deletenode(3);
    cout<<"\nDeleted 3\n";
    l->display();
    l->deletenode(2);
    cout<<"\nDeleted 2\n";
    l->display();
    return 0;
}