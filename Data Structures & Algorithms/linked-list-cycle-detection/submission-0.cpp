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
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) return false;

        ListNode* slow = head; 
        ListNode* fast = head->next;

        while (slow && fast){
            if (slow == fast){
                cout << "slow: " << slow->val << endl;
                cout << "fast: " << fast->val << endl;
                return true;
            } 
            slow = slow->next;
            if (fast && fast->next) fast = fast->next->next;
            else fast = nullptr;
        }
        return false;
    }
};
