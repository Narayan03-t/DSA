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
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;
        while (curr) {
            n++;
            curr = curr->next;
        }
        
        int partSize = n / k;
        int extra = n % k;
        vector<ListNode*> result(k, nullptr);
        curr = head;
        
        for (int i = 0; i < k; i++) {
            ListNode* partHead = curr;
            int thisPartSize = partSize + (i < extra ? 1 : 0);
            for (int j = 0; j < thisPartSize - 1; ++j) {
                if (curr) curr = curr->next;
            }
            if (curr) {
                ListNode* next = curr->next;
                curr->next = nullptr;
                curr = next;
            }
            result[i] = partHead;
        }
        return result; 
    }
};