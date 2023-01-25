#include <bits/stdc++.h>
using namespace std;
int length(char c[])
{
    if(c=='\0')
    {
        return -1;
    }
    int i=0;
    while(c[i]!='\0')
    {
       i++;
    }
    return i;
}
void reverse(char c[])
{
   
    int x=length(c);
    stack<char> st;
    for (int i = 0; i < x; i++)
    {
        st.push(c[i]);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
   char c[]="heay";
  // length(c);
  reverse(c);
   return 0;
}