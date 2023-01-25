#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int findDepth(node* root)
{
    int d=0;
    while (root!=NULL)
    {
        d++;
        root=root->left;
    }
    return d;
}

bool isPerfect(node* root,int d,int level=0)
{
    if(root==NULL)
    return true;

    if(root->right==NULL && root->left==NULL)
    return(d==level+1);

    if(root->right==NULL || root->left==NULL)
    return false;

    return isPerfect(root->left,d,level+1)&& isPerfect(root->right,d,level+1);
}

bool checkPerfect(node* root)
{
    int d=findDepth(root);
    return isPerfect(root,d);
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    // root->left->left = new node(4);
    // root->right->right = new node(5);

    if(checkPerfect(root))
    cout<<"Yes";
    else
    cout<<"No";

   return 0;
}