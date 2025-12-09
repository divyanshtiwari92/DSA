/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
                 if(fast == slow){
                         break;
                 }
        }
        if (fast == NULL || fast->next == NULL){
            return NULL;
        }
        ListNode* n1 = head;
        ListNode* n2 = slow;
        while( n1 != n2){
            n1= n1->next;
            n2 = n2->next;
        }
         // int len = 1;
         //  ListNode* curr = n1->next;
         //   while(curr != NULL){
         //       len++;
         //      curr= curr=>next;
         //    }
         //    return len;
        return n1;
        }
    
};