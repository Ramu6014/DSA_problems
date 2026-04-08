//problem link: https://leetcode.com/problems/minimum-number-game/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<n;i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }
        return ans;
    }
};