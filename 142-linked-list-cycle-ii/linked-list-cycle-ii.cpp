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
    ListNode* brute(ListNode* head){
        unordered_map<ListNode*,bool>map;
        ListNode* temp = head;
        
        while(temp!=NULL){
            if(map[temp] == true){
                return temp;
            }
            else{
                map[temp] = true;
            }
            temp = temp->next;
        }
        return NULL;
    }

    ListNode* checkcycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast){
                return fast;
            }
        }
        return NULL;
    }

    ListNode *detectCycle(ListNode *head) {
        //return brute(head);
        ListNode* fast = checkcycle(head);
        if(fast == NULL){
            return NULL;
        }
        ListNode* slow = head;

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};