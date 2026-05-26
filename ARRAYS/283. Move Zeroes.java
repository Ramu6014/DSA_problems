//problem link: https://leetcode.com/problems/move-zeroes/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        int l=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                l=i;
                break;
            }
        }
        if(l==-1){
            return;
        }
        int r=l+1;
        while(r<n){
            if(nums[r]!=0){
                int temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
                l++;
            }
            r++;
        }
        return;
    }
}