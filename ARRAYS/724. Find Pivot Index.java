//problem link: https://leetcode.com/problems/find-pivot-index/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int rightSum[]=new int[n];
        int sum=0;
        for(int i=n-1;i>=0;i--){
            rightSum[i]=sum;
            sum+=nums[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            if(leftSum==rightSum[i]){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
}