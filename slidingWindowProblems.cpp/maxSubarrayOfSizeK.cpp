#include <bits/stdc++.h>
using namespace std;

int slidingWindowMax(int arr[],int n,int k)
{
    int sum=0;
    int i=0;
    int j=0;
    int maxSum=INT_MIN;
    
    while(j<n)
    {
        sum+=arr[j];

        if(j-i+1 < k)
        {
            j++;
        }

        else if(j-i+1 == k)
        {
            maxSum=max(maxSum,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    return maxSum;
    
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
   int k;
   cin>>k;

   cout<<slidingWindowMax(arr,n,k);
   return 0;
}