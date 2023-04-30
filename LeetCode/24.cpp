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
    ListNode* swapPairs(ListNode* head) {
        ListNode* h = new ListNode(0, head);

        ListNode* cur = h;
        while (cur -> next != nullptr && cur -> next -> next != nullptr) {
            ListNode* t1 = cur -> next;
            ListNode* t2 = cur -> next -> next;
            ListNode* t3 = cur -> next -> next -> next;
            
            t2 -> next = t1;
            t1 -> next = t3;
            cur -> next = t2;

            cur = cur -> next -> next;
        }

        return h -> next;
    }
};
