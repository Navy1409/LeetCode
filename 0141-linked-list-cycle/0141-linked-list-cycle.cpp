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
        ListNode *temp= head;
        vector<ListNode *>po;
        if(temp==NULL){
            return false;
        }
        while(temp->next!=NULL){
            if(find(po.begin(),po.end(),temp)!=po.end()){
                return true;
            }
            po.push_back(temp);
            temp=temp->next;
        }
        return false;
    }
};