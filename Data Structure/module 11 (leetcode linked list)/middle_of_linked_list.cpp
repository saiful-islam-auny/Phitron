// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* s = head;
//         ListNode* f = head;
//         while(f!=NULL && f->next != NULL)
//         {
//             s = s->next;
//             f = f->next->next;
//         }        
//         return s;
//     }
// };

// class Solution {
// public:
//     int size(ListNode* head)
//     {
//         int count=0;
//         ListNode *temp = head;
//         while(temp!=NULL)
//         {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         for(int i=1; i<=size(head)/2; i++)
//         {
//             temp = temp->next;
//         }
//         return temp;    
//     }
// };