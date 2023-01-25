#include <bits/stdc++.h>
using namespace std;

void printMax(int arr[],int n,int k)
{
   deque<int>Q(k);
   int i;
   for ( i = 0; i < k; i++)
   {
      while (!Q.empty() && arr[i]>arr[Q.back()])
      {
         Q.pop_back();
      }
      Q.push_back(i);   
   }
   for ( ; i<n; i++)
   {
      cout<<arr[Q.front()]<<" ";

      while (!Q.empty() && Q.front()<=i-k)
      {
         Q.pop_front();
      }

      while (!Q.empty() && arr[i]>arr[Q.back()])
      {
         Q.pop_back();
      }
      Q.push_back(i);  
      
   }
   cout<<arr[Q.front()]<<" ";
}
int main()
{

//optimised approach



   //time complexity:- O(n*k)

   // int n;
   // cin>>n;

   // int k;
   // cin>>k;

   // int* arr=new int[n];
   // for (int i = 0; i < n; i++)
   // {
   //    cin>>arr[i];
   // }
  
   //  int maxnum=INT_MIN;
   //  for (int i = 0; i < n-k+1; i++)
   //  {
   //      int x=i;
   //      for (int j = 0; j < k; j++)
   //      {
   //           maxnum=max(maxnum,arr[x]);
   //           x++;
   //      }
   //      cout<<maxnum<<" ";
   //  }

   int n,k;
   cin>>n>>k;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   printMax(arr,n,k);
   return 0;
}