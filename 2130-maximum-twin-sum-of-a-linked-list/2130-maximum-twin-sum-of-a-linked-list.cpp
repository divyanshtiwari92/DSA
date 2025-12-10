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
public:
  ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;              
            prev = curr;                    
            curr = nextNode;               
        }

        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode*  slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* p2 = reverseList(slow);
        ListNode* p1 = head;
int m = INT_MIN;
        while(p1 != NULL && p2!=NULL){
            int sum = p1->val + p2->val;
            m = max(sum, m);
            p1 = p1->next;
            p2 = p2->next;
        }
        return m;
    }
};