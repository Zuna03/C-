#include <bits/stdc++.h>
using namespace std;

int feasiblePinters(int arr[], int b, int limit)
{
    int painters = 1, sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += arr[i];
        if (sum + arr[i] > limit)
        {
            sum = arr[i];
            painters++;
        }
    }
    return painters;
}
int paintersPartition(int arr[], int b, int p)
{

    int totalLength = 0, k = 0;
    for (int i = 0; i < b; i++)
    {
        k = max(k,arr[i]);
        totalLength += arr[i];
    }
    int start = k, end = totalLength;
    int mid;
    while (start < end)
    {
        mid = (start + end) / 2;
        int painters = feasiblePinters(arr, b, mid);
        if (painters <= p)
            end = mid;
        else
            start = mid + 1;
    }
    return start;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int b = 4;
    int p = 2;

    cout << paintersPartition(arr, b, p);

    return 0;
}