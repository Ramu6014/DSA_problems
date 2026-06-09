//problem link: https://leetcode.com/problems/maximum-total-subarray-value-i/?envType=daily-question&envId=2026-06-09
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
    public long maxTotalValue(int[] nums, int k) {
        int n=nums.length;
        int maxi=Integer.MIN_VALUE;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            mini=Math.min(mini,nums[i]);
            maxi=Math.max(maxi,nums[i]);
        }
        long val=maxi-mini;
        long sum=val*k;
        return sum;
    }
}