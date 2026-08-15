//problem link: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/?envType=daily-question&envId=2026-08-15
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xor0=0;
        for(int i=0;i<n;i++){
            xor0^=nums[i];
        }
        if(xor0!=0){
            return n;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                return n-1;
            }
        }
        return 0;
    }
};