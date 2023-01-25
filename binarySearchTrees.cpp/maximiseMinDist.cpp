#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k)
{
    int pos = arr[0], element = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            element++;
            if (element == k)
                return true;
        }
    }
    return false;
}

int maximise(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int res = -1;
    int left = arr[0];
    int right = arr[n - 1];

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (isFeasible(mid, arr, n, k))
        {
            res = max(res, mid);
            left = mid + 1;
        }
        else{
            right=mid;
        }
    }
    return res;
}

int main()
{
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;

    cout<<maximise(arr,n,k);

    return 0;
}