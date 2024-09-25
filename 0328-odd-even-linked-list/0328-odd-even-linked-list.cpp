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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* oddList=head;
        ListNode* evenList=head->next;
        ListNode* evenHead=evenList;
        while(evenList!=NULL && evenList->next!=NULL){
            oddList->next=evenList->next;
            oddList=oddList->next;
            evenList->next=oddList->next;
            evenList=evenList->next;
        }
        oddList->next=evenHead;
        return head;

    }
};