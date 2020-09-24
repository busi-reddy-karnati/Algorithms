#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
    Node(int num){
        val=num;
        next=NULL;
        prev=NULL;

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
            Node *temp=new Node(num);
            temp->prev=tail;
            tail->next=temp;
            tail=tail->next;
        }

    }
    void deletenode(int num){
        Node *temp=head;
        while(temp){
            if(temp->val==num){
                if(temp==head){
                    head=head->next;
                    if(head)
                    head->prev=NULL;
                }
                else if(temp==tail){
                    
                    tail=tail->prev;
                    if(tail)
                        tail->next=NULL;
                }
                else{
                    Node *temp2=temp->prev;
                    temp2->next=temp->next;
                    temp2->next->prev=temp2;
                }

            }
            temp=temp->next;
        }
    }
    void display(){
        Node *temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};
int main(){
    LinkedList *L=new LinkedList();
    L->insertnode(1);
    L->insertnode(2);
    L->insertnode(3);
    L->insertnode(4);
    L->insertnode(5);
    L->insertnode(6);
    L->display();
    L->deletenode(2);
    L->display();
    L->deletenode(6);
    L->display();
    L->deletenode(1);
    L->display();
    return 0;

}