//problem link: https://leetcode.com/problems/sort-list/
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

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
    ListNode*findMiddle(ListNode*temp){
        ListNode*slow=temp;
        ListNode*fast=temp->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*mergeList(ListNode*t1,ListNode*t2){
        ListNode*dummyNode=new ListNode(-1);
        ListNode*curr=dummyNode;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                curr->next=t1;
                t1=t1->next;
            }
            else{
                curr->next=t2;
                t2=t2->next;
            }
            curr=curr->next;
            curr->next=NULL;
        }
        if(t1)curr->next=t1;
        if(t2)curr->next=t2;
        return dummyNode->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode*middle=findMiddle(head);
        ListNode*leftHead=head;
        ListNode*rightHead=middle->next;
        middle->next=NULL;
        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return mergeList(leftHead,rightHead);
    }
};