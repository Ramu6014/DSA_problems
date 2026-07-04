//problem link: https://leetcode.com/problems/maximum-valid-pair-sum/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long stEl=nums[0];
        long long maxEl=-1;
        int n=nums.size();
        for(int i=k;i<n;i++){
            if(nums[i-k]>stEl){
                stEl=nums[i-k];
            }
            if(nums[i]+stEl>maxEl){
                maxEl=nums[i]+stEl;
            }
        }
        return (int)maxEl;
    }
};