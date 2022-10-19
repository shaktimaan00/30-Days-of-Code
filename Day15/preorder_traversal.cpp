#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> a;

void preorder(Node *root)
{
    if (root == NULL)
        return;

    a.push_back(root->val);
    preorder(root->left);
    preorder(root->right);
}

vector<int> preorderTraversal(Node *root)
{
    preorder(root);

    return a;
}

int main(){

return 0;
}