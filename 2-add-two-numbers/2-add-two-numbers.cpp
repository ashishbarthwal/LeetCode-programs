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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *temp = head;       // Gonna need 2 to start
        int carry = 0;
         while(l1!=NULL || l2!=NULL || carry)
         {
             int sum=0;
             if(l1!=NULL){
                 sum = sum + l1 -> val;
                 l1 = l1 -> next;
                 
             }
             if(l2!=NULL){
                 sum = sum + l2 -> val;
                 l2 = l2 -> next;
             }
             sum  = sum + carry;   //gotta have carry before sum coz it's 0
             carry = sum/10;
             ListNode *node =new ListNode(sum%10);
             temp->next = node;    //placing the new node
             temp = temp->next;    //temp comes to the current sum node
         }
        return head->next;
    }
};