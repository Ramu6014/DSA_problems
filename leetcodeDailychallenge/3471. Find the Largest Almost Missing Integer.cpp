//problem link: https://leetcode.com/problems/find-the-largest-almost-missing-integer/?envType=daily-question&envId=2026-08-18
//timeComplexity: o(n^2)
//spaceComplexity: O(n)

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==k){
            return *max_element(nums.begin(),nums.end());
        }
        unordered_map<int,int>freq;
        for(int i=0;i<=n-k;i++){
            for(int j=i;j<n;j++){
                freq[nums[j]]++;
                if(j-i+1 == k){
                    break;
                }
            }
        }
        int maxEl=-1;
        for(auto it: freq){
            if(it.second==1){
            maxEl=max(maxEl,it.first);
            }
        }
        return maxEl;
    }
};
