//problem link: https://leetcode.com/problems/maximum-subarray/
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int maxSum=Integer.MIN_VALUE;
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxSum=Math.max((int)sum,maxSum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
}