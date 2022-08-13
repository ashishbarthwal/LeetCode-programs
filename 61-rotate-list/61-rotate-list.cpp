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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return head;
        }
        else{
            int limit=0;
            ListNode* lim= head;
            while(lim!=NULL)
            {
                lim=lim->next;
                limit++;
            }
            k=k%limit;
        while(k!=0)
        {
        ListNode* dummy= head;
        ListNode* tail= head;
        ListNode* x= head;
        while(dummy->next!=NULL)
        {
            dummy=dummy->next;
        }
        while(x->next->next!=NULL)
        {
            x=x->next;
        }
        dummy->next=head;
        head=dummy;
        x->next=NULL;
        k--;
    }
    return head;
  }
 }
};