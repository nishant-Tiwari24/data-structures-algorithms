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
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode* ptr = head;
        while(ptr != NULL) {
            ans.push_back(ptr->val);
            ptr = ptr->next;
        }
        sort(ans.begin(),ans.end());

        ListNode* newHead = NULL;
        ListNode* current = NULL;
        
        for (int value : ans) {
            ListNode* newNode = new ListNode(value);
            if (!newHead) {
                newHead = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = newNode;
            }
        }
        
        return newHead;
        
    }
};