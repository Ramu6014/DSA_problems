//problem link: https://leetcode.com/problems/two-sum/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            int val=target-nums[i];
            if(freq.find(val)!=freq.end()){
                return {i,freq[val]};
            }
            freq[nums[i]]=i;
        }
        return {-1,-1};
    }
};
