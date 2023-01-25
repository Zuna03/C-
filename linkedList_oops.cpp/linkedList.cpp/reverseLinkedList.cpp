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
node* reverse(node* head)
{
    node* curr=head;
    node* n;
    node*prev = NULL;
  
    while (curr != NULL)
    {
       n=curr->next;
       curr->next=prev;
       prev=curr;
       curr=n;
    }
  
    return prev;
}

node* print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
   node *head= takeInput();
   node* ans=reverse(head) ;
   print(ans);
   return 0;
}