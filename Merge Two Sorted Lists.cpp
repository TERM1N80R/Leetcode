class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        while(l1 && l2){
            if(l1->val > l2->val){
                cur->next = l2;
                l2 = l2->next;
            }else{
                cur->next = l1;
                l1 = l1->next;
            }
            cur = cur->next;
        }
        if(l1)
            cur->next = l1;
        if(l2)
            cur->next = l2;
        cur = head->next;
        delete head;
        return cur;
    }
};