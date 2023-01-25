#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int l, int mid, int r)
{
    int inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return inv;
}

int mergeSort(int arr[], int l, int r)
{
    int inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);

        inv += merge(arr, l, mid, r);
    }
    return inv;
}
int main()
{
    int arr[] = {3, 2, 1};
    int ans = mergeSort(arr, 0, 2);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << ans;

    return 0;
}