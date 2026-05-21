//problem link: https://leetcode.com/problems/largest-number-at-least-twice-of-others/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public int dominantIndex(int[] nums) {
        int n=nums.length;
        int maxi=Integer.MIN_VALUE;
        int indx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                indx=i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]*2>maxi && nums[i]!=maxi){
                return -1;
            }
        }
        return indx;
    }
}