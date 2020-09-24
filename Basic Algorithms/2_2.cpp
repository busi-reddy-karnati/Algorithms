
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
void removekthelem(Node *head, int k){
    Node* temp=head;
    for(int i=0;i<k-1;i++)
        temp=temp->next;
    Node* p1=head;
    while(temp->next!=NULL){
        temp=temp->next;
        p1=p1->next;
    }
    cout<<k<<"th Last Element is "<<p1->val<<"\n";
}

int main(){
    LinkedList* l=new LinkedList();
    l->insertnode(1);
    l->insertnode(2);
    l->insertnode(3);
    l->insertnode(4);
    l->insertnode(2);
    l->insertnode(3);
    int k=1;
    removekthelem(l->head,k);
    l->display();
    removekthelem(l->head,k+1);
    l->display();
    return 0;
}