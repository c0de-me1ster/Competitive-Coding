class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* q=head;
        while(fast&&fast->next)
        {slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    }
};
