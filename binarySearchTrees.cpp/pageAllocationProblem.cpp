#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int b, int s, int minP)
{
    int studentReq = 1, sum = 0;
    for (int i = 0; i < b; i++)
    {
        if (arr[i] > minP)
            return false;

        if (sum + arr[i] > minP)
        {
            studentReq++;
            sum = arr[i];
            if (studentReq > s)
                return false;
        }

        else
            sum += arr[i];
    }
    return true;
}
int minPage(int arr[], int b, int s)
{
    if (b < s)
        return -1;

    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum, ans = INT_MAX;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (isPossible(arr, b, s, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
int main()
{
    int arr[]={12,34,67,90};
    int b=4;
    int s=2;

    cout<<minPage(arr,b,s);
    return 0;
}