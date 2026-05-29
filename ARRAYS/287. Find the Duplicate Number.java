//problem link: https://leetcode.com/problems/find-the-duplicate-number/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public int findDuplicate(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            freq.put(nums[i],freq.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer>it: freq.entrySet()){
            if(it.getValue()>=2){
                return it.getKey();
            }
        }
        return n;
    }
}