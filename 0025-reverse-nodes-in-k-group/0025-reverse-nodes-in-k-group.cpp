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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        
        // Check if there are at least k nodes remaining
        while (count < k && curr != nullptr) {
            curr = curr->next;
            count++;
        }
        
        // If fewer than k nodes remaining, return head as it is
        if (count < k) {
            return head;
        }
        
        // Reverse the first group of size k
        curr = reverseKGroup(curr, k);
        
        // Reverse the remaining groups and connect them
        while (count > 0) {
            ListNode* temp = head->next;
            head->next = curr;
            curr = head;
            head = temp;
            count--;
        }
        return curr;
    }
};
