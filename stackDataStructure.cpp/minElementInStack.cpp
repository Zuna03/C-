#include <bits/stdc++.h>
using namespace std;

// using extra space with the help of supporting stack

stack<int> s;
stack<int> ss;

void push(int a)
{
    s.push(a);
    if(ss.empty() || ss.top()>=a)
    {
        ss.push(a);
    }
    return;
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s.top()<<" ";
    }
    cout<<endl;
    for (int i = 0; i < ss.size(); i++)
    {
        cout<<ss.top()<<" ";
    }
    
}

int pop()
{
    if(s.empty())
    {
        return -1;
    }
    int ans=s.top();
    s.pop();
    if(ss.top()==ans)
    {
        ss.pop();
    }
    return ans;
}

int minEle()
{
    if(ss.empty())
    {
        return -1;
    }
    return ss.top();
}
int main()
{
   
   push(18);
   push(19);
   push(29);
   push(15);
   push(16);
   
   cout<<minEle();
   return 0;
}