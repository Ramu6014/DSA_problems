//problem link: https://leetcode.com/problems/sort-colors/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
    public void sortColors(int[] nums) {
        //dutch national flag algorithm
        int n=nums.length;
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
        }
        return;
    }
}