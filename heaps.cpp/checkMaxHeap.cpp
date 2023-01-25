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

int countNodes(node *root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isComplete(node *root, int idx, int n)
{
    if (root == NULL)
        return true;

    if (idx >= n)
        return false;

    return isComplete(root->left, 2 * idx + 1, n) && isComplete(root->right, 2 * idx + 2, n);
}

bool checkMaxHeapUtil(node *root)
{
    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->right == NULL)
        return root->data >= root->left->data;

    else
    {
        if (root->data >= root->right->data && root->data >= root->left->data)
            return checkMaxHeapUtil(root->left) && checkMaxHeapUtil(root->right);

        else
            return false;
    }
}

bool checkMaxHeap(node *root)
{
    int count = countNodes(root);
    if (isComplete(root, 0, count) && checkMaxHeapUtil(root))
        return true;
    else
        return false;
}
int main()
{
    struct node *root = new node(11);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(14);
    root->right->right = new node(5);

    if (checkMaxHeap(root))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}