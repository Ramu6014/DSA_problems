//problem link: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/?envType=daily-question&envId=2026-04-11
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]].push_back(i);
    }
    int minDist = INT_MAX;
    for(auto &it : mp){
        vector<int> &v = it.second;
        if(v.size() >= 3){
            for(int i = 0; i + 2 < v.size(); i++){
                int d = abs(v[i] - v[i+1]) 
                      + abs(v[i+1] - v[i+2]) 
                      + abs(v[i+2] - v[i]);
                
                minDist = min(minDist, d);
            }
        }
    }
    return minDist == INT_MAX ? -1 : minDist;
    }
};