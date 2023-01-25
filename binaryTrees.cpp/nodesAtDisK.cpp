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

void printNodesSubtree(node *root, int k)
{
    if (root == NULL)
        return;

    if (k == 0)
        cout << root->data << " ";

    else
    {
        printNodesSubtree(root->left, k - 1);
        printNodesSubtree(root->right, k - 1);
    }
}

int printNodesAncestor(node *root, node *target, int k)
{
    if (root == NULL)
        return -1;

    if (root == target)
    {
        printNodesSubtree(root, k);
        return 0;
    }

    int dl = printNodesAncestor(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printNodesSubtree(root->right, k - dl - 2);
        }
        return dl + 1;
    }

    int dr = printNodesAncestor(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printNodesSubtree(root->left, k - dr - 2);
        }
        return dr + 1;
    }

    return -1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    printNodesAncestor(root, root->left, 1);

    return 0;
}