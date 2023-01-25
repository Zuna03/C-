#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array :- ";
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element for index "<<i<<" :- ";
        cin>>a[i];
    }

    cout<<"The array you entered is :- "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    const int N = 1e6+2;

    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }else
        {
            idx[a[i]] = i;
        }
    }
    
    if (minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }else
    {
        cout<<"The first occurence of the element that occurs more than one is "<<minidx<<"."<<endl;
    }
    
    return 0;
}