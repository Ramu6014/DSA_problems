//problem link: https://leetcode.com/problems/3sum/
//timeComplexity: o(n^2)
//spaceComplexity: O(Triplets)

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        HashSet<List<Integer>>st=new HashSet<>();
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    st.add(new ArrayList<>(
                        Arrays.asList(nums[i],nums[j],nums[k])
                    ));
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        List<List<Integer>>ans=new ArrayList<>(st);
        return ans;
    }
}