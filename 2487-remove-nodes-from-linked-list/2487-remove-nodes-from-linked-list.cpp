class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
          if (!head) return nullptr;

        stack<int> t;
        ListNode* curr = head;

        // Push values to the stack in non-increasing order
        while (curr) {
            while (!t.empty() && t.top() < curr->val) {
                t.pop();
            }
            t.push(curr->val);
            curr = curr->next;
        }

        ListNode* temp = new ListNode(t.top());
        t.pop();

        // Construct the result linked list using values from the stack
        while (!t.empty()) {
            ListNode* newNode = new ListNode(t.top());
            t.pop();
            newNode->next=temp;
            temp=newNode;
        }
        return temp;
    }
};