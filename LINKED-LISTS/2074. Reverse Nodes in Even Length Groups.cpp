//problem link: https://leetcode.com/problems/reverse-nodes-in-even-length-groups/
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
    ListNode*reverseList(ListNode*temp){
        ListNode*last=NULL;
        while(temp!=NULL){
            ListNode*nextNode=temp->next;
            temp->next=last;
            last=temp;
            temp=nextNode;
        }
        return last;
    }
    pair<ListNode*,int> findTail(ListNode*temp,int x){
        int cnt=1;
        while(temp->next!=NULL && cnt<x){
            cnt++;
            temp=temp->next;
        }
        return {temp,cnt};
    }
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(head->next==NULL)return head;
        ListNode*prevNode=head;
        ListNode*temp=head->next;
        ListNode*stNode=head->next;
        int num=2;
        while(temp!=NULL){
            pair<ListNode*,int>pq=findTail(temp,num);
            int len=pq.second;
            temp=pq.first;
            ListNode*nextNode=temp->next;
            if(len%2==0){
                temp->next=NULL;
                ListNode*newHead=reverseList(stNode);
                prevNode->next=newHead;
                prevNode=stNode;
            }
            else{
                prevNode->next=stNode;
                prevNode=temp;
            }
            stNode=nextNode;
            temp=nextNode;
            num++;
        }
        return head;
    }
};