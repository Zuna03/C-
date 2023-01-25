#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// int search(int inorder[], int start, int end, int curr)
// {
//     for (int i = start; i <= end; i++)
//     {
//         if (inorder[i] == curr)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// TreeNode *buildTree(int preorder[], int inorder[], int start, int end)
// {
//     static int idx = 0;
//     if (start > end)
//     {
//         return NULL;
//     }

//     int curr = preorder[idx];
//     idx++;
//     TreeNode *TreeNode = new TreeNode(curr);

//     if (start == end)
//     {
//         return TreeNode;
//     }

//     int pos = search(inorder, start, end, curr);

//     TreeNode->right = buildTree(preorder, inorder, pos + 1, end);
//     TreeNode->left = buildTree(preorder, inorder, start, pos - 1);

//     return TreeNode;
// }

int searchTreeNode(vector<int> &inorder, int ele, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == ele)
            return i;
    }
    return -1;
}
TreeNode *build(vector<int> &preorder, vector<int> &inorder, int start, int end)
{
    if (start > end)
        return NULL;

    static int idx = 0;
    int ele = preorder[idx];
    TreeNode *curr = new TreeNode(preorder[idx]);
    idx++;

    if (start == end)
        return curr;

    int pos = searchTreeNode(inorder, ele, start, end);
    curr->left = build(preorder, inorder, start, pos - 1);
    curr->right = build(preorder, inorder, pos + 1, end);

    return curr;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    TreeNode *root = build(preorder, inorder, 0, preorder.size() - 1);

    return root;
}
void inorderPrint(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    // int preorder[] = {4, 2, 5, 3, 1};
    // int inorder[] = {4, 2, 1, 5, 3};
    vector<int> preorder = {4, 2, 5, 3, 1};
    vector<int> inorder = {4, 2, 1, 5, 3};

    TreeNode *ans = buildTree(preorder, inorder);
    inorderPrint(ans);

    return 0;
}