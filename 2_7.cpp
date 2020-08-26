/*
Find if two linked lists are intersecting 
Approach:
if they are intersecting, they will have the same end
if same length, check of values and nodes
else make the pointers from equal lengths
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
        Node *givenode(int num){
            Node *temp=head;
            while(temp){
                if(temp->val==num)
                    return temp;
                temp=temp->next;
            }
            return NULL;
        }
        void display(){
            Node *temp=head;
            cout<<head->val<<" ";
            while(temp->next!=NULL){
                cout<<temp->next->val<<" ";
                temp=temp->next;
            }
        }
        int getLength(){
            Node *temp=head;
            int count=0;
            while(temp){
                count+=1;
                temp=temp->next;
            }
            return count+1;
        }
};
void areintersecting(Node *p1, Node *p2){
    int flag=0;
    while(p1){
        if(p1==p2){
            cout<<"Yes\n";
            cout<<p1->val;
            flag=1;
            break;
        }
        p1=p1->next;
        p2=p2->next;
    }
    if(flag==0)
        cout<<"No";
}
int main(){
    LinkedList* l1=new LinkedList();
    l1->insertnode(1);
    l1->insertnode(2);
    l1->insertnode(3);
    l1->insertnode(4);
    l1->insertnode(2);
    Node *temp=l1->givenode(3);
    LinkedList *l2=new LinkedList();
    l2->insertnode(2);
    l2->tail->next=temp;
    l2->tail=temp;
    l2->insertnode(9);
    int n1=l1->getLength();
    int n2=l2->getLength();
    Node *p1=l1->head;
    Node* p2=l2->head;
    if(n1>n2){
        for(int i=0;i<(n1-n2);i++){
            p1=p1->next;
        }
    }
    else{
        for(int i=0;i<(n2-n1);i++){
            p2=p2->next;
        }
    }
    areintersecting(p1,p2);
    return 0;
}