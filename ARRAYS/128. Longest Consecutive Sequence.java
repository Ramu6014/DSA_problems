//problem link: https://leetcode.com/problems/longest-consecutive-sequence/
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
    public int longestConsecutive(int[] nums){
        int n=nums.length;
        if(n==0){
            return 0;
        }
        HashSet<Integer>st=new HashSet<>();
        for(int i=0;i<n;i++){
            st.add(nums[i]);
        }
        int maxLen=1;
        for(Integer it: st){
            int x=it;
            if(!st.contains(x-1)){
                int cnt=0;
                while(st.contains(x)){
                    cnt++;
                    x=x+1;
                }
                maxLen=Math.max(maxLen,cnt);
            }
        }
        return maxLen;
    }
}