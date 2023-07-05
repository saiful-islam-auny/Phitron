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
//     int size(ListNode *head)    //this function will return the length of linked list
//     {
//         int count = 0;
//         ListNode *temp = head;
//         while (temp != NULL)
//         {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     ListNode* swapNodes(ListNode* head, int k) {

//     int length = size(head); //length will get the size of linked list

//     ListNode *temp1 = head; //temp1 for storing fromn left postion node
//     ListNode *temp2 = head; //temp2 for storing fromn right postion node

//     for (int i = 1; i <= k - 1; i++)
//     {
//         temp1 = temp1->next;
//     }
//     for (int i = 1; i <= length - k; i++)
//     {
//         temp2 = temp2->next;
//     }
//     swap(temp1->val,temp2->val);    //swaping the temp1 and temp2 node value

//     return head;
        
//     }
// };