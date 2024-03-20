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
    ListNode* merge2Lists(ListNode* l1, ListNode* l2){
        ListNode* dummy= new ListNode();
        ListNode* tail= dummy;
        while(l1&&l2){
            if(l1->val<=l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1){
            tail->next=l1;
        }
        else{
            tail->next=l2;
        }
        ListNode *res= dummy->next;
        delete dummy;
        return res;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len=lists.size();
        if(len==0){
            return NULL;
        }
        ListNode* head=lists[0];
        for(int i=1; i<len; i++){
            head=merge2Lists(head, lists[i]);
        }
        return head;
    }
};