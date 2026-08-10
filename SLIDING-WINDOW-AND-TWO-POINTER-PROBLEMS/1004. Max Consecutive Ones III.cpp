//problem link: https://leetcode.com/problems/max-consecutive-ones-iii/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int maxLen=0;
        int zeroes=0;
        while(r<n){
            if(nums[r]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};