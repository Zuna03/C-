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

int maxPathUtil(node *root, int &ans)
{
    if (root == NULL)
        return 0;

    int leftP = maxPathUtil(root->left, ans);
    int rightP = maxPathUtil(root->right, ans);

    int maxSum = max(max(root->data, root->data + leftP + rightP), max(root->data + leftP, root->data + rightP));
    ans = max(maxSum, ans);

    int singlePathSum = max(root->data, max(root->data + leftP, root->data + rightP));
    return singlePathSum;
}

int maxPathSum(node *root)
{
    int ans = INT_MIN;
    maxPathUtil(root, ans);
    return ans;
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);

    cout << maxPathSum(root);

    return 0;
}