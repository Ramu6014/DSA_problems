//problem link: https://leetcode.com/problems/count-number-of-nice-subarrays/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
private:
    int findSubarrays(vector<int>&nums,int k){
        //if(k==0)return 0;
        int n=nums.size();
        int l=0,r=0;
        int cnt=0;
        int odd=0;
        while(r<n){
            if(nums[r]%2!=0){
                odd++;
            }
            while(odd>k){
                if(nums[l]%2!=0){
                    odd--;
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return findSubarrays(nums,k)-findSubarrays(nums,k-1);
    }
};