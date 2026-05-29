//problem link: https://leetcode.com/problems/continuous-subarray-sum/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        int n=nums.length;
        int sum=0;
        HashMap<Integer,Integer>freq=new HashMap<>();
        freq.put(0,-1);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int val=sum%k;
            if(freq.containsKey(val) && i-freq.get(val)>=2){
                return true;
            }
            if(!freq.containsKey(val)){
                freq.put(val,i);
            }
        }
        return false;
    }
}