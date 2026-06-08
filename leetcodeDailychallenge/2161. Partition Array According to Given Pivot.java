//problem link: https://leetcode.com/problems/partition-array-according-to-given-pivot/?envType=daily-question&envId=2026-06-08
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int n=nums.length;
        ArrayList<Integer>left=new ArrayList<>();
        ArrayList<Integer>middle=new ArrayList<>();
        ArrayList<Integer>right=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                left.add(nums[i]);
            }
            else if(nums[i]>pivot){
                right.add(nums[i]);
            }
            else{
                middle.add(nums[i]);
            }
        }
        int ans[]=new int[n];
        //fill left
        for(int i=0;i<left.size();i++){
            ans[i]=left.get(i);
        }
        //fill middle
        for(int i=0;i<middle.size();i++){
            ans[left.size()+i]=middle.get(i);
        }
        //fill right
        for(int i=0;i<right.size();i++){
            ans[left.size()+middle.size()+i]=right.get(i);
        }
        return ans;
    }
}