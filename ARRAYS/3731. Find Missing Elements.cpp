//problem link: https://leetcode.com/problems/find-missing-elements/?envType=daily-question&envId=2026-08-04
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>missing;
        unordered_map<int,int>freq;
        int small=INT_MAX;
        int larg=INT_MIN;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            small=min(small,nums[i]);
            larg=max(larg,nums[i]);
        }
        for(int i=small;i<=larg;i++){
            if(freq.find(i)==freq.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};
