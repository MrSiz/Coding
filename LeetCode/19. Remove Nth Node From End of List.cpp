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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr){
            return nullptr;
        }
        ListNode temp(-1);
        ListNode* ptr = &temp;
        temp.next = head;
        for (int i = 0; i < n; ++i){
            ptr = ptr -> next;
        }
        ListNode* ptr2 = &temp;
        while (ptr -> next){
            ptr = ptr -> next;
            ptr2 = ptr2 -> next;
        }
        ListNode* tt = ptr2 -> next;
        ptr2 -> next = ptr2 -> next -> next;
        delete tt;
        ptr2 = &temp;
        return ptr2 -> next;
    }
};