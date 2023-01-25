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

void build_heap(int arr[], int n)
{
    int start = (n / 2) - 1;
    for (int i = start; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void printHeap(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};

    int n = sizeof(arr) / sizeof(arr[0]);

    build_heap(arr, n);
    printHeap(arr, n);

    return 0;
}