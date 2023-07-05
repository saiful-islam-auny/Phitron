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
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head==NULL)
//             return head;

//         while(head!=NULL  && head->val == val )
//         {
//             ListNode* dele = head;
//             head = head->next;
//             delete dele;
//         }

//         ListNode* temp = head;
//         while(temp!=NULL && temp->next!=NULL)
//         {
//         if(temp->next->val == val)
//             {
//                 ListNode* dele = temp->next;
//                 temp->next = temp->next->next;
//                 delete dele;
//             }
//         else
//             temp= temp->next;
//         }

//         return head;
//     }
// };