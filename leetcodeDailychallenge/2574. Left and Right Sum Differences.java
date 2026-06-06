//problem link: https://leetcode.com/problems/left-and-right-sum-differences/?envType=daily-question&envId=2026-06-06
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n=nums.length;
        int rightSum[]=new int[n];
        int sum=0;
        for(int i=n-1;i>=0;i--){
            rightSum[i]=sum;
            sum+=nums[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            int val=Math.abs(leftSum-rightSum[i]);
            leftSum+=nums[i];
            nums[i]=val;
        }
        return nums;
    }
}