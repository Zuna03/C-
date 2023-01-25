#include <bits/stdc++.h>
using namespace std;

int mah(vector<int>v)
{
    int n=v.size();
    stack<pair<int,int>> st; //first val second index
    stack<pair<int,int>> st2; //first val second index
    vector<int> left; 
    vector<int> right;
    int width[n];
    int ans[n];
    int maxArea=INT_MIN;

    
// nearest smallest to left

    for (int i = 0; i < n; i++)
    {
        if(st.empty())
        {
            left.push_back(-1);
        }
        else if(!st.empty() && v[i]>st.top().first)
        {
            left.push_back(st.top().second);
        }
        else if(!st.empty() && v[i]<=st.top().first)
        {
            while(!st.empty() && v[i]<=st.top().first)
            {
                st.pop();
            }
            if(st.empty())
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(st.top().second);
            }
        }
        st.push({v[i],i});

    }


// nearest smaller to right

    for (int i = n-1; i >= 0; i--)
        {
        if(st2.empty())
        {
            right.push_back(n);
        }
        else if(!st2.empty() && v[i]>st2.top().first)
        {
            right.push_back(st2.top().second);
        }
        else if(!st2.empty() && v[i]<=st2.top().first)
        {
            while(!st2.empty() && v[i]<=st2.top().first)
            {
                st2.pop();
            }
            if(st2.empty())
            {
                right.push_back(n);
            }
            else
            {
                right.push_back(st2.top().second);
            }
        }
        st2.push({v[i],i});

    }
    reverse(right.begin(),right.end());

//width of each reactangle

    for (int i = 0; i < n; i++)
    {
        width[i]=right[i]-left[i]-1;
    }

// finding max area
    for (int i = 0; i < n; i++)
    {
        ans[i]=v[i]*width[i];
        maxArea=max(maxArea,ans[i]);
    }
    return maxArea;
}
const int n=4;
const int m=4;
int maxAreaInBinary(int arr[n][m])
{
    vector<int> v;
   for (int j = 0; j<n; j++)
   {
       v.push_back(arr[0][j]);
   }
    int maxnum=mah(v);

   
   for (int i = 1; i < n; i++)
   {
       for (int j = 0; j<n; j++)
       {
           if(arr[i][j]==0)
           {
               v[j]=0;
           }
           else
           {
               v[j]=v[j]+arr[i][j];
           }
           maxnum=max(maxnum,mah(v));
       }
       
   }

   return maxnum;
}
int main()
{
    // int n;
    // cin>>n;
    // int arr[n][n];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; i < n; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }
    
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
       cout<<maxAreaInBinary(arr)<<endl; 
    
    
   
   return 0;
}