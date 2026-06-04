//problem link: https://leetcode.com/problems/next-permutation/
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
    public void reverse(int nums[],int st,int end){
        while(st<end){
            int temp=nums[st];
            nums[st]=nums[end];
            nums[end]=temp;
            st++;
            end--;
        }
        return;
    }
    public void nextPermutation(int[] nums) {
        int n=nums.length;
        int indx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                indx=i;
                break;
            }
        }
        if(indx==-1){
            reverse(nums,0,n-1);
            return;
        }
        for(int i=n-1;i>=indx;i--){
            if(nums[i]>nums[indx]){
                int temp=nums[i];
                nums[i]=nums[indx];
                nums[indx]=temp;
                break;
            }
        }
        reverse(nums,indx+1,n-1);
        return;
    }
}