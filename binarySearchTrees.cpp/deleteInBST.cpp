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

node *findMin(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return NULL;
    else if (root->data > key)
        root->left = deleteNode(root->left, key);
    else if (root->data < key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
            delete root;
            root=NULL;
        }
        else if (root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
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
    node *ans = deleteNode(root, 5);
    printInorder(ans);
    return 0;
}