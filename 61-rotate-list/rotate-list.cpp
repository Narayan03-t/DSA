/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Compute the length and get the last node.
        ListNode* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            ++length;
        }

        // Connect the tail to head to form a circle.
        tail->next = head;

        // Find the new tail: (length - k % length - 1)-th node
        k %= length;
        int t = length - k;
        for (int i = 0; i < t; ++i)
            tail = tail->next;

        // Break the circle and set the new head.
        ListNode* newHead = tail->next;
        tail->next = nullptr;
        return newHead;
    }
};