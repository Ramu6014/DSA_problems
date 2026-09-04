//problem link: https://leetcode.com/problems/smallest-stable-index-i/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            freq[i]=mini;
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            int val=maxi-freq[i];
            if(val<=k)return i;
        }
        return -1;
    }
};