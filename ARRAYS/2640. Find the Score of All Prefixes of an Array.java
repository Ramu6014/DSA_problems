//problem link: https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public long[] findPrefixScore(int[] nums) {
        int n=nums.length;
        long ans[]=new long[n];
        long sum=0;
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            maxi=Math.max(maxi,nums[i]);
            int conver=nums[i]+maxi;
            sum+=conver;
            ans[i]=sum;
        }
        return ans;
    }
}   