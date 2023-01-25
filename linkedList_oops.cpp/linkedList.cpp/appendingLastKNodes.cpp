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
    int l=0;
    node*temp=head;
    while(temp!= NULL)
    {
         l++;
        temp=temp->next;
       
    }
    return l;
}
node* appendingLastK(node* &head , int k)
{
    int l=length(head);
    node* temp=head;
    node* newHead;
    node* newTail;
    int i=1;
    while(temp->next != NULL)
    {
        if(i==l-k)
        {
            newTail=temp;
        }
        if(i==l-k+1)
        {
            newHead=temp;
        }
        temp=temp->next;
        i++;
    }
    
    newTail->next=NULL;
    temp->next=head;
    return newHead;
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
   int k;
   cin>>k;
//    appendingLastK(head,k);
//    print(head);
   node*ans=appendingLastK(head,k);
   print(ans);

   return 0;
}