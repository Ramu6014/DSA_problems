//problem link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/?envType=daily-question&envId=2026-08-31
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL)return {-1,-1};
        ListNode*temp=head->next;
        ListNode*prevNode=head;
        int cnt=1;
        int stPos=-1,endPos=-1;
        int minDist=INT_MAX;
        int maxDist=INT_MIN;
        while(temp->next!=NULL){
            cnt++;
            ListNode*nextNode=temp->next;
            if((temp->val>prevNode->val && temp->val>nextNode->val) || (temp->val<prevNode->val &&  temp->val<nextNode->val)){
                if(stPos==-1){
                    stPos=cnt;
                    endPos=cnt;
                     }
                else{
                    minDist=min(minDist,cnt-endPos);
                    endPos=cnt;
                }
            }
            prevNode=temp;
            temp=temp->next;
        }
        return minDist==INT_MAX?vector<int>({-1,-1}):vector<int>({minDist,endPos-stPos});
    }
};