#include <bits/stdc++.h>
using namespace std;

class node
{
    public :
      int data;
      node* next;

      node(int val)
      {
         data = val;
         next=NULL;
      }
};
      
      void appending(node* &head , int val)
      {
          node *n = new node(val);
          if(head==NULL)
          {
             head=n;
             return;
          }
          node* temp = head;
          while(temp->next != NULL)
          {
              temp=temp->next;
          }
          temp->next=n;
          
      }

      void deleteAtHead(node* &head)
      {
          node* todelete=head;
          head=head->next;
          delete todelete;
      }

     
     void deletion(node* &head,int val)
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

         node* temp=head;
         while(temp->next->data != val)
         {
             temp=temp->next;
         }
         node *toDelete=temp->next;
         temp->next=temp->next->next;
         delete toDelete;
     }

     void display(node* head)
     {
         node* temp=head;
         while(temp != NULL)
         {
             cout << temp->data << "->";
             temp=temp->next;
         }
         cout << "NULL";
         
     }



int main()
{
   node*head = NULL;
   appending(head,1);
   appending(head,2);
   appending(head,3);
    display(head);
    cout << endl;
   deletion(head,2);
   display(head);
   cout << endl;
    deleteAtHead(head);
    display(head);
   return 0;
}