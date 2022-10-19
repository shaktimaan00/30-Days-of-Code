#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};

ListNode *deleteMiddle(ListNode *head)
{
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *fast = dummy;
    ListNode *slow = dummy;

    if (head->next == NULL)
    {
        return NULL;
    }

    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return head;
}

int main(){

return 0;
}