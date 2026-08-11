//problem link: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/?envType=daily-question&envId=2026-08-11
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0]+1;
        }
        int prefixSum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                prefixSum+=nums[i];
            }
            else{
                break;
            }
        }
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        while(1){
            if(freq.find(prefixSum)!=freq.end()){
                prefixSum++;
            }
            else{
                break;
            }
        }
        return prefixSum;
    }
};