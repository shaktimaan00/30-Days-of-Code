#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> a;

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    a.push_back(root->val);
    inorder(root->right);
}

vector<int> inorderTraversal(Node *root)
{
    inorder(root);

    return a;
}

int main()
{

    return 0;
}