//problem link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//timeComplexity: O(n)
//spaceComplexity: O(1)

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
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
}