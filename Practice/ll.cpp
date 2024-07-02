#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
}

Node* insertNodeAtPosition(Node* head, int val, int pos) {
    if(pos==0){
        Node* temp=new Node(val);
        temp->next=head; //temp->next=head->next will mean that we skip head
        head=temp;
        return head;
    }
    int i=1;
    Node* temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next; //to maintain list order
    temp->next=newNode;
    return head;
    
}

Node* deleteNode(Node *head,int x)
{
    if(x==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    x--;
    Node* curr=head;
    Node* prev=NULL;
    while(x--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;
}

int getMiddle(Node *head)
    {
        if(head==NULL || head->next==NULL) return head->data;
        Node* slow=head;
        Node* fast = head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast) fast=fast->next;
            slow=slow->next;
        }
        return slow->data;
    }



int main()
{   

    return 0;
}