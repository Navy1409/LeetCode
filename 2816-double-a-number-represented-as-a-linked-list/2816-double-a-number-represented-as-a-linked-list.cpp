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
    
    int car;
    
    public void doubleUtil(ListNode head) {
        if (head == null) return;
        
        doubleUtil(head.next);
        
        int cur = 2 * head.val + car;
        car = cur / 10;
        
        head.val = cur % 10;
    }
    
    public ListNode doubleIt(ListNode head) {
        car = 0;
        doubleUtil(head);

        return (car == 0) ? head : new ListNode(car, head);
    }
}