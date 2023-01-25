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

node* lca(node* root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==n1 || root->data==n2)
    {
        return root;
    }
    node* leftlca=lca(root->left,n1,n2);
    node* rightlca=lca(root->right,n1,n2);

    if(leftlca && rightlca)
    {
        return root;
    }
    if(leftlca==NULL && rightlca==NULL)

    {
        return NULL;
    }
    if(leftlca != NULL)
    {
        return leftlca;
    }
    return rightlca;
}

int findDist(node* root,int key,int dist)
{
    if(root==NULL)
    {
        return -1;
    }

    if(root->data==key)
    {
         return dist;
    }
    int left=findDist(root->left,key,dist+1);

    if(left!=-1)
    {
        return left;
    }
    return findDist(root->right,key,dist+1);
    
}
int dis(node* root,int n1,int n2)
{
    node*ans=lca(root,n1,n2);
   if(root==NULL)
   {
       return -1;
   }

   int d1=findDist(ans,n1,0);
   int d2=findDist(ans,n2,0);

   return d1+d2;
}
int main()
{
   struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    

    cout<<dis(root,4,5);
   return 0;
}