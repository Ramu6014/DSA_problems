//problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//timeComplexity: o(n)
//spaceCompelxity: O(1)

class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int lastIndx=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[lastIndx]){
                if(lastIndx+1 != i){
                    int temp=nums[i];
                    nums[i]=nums[lastIndx+1];
                    nums[lastIndx+1]=temp;
                }
                lastIndx++;
            }
        }
        return lastIndx+1;
    }
}