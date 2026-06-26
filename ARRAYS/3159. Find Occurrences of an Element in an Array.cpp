//problem link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
//timeComplexity: o(n+m)
//spaceComplexity: o(n)

class Solution {
    public int[] occurrencesOfElement(int[] nums, int[] queries, int x) {
        HashMap<Integer,Integer>freq=new HashMap<>();
        int cnt=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==x){
                cnt++;
                freq.put(cnt,i);
            }
        }
        int ans[]=new int[queries.length];
        for(int i=0;i<queries.length;i++){
            if(freq.containsKey(queries[i])){
                ans[i]=freq.get(queries[i]);
            }
            else{
                ans[i]=-1;
            }
        }
        return ans;
    }
}