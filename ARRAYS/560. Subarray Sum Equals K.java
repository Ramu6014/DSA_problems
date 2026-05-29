//problem link: https://leetcode.com/problems/subarray-sum-equals-k/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public int subarraySum(int[] nums, int k) {
        int n=nums.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        int cnt=0;
        int sum=0;
        freq.put(0,1);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int val=sum-k;
            if(freq.containsKey(val)){
                cnt+=freq.get(val);
            }
            freq.put(sum,freq.getOrDefault(sum,0)+1);
        }
        return cnt;
    }
}