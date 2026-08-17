//problem link: https://leetcode.com/problems/subarrays-with-k-different-integers/
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
private:
    int findSubarrays(vector<int>&nums,int k){
        if(k==0)return 0;
        int n=nums.size();
        int l=0,r=0;
        int cnt=0;
        unordered_map<int,int>freq;
        while(r<n){
            freq[nums[r]]++;
            while(freq.size()>k){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return findSubarrays(nums,k)-findSubarrays(nums,k-1);
    }
};