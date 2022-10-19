#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
};

void deleteNode(ListNode *node)
{
    ListNode *temp = node;

    while (temp != NULL)
    {
        temp->val = temp->next->val;
        if (temp->next->next == NULL)
        {
            temp->next = NULL;
            return;
        }
        temp = temp->next;
    }
}

int main(){

return 0;
}