// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;
//         ListNode* ans = new ListNode();
//         int a;
//         if (temp1 == NULL && temp2 == NULL) {
//             return NULL;
//         } else {
//             if (temp1->val >= temp2->val) {
//                 a = temp1->val;
//                 temp1 = temp1->next;
//             }
//             else {
//                 a = temp2->val;
//                 temp2 = temp2->next;
//             }
//             ans->val=a;
//             ListNode* tail = ans;
//             while (temp1 != nullptr && temp2 != nullptr) {
//                 int nn;
//                 if (temp1->val > temp2->val) {
//                     nn = temp1->val;

//                     temp1 = temp1->next;
//                 } else {
//                     nn = temp2->val;

//                     temp2 = temp2->next;
//                 }
//                 ListNode* newnode = new ListNode(nn);
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//             if(temp1==NULL){
//                 ListNode* newnode = new ListNode(temp2->val);
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//             if(temp2==NULL){
//                 ListNode* newnode = new ListNode(temp1->val);
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy =
            new ListNode(); // Dummy node to simplify list construction
        ListNode* tail =
            dummy; // Pointer to the current node in the merged list

        // Traverse both lists until one of them becomes empty
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Append the remaining nodes from the non-empty list
        if (list1) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Store the head of the merged list (next of dummy node)
        ListNode* mergedList = dummy->next;

        // Delete the dummy node to avoid memory leak
        delete dummy;

        return mergedList;
    }
};
