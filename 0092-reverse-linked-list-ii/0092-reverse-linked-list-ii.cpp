class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (!head || !head->next || l == r) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* before = dummy;

        // Traverse to the (l-1)th node
        for (int i = 1; i < l; ++i) {
            before = before->next;
        }

        // Traverse to the (r+1)th node
        ListNode* tail = before->next;
        for (int i = l; i <= r; ++i) {
            tail = tail->next;
        }

        // Reverse the sublist from node l to node r
        ListNode* prev = nullptr;
        ListNode* curr = before->next;
        ListNode* fd = nullptr;
        while (curr != tail) {
            fd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fd;
        }

        // Connect the reversed sublist back to the original list
        before->next->next = tail;
        before->next = prev;

        return dummy->next;
    }
};
