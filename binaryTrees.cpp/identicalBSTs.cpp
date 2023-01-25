#include <bits/stdc++.h>
using namespace std;

struct node
{

    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(node *root11, node *root12)
{
    if (root11 == NULL && root12 == NULL)
        return true;

    else if (root11 == NULL || root12 == NULL)
        return false;

    else
    {
        bool cond1 = root11->data == root12->data;
        bool cond2 = isIdentical(root11->left, root12->left);
        bool cond3 = isIdentical(root11->right, root12->right);

        if (cond1 && cond2 && cond3)
            return true;

        else
            return false;
    }
}
int main()
{
    struct node *root1 = new node(1);
    root1->left = new node(2);
    root1->right = new node(3);
    root1->left->left = new node(4);
    root1->left->right = new node(5);
    root1->right->left = new node(6);
    root1->right->right = new node(7);

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(8);

    if (isIdentical(root1, root))
        cout << "true";
    else
        cout << "no";

    return 0;
}