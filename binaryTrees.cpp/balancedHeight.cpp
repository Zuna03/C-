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

// bool balancedHeight(node* root)
// {
//     if(root == NULL)
//     {
//         return true;
//     }

//     if(balancedHeight(root->left) == false)
//     {
//         return false;
//     }

//     if(balancedHeight(root->right) == false)
//     {
//         return false;
//     }

//     int lh=height(root->left);
//     int rh=height(root->right);

//     if(abs(lh-rh)<=1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }

//OPTIMISED APPROACH

bool balancedHeight(node* root,int* height)
{
    if(root==NULL)
    {
        return true;
    }

    int lh=0;
    int rh=0;


    if(balancedHeight(root->left, &lh) == false)
    {
        return false;
    }

    if(balancedHeight(root->right, &rh) == false)
    {
        return false;
    }

    *height=max(lh,rh)+1;

        if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
    


}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    //root->right=new node(3);
    root->left->left=new node(4);
    // root->left->right=new node(5);
    // root->right->left=new node(6);
    // root->right->right=new node(7);
   
   int h=0;
  bool ans= balancedHeight(root,&h);
  if(ans==true)
  {
      cout<<"balanced height";
  }
  else
  {
      cout<<"unbalanced height";
  }

  
   return 0;
}