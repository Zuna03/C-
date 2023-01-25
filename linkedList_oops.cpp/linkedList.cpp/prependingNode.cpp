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
      
      void prepending(node* &head , int val)
      {
          node *n = new node(val);
          n->next=head;
          head=n;
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
   prepending(head,1);
   prepending(head,2);
   prepending(head,3);
   prepending(head,4);
   display(head);
   
   return 0;
}