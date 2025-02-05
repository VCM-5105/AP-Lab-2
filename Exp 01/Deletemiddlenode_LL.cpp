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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* prev=nullptr;
        ListNode* ans= head;
        ListNode* temp=head;
        while(temp!=nullptr&& temp->next!=nullptr){
            prev=ans;
            temp=temp->next->next;
            ans=ans->next;
        }
        ListNode* temp2=ans;
        prev->next=ans->next;
        delete temp2;
        return head;

    }
};