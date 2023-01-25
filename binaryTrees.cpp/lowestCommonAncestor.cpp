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

bool getEle(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);

    if (root->data == key)
    {
        return true;
    }

    if (getEle(root->left, key, path) || getEle(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return -1;
    }
    vector<int> path1, path2;
    if (!getEle(root, n1, path1) || !getEle(root, n2, path2))
    {
        return -1;
    }

    int i = 0;
    for (i = 0; i < path1.size() && path2.size(); i++)
    {
        if (path1[i] != path2[i])
        {
            break;
        }
    }
    return path1[i - 1];
}

// METHOD 2 : TRAVERSING TREE ONLY ONCE

// node* LCA2(node* root,int n1,int n2)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }

//     if(root->data==n1 || root->data==n2)
//     {
//         return root;
//     }

//     node* leftLCA=LCA2(root->left,n1,n2);
//     node* rightLCA=LCA2(root->right,n1,n2);

//     if(leftLCA && rightLCA)
//     {
//         return root;
//     }
//     if(leftLCA!=NULL)
//     {
//         return leftLCA;
//     }
//     return rightLCA;
// }
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);

    // node* lca=LCA2(root,7,6);
    // if(lca==NULL)
    // {
    //     cout<<"doesn't exist";
    // }
    // else{
    //     cout<<lca->data;
    // }

    int lca = LCA(root, 7, 6);

    if (lca == -1)
    {
        cout << "doesn't exist";
    }
    else
    {
        cout << lca;
    }

    return 0;
}