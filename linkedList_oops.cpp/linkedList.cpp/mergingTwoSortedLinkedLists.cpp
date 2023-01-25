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
node* merge(node* head1 , node* head2)
{
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummyNode=new node(-1);
    node* ptr3=dummyNode;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummyNode->next;
}

node* mergeRecursive(node* head1,node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    if(head1->data<head2->data)
    {
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;

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
   node *head1= takeInput();
   node *head2= takeInput();
   node* ans=mergeRecursive(head1,head2);
   print(ans);

   return 0;
}