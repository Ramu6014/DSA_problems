//problem link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        long long maxSum=0;
        long long sum=0;
        unordered_map<int,int>freq;
        while(r<n){
            freq[nums[r]]++;
            sum+=nums[r];
            while(freq[nums[r]]>1){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                sum-=nums[l];
                l++;
            }
            if((r-l+1)==k){
                if(sum>maxSum){
                    maxSum=sum;
                }
                freq.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return maxSum;
    }
};