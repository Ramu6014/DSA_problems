//problem link: https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
    public int minimumSwaps(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=n-1;
        int cnt=0;
        while(i<j){
            if(nums[i]==0 && nums[j]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j--;
                cnt++;
            }
            else if(nums[i]==0 && nums[j]==0){
                j--;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
}