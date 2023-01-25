#include <bits/stdc++.h>
using namespace std;

int minSubaaraySize(int arr[], int n, int x)
{
    int sum = 0, minLen = n + 1;
    int start = 0, end = 0;

    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n)
        {
            if (end - start < minLen)
                minLen = end - start;

            sum -= arr[start++];
        }
    }
    return minLen;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int n = 6;
    int x = 51;

    int minLen = minSubaaraySize(arr, n, x);
    if (minLen == n + 1)
        cout << "No such subarray exists" << endl;
    else
        cout << minLen << endl;

    return 0;
}