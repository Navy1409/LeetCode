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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *curr=head;
        ListNode *dummy=new ListNode();
        ListNode *tail=dummy;
        while(curr&&curr->next){
            ListNode *f=curr;
            ListNode *s=curr->next;
            curr=s->next;
            tail->next=s;
            tail=tail->next;
            tail->next=f;
            tail=tail->next;
            tail->next=NULL;
        }
        if(curr){
            tail->next=curr;
        }
        ListNode* res= dummy->next;
        return res;
    }
};

