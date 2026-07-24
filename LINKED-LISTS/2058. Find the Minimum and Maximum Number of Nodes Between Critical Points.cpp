//problem link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
//timeComplexity: O(n)
//spaceComplexity: o(n)

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
        vector<int>ans;
        ListNode*prev=head;
        ListNode*temp=head->next;
        int cnt=1;
        int minDist=INT_MAX,maxDist=-1;
        while(temp!=NULL && temp->next!=NULL){
            cnt++;
            ListNode*nextNode=temp->next;
            if(temp->val>prev->val && temp->val>nextNode->val){
                if(ans.size()!=0){
                minDist=min(minDist,cnt-ans.back());
            }
                ans.push_back(cnt);
            }
            else if(temp->val<prev->val && temp->val<nextNode->val){
                if(ans.size()!=0){
                minDist=min(minDist,cnt-ans.back());
            }
                ans.push_back(cnt);
            }
            prev=temp;
            temp=temp->next;
        }
        int n=ans.size();
        if(n==1){
            return {-1,-1};
        }
        if(n!=0){
        maxDist=ans[n-1]-ans[0];
        }
        if(minDist==INT_MAX){
            minDist=-1;
        }
        return {minDist,maxDist};
    }
};