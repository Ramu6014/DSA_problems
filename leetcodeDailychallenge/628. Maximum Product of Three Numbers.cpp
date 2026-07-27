//problem link: https://leetcode.com/problems/maximum-product-of-three-numbers/?envType=daily-question&envId=2026-07-26
//timeComplexity: o(nlogn)
//spaceComplexity: O(1)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int secondSmall=nums[1];
        return max(small*secondSmall*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};