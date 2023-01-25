#include <bits/stdc++.h>
using namespace std;

//method 1 :- push function costly

// class sTack
// {
//     int n;
//     queue<int> q1;
//     queue<int> q2;

//     public:

//     sTack()
//     {
//         n=0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         n++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int>temp;
//         q1=q2;
//         q2=temp;    
//     }

//     void pop()
//     {
//         q1.pop(); 
//         n--;      
//     }

//     int top()
//     {
//         return q1.front();
//     }

//     int size()
//     {
//         return n;
//     }

// };


// method 2 :- making pop method costly

class sTack
{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:

    sTack()
    {
        n=0;
    }

    void push(int x)
    {
        q1.push(x);
        n++;
    }


    void pop()
    {
        if(q1.empty())
        {
            return;
        }
        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int>temp;
        q1=q2;
        q2=temp;

    }

    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        queue<int>temp;
        q1=q2;
        q2=temp;
        return ans;
    }

    int size()
    {
        return n;
    }
};
int main()
{
   sTack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);

   cout<<st.top()<<endl;
   st.pop();

   cout<<st.top()<<endl;
   st.pop();

   cout<<st.top()<<endl;
   st.pop();

   cout<<st.top()<<endl;
   st.pop();

   cout<<st.size();
   
   return 0;
}