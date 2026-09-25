//problem link: https://leetcode.com/problems/permutations/
//timeComplexity: o(n!*n)
//spaceComplexity: O(n)

class Solution {
    void func(int indx,vector<int>&nums,vector<vector<int>>&ans){
        if(indx>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=indx;i<nums.size();i++){
            swap(nums[i],nums[indx]);
            func(indx+1,nums,ans);
            swap(nums[i],nums[indx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        func(0,nums,ans);
        return ans;
    }
};