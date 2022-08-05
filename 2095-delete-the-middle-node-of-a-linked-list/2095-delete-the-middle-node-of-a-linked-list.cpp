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
       ListNode* temp= head;
       int n=0;
       while(temp->next!=NULL)
       {
           temp=temp->next;
           n++;
       }
       n++;
       if(n==1)
           return NULL;
       else{
       temp=head;
       for(int i=1;i<n/2;i++)
       {
           temp=temp->next;
       }
       temp->next=temp->next->next;
       return head;
    }
  }
};