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
    int val;
    cin>>val;

    node* head=NULL;
    node* tail=NULL;
    
    
    while(val != -1)
    {
        node* n=new node(val);
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
       cin>>val;
    }
    return head;

}

node* makeCycle(node* &head,int k)
{
    node* temp=head;
    node* start;

    int i=0;

    while(temp->next != NULL)
    {
       if(i==k)
       {
          start=temp;
       }
       temp=temp->next;
       i++;
    }
    temp->next=start;
    return head;
}
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}

void removeCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    do
    {
       slow=slow->next;
       fast=fast->next->next;
    } while (slow != fast);

    fast=head;
    while(slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;  
    }
    slow->next=NULL;
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
int main()
{
    node* newhead=takeInput();
    //display(newhead);
    int k;
    cin>>k;
   node* ans= makeCycle(newhead,k);
    //display(ans);
    cout<<detectCycle(ans);
    cout<<endl;
    removeCycle(ans);
    cout<<detectCycle(ans);
    cout<<endl;
    display(ans);
   return 0;
}