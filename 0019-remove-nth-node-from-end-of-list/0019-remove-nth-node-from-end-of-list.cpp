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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast= head;
        ListNode* slow= head;
        for(int i=0; i<n; i++){
            fast=fast->next;
        }
        if(fast==nullptr){
            return head->next;
        }
        //fast is pointing at nth node from start and slow at first node
        //diff btw fast and slow is n;
        while(fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        //after moving contantlt together now with same diff, fast is now
        //at end of list and slow is fast-n i.e. nth node from last
         ListNode* del = slow->next;
        slow->next = slow->next->next;
        
        // Free the memory of the node to be deleted
        delete del;
        return head;
    }
};

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//          ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* first = dummy;
//         ListNode* second = dummy;

//         for (int i = 0; i <= n; ++i) {
//             first = first->next;
//         }

//         while (first != nullptr) {
//             first = first->next;
//             second = second->next;
//         }

//         ListNode* temp = second->next;
//         second->next = second->next->next;
//         delete temp;

//         return dummy->next;
//     }
// };