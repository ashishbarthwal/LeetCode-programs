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
    ListNode* middleNode(ListNode* head) {
        ListNode* dummy=head;
        int n=0;
        while(dummy->next!=NULL)
        {
            dummy=dummy->next;
            n++;
        }
        n++;
        if(n==1)
            return head;
        else{
        int x=n/2;
        for(int i=0;i<x;i++)
        {
            head=head->next;
        }
        return head;
    }
  }
};