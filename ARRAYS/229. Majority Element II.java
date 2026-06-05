//problem link: https://leetcode.com/problems/majority-element-ii/
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            freq.put(nums[i],freq.getOrDefault(nums[i],0)+1);
        }
        List<Integer>ans=new ArrayList<>();
        for(Map.Entry<Integer,Integer>it: freq.entrySet()){
            if(it.getValue()>n/3){
                ans.add(it.getKey());
            }
        }
        return ans;
    }
}