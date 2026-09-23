//problem link: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/?envType=daily-question&envId=2026-09-23
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int k=total-x;
        int maxLen=-1;
        int sum=0;
        int l=0,r=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k && l<=r){
                sum-=nums[l];
                l++;
            }
            if(sum==k){
                maxLen=max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen==-1?-1:n-maxLen;
    }
};