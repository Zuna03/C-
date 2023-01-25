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
// node* insertingNthNode(node* head,int k)
// {
//     int data;
//     cin>>data;
//     node* n=new node(data);
//     int x=length(head);
//      int i=0;
//     node* ptr=head;
//     node*curr=ptr->next;
//     if(k<0 || k>x-1)
//     {
//         return head;
//     }
//     if(k==0)
//     {
//         head->next=n;
//         n->next=curr;

//     }
   
//     while(i<k )
//     {
//         i++;
      
//         ptr=ptr->next;
        
//     }
//     curr=ptr->next;
//     ptr->next=n;
//     n->next=curr;
    
     
//     return head;
// }

// method 2

node* insertingNthNode(node* head,int k,int val)
{
   
    if(k<0)
    {
        return head;
    }   
    if(k==0)
    {
        node* n=new node(val);
        n->next=head;
        head=n;
        return head;
    }
    int i=1;
    node*copy=head;
    while(i<=k-1 && head!=NULL)
    {
      head=head->next; 
      i++;
    }
    if(head)
    {
         node* n=new node(val);
         node* temp=head->next;
         head->next=n;
         n->next=temp;
          return copy;
    }
    return copy;
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
   int val;
   cin>>val;
   //print(head);
   cout << endl;
 insertingNthNode(head,i,val);
 print(head);
   return 0;
}