//problem link: https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        int mini=INT_MAX;
        //right
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            right[i]=mini;
        }
        //compute
        int sum=INT_MAX;
        mini=nums[0];
        for(int i=1;i<n-1;i++){
            mini=min(mini,nums[i]);
            if(mini<nums[i] && nums[i]>right[i]){
                sum=min(sum,mini+nums[i]+right[i]);
            }
        }
        return sum==INT_MAX?-1:sum;
    }
};