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
node* takeInput()
{
   int data;
   cin >>data;

   node* head=NULL;
   node* tail=NULL;

   while(data != -1)
   {
       node* n=new node(data);
       if(head==NULL)
       {
           head=n;
           tail=n;
       }
       else
       {
           tail->next=n;
           tail=n;

       }
       cin >> data;
   }
   return head;
}

node* arranging(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL)
    {
        even->next=NULL;
    }
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
   node*head=takeInput();
   node* ans=arranging(head);
   display(head);
   return 0;
}