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

      node* reversing(node* &head)
      {
         node* prevptr=NULL;
         node* currptr=head;
         node* nextptr;

         while(currptr != NULL)
         {
            nextptr=currptr->next;
            currptr->next=prevptr;

            prevptr=currptr;
            currptr=nextptr;
         }
         return prevptr;

      }

      //using recursion

      node* reversingsrecursively(node* &head)
      {
         if(head==NULL || head->next==NULL)
         {
            return head;
         }
         node* newhead=reversingsrecursively(head->next);
         head->next->next=head;
         head->next=NULL;

         return newhead;

      }
      
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
   node* newhead=reversingsrecursively(head);

   display(newhead);
   return 0;
}