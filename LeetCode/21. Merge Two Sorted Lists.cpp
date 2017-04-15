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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 && !l2){
            return nullptr;
        }else if (l1 && l2 == nullptr){
            return l1;
        }else if (l2 && l1 == nullptr){
            return l2;
        }
        ListNode new_head(-1);
        ListNode* ptr = &new_head;
        while (l1 && l2){
            if (l1 -> val < l2 -> val){
                ptr -> next = l1;
                ptr = ptr -> next;
                l1 = l1 -> next;
            }else if (l2 -> val <= l1 -> val){
                ptr -> next = l2;
                ptr = ptr -> next;
                l2 = l2 -> next;
            }
        }
        if (l1){
            ptr -> next = l1;
        }else if (l2){
            ptr -> next = l2;
        }
        ptr = &new_head;
        //cout << ptr -> val << endl;
        return ptr -> next;
    }
};