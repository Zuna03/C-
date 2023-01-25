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

vector<node *> createTrees(int start, int end)
{
    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<node*> leftSubTree = createTrees(start, i - 1);
        vector<node*> rightSubTree = createTrees(i + 1, end);

        for (int j = 0; j < leftSubTree.size(); j++)
        {
            node *left = leftSubTree[j];
            for (int k = 0; k < rightSubTree.size(); k++)
            {
                node *right = rightSubTree[k];
                node *Node = new node(i);
                Node->left = left;
                Node->right = right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}

void printPreorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main()
{
    vector<node*> totalTrees = createTrees(1, 3);

    for (int i = 0; i < totalTrees.size(); i++)
    {
        cout << i + 1 << " : ";
        printPreorder(totalTrees[i]);
        cout << endl;
    }

    return 0;
}