//problem link: https://leetcode.com/problems/majority-element/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int cnt=0;
        int el=-1;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return el;
    }
}