#include <bits/stdc++.h> 
bool duplicateParanthesis(string &expr)
{
    // Write your code here
    int num=0,prev=0;
    stack<pair<char,int>> st;
    for(int i=0;i<expr.length();i++)
    {
        char c=expr[i];
        if(c=='(')
            st.push({c,i});
        else
        {
            int t=0;
//             while(st.top().first != '(')
//             {
                t=st.top().second;
                st.pop();
                num=i-t;
                if(num-prev==2)
                    return 1;
                else
                {
                    prev=num;
                }
           // }
        }
    }
    return false;
}
