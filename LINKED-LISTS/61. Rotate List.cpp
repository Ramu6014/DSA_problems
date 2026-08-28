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
        if(head==NULL || head->next==NULL){
            return head;
        }
        int len=1;
        ListNode*tail=head;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        k=k%len;
        if(k==0)return head;
        tail->next=head;
        ListNode*temp=head;
        int cnt=len-k;
        while(temp!=NULL){
            cnt--;
            if(cnt==0){
                head=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        return head;

    }
};