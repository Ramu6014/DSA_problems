//problem link: https://leetcode.com/problems/rank-transform-of-an-array/
//timeComplexity: o(nlog(n))
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>nums=arr;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>rank;
        int cnt=1;
        for(int i=0;i<n;i++){
            if(rank.find(nums[i])==rank.end()){
                rank[nums[i]]=cnt;
                cnt++;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(rank[arr[i]]);
        }
        return ans;
    }
};