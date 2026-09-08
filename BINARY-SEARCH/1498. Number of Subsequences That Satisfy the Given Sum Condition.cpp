//problem link: https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    const int MOD=1e9+7;
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        vector<int>power(n,1);
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2*1LL)%MOD;
        }
        int left=0,right=n-1;
        while(left<=right){
            if(nums[left]+nums[right]<=target){
                ans=(ans+power[right-left])%MOD;
                left++;
            }
            else{
                right--;
            }
        }
        return (int)ans;
    }
};