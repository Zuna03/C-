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
       n->next=head;
       head=n;
       

       }
       cin >> data;
   }


   return head;


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

   return 0;
}