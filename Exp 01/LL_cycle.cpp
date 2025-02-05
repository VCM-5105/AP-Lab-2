 /* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr){
            return false;
        }
       ListNode* ans=head;
       ListNode* temp=head;
       while(temp!=nullptr && temp->next!=nullptr){
            temp=temp->next->next;
            ans=ans->next;
            if(ans==temp){
                return true;
            }
       }
       return false; 
    }
};