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

int size=0;
int length(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
   
    return size;
}
void printingNthNode(node* head,int k)
{
    
    if(k<0 )
    {
        cout << "-1 " << endl;
        return ;
    }
    int i=0;
    while(i<k && head!=NULL)
    {
        i++;
        head=head->next;
      
    }
      if(head != NULL)
      {
        cout << head->data << endl;
      }
      else
      {
          return;
      }
    return;
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
   int i;
   cin>>i;
   print(head);
   cout << endl;
  printingNthNode(head,i);

   return 0;
}