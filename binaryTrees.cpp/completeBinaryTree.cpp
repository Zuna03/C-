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

// Method-1 : Recursively

// int countNodes(node* root)
// {
//     if(root==NULL)
//     return 0;

//     return 1+countNodes(root->left)+countNodes(root->right);
// }

// bool checkComplete(node* root,int idx,int n)
// {
//     if(root==NULL)
//     return true;
//     if(idx>=n)
//     return false;

//     return checkComplete(root->left,2*idx+1,n)&&checkComplete(root->right,2*idx+2,n);
// }

// Method-2 : Iteratively checking for leaf nodes

// bool checkComplete(node *root)
// {
//     bool check = false;
//     if (root == NULL)
//         return true;

//     queue<node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp->left)
//         {
//             if (check == true)
//                 return false;

//             q.push(temp->left);
//         }
//         else
//             check = true;

//         if (temp->right)
//         {
//             if (check == true)
//                 return false;

//             q.push(temp->right);
//         }
//         else
//             check = true;
//     }

//     return true;
// }

// Method-3 : Iteratively checking for the last node

bool checkComplete(node *root)
{
    bool check = false;
    if (root == NULL)
        return true;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
            check = true;

        else
        {
            if (check == true)
                return false;

            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return true;
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    // root->left->left = new node(4);
    // root->right->right = new node(5);

    if (checkComplete(root))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}