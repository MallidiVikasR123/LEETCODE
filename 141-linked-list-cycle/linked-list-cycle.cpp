/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        while(temp)
        {
            if(temp->val==(-10000000))
            {
                return 1;
            }
            temp->val=-10000000;
            temp=temp->next;
        }
        return 0;
    }
};