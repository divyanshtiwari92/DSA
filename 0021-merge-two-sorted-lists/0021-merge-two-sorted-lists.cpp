class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if any list is empty, return the other one
        if(!list1) return list2;
        if(!list2) return list1;

        // create a new head for merged list
        ListNode* head = NULL;

        // pick the smaller value first
        if(list1->val < list2->val) {
            head = list1;
            list1 = list1->next;
        } else {
            head = list2;
            list2 = list2->next;
        }

        // pointer to build the merged list
        ListNode* tail = head;

        // merge both lists
        while(list1 && list2) {
            if(list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // attach the remaining nodes
        if(list1) tail->next = list1;
        if(list2) tail->next = list2;

        return head;
    }
};
