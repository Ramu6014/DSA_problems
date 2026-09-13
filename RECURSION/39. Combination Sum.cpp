//problem link: https://leetcode.com/problems/combination-sum/
//timeComplexity: o(2^t)
//spaceComplexity: o(no.of.combinations)

class Solution {
    void func(int indx,vector<int>&ds,vector<int>&candidates,vector<vector<int>>&ans,int target){
        if(indx>=candidates.size()){
            if(target==0)ans.push_back(ds);
            return;
        }
        if(candidates[indx]<=target){
            ds.push_back(candidates[indx]);
            func(indx,ds,candidates,ans,target-candidates[indx]);
            ds.pop_back();
        }
        func(indx+1,ds,candidates,ans,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,ds,candidates,ans,target);
        return ans;
    }
};