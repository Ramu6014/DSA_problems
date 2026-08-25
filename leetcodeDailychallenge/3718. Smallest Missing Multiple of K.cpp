//problem link: https://leetcode.com/problems/smallest-missing-multiple-of-k/?envType=daily-question&envId=2026-08-25
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int val=k;
        int mult=1;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                mult++;
                val=k*mult;
            }
            else if(nums[i]%k==0 && nums[i]>val){
                break;
            }
        }
        return val;
    }
};