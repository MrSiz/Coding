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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode new_head(-1);
        ListNode* ptr = &new_head;
        while (head && head -> next){
            ListNode* tmp = head -> next -> next;
            ptr -> next = head -> next;
            head -> next -> next = head;
            head -> next = tmp;
            head = tmp;
            ptr = ptr -> next -> next;
        }
        ptr = &new_head;
        return ptr -> next;
    }
};