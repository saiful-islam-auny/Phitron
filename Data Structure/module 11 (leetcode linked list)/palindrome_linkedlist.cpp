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
//     void copy_node(ListNode* &head, ListNode* &tail, int val)   //for making copy nodes of head
//     {
//         ListNode* NewNode = new ListNode(val);
//         if(head==NULL)
//         {
//             head = NewNode;
//             tail = NewNode;
//             return;
//         }
//         tail->next = NewNode;
//         tail = NewNode;
//     }

//     void reverse(ListNode* &head, ListNode* cur)    //for reversing
//     {
//         if(cur->next == NULL)
//         {
//             head= cur;
//             return;
//         }
//         reverse(head, cur->next);
//         cur->next->next = cur;
//         cur->next = NULL;
//     }

//     bool isPalindrome(ListNode* head) {
//         ListNode* newhead = NULL;
//         ListNode* newtail = NULL;
//         ListNode* temp = head;

//         while(temp!=NULL)   //making copy nodes of head
//         {
//             copy_node(newhead,newtail,temp->val);
//             temp= temp->next;
//         }

//         reverse(newhead,newhead);   //reversing copy nodes

//         temp = head;
//         ListNode* temp2 = newhead;
//         while(temp!=NULL)   //comparing values of orginal & copy node
//         {
//             if(temp->val!=temp2->val)
//                 return false;

//             temp = temp->next;
//             temp2 = temp2->next;
//         }
//         return true;    //return true because the value of both head and newhead are same

//     }
// };