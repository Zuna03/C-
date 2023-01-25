#include <bits/stdc++.h>
using namespace std;

#define n 25
class qUeue
{
    int* arr;
    int front;
    int back;

    public:
    qUeue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    } 

    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front++;
        }
    }

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements to pop"<<endl;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
       if(front==-1 || front>back)
        {
            return true;
        } 
        return false;
    }
};
int main()
{
   qUeue q;

   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);

   cout<<q.peek()<<endl;
   q.pop();

   cout<<q.peek()<<endl;
   q.pop();

   cout<<q.peek()<<endl;
   q.pop();

   cout<<q.peek()<<endl;
   q.pop();
   q.pop();

   cout<<q.empty()<<endl;

   return 0;
}