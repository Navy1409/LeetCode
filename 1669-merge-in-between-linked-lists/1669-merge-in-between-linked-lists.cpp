class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        
        // Move temp1 to the node at position (a - 1)
        for (int i = 0; i < a - 1; i++) {
            temp1 = temp1->next;
        }
        
        // Find the node at position (b + 1)
        ListNode* temp2 = temp1;
        for (int i = 0; i < b - a + 2; i++) {
            temp2 = temp2->next;
        }
        
        // Find the tail node of list2
        ListNode* tail2 = list2;
        while (tail2->next != nullptr) {
            tail2 = tail2->next;
        }
        
        // Connect the tail of list2 to temp2
        tail2->next = temp2;
        
        // Connect the node at (a - 1) to list2
        temp1->next = list2;
        
        return list1;
    }
};
