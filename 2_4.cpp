/*
Partition the Linked List. if the num given for partition is x, all the elements less than x should be on the left of all the elements greater than equal to x
*/
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
            cout<<"\n";
        }
};
Node* partition(Node *head, int n){
    Node *temp=head;
    while(temp->next!=NULL){
        if(temp->next->val>n){
            Node *temp2=temp->next;
            temp->next=temp2->next;
            temp2->next=head;
            head=temp2;

        }
        temp=temp->next;
    }
    temp=head;
    while(temp->next!=NULL){
        if(temp->next->val<n){
            Node *temp2=temp->next;
            temp->next=temp2->next;
            temp2->next=head;
            head=temp2;

        }
        else{
            temp=temp->next;
        }
    }
    return head;
    

}
int main(){
    LinkedList* l=new LinkedList();
    l->insertnode(3);
    l->insertnode(5);
    l->insertnode(8);
    l->insertnode(5);
    l->insertnode(10);    
    l->insertnode(2);
    l->insertnode(1);
    l->display();
    l->head=partition(l->head,5);
    l->display();
    return 0;
}