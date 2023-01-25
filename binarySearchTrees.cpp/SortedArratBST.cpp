#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

node *sortedArray(int arr[], int start, int end)
{
    if (start > end)
        return NULL;

    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);

    root->left = sortedArray(arr, start, mid - 1);
    root->right = sortedArray(arr, mid + 1, end);

    return root;
}

void preorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    node *root = sortedArray(arr, 0, 4);
    preorder(root);

    return 0;
}