//problem link: https://leetcode.com/problems/rotate-list/?envType=daily-question&envId=2026-05-05
//timeComplexity: O(n)
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        k=k%len;
        if(k==0){
            return head;
        }
        ListNode*prevNode=NULL;
        int cnt=0;
        temp=head;
        while(temp!=NULL){
            if(cnt==len-k){
                break;
            }
            prevNode=temp;
            temp=temp->next;
            cnt++;
        }
        prevNode->next=NULL;
        ListNode*newHead=temp;
        ListNode*curr=newHead;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=head;
        return newHead;
    }
};