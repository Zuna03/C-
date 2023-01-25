#include <bits/stdc++.h>
using namespace std;

void inserAtBottom(stack<int> &st,int ele)
{
     if(st.empty())
    {
        st.push(ele);
        return;
    }

    int topEle=st.top();
    st.pop();
    inserAtBottom(st,ele);

    st.push(topEle);
}
void reverse(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    inserAtBottom(st,ele);

}
int main()
{
   stack <int> st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   reverse(st);
   while(!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }

   return 0;
}