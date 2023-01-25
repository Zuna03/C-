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

node *constructBST(int preOrder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
        return NULL;
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderIdx += 1;

        if (*preorderIdx < n)
            root->left = constructBST(preOrder, preorderIdx, preOrder[*preorderIdx], min, key, n);

        if (*preorderIdx < n)
            root->right = constructBST(preOrder, preorderIdx, preOrder[*preorderIdx], key, max, n);
    }
    return root;
}

void preOrderPrint(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}
int main()
{
    int preOrder[] = {10, 2, 1, 13, 11};
    int preOrderIdx = 0;

    node *ans = constructBST(preOrder, &preOrderIdx, preOrder[0], INT_MIN, INT_MAX, 5);
    preOrderPrint(ans);

    return 0;
}