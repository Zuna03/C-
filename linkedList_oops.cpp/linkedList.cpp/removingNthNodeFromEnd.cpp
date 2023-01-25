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
int length(node* head)
{
    if(head==NULL)
    {
        return 0;
    }

    return 1+length(head->next);
}


      void deleteAtHead(node* &head)
      {
          node* todelete=head;
          head=head->next;
          delete todelete;
      }
void deleteFromLast(node* head,int k)
{
    if(head==NULL)
         {
             return;
         }

         if(head->next==NULL)
         {
             deleteAtHead(head);
             return;
         }
    int x=length(head);
    int y=(x-k)+1;
    node* temp=head;
    int i=0;
    while(i<y)
    {
       temp=temp->next;
       i++;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
   print(head);
   //cout << length(head);
   int k;
   cin>>k;
   deleteFromLast(head,k);
   print(head);
   return 0;
}