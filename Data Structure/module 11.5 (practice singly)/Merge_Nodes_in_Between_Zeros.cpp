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
//     ListNode* mergeNodes(ListNode* head) {
//         head = head->next;
//         ListNode* temp = head;
//         while(temp->next->next!=NULL)
//         {
//             if(temp->next->val!=0)
//             {
//                 temp->val = temp->val + temp->next->val;
//                 ListNode* del = temp->next;
//                 temp->next = temp->next->next;
//                 delete del;
//             }
//             else
//             {
//                 ListNode* del = temp->next;
//                 temp->next = temp->next->next;
//                 delete del;
//                 temp = temp->next;
//             }
//         }
//         temp->next = temp->next->next;
        
//         return head;
//     }
// };