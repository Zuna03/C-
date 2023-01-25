#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n;
   cin>>n;
   int target;
   cin>>target;

   vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  
  
   sort(a.begin(),a.end());
   bool found = false;

   for (int i = 0; i < n; i++)
   {
       int lo=i+1;
       int hi=n-1;
     
       while(lo<hi)
       {
            int curr=a[i]+a[lo]+a[hi];

            if(curr==target)
            {
                found=true;
            }

             if(curr<target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
       
       }
   }

   if(found==true)
   {
       cout<<"true";
   }
   else
   {
       cout<<"false";
   }
   
   
   
   return 0;
}