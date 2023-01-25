#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int left, int right, int n)
{
    if (left > right)
        return -1;

   // int mid = left + (right - left) / 2;
   int mid=(left+right)/2;

    if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == n - 1 || arr[mid + 1] < arr[mid]))
        return mid;

    else if (arr[mid - 1] > arr[mid])
        return peak(arr, left, mid - 1, n);

    else
        return peak(arr, mid + 1, right, n);
}

int main()
{
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n = 6;

    cout << peak(arr, 0, n - 1, n);
    return 0;
}