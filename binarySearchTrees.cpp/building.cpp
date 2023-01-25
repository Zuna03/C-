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

node *buildTree(node *root, int val)
{
    if (root == NULL)
        return new node(val);

    if (val < root->data)
        root->left = buildTree(root->left, val);
    else
        root->right = buildTree(root->right, val);

    return root;
}

void printInorder(node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    node *root = NULL;
    root = buildTree(root, 5);
    buildTree(root, 1);
    buildTree(root, 3);
    buildTree(root, 4);
    buildTree(root, 2);

    printInorder(root);
    return 0;
}