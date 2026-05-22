//problem link: https://leetcode.com/problems/missing-number/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int xor0=0;
        int xor1=0;
        for(int i=0;i<n;i++){
            xor0^=nums[i];
            xor1^=i;
        }
        xor1^=n;
        return xor0^xor1;
    }
}