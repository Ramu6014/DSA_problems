//problem link: https://leetcode.com/problems/merge-k-sorted-lists/
//timeComplexity: O(nlog(k))
//spaceComplexity: O(k)

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
            pq.push({lists[i]->val,lists[i]});
            }
        }
        ListNode*dummyNode=new ListNode(-1);
        ListNode*curr=dummyNode;
        while(!pq.empty()){
            ListNode*temp=pq.top().second;
            pq.pop();
            curr->next=temp;
            curr=curr->next;
            if(temp->next)pq.push({temp->next->val,temp->next});
        }
        return dummyNode->next;
    }
};