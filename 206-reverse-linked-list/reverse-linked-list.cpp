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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextNode = NULL;
        
        while (curr != NULL) {
            nextNode = curr->next; // save next
            curr->next = prev;               // reverse pointer
            prev = curr;                     // move prev
            curr = nextNode;                 // move curr
        }
        
        return prev; // new head
    }
};
