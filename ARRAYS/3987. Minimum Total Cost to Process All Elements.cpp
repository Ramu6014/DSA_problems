//problem link: https://leetcode.com/problems/minimum-total-cost-to-process-all-elements/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
const int mod=1e9+7;
public:
    int minimumCost(vector<int>& nums, int k) {
        int n=nums.size();
        long long x=k;
        long long cost=0;
        long long temp=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=x){
                x-=nums[i];
            }
            else{
                long long diff=nums[i]-x;
                long long need=(diff+k-1)/k;
                __int128 add=(__int128)need*(2LL*temp+need+1);
                add/=2;
                cost=(cost+(long long)(add%mod))%mod;
                temp+=need;
                x+=need*1LL*k;
                x-=nums[i];
            }
        }
        return cost%mod;
    }
};