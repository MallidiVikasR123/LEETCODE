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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL or head->next->next==NULL) return head;
        ListNode *temp=head,*temp1=head->next,*e=temp1;
        while(temp->next!=NULL and temp->next->next!=NULL)
        {
            temp->next=temp->next->next;
            temp=temp->next;
            temp1->next=temp1->next->next;
            temp1=temp1->next;
        }
        temp->next=e;
        return head;
        
    }
};