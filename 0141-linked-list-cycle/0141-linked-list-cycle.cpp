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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool hasCycle(ListNode *temp) {
//         vector<ListNode *>po;
//         if(temp==NULL){
//             return false;
//         }
//         while(temp->next!=NULL){
//             if(find(po.begin(),po.end(),temp)!=po.end()){
//                 return true;
//             }
//             po.push_back(temp);
//             temp=temp->next;
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *slow = head;
//         ListNode *fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };