//problem link: https://leetcode.com/problems/merge-two-sorted-lists/
//timeComplexity: O(n+m)
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
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode*dummyNode=new ListNode(-1);
        ListNode*curr=dummyNode;
        ListNode*t1=list1;
        ListNode*t2=list2;
        while(t1!=NULL && t2!=NULL){
            ListNode*nextNode;
            if(t1->val<=t2->val){
                nextNode=t1->next;
                t1->next=NULL;
                curr->next=t1;
                t1=nextNode;
            }
            else{
                nextNode=t2->next;
                t2->next=NULL;
                curr->next=t2;
                t2=nextNode;
            }
            curr=curr->next;
        }
        if(t1)curr->next=t1;
        if(t2)curr->next=t2;
        return dummyNode->next;
    }
};