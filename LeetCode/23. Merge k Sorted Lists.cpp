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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ptr = nullptr;
        int length = lists.size();
        for (int i = 0; i < length; ++i){
            ptr = help(ptr, lists[i]);
        }
        return ptr;
    }
    ListNode* help(ListNode* head1, ListNode* head2){
        if (head1 == nullptr && head2 == nullptr){
            return nullptr;
        }else if (head1 && head2 == nullptr){
            return head1;
        }else if (head2 && head1 == nullptr){
            return head2;
        }
        ListNode new_head(-1);
        ListNode* ptr = &new_head;
        while (head1 && head2){
            if (head1 -> val < head2 -> val){
                ptr -> next = head1;
                ptr = ptr -> next;
                head1 = head1 -> next;
            }else if (head1 -> val >= head2 -> val){
                ptr -> next = head2;
                ptr = ptr -> next;
                head2 = head2 -> next;
            }
        }
        if (head1){
            ptr -> next = head1;
        }else if (head2){
            ptr -> next = head2;
        }
        ptr = &new_head;
        return ptr -> next;
    }
};