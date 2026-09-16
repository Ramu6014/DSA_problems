//problem link: https://leetcode.com/problems/subsets/
//timeComplexity: o(2^n)
//spaceComplexity: o(n)

class Solution {
    void func(int indx,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(indx>=nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[indx]);
        func(indx+1,nums,ds,ans);
        ds.pop_back();
        func(indx+1,nums,ds,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,nums,ds,ans);
        return ans;
    }
};