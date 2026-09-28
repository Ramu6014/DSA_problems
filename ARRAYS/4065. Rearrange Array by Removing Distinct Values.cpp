//problem link: https://leetcode.com/problems/rearrange-array-by-removing-distinct-values/
//timeComplexity: O(nlogk)
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        while(1){
            bool added=false;
            for(auto &it: freq){
                if(it.second>0){
                ans.push_back(it.first);
                added=true;
                it.second--;
                }
            }
            if(!added)break;
        }
        return ans;
    }
};