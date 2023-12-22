//
// Created by D.Zaycev on 22.12.2023.
//
#include "tasks/tasks.h"

ds::ListNode* tasks::RemoveNthFromEnd(ds::ListNode* head, int n) {
    if (!head->next) {
        return nullptr;
    }

    ds::ListNode* fast = head;
    ds::ListNode* slow = head;

    for (int distance = 0; distance < n; ++distance) {
        fast = fast->next;
        if (!fast) {
            return head->next;
        }
    }

    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    if (slow->next){
        slow->next = slow->next->next;
    }
    return head;
}