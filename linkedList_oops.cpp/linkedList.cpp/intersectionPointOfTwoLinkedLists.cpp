#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node* n =new node(val);
    n->next=head;
    if(head != NULL)
    {
    head->prev=n;
    }
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

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void deleteAtHead(node* &head)
{
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}
void deleteNode(node* &head , int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    int i=1;
    while(temp != NULL && i<pos)
    {
        temp=temp->next;
        i++;
    }
  if(temp->next !=NULL)
  {
    temp->next->prev=temp->prev;
  }
    temp->prev->next=temp->next;

    delete temp;
}
int length(node* head)
{
    node* temp=head;
    int size=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
   
    return size;
}
void intersect(node* head1,node*head2,int k)
{
    node*ptr1=head1;
    node*ptr2=head2;
    k--;
    while(k--)
    {
        ptr1=ptr1->next;
    }
    while(ptr2->next != NULL)
    {
        ptr2=ptr2->next;
    }
    ptr2->next=ptr1;

}
int intersection(node* head1 , node* head2 )
{
    node*temp1;
    node*temp2;
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    if(l1>l2)
    {
        d=l1-l2;
        temp1=head1;
        temp2=head2;
    }
    else
    {
        d=l2-l1;
        temp1=head2;
        temp2=head1;
    }
    while(d)
    {
         temp1=temp1->next;
        if(temp1==NULL)
        {
            return -1;
        }
       
        d--;
    }
    while(temp1 != NULL && temp2 !=NULL)
    {
        if(temp1 == temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}
void display(node* head)
{
    while(head != NULL )
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
   insertAtHead(head2,9);
   insertAtHead(head2,10);
  intersect(head1,head2,5);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
   return 0;
}