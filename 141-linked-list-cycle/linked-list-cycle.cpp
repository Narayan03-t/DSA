/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Bruteforce
        // unordered_map<ListNode*, bool> map;

        // ListNode* temp = head;
        // while(temp != NULL){
        //     if(map[temp] == true){
        //         return true;
        //     }
        //     else{
        //         map[temp] = true;
        //     }
        //     temp = temp->next;
        // }
        // return false;

        // optimized
        // ListNode* slow = head;
        // ListNode* fast = head;
        // ListNode* temp = head;
        // while(temp != NULL && fast != NULL){
        //     fast = fast->next;
        //     if(fast != NULL){
        //         slow = slow->next;
        //         fast = fast->next;
        //     }
        //     if(slow==fast){
        //         return true;
        //     }
        //     temp = temp->next;
        // }
        // return false;


        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow){
                return true;
            }
            
        }
        return false;
    }
};