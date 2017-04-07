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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode tmp(-1);
        ListNode* ptr = &tmp;
        int carry = 0;
        while (l1 && l2){
            int t = l1 -> val + l2 -> val + carry;
            if (t >= 10){
                carry = 1;
                t -= 10;
            }else{
                carry = 0;
            }
            ptr -> next = new ListNode(t);
            ptr = ptr -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        if (l1 == nullptr && l2 != nullptr){
            while (l2){
                int t = l2 -> val + carry;
                if (t >= 10){
                    carry = 1;
                    t -= 10;
                }else{
                    carry = 0;
                }
                ptr -> next = new ListNode(t);
                ptr = ptr -> next;
                l2 = l2 -> next;
            }
        }
        else if (l2 == nullptr && l1 != nullptr){
            while (l1){
                int t = l1 -> val + carry;
                if (t >= 10){
                    carry = 1;
                    t -= 10;
                }else {
                    carry = 0;
                }
                ptr -> next = new ListNode(t);
                ptr = ptr -> next;
                l1 = l1 -> next;
            }
        }
        if (carry != 0){
            ptr -> next = new ListNode(carry);
        }
        ptr = &tmp;
        return ptr -> next;
    }
};