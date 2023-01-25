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
node* deletingNthNode(node* head,int k)
{
    int x=length(head);
    node*prev;
   
    node* ptr=head;
    node* curr=head->next;
    prev->next=ptr;
    if(k<0 ||  k>x)
    {
      prev->next=curr; 
    }
    if(k==0)
    {
        return head->next;
    }
    int i=0;
    while(i<k )
    {
        i++;
        prev=prev->next;
        ptr=ptr->next;
        curr=ptr->next;
    }

    prev->next=curr;
    return head;
}

// MEMORY LEAK

// node* deletingNthNode(node* head,int k)
// {
//     if(k<0)
//     {
//         return head;
//     }
//     if(k==0 && head)
//     {
//       return head->next;
//     }
//     int i=1;
//      node* curr=head;
//     if(i<=k-1 &&  curr != NULL)
//     {
//        curr=curr->next;
//        i++;
//     }
//     if(curr && curr->next)
//     {
//         curr->next=curr->next->next;
//         return head;
//     }
//     return head;
    
// }

// WITHOUT MEMORY LEAK

// node* deletingNthNode(node* head , int k)
// {
//     if(k<0)
//     {
//         return head;
//     }
//    if(k==0 && head!=NULL)
//     {
//        node* newHead=head->next;
//        node* todelete = head;
//        head->next=NULL;
//        head = newHead;
//        delete todelete;
//        return head;
//     }
    
//     int i=1;
//     node* curr=head;
//     while(i<=k-1 && curr)
//     {
//         curr=curr->next;
//         i++;
//     }
//     if(curr && curr->next)
//     {
//         node* newCurr=curr->next;
//         curr->next=curr->next->next;
//         newCurr->next=NULL;
//         delete newCurr;
//         return head;
//     }
//     return head;
// }

//  void deleteAtHead(node* &head)
//       {
//           node* todelete=head;
//           head=head->next;
//           delete todelete;
//       }

     
//      void deletion(node* &head,int val)
//      {
//          if(head==NULL)
//          {
//              return;
//          }

//          if(head->next==NULL)
//          {
//              deleteAtHead(head);
//              return;
//          }

//          node* temp=head;
//          node*prev;
//          prev->next=head;
//          int i=0;
//          while(i < val)
//          {
//              temp=temp->next;
//              prev=prev->next;
//              i++;
//          }
//          node *toDelete=temp->next;
//          prev=temp->next->next;
//          delete toDelete;
//      }
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
   deletingNthNode(head,i);
  print(head);

   return 0;
}