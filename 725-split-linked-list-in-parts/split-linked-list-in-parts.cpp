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
        ListNode* temp = head;
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        int partsize = n / k;
        int extranode = n % k;

        vector<ListNode*> ans(k, NULL);
        ListNode* temp1 = head;
        for (int i = 0; i < k && temp1 != NULL; i++) {
            ans[i] = temp1;
            int currpartsize = partsize + (extranode > 0 ? 1 : 0);
            extranode--;
            for (int j = 0; j < currpartsize - 1; j++) {
                temp1 = temp1->next;
            }
            ListNode* nextpart = temp1->next;
            temp1->next = NULL;
            temp1 = nextpart;
        }
        return ans;
    }
};