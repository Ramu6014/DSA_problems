//problem link: https://leetcode.com/problems/permutations/
//timeComplexity: o(n! * n)
//spaceComplexity: o(1)

class Solution {
    public void swap(int first,int second,int nums[]){
        int temp=nums[first];
        nums[first]=nums[second];
        nums[second]=temp;
        return;
    }
    public void func(int indx,int nums[],List<List<Integer>>ans){
        if(indx==nums.length){
            ArrayList<Integer>temp=new ArrayList<>();
            for(int num: nums){
                temp.add(num);
            }
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i=indx;i<nums.length;i++){
            swap(i,indx,nums);
            func(indx+1,nums,ans);
            swap(i,indx,nums);
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        int n=nums.length;
        List<List<Integer>>ans=new ArrayList<>();
        func(0,nums,ans);
        return ans;
    }
}