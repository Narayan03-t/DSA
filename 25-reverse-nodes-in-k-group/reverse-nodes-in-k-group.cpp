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
    int getLength(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        if(head->next == NULL){
            return head;
        }

       
        int len = getLength(head);
        if(len <k){
            return head;
        }
        int pos = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(pos<k){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            pos++;
        }

        if(curr != NULL){
            ListNode* recursionkahead = reverseKGroup(curr,k);
            head->next = recursionkahead;
        }
        return prev;
    }
};