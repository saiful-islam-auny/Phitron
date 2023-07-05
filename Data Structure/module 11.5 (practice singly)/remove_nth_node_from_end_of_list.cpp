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
//     int size(ListNode* head)
//     {
//         ListNode* temp = head;
//         int count=0;
//         while(temp!=NULL)
//         {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
    
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(size(head)==n)
//         {
//             ListNode* del = head;
//             head= head->next;
//             delete del;
//         }
//         else
//         {
//             ListNode* temp = head;
//             for(int i=1; i<=size(head)-(n+1); i++)
//             {
//                 temp = temp->next;
//             }
//             ListNode* del = temp->next;
//             temp->next = temp->next->next;
//             delete del;
//         }
//         return head;
//     }
// };