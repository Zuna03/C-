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

node *search(node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;

    if (key > root->data)
        return search(root->right, key);

    return search(root->left, key);
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right = new node(5);
    root->right->right = new node(6);

    if (search(root, 7) != NULL)
        cout << "true";
    else
        cout << "false";

    //printInorder(root);
    return 0;
}