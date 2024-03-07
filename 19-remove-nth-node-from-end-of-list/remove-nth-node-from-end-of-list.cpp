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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=0;
        ListNode* temp=head;
        while(temp)
        {
            s+=1;
            temp=temp->next;
        }
        if(s==1 and n==0) return head;
        if(s==1 and n==1) return NULL;
        s=s-n;
        temp=NULL;
        if(s==0) head=head->next;
        else{
        while(s)
        {
            if(temp==NULL) temp=head;
            else temp=temp->next;
            s--;
        }
        temp->next=temp->next->next;
        }
        return head;
    }
};