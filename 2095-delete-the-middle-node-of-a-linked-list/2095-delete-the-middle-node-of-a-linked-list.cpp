class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr; // Handling edge cases: empty list or single node list
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move fast pointer two steps at a time and slow pointer one step at a time
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Skip the middle node
        if (prev) {
            prev->next = slow->next;
        } else { // Handling the case where the list has only two nodes
            head = head->next;
        }

        delete slow; // Free the memory allocated for the middle node
        return head;
    }
};
