#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n,q;
   cin>>n>>q;
   vector<int>v(n,0);
   vector<int>arr(n);
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   
   

   while (q--)
   {
       int l,r;
       cin>>l>>r;
       l--;r--;
       v[l]++;
       if(r+1<n)
       {
           v[r+1]--;
       }
      
   }
   for (int i = 1; i < n; i++)
   {
     v[i]=v[i]+v[i-1];
   }

   sort(v.begin(),v.end());
   sort(arr.begin(),arr.end());

   int ans=0;
   for (int i = 0; i < n; i++)
   {
      ans+=(arr[i]*v[i]);
   }
   
   cout << ans;
   return 0;
}