//problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
//timeComplexity: O(log(n))
//spaceComplexity: o(1)

class Solution {
    public int findMin(int[] nums) {
        int n=nums.length;
        int low=0,high=n-1;
        int el=Integer.MAX_VALUE;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                el=Math.min(el,nums[low]);
                low++;
                high--;
            }
            else if(nums[low]<=nums[mid]){
                el=Math.min(el,nums[low]);
                low=mid+1;
            }
            else{
                el=Math.min(el,nums[mid]);
                high=mid-1;
            }
        }
        return el;
    }
}