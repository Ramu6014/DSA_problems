//problem link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/?envType=daily-question&envId=2026-05-29
//timeComplexity: O(n*k)
//spaceComplexity: O(1)

class Solution {
    public int minElement(int[] nums) {
        int n=nums.length;
        int minEl=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            int sum=0;
            while(nums[i]>0){
                sum=sum+nums[i]%10;
                nums[i]/=10;
            }
            nums[i]=sum;
            minEl=Math.min(minEl,sum);
        }
        return minEl;
    }
}