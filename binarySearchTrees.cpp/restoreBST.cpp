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

void caclPointers(node *root, node **prev, node **first, node **last, node **mid)
{
    if (root == NULL)
        return;

    caclPointers(root->left, prev, first, last, mid);
    if (*prev && (*prev)->data > root->data)
    {
        if (!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *prev = root;
    caclPointers(root->right, prev, first, last, mid);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void restore(node *root)
{
    node *prev;
    node *first;
    node *last;
    node *mid;

    prev = NULL;
    first = NULL;
    mid = NULL;
    last = NULL;

    caclPointers(root, &prev, &first, &last, &mid);
    if (first && last)
        swap(&(first->data), &(last->data));
    else if (first && mid)
        swap(&(first->data), &(mid->data));
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = new node(6);
    root->left = new node(9);
    root->right = new node(3);
    root->left->left = new node(1);
    root->right->right = new node(13);

    inorder(root);
    cout << endl;
    restore(root);
    inorder(root);
    cout << endl;

    return 0;
}