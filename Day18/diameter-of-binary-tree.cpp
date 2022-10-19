#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int daimeterfast(TreeNode *root, int &d)
{
    if (root == nullptr)
        return 0;

    int left = daimeterfast(root->left, d);
    int right = daimeterfast(root->right, d);

    d = max(d, left + right);

    return max(left, right) + 1;
}

int diameterOfBinaryTree(TreeNode *root)
{
    int d = 0;
    daimeterfast(root, d);

    return d;
}

int main(){

return 0;
}