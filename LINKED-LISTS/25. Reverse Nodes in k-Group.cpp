//problem link: https://leetcode.com/problems/reverse-nodes-in-k-group/
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
    ListNode* reverseList(ListNode*temp){
        ListNode*last=NULL;
        while(temp!=NULL){
            ListNode*nextNode=temp->next;
            temp->next=last;
            last=temp;
            temp=nextNode;
        }
        return last;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next==NULL || k==1){
            return head;
        }
        ListNode*stNode=head;
        ListNode*temp=head;
        ListNode*prevNode=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            ListNode*nextNode=temp->next;
            if(cnt%k==0){
                temp->next=NULL;
                ListNode*newHead=reverseList(stNode);
                if(head==stNode){
                    head=newHead;
                }
                else{
                    prevNode->next=newHead;
                }
                prevNode=stNode;
                stNode=nextNode;
            }
            temp=nextNode;
        }
        prevNode->next=stNode;
        return head;
    }
};  