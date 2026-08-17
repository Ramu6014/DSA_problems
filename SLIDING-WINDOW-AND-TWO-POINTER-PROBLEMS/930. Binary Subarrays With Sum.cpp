//problem link: https://leetcode.com/problems/binary-subarrays-with-sum/
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
private:
    int numSub(vector<int>&nums,int k){
        if(k<0){
            return 0;
        }
        int n=nums.size();
        int l=0,r=0;
        int sum=0;
        int cnt=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSub(nums,goal)-numSub(nums,goal-1);
    }
};