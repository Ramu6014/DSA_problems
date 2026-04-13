//problem link: https://leetcode.com/problems/minimum-distance-to-the-target-element/?envType=daily-question&envId=2026-04-13
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minVal=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                minVal=min(minVal,abs(i-start));
            }
        }
        return minVal;
    }
};