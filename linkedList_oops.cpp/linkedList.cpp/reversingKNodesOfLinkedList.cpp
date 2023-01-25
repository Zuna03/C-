#include <bits/stdc++.h>
using namespace std;

class node
{
public:
   node *next;
   int data;

   node(int val)
   {
      data = val;
      next = NULL;
   }
};
node *takeInput()
{
   int data;
   cin >> data;
   node *head = NULL;
   node *tail = NULL;
   while (data != -1)
   {
      node *n = new node(data);

      if (head == NULL)
      {
         head = n;
         tail = n;
      }
      else
      {
         tail->next = n;
         tail = n;
      }
      cin >> data;
   }
   return head;
}
node *reversingK(node *&head, int k)
{
   node *curr = head;
   node *prev = NULL;
   node *n = NULL;
   int i = 0;
   if (head == NULL)
   {
      return NULL;
   }
   while (curr != NULL && i < k)
   {
      n = curr->next;
      curr->next = prev;
      prev = curr;
      curr = n;
      i++;
   }
   if (n != NULL)
   {
      head->next = reversingK(n, k);
   }
   return prev;
}
node *print(node *head)
{
   while (head != NULL)
   {
      cout << head->data << "->";
      head = head->next;
   }
   cout << "NULL";
}
int main()
{
   node *newhead = takeInput();
   print(newhead);
   int k;
   cin >> k;
   node *ans = reversingK(newhead, k);
   print(ans);
   return 0;
}