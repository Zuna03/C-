#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   
   vector<int> v;
   stack<pair <int,int> >st;

   for (int i = 0; i < n; i++)
   {
       if(st.empty())
       {
           v.push_back(-1);
       }
       else if(!st.empty() && arr[i]<st.top().first)
       {
           v.push_back(st.top().second);
       }
       else if(!st.empty() && arr[i]>=st.top().first)
       {
             while (!st.empty() && arr[i]>=st.top().first)
               {
                   st.pop();
               }
               if(st.empty())
               {
                   v.push_back(-1);
               }
               else
               {
                   v.push_back(st.top().second);
               }

       }
       st.push({arr[i],i});
       
   }
   for (int i = 0; i < v.size(); i++)
      {
         v[i]=i-v[i];
      }
   
    for (int i = 0; i < v.size(); i++)
   {
      cout<<v[i]<<" "; 
   }
   
   return 0;
}