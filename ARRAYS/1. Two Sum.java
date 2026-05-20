//problem link: https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array
//timeComplexity: O(n)
//spaceCompelxity: O(n)

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            freq.put(nums[i],i);
        }
        for(int i=0;i<nums.length;i++){
            int val=target-nums[i];
            if(freq.containsKey(val) && i!=freq.get(val)){
                return new int[]{i,freq.get(val)};
            }
        }
        return new int[]{-1,-1};
    }
}