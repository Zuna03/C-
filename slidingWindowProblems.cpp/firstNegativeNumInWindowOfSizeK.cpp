#include <bits/stdc++.h>
using namespace std;

void firstNegativeNum(int arr[],int n,int k)
{
    queue<int> q;
    vector<int> v;

    int i=0;
    int j=0;

    while(j<n)
    {
        if(arr[j]<0)
        {
            q.push(arr[j]);
        }

        if(j-i+1 < k)
        {
            j++;
        }

        if(j-i+1==k)
        {
            if(q.empty())
            {
                v.push_back(0);
            }
            else if(!q.empty())
            {
                v.push_back(q.front());
            }
            
            if(arr[i]==q.front())
            {
                q.pop();
            }
            i++;
            j++;
        }
    }
        for (int i = 0; i < n-k+1; i++)
        {
            cout<<v[i]<<" ";
        }
        return;
    
    
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

   firstNegativeNum(arr,n,k);

   return 0;
}