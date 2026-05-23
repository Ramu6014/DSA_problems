//problem link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/?envType=daily-question&envId=2026-05-23
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public static void reverse(int nums[],int st,int end){
        while(st<end){
            int temp=nums[st];
            nums[st]=nums[end];
            nums[end]=temp;
            st++;
            end--;
        }
        return;
    }
    public boolean check(int[] nums) {
        int n=nums.length;
        int k=-1;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                k=i;
                break;
            }
        }
        if(k==-1){
            return true;
        }
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        reverse(nums,0,n-1);
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }
}