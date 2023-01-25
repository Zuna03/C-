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
        else if(!st.empty() && arr[i]>st.top().first)
        {
            left.push_back(st.top().second);
        }
        else if(!st.empty() && arr[i]<=st.top().first)
        {
            while(!st.empty() && arr[i]<=st.top().first)
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
        st.push({arr[i],i});

    }


// nearest smaller to right

    for (int i = n-1; i >= 0; i--)
        {
        if(st2.empty())
        {
            right.push_back(n);
        }
        else if(!st2.empty() && arr[i]>st2.top().first)
        {
            right.push_back(st2.top().second);
        }
        else if(!st2.empty() && arr[i]<=st2.top().first)
        {
            while(!st2.empty() && arr[i]<=st2.top().first)
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
        st2.push({arr[i],i});

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
        ans[i]=arr[i]*width[i];
        maxArea=max(maxArea,ans[i]);
    }

    cout<<"max area in histogram is " <<maxArea;
    
    
    return 0;
}