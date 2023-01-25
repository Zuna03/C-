#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    node* n=new node(val);
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    
}
void deleteAtHead(node* &head)
{
    node* temp=head;
    while(temp->next != head)
    {
        temp=temp->next;
    }
    node* toDelete=head;
    temp->next=head->next;
    head=head->next;
    delete toDelete;
}

void deleteNode(node* &head,int k)
{
    node* temp=head;
    int i=1;
    if(k==1)
    {
        deleteAtHead(head);
        return;
    }
    while(i != k-1)
    {
        temp=temp->next;
        i++;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;

}
void display(node* head)
{
    node*temp=head;
    do
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }while (temp!=head);
    cout<<endl;
     
}
int main()
{
   node* head=NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   display(head);
//    insertAtHead(head,5);  
//    display(head);
//    deleteNode(head,3);
//    display(head);
   return 0;
}