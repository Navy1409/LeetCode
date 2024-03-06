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
    ListNode *detectCycle(ListNode *temp) {
        vector<ListNode *>po;
        if(temp==NULL){
            return NULL;
        }
        while(temp->next!=NULL){
            if(find(po.begin(),po.end(),temp)!=po.end()){
                return temp;
            }
            po.push_back(temp);
            temp=temp->next;
        }
        return NULL;
    }
};