class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* ans=head;
       ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            temp=temp->next->next;
            ans=ans->next;
        }
        return ans;     
    }
};