class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if (!head) return nullptr;
        
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->next->val > curr->val) {
                ListNode* temp=curr->next;;
                curr->val=curr->next->val;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
         if (head->val < head->next->val) {
            head = head->next;
        }
        
        return head;
    }
};