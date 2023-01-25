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

// void middleNode(node* head)
// {
//     if(head==NULL || head->next==NULL || head->next->next==NULL)
//     {
//        cout<<"no middle found" << endl;
//        return ;
//     }
//     int x= length(head);
//     node* temp=head;
//     node* prev;
//      prev->next=head;
//     int y=(x/2)+1;
//     int i=0;
//     while(x>=3 && i<y)
//     {
//         temp=temp->next;
//         prev=prev->next;
//         i++;
//     }
   
      
//     cout << prev->data;  

// }

node* middleNode(node* head)
{
    if(head==NULL || head->next==NULL || head->next->next==NULL)
    {
       cout<<"no middle found" << endl;
       return head;
    }

    node* slow=head;
    node* fast=head->next;
     node* prev;
     prev->next=head;
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        prev=prev->next;
        
    }
  
    if(fast!=NULL)
    {
        return prev;
    }
    return prev->next ;
}

int main()
{
   node *head= takeInput();
   //print(head);
   //cout << length(head);
   cout << middleNode(head)->data;

   return 0;
}