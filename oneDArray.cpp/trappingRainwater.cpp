#include <bits/stdc++.h>
using namespace std;

int trapping(int arr[],int n)
{
    if(n<=2)
    {
        return 0;
    }
    
    vector<int> left(n),right(n);

    int leftMax=arr[0];
    left[0]=0;

    for (int i = 0; i < n; i++)
    {
        left[i]=leftMax;
        leftMax=max(leftMax,arr[i]);
    }

    int rightMax=arr[n-1];
    right[n-1]=0;

    for (int i = n-2; i>=0; i--)
    {
        right[i]=rightMax;
        rightMax=max(rightMax,arr[i]);
    }

    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]<left[i] && arr[i]<right[i])
        {
            ans=ans+min(left[i],right[i])-arr[i];
        }
    }
    return ans;
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int heights[n];
    for (int i = 0; i < n; i++)
    {
        cin>>heights[i];
    }
    cout<<trapping(heights,n);

   return 0;
}