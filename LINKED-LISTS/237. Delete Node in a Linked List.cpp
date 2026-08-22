//problem link: https://leetcode.com/problems/delete-node-in-a-linked-list/
//timeComplexity: o(1)
//spaceComplexity: o(1)

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
    void deleteNode(ListNode* node) {
        ListNode*nextNode=node->next;
        node->val=nextNode->val;
        node->next=nextNode->next;
    }
};