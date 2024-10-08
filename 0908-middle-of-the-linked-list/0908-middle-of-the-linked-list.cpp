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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp=head;
//         int cnt=0;
//         while(temp!=NULL){
//             cnt++;
//             temp=temp->next;
//         }
//         int len=cnt/2;
//         temp=head;
//         for(int i=0; i<len; i++){
//             temp=temp->next;
//         }
//         return temp;
//     }
// };