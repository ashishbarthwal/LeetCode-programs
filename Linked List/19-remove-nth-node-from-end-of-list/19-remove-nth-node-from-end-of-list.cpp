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
        ListNode* temp= head;
        int x=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            x++;
        }
        if(x==0)
        {
            return NULL;
        }
        else{
            if(n>x)
            {
                head=head->next;
                return head;
            }
        temp=head;
        for(int i=0;i<x-n;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
  }
};