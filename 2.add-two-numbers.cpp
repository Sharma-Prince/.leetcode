/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
        ListNode* head=new ListNode(0);
        ListNode* curr=head;
        int c=0;
        while(l1!=NULL || l2!=NULL){
            int s=(l1==NULL?0:l1->val)+(l2==NULL?0:l2->val)+c;
            c=s/10;
            ListNode* tmp=new ListNode(s%10);
            if(curr==NULL){
                curr=tmp;
            }else{
                curr->next=tmp;
                curr=tmp;
            }
            l1==NULL?0:l1=l1->next;
            l2==NULL?0:l2=l2->next;
        }
        if(c>0)
            curr->next=new ListNode(c);
        return head->next;
    }
};
// @lc code=end

