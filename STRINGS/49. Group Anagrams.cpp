//problem link: https://leetcode.com/problems/group-anagrams/
//timeComplexity: O(n*log(k))
//spaceComplexity: o(nk)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;
        for(auto it: strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            freq[temp].push_back(it);
        }
        vector<vector<string>>ans;
        for(auto it: freq){
            ans.push_back(it.second);
        }
        return ans;
    }
};
