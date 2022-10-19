#include<bits/stdc++.h>
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

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    a.push_back(root->val);
}

vector<int> postorderTraversal(Node *root)
{
    postorder(root);

    return a;
}

int main(){

return 0;
}