#include <bits/stdc++.h>
using namespace std;

int trapping(int arr[],int n)
{
    int maxR[n];
    int maxL[n];

    maxL[0]=arr[0];
    maxR[n-1]=arr[n-1];

    for (int i = 1; i < n; i++)
    {
        maxL[i]=max(maxL[i-1],arr[i]);
    }

    for (int i = n-2; i >=0; i--)
    {
        maxR[i]=max(maxR[i+1],arr[i]);
    }

    int sum=0;
    int water[n];

    for (int i = 0; i < n; i++)
    {
        water[i]=min(maxL[i],maxR[i])-arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum+=water[i];
    }
    
    
    return sum;
    
}
int main()
{
   int n;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }

   cout<<trapping(arr,n);
   return 0;
}