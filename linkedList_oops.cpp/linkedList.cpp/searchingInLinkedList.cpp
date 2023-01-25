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
//  bool search(node*head,int val)
//  {
//      node*temp=head;
    
//     while(temp->next != NULL)
//      {
//          if(temp->data==val)
//          {
//              return 1;
//          }
//          temp=temp->next;
//      }
//      if(temp->next==NULL)
//      {
//          if(temp->data==val)
//          {
//              return 1;
//          }
//          return 0;
//      }
    
//      return 0;
//  }

// RECURSIVELY
bool search(node* head , int val)
{
    if(head==NULL)
    {
        return 0;
    }
    if(head->data==val)
    {
        return 1;
    }
    else
    {
        return search(head->next,val);
    }
 
}

int main()
{
   node *head= takeInput();
   int val;
   cin>>val;
   if(search(head,val)==1)
{
    cout << "found" << endl;
} 
if(search(head,val) != 1)
{
    cout << "not found" << endl;
}
   return 0;
}