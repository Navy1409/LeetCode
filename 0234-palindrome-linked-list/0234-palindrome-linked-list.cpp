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
    ListNode* reverse(ListNode* &head){
        ListNode*prev=NULL, *curr=head, *forw=NULL;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    int listLen(ListNode* &head){
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    bool isPalindrome(ListNode* head) {
        int len=listLen(head);
        ListNode* slow=head, *fast=head;
        if(len%2==0){
            while(fast->next->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
        }
        else{
            while(fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
        }
        ListNode* newHead= reverse(slow->next);
        ListNode* newHeadTemp=newHead;
        ListNode* headTemp=head;
        bool ans=true;
        while(newHeadTemp!=NULL){
            if(newHeadTemp->val != headTemp->val){
                ans=false;
            }
            newHeadTemp=newHeadTemp->next;
            headTemp=headTemp->next;
        }
        return ans;
    }
};

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> vals;
//         ListNode* temp=head;
//         while(temp){
//             vals.push_back(temp->val);
//             temp=temp->next;
//         }
//         int l=0, r= vals.size()-1;
//         while(l<r&&vals[l]==vals[r]){
//             l++;
//             r--;
//         }
//         return l>=r;
//     }
// };