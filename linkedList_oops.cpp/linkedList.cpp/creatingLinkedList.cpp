#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
  
// This function prints contents of linked list
// starting from the given node
void display(Node* head)
     {
         Node* temp=head;
         while(temp != NULL)
         {
             cout << temp->data << "->";
             temp=temp->next;
         }
         cout << "NULL";
         
     }
// Driver code
int main()
{
    // Node* head = NULL;
    // Node* second = NULL;
    // Node* third = NULL;
  
    // // allocate 3 nodes in the heap
    // head = new Node();
    // second = new Node();
    // third = new Node();
  
    // head->data = 1; // assign data in first node
    // head->next = second; // Link first node with second
  
    // second->data = 2; // assign data to second node
    // second->next = third;
    
    // third->data = 3; // assign data to third node
    // third->next = NULL;
    //statically
    // Node n1(1);
    // Node * head=&n1;
    // Node n2(2);
    // Node n3(3);
    // n1.next=&n2;
    // n2.next=&n3;
    // display(head);

    //dynamically
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
     Node * head=n1;
    n1->next=n2;
    n2->next=n3;
    display(head);


  
    return 0;
}