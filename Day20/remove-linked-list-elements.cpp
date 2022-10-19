#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode* temp = head;

    if(head == NULL)
    return NULL;

    while( temp != NULL && temp -> next != NULL){
        if(temp -> val == val)
            temp = temp -> next;
        if(temp -> next -> val == val){
            temp -> next = temp -> next -> next; 
        }
        temp = temp -> next;
    }

    return head;
}

int main(){

return 0;
}