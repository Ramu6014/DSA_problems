//problem link: https://leetcode.com/problems/smallest-stable-index-i/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>right(n);
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            right[i]=mini;
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            if((maxi-right[i])<=k){
                return i;
            }
        }
        return -1;
    }
};