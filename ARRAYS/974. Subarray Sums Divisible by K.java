//problem link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
//timeComplexity: O(n)
//spaceComplexity: o(k)

class Solution {
    public int subarraysDivByK(int[] nums, int k){
        int n=nums.length;
        long sum=0;
        int cnt=0;
        HashMap<Integer,Integer>freq=new HashMap<>();
        freq.put(0,1);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=(int)sum%k;
            if(rem<0){
                rem+=k;
            }
            if(freq.containsKey(rem)){
                cnt=cnt+freq.get(rem);
                freq.put(rem,freq.get(rem)+1);
            }
            else{
                freq.put(rem,1);
            }
        }
        return cnt;
    }
}