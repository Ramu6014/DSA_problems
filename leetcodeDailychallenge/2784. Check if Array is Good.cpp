//problem link: https://leetcode.com/problems/check-if-array-is-good/?envType=daily-question&envId=2026-05-14
//timeComplexity: O(nlog(n))
//spaceComplexity: O(1)

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }
        return nums[n-1]==n-1;
    }
};