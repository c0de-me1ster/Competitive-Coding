// Given the head of a linked list, remove the nth node from the end of the list and return its head.


// Solution : 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        ListNode* p=head,* q=head;
        int count=0;
        while(q){
            count++;
            q=q->next;
        }
        count=count-n+1;
        q=head;
        for(int i=1;i<count;i++){
             p=q;
            q=q->next;

        }
        if(q==head) head=head->next;
        p->next=q->next;
        return head;
    }
};
