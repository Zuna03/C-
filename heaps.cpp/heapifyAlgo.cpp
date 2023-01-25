#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void heapify(int arr[], int n, int idx)
{
    int largest = idx;
    int l = 2 * idx + 1;
    int r = 2 * idx + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != idx)
    {
        swap(arr[idx], arr[largest]);
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[5] = {15, 20, 7, 9, 30};
    heapify(arr, 5, 0);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}