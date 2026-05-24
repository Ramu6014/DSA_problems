//problem link: https://leetcode.com/problems/limit-occurrences-in-sorted-array/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public int[] limitOccurrences(int[] nums, int k) {
        int n=nums.length;
        ArrayList<Integer>arr=new ArrayList<>();
        int prev=nums[0];
        int cnt=1;
        arr.add(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]==prev){
                cnt++;
                if(cnt<=k){
                    arr.add(nums[i]);
                }
                else{
                    continue;
                }
            }
            else{
                arr.add(nums[i]);
                prev=nums[i];
                cnt=1;
            }
        }
        int ans[]=new int[arr.size()];
        for(int i=0;i<arr.size();i++){
            ans[i]=arr.get(i);
        }
        return ans;
    }
}