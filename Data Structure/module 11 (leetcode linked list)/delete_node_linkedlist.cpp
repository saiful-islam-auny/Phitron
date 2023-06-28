// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val;    //Going to the next node of given node and copying the value of next node to given node
//         ListNode* dlt = node->next; //storing the next node for delete from memory
//         node->next = node->next->next;  //linking the node with the second next node
//         delete dlt; //deleting the next node that stored in privious
//     }
// };