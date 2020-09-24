/*
Given Two linked list that has numbers add them in reverse order and return the result as a linked list;
e.g 1->2->3(321) 3->4->1(143)
321+143=464
4->6->4(rev)
e approach: Take the two numbers and then add
Better approach: in two linked list keep a pointer and keep the sum there and carry somewhere
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
        }
};

void add(Node *p1, Node* p2){
    //Assuming that they are of same length
    int carry=0;
    while(p1->next!=NULL){
        
        int sum=p1->val+p2->val+carry;
        carry=sum/10;
        
        if(carry)
            sum=sum%10;
        p1->val=sum;
        p1=p1->next;
        p2=p2->next;
    }
    int s=p1->val+p2->val+carry;
    carry=s/10;
    if(carry)
        s%=10;
    p1->val=s;
    if(carry)
        p1->next=new Node(carry);
    
    
}
int main(){
    LinkedList* l1=new LinkedList();
    LinkedList* l2=new LinkedList();
    l1->insertnode(7);
    l1->insertnode(1);
    l1->insertnode(6);
    l2->insertnode(5);
    l2->insertnode(9);
    l2->insertnode(2);

    add(l1->head,l2->head);
    l1->display();
    return 0;
}