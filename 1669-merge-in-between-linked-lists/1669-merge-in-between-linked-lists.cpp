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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tail2;
        ListNode* temp2=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        tail2=temp2;
        temp2=list1;
        while(b--){
            temp2=temp2->next;
        }
        tail2->next=temp2->next;
        ListNode* temp1=list1, *prev;
        while(a--){
            prev=temp1;
            temp1=temp1->next;
        }
        prev->next=list2;
        return list1;
    }
};