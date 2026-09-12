//problem link: https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-i/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]].push_back(i);
        }
        int cnt=0;
        for(auto it: freq){
            if(it.second.size()==3){
                if(it.second[1]-it.second[0] == it.second[2]-it.second[1]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};