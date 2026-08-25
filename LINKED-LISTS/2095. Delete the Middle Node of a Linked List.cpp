//problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
//timeComplexity: O(n)
//spaceComplexity: o(1)

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
        if(head->next==NULL){
            return NULL;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prevNode=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prevNode=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prevNode->next=slow->next;
        slow->next=NULL;
        return head;
    }
};