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
        left = NULL;
        right = NULL;
    }
};

bool isValid(node *root, node *min, node *max)
{
    if (root == NULL)
        return true;

    if (min != NULL && root->data <= min->data)
        return false;

    if (max != NULL && root->data >= max->data)
        return false;

    bool leftValid = isValid(root->left, min, root);
    bool rightValid = isValid(root->right, root, max);

    return leftValid and rightValid;
}
int main()
{
    node *root = new node(3);
    root->left = new node(21);
    root->right = new node(5);

    if (isValid(root, NULL, NULL))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}