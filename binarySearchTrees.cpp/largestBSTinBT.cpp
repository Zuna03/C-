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

struct info
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};

info largestBSTinBT(node *root)
{
    if (root == NULL)
        return {0, INT_MIN, INT_MAX, 0, true};

    if (root->right == NULL && root->left == NULL)
        return {1, root->data, root->data, 1, true};

    info leftSubTree = largestBSTinBT(root->left);
    info rightSubTree = largestBSTinBT(root->right);

    info curr;
    curr.size = 1 + max(leftSubTree.size, rightSubTree.size);

    if (leftSubTree.isBST && rightSubTree.isBST && leftSubTree.max < root->data && rightSubTree.max > root->data)
    {
        curr.max = max(rightSubTree.max, max(leftSubTree.max, root->data));
        curr.min = min(leftSubTree.min, min(rightSubTree.min, root->data));
        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }
    else
    {
        curr.isBST = false;
        curr.ans = max(leftSubTree.ans, rightSubTree.ans);

        return curr;
    }
}
int main()
{
    struct node *root1 = new node(15);
    root1->left = new node(20);
    root1->right = new node(30);
    root1->left->left = new node(5);
    // root1->left->right = new node(5);
    // root1->right->left = new node(6);
    // root1->right->right = new node(7);

    info ans = largestBSTinBT(root1);
    cout << ans.ans << endl;

    return 0;
}