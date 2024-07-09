//iterative  O(n) + O(1)
ListNode* reverseList(ListNode* head) {
        ListNode* curr=head , *nextnode=NULL,*prev=NULL;

        while(curr){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;

}

//recursive O(n) + O(n)

ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* h2 = reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return h2;
    }