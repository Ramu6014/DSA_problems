//problem link: https://leetcode.com/problems/single-number/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public int singleNumber(int[] nums) {
        int n=nums.length;
        int xor0=0;
        for(int i=0;i<n;i++){
            xor0^=nums[i];
        }
        return xor0;
    }
}