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
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        while(node != NULL && node->next != NULL) {
            node->val = node->next->val;
            prev=node;
            node = node->next;
        }
        prev->next = NULL;
        delete(node);
    }
};