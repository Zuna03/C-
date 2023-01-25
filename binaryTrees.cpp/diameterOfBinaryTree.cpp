#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

// int height(node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int leftHeight=height(root->left);
//     int rightHeight=height(root->right);

//     return max(leftHeight,rightHeight)+1;
// }

// int diameter(node* root)
// {
//     int lheight=height(root->left);
//     int rheight=height(root->right);

//     int rootDiameter=lheight+rheight+1;

//     return max(rootDiameter,max(lheight,rheight));
// }

// int diameter(node* root,int &res)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }

//     int lDia=diameter(root->left,res);
//     int rDia=diameter(root->right,res);

//     int temp=(max(lDia,rDia))+1;
//     int ans=max(temp,(lDia+rDia+1));
//     res=max(res,ans);

//     return temp;
// }

int diameter(node* root,int * height)
{
    if (root==NULL)
    {
        return 0;
    }

    int lh=0;
    int rh=0;

    int lDia=diameter(root->left, &lh);
    int rDia=diameter(root->right, &rh);

    int currDia=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currDia,max(lDia,rDia));
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    
    int height=0;
    cout<<diameter(root,&height);
    queue<pair<pair<int,int>,node>> q;
    q.push({1,2},root);
  
   return 0;
}